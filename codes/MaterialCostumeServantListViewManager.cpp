void __fastcall MaterialCostumeServantListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  ListViewSort_o *v5; // x19
  ListViewSort_o *v6; // x19
  struct MaterialCostumeServantListViewManager_StaticFields *static_fields; // x0

  if ( (byte_4AB13CE & 1) == 0 )
  {
    sub_1BAB41C(&ListViewSort_TypeInfo, v1);
    sub_1BAB41C(&MaterialCostumeServantListViewManager_TypeInfo, v2);
    sub_1BAB41C(&StringLiteral_8924/*"MaterialCostumeServant1"*/, v3);
    sub_1BAB41C(&StringLiteral_8925/*"MaterialCostumeServant2"*/, v4);
    byte_4AB13CE = 1;
  }
  v5 = (ListViewSort_o *)sub_1BAB668(ListViewSort_TypeInfo);
  ListViewSort___ctor_41136084(v5, (System_String_o *)StringLiteral_8924/*"MaterialCostumeServant1"*/, 27, 1, 0LL);
  MaterialCostumeServantListViewManager_TypeInfo->static_fields->servantSortInfo = v5;
  sub_1BAB3C0(MaterialCostumeServantListViewManager_TypeInfo->static_fields);
  v6 = (ListViewSort_o *)sub_1BAB668(ListViewSort_TypeInfo);
  ListViewSort___ctor_41136084(v6, (System_String_o *)StringLiteral_8925/*"MaterialCostumeServant2"*/, 27, 1, 0LL);
  static_fields = MaterialCostumeServantListViewManager_TypeInfo->static_fields;
  static_fields->servantEquipSortInfo = v6;
  sub_1BAB3C0(&static_fields->servantEquipSortInfo);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  MaterialCostumeServantListViewManager_o *v8; // x0
  int v9; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  const MethodInfo *v12; // x2
  int32_t v13; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v15; // x21
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x22

  if ( (byte_4AB13CD & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    sub_1BAB41C(&MaterialCostumeServantListViewItem_TypeInfo, v4);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v5);
    byte_4AB13CD = 1;
  }
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v8 = this;
    v9 = 2;
  }
  else if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v8 = this;
    v9 = 3;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_10;
    smallSizeSeed = this->fields.normalSizeSeed;
    v8 = this;
    v9 = 1;
  }
  v8->fields.seed = smallSizeSeed;
  p_seed = &v8->fields.seed;
  *((_DWORD *)p_seed + 79) = v9;
  sub_1BAB3C0(p_seed);
LABEL_10:
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_23;
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0LL);
  sort = (ListViewSort_o *)this->fields.itemList;
  if ( !sort )
    goto LABEL_23;
  v13 = 0;
  while ( v13 < *(_DWORD *)&sort->fields.FILTER_DEFAULT_VALUE )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)sort,
             v13,
             (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      v15 = (ListViewItem_o *)Item;
      methodPtr_low = LOBYTE(MaterialCostumeServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (MaterialCostumeServantListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == MaterialCostumeServantListViewItem_TypeInfo )
      {
        monitor = (UnityEngine_Object_o *)Item[6].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
        {
          sort = (ListViewSort_o *)v15->fields.viewObject;
          if ( !sort )
            goto LABEL_23;
          ListViewObject__SetItemSeed((ListViewObject_o *)sort, v15, this->fields.seed, 0LL);
        }
      }
    }
    sort = (ListViewSort_o *)this->fields.itemList;
    ++v13;
    if ( !sort )
      goto LABEL_23;
  }
  MaterialCostumeServantListViewManager__SetMode_31492804(this, 2, v12);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  sort = (ListViewSort_o *)this->fields.scrollBar;
  if ( !sort
    || (sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL)) == 0LL )
  {
LABEL_23:
    sub_1BAB678(sort, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
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
  UserServantCollectionEntity_array *CollectionList; // x20
  Il2CppObject *MasterData_object; // x21
  System_Collections_ObjectModel_Collection_T__o *v20; // x22
  int32_t v21; // w23
  ServantCostumeEntity_o *v22; // x24
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *itemList; // x25
  MaterialCostumeServantListViewItem_o *v25; // x26
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  UILabel_o *emptyMessageLabel; // x20
  MaterialCostumeServantListViewManager_c *v32; // x0
  struct ListViewSort_o **p_sort; // x20
  struct ListViewSort_o *v34; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  const MethodInfo *v37; // x1
  int32_t findSum[2]; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4AB13BE & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&kind);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v6);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v7);
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v10);
    sub_1BAB41C(&MaterialCostumeServantListViewItem_TypeInfo, v11);
    sub_1BAB41C(&MaterialCostumeServantListViewManager_TypeInfo, v12);
    sub_1BAB41C(&ServantCostumeEntity_TypeInfo, v13);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1BAB41C(&StringLiteral_11781/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v15);
    byte_4AB13BE = 1;
  }
  *(_QWORD *)findSum = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !kind )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !Instance )
      goto LABEL_42;
    CollectionList = UserServantCollectionMaster__getCollectionList(
                       (UserServantCollectionMaster_o *)Instance,
                       &findSum[1],
                       findSum,
                       0,
                       0,
                       0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    if ( !Instance )
      goto LABEL_42;
    v20 = (System_Collections_ObjectModel_Collection_T__o *)*((_QWORD *)Instance + 4);
    if ( !v20 )
      goto LABEL_42;
    if ( System_Collections_ObjectModel_Collection_object___get_Count(
           *((System_Collections_ObjectModel_Collection_T__o **)Instance + 4),
           (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
    {
      v21 = 0;
      while ( 1 )
      {
        Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                     v20,
                     v21,
                     (const MethodInfo_31003F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !Instance )
          break;
        v22 = (ServantCostumeEntity_o *)Instance;
        methodPtr_low = LOBYTE(ServantCostumeEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
          || *(ServantCostumeEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != ServantCostumeEntity_TypeInfo )
        {
          break;
        }
        if ( !ServantCostumeEntity__checkFlag((ServantCostumeEntity_o *)Instance, 8, 0LL) )
        {
          Instance = (void *)ServantCostumeEntity__checkFlag(v22, 64, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_19;
          if ( !MasterData_object )
            break;
          if ( ServantCostumeReleaseMaster__checkItemHaving(
                 (ServantCostumeReleaseMaster_o *)MasterData_object,
                 v22->fields.svtId,
                 v22->fields.id,
                 0LL) )
          {
LABEL_19:
            itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
            v25 = (MaterialCostumeServantListViewItem_o *)sub_1BAB668(MaterialCostumeServantListViewItem_TypeInfo);
            MaterialCostumeServantListViewItem___ctor(v25, v22, CollectionList, v26);
            if ( !itemList )
              break;
            items = itemList->fields._items;
            v28 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++itemList->fields._version;
            if ( !items )
              break;
            size = itemList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                itemList,
                (Il2CppObject *)v25,
                *(const MethodInfo_354D8BC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v30 = &items->obj.klass + size;
              itemList->fields._size = size + 1;
              v30[4] = (Il2CppClass *)v25;
              sub_1BAB3C0(v30 + 4);
            }
          }
        }
        if ( ++v21 >= System_Collections_ObjectModel_Collection_object___get_Count(
                        v20,
                        (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
          goto LABEL_25;
      }
LABEL_42:
      sub_1BAB678(Instance, v17);
    }
  }
LABEL_25:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11781/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_42;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0LL);
  v32 = MaterialCostumeServantListViewManager_TypeInfo;
  if ( !MaterialCostumeServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialCostumeServantListViewManager_TypeInfo);
    v32 = MaterialCostumeServantListViewManager_TypeInfo;
  }
  this->fields.sort = v32->static_fields->servantSortInfo;
  p_sort = &this->fields.sort;
  sub_1BAB3C0(&this->fields.sort);
  Instance = this->fields.sort;
  if ( !Instance )
    goto LABEL_42;
  ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
  v34 = *p_sort;
  if ( !*p_sort )
    goto LABEL_42;
  if ( v34->fields.sortKind != 27 )
    v34->fields.sortKind = 27;
  iconScaleKind = v34->fields.iconScaleKind;
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
    sub_1BAB3C0(&this->fields.seed);
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  MaterialCostumeServantListViewManager__SetFilterButtonImage(this, v37);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
}


void __fastcall MaterialCostumeServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialCostumeServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4AB13BA & 1) == 0 )
  {
    sub_1BAB41C(&MaterialCostumeServantListViewManager_TypeInfo, v1);
    byte_4AB13BA = 1;
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
    sub_1BAB678(servantSortInfo, v1);
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
    sub_1BAB678(0LL, v3);
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
    sub_1BAB678(0LL, isDecide);
  MaterialCostumeServantSortSelectMenu__Close_31514276(sortSelectMenu, 0LL, method);
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
  MaterialCostumeServantListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4AB13C0 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1BAB41C(&MaterialCostumeServantListViewItem_TypeInfo, v5);
    byte_4AB13C0 = 1;
  }
  result = (MaterialCostumeServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (MaterialCostumeServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                       (System_Collections_Generic_List_object__o *)result,
                                                       index,
                                                       (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1BAB678(0LL, method);
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
  MaterialCostumeServantListViewItem_o *result; // x0
  int32_t sortIndex; // w23
  int32_t v11; // w22
  MaterialCostumeServantListViewItem_c *v12; // x1
  __int64 methodPtr_low; // x9
  struct ServantCostumeEntity_o *svtCostumeEntity_k__BackingField; // x8
  MaterialCostumeMenu_o *v15; // x0
  bool v16; // w1
  const MethodInfo *v17; // x2

  if ( (byte_4AB13C1 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_1BAB41C(&MaterialCostumeServantListViewItem_TypeInfo, v8);
    byte_4AB13C1 = 1;
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
      v11 = 0;
      while ( 1 )
      {
        result = (MaterialCostumeServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                           (System_Collections_Generic_List_object__o *)result,
                                                           v11,
                                                           (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !result )
LABEL_14:
          sub_1BAB678(result, v12);
        v12 = MaterialCostumeServantListViewItem_TypeInfo;
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
        if ( sortIndex == ++v11 )
          return 0LL;
        result = (MaterialCostumeServantListViewItem_o *)this->fields.itemList;
        if ( !result )
          goto LABEL_14;
      }
      v15 = (MaterialCostumeMenu_o *)sub_1BAB938(result);
      MaterialCostumeMenu__EndShowCostume(v15, v16, v17);
    }
  }
  return result;
}


void __fastcall MaterialCostumeServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialCostumeServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4AB13BB & 1) == 0 )
  {
    sub_1BAB41C(&MaterialCostumeServantListViewManager_TypeInfo, v1);
    byte_4AB13BB = 1;
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
    sub_1BAB678(servantSortInfo, v1);
  }
  ListViewSort__InitLoad(servantSortInfo, 0LL);
}


void __fastcall MaterialCostumeServantListViewManager__ModifyItem(
        MaterialCostumeServantListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MaterialCostumeServantListViewManager__RequestListObject_31501348(this, 4, v2);
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

  if ( (byte_4AB13C7 & 1) == 0 )
  {
    sub_1BAB41C(&MaterialCostumeServantListViewItem_TypeInfo, obj);
    byte_4AB13C7 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  linkItem = (struct ListViewItem_o *)sub_1BAB3C0(&this->fields.callbackFunc);
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
      sub_1BAB678(linkItem, v7);
    }
    v10 = (MaterialCostumeServantListViewManager_o *)sub_1BAB938(linkItem);
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

  if ( (byte_4AB13CB & 1) == 0 )
  {
    sub_1BAB41C(&Method_MaterialCostumeServantListViewManager_OnClickSortAscendingOrder__, method);
    byte_4AB13CB = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_MaterialCostumeServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_MaterialCostumeServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BAB434(Method_MaterialCostumeServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BAB400(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BAB678(v5, v6);
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
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  MaterialCostumeServantSortSelectMenu_o *sortSelectMenu; // x21
  ListViewSort_o *sort; // x20
  MaterialCostumeServantSortSelectMenu_CallbackFunc_o *v9; // x22
  const MethodInfo *v10; // x3
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4

  if ( (byte_4AB13C9 & 1) == 0 )
  {
    sub_1BAB41C(&MaterialCostumeServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1BAB41C(&Method_MaterialCostumeServantListViewManager_EndSelectSortKind__, v3);
    sub_1BAB41C(&Method_MaterialCostumeServantListViewManager_OnClickSortKind__, v4);
    byte_4AB13C9 = 1;
  }
  if ( this->fields.isInput )
  {
    v5 = Method_MaterialCostumeServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_MaterialCostumeServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BAB434(Method_MaterialCostumeServantListViewManager_OnClickSortKind__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BAB400(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    sortSelectMenu = this->fields.sortSelectMenu;
    sort = this->fields.sort;
    v9 = (MaterialCostumeServantSortSelectMenu_CallbackFunc_o *)sub_1BAB668(MaterialCostumeServantSortSelectMenu_CallbackFunc_TypeInfo);
    MaterialCostumeServantSortSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_MaterialCostumeServantListViewManager_EndSelectSortKind__,
      v10);
    if ( !sortSelectMenu )
      sub_1BAB678(v11, v12);
    MaterialCostumeServantSortSelectMenu__Open(sortSelectMenu, 0, sort, v9, v13);
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

  if ( (byte_4AB13C8 & 1) == 0 )
  {
    sub_1BAB41C(&MaterialCostumeServantListViewItem_TypeInfo, obj);
    byte_4AB13C8 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  linkItem = (struct ListViewItem_o *)sub_1BAB3C0(&this->fields.callbackFunc);
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
      sub_1BAB678(linkItem, v7);
    }
    v10 = (MaterialCostumeServantListViewManager_o *)sub_1BAB938(linkItem);
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

  if ( (byte_4AB13C6 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    byte_4AB13C6 = 1;
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
          sub_1BAB678(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1BAB3C0(&this->fields.callbackFunc2);
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
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v5; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w21

  if ( (byte_4AB13BF & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Count__, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Item__, v3);
    byte_4AB13BF = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)MaterialCostumeServantListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    goto LABEL_9;
  size = ObjectList->fields._size;
  v7 = ObjectList;
  if ( size >= 1 )
  {
    v8 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v7,
                                                                  v8,
                                                                  (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( ++v8 >= v7->fields._size )
        return;
    }
LABEL_9:
    sub_1BAB678(ObjectList, v5);
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
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v11; // x20
  int v12; // w24
  int32_t v13; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v15; // x23
  const MethodInfo *v16; // x3

  if ( (byte_4AB13C5 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Count__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Item__, v4);
    sub_1BAB41C(&Method_MaterialCostumeServantListViewManager_OnMoveEnd__, v5);
    sub_1BAB41C(&StringLiteral_9942/*"OnMoveEnd"*/, v6);
    byte_4AB13C5 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ObjectList = MaterialCostumeServantListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_13:
    sub_1BAB678(ObjectList, v9);
  size = ObjectList->fields._size;
  v11 = (System_Collections_Generic_List_object__o *)ObjectList;
  this->fields.callbackCount = size;
  if ( size < 1 )
    goto LABEL_12;
  v12 = 0;
  v13 = 0;
  do
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v11,
             v13,
             (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0LL) )
    {
      v15 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_MaterialCostumeServantListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        goto LABEL_13;
      ++v12;
      MaterialCostumeServantListViewObject__Init_31502644(
        (MaterialCostumeServantListViewObject_o *)Item,
        5,
        v15,
        0.1,
        v16);
    }
    else
    {
      --this->fields.callbackCount;
    }
    ++v13;
  }
  while ( v13 < v11->fields._size );
  if ( !v12 )
  {
LABEL_12:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4AB13C3 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__Dispose__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__MoveNext__, v8);
    sub_1BAB41C(
      &Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__get_Current__,
      v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__GetEnumerator__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Count__, v11);
    sub_1BAB41C(&Method_MaterialCostumeServantListViewManager_OnMoveEnd__, v12);
    sub_1BAB41C(&StringLiteral_9942/*"OnMoveEnd"*/, v13);
    byte_4AB13C3 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)MaterialCostumeServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BAB678(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_MaterialCostumeServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BAB678(v19, v20);
      MaterialCostumeServantListViewObject__Init_31502644(
        (MaterialCostumeServantListViewObject_o *)current,
        mode,
        v18,
        delay,
        v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantListViewManager__RequestListObject_31501348(
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4AB13C4 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__Dispose__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__MoveNext__, v6);
    sub_1BAB41C(
      &Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__get_Current__,
      v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__GetEnumerator__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__get_Count__, v9);
    sub_1BAB41C(&Method_MaterialCostumeServantListViewManager_OnMoveEnd__, v10);
    sub_1BAB41C(&StringLiteral_9942/*"OnMoveEnd"*/, v11);
    byte_4AB13C4 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)MaterialCostumeServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BAB678(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_MaterialCostumeServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BAB678(v17, v18);
      MaterialCostumeServantListViewObject__Init_31502744(
        (MaterialCostumeServantListViewObject_o *)current,
        mode,
        v16,
        v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_MaterialCostumeServantListViewObject__Dispose__);
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

  if ( (byte_4AB13CA & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_17541/*"btn_filter_on"*/, method);
    sub_1BAB41C(&StringLiteral_17540/*"btn_filter"*/, v3);
    byte_4AB13CA = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1BAB678(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_17540/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17541/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
}


void __fastcall MaterialCostumeServantListViewManager__SetMode(
        MaterialCostumeServantListViewManager_o *this,
        int32_t mode,
        MaterialCostumeServantListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1BAB3C0(&this->fields.callbackFunc);
  MaterialCostumeServantListViewManager__SetMode_31492804(this, mode, v6);
}


void __fastcall MaterialCostumeServantListViewManager__SetMode_31492804(
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
    MaterialCostumeServantListViewManager__RequestListObject_31501348(this, v6, v5);
  }
}


void __fastcall MaterialCostumeServantListViewManager__SetMode_31502068(
        MaterialCostumeServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BAB3C0(&this->fields.callbackFunc2);
  MaterialCostumeServantListViewManager__SetMode_31492804(this, mode, v6);
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
  if ( (byte_4AB13C2 & 1) == 0 )
  {
    this = (MaterialCostumeServantListViewManager_o *)sub_1BAB41C(&MaterialCostumeServantListViewObject_TypeInfo, obj);
    byte_4AB13C2 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(MaterialCostumeServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MaterialCostumeServantListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialCostumeServantListViewObject_TypeInfo )
  {
    sub_1BAB678(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  MaterialCostumeServantListViewObject__Init_31501992(
    (MaterialCostumeServantListViewObject_o *)obj,
    v7,
    (const MethodInfo *)item);
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
  System_String_o **v20; // x9
  System_String_o **v21; // x10
  System_String_o **v22; // x8
  System_String_o **v23; // x8

  if ( (byte_4AB13CC & 1) == 0 )
  {
    sub_1BAB41C(&LocalizationManager_TypeInfo, method);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v3);
    sub_1BAB41C(&StringLiteral_17571/*"btn_sort_up"*/, v4);
    sub_1BAB41C(&StringLiteral_17659/*"btn_txt_up"*/, v5);
    sub_1BAB41C(&StringLiteral_17614/*"btn_txt_new"*/, v6);
    sub_1BAB41C(&StringLiteral_11848/*"SERVANT_SORT_TITLE2"*/, v7);
    sub_1BAB41C(&StringLiteral_17604/*"btn_txt_down"*/, v8);
    sub_1BAB41C(&StringLiteral_17621/*"btn_txt_old"*/, v9);
    sub_1BAB41C(&StringLiteral_17568/*"btn_sort_down"*/, v10);
    byte_4AB13CC = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    v12 = this->fields.sortKindLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    sortExplanationSprite = LocalizationManager__Get((System_String_o *)StringLiteral_11848/*"SERVANT_SORT_TITLE2"*/, 0LL);
    if ( !v12 )
      goto LABEL_35;
    UILabel__set_text(v12, sortExplanationSprite, 0LL);
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
          v18 = (System_String_o **)(sort->fields.isAscendingOrder ? &StringLiteral_17621/*"btn_txt_old"*/ : &StringLiteral_17614/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sortExplanationSprite, *v18, 0LL);
          v19 = this->fields.sort;
          if ( v19 )
          {
            sortExplanationSprite = (System_String_o *)this->fields.sortOrderSprite;
            if ( sortExplanationSprite )
            {
              v20 = (System_String_o **)&StringLiteral_17568/*"btn_sort_down"*/;
              v21 = (System_String_o **)&StringLiteral_17571/*"btn_sort_up"*/;
LABEL_31:
              if ( v19->fields.isAscendingOrder )
                v23 = v20;
              else
                v23 = v21;
              UISprite__set_spriteName((UISprite_o *)sortExplanationSprite, *v23, 0LL);
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
          v22 = (System_String_o **)(sort->fields.isAscendingOrder ? &StringLiteral_17659/*"btn_txt_up"*/ : &StringLiteral_17604/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sortExplanationSprite, *v22, 0LL);
          v19 = this->fields.sort;
          if ( v19 )
          {
            sortExplanationSprite = (System_String_o *)this->fields.sortOrderSprite;
            if ( sortExplanationSprite )
            {
              v20 = (System_String_o **)&StringLiteral_17571/*"btn_sort_up"*/;
              v21 = (System_String_o **)&StringLiteral_17568/*"btn_sort_down"*/;
              goto LABEL_31;
            }
          }
        }
      }
    }
LABEL_35:
    sub_1BAB678(sortExplanationSprite, v14);
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

  if ( (byte_4AB13B6 & 1) == 0 )
  {
    sub_1BAB41C(&MaterialCostumeServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_4AB13B6 = 1;
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
    v8 = sub_1BE690C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MaterialCostumeServantListViewManager_o *)sub_1BAB938(v7);
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

  if ( (byte_4AB13B8 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, value);
    byte_4AB13B8 = 1;
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
    v8 = sub_1BE690C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MaterialCostumeServantListViewManager_o *)sub_1BAB938(v7);
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4AB13BD & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__Add__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject___ctor__, v8);
    sub_1BAB41C(&System_Collections_Generic_List_MaterialCostumeServantListViewObject__TypeInfo, v9);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v10);
    byte_4AB13BD = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_MaterialCostumeServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BAB678(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v30 = v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v30.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BAB678(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1BAB678(0LL, v18);
      Item = (ListViewItem_o *)MaterialCostumeServantListViewObject__GetItem(
                                 (MaterialCostumeServantListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1BAB678(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_41118488((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_1BAB678(v22, v23);
          items = v11->fields._items;
          v25 = Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1BAB678(v22, v23);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_354D8BC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1BAB678(Item, v21);
        items = v11->fields._items;
        v25 = Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1BAB678(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v27 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v19;
        sub_1BAB3C0(v27 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4AB13BC & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__Add__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject___ctor__, v8);
    sub_1BAB41C(&System_Collections_Generic_List_MaterialCostumeServantListViewObject__TypeInfo, v9);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v10);
    byte_4AB13BC = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_MaterialCostumeServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BAB678(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BAB678(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_MaterialCostumeServantListViewObject___);
      v18 = Component_object;
      if ( !v11 )
        sub_1BAB678(Component_object, Component_object);
      items = v11->fields._items;
      v20 = Method_System_Collections_Generic_List_MaterialCostumeServantListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BAB678(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_1BAB3C0(v22 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4AB13B7 & 1) == 0 )
  {
    sub_1BAB41C(&MaterialCostumeServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_4AB13B7 = 1;
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
    v8 = sub_1BE690C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MaterialCostumeServantListViewManager_o *)sub_1BAB938(v7);
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

  if ( (byte_4AB13B9 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, value);
    byte_4AB13B9 = 1;
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
    v8 = sub_1BE690C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1BAB938(v7);
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
  sub_1BAB3C0(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BAB4DC(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BAB694(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BAB544(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19E8230;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19E81D0;
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

  v21 = svtId;
  v22 = kind;
  v20 = costumeId;
  if ( (byte_4AB13CF & 1) == 0 )
  {
    sub_1BAB41C(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1BAB41C(&MaterialCostumeServantListViewManager_ResultKind_TypeInfo, v10);
    byte_4AB13CF = 1;
  }
  v19 = 0u;
  v18[0] = j_il2cpp_value_box_0(
             MaterialCostumeServantListViewManager_ResultKind_TypeInfo,
             &v22,
             *(_QWORD *)&svtId,
             *(_QWORD *)&costumeId,
             callback);
  v18[1] = j_il2cpp_value_box_0(int_TypeInfo, &v21, v11, v12, v13);
  *(_QWORD *)&v19 = j_il2cpp_value_box_0(int_TypeInfo, &v20, v14, v15, v16);
  return (System_IAsyncResult_o *)sub_1BAB3D0(this, v18, callback, object);
}


void __fastcall MaterialCostumeServantListViewManager_CallbackFunc__EndInvoke(
        MaterialCostumeServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BAB3D4(result, 0LL, method);
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