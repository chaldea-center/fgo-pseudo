void __fastcall MaterialCollectionServantListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  ListViewSort_o *v14; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  ListViewSort_o *v18; // x19
  struct MaterialCollectionServantListViewManager_StaticFields *static_fields; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  ListViewSort_o *v23; // x19
  struct MaterialCollectionServantListViewManager_StaticFields *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  ListViewSort_o *v28; // x19
  struct MaterialCollectionServantListViewManager_StaticFields *v29; // x0

  if ( (byte_4B11754 & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewSort_TypeInfo, v1, v2);
    sub_1BCA7E0(&MaterialCollectionServantListViewManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_9045/*"MaterialCollectionServant2"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_9046/*"MaterialCollectionServant4"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_9044/*"MaterialCollectionServant1"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_9047/*"MaterialCollectionServant5"*/, v12, v13);
    byte_4B11754 = 1;
  }
  v14 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v1, v2, v3);
  ListViewSort___ctor_41480716(v14, (System_String_o *)StringLiteral_9044/*"MaterialCollectionServant1"*/, 27, 1, 0LL);
  MaterialCollectionServantListViewManager_TypeInfo->static_fields->servantSortInfo = v14;
  sub_1BCA784(MaterialCollectionServantListViewManager_TypeInfo->static_fields, v14);
  v18 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v15, v16, v17);
  ListViewSort___ctor_41480716(v18, (System_String_o *)StringLiteral_9045/*"MaterialCollectionServant2"*/, 27, 1, 0LL);
  static_fields = MaterialCollectionServantListViewManager_TypeInfo->static_fields;
  static_fields->servantEquipSortInfo = v18;
  sub_1BCA784(&static_fields->servantEquipSortInfo, v18);
  v23 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v20, v21, v22);
  ListViewSort___ctor_41480716(v23, (System_String_o *)StringLiteral_9046/*"MaterialCollectionServant4"*/, 27, 1, 0LL);
  v24 = MaterialCollectionServantListViewManager_TypeInfo->static_fields;
  v24->commandCodeSortInfo = v23;
  sub_1BCA784(&v24->commandCodeSortInfo, v23);
  v28 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v25, v26, v27);
  ListViewSort___ctor_41480716(v28, (System_String_o *)StringLiteral_9047/*"MaterialCollectionServant5"*/, 3, 1, 0LL);
  v29 = MaterialCollectionServantListViewManager_TypeInfo->static_fields;
  v29->EventLogservantSortInfo = v28;
  sub_1BCA784(&v29->EventLogservantSortInfo, v28);
}


void __fastcall MaterialCollectionServantListViewManager___ctor(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall MaterialCollectionServantListViewManager__AllInactiveUIWidget(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MaterialCollectionServantListViewManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct ListViewItemSeed_o *seed; // x8
  UnityEngine_GameObject_o *parent; // x19
  int32_t childCount; // w0
  int32_t v9; // w20
  int32_t i; // w21
  __int64 v11; // x1
  UnityEngine_Object_o *Child; // x22
  __int64 v13; // x1
  Il2CppObject *Component_object; // x22

  v3 = this;
  if ( (byte_4B11751 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, method, v2);
    this = (MaterialCollectionServantListViewManager_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B11751 = 1;
  }
  seed = v3->fields.seed;
  if ( !seed
    || (parent = seed->fields.parent) == 0LL
    || (this = (MaterialCollectionServantListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                               seed->fields.parent,
                                                               0LL)) == 0LL )
  {
LABEL_20:
    sub_1BCAA3C(this, method);
  }
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0LL);
  if ( childCount >= 1 )
  {
    v9 = childCount;
    for ( i = 0; v9 != i; ++i )
    {
      Child = (UnityEngine_Object_o *)GameObjectExtensions__GetChild(parent, i, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      this = (MaterialCollectionServantListViewManager_o *)UnityEngine_Object__op_Inequality(Child, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !Child )
          goto LABEL_20;
        this = (MaterialCollectionServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)Child,
                                                               0LL);
        if ( !this )
          goto LABEL_20;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)this,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
        this = (MaterialCollectionServantListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                               (UnityEngine_Object_o *)Component_object,
                                                               0LL,
                                                               0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_20;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
        }
      }
    }
  }
}


void __fastcall MaterialCollectionServantListViewManager__AllInitInactiveDummy(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w21
  int32_t v10; // w20
  __int64 methodPtr_low; // x10

  if ( (byte_4B11753 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v4, v5);
    sub_1BCA7E0(&MaterialEventLogServantListViewItem_TypeInfo, v6, v7);
    byte_4B11753 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_11;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v10 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v10,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(MaterialEventLogServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (MaterialEventLogServantListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialEventLogServantListViewItem_TypeInfo )
      {
        break;
      }
      MaterialEventLogServantListViewItem__initCoercionInactive((MaterialEventLogServantListViewItem_o *)itemList, 0LL);
      if ( size == ++v10 )
        return;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_11:
    sub_1BCAA3C(itemList, method);
  }
}


void __fastcall MaterialCollectionServantListViewManager__ClearNewIcon(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x19
  int32_t v9; // w20
  MaterialCollectionServantListViewObject_o *v10; // x21

  if ( (byte_4B11739 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__,
      method,
      v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__, v4, v5);
    byte_4B11739 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)MaterialCollectionServantListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    goto LABEL_9;
  v8 = ObjectList;
  if ( ObjectList->fields._size >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v8,
                                                                  v9,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      v10 = (MaterialCollectionServantListViewObject_o *)ObjectList;
      MaterialCollectionServantListViewObject__ClearNewIcon(
        (MaterialCollectionServantListViewObject_o *)ObjectList,
        0LL);
      MaterialCollectionServantListViewObject__AttachedIconSetupDisp(v10, 0LL);
      if ( ++v9 >= v8->fields._size )
        return;
    }
LABEL_9:
    sub_1BCAA3C(ObjectList, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewManager__CreateList(
        MaterialCollectionServantListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  DataManager_o *v23; // x22
  Il2CppObject *MasterData_object; // x21
  __int64 v25; // x1
  UserCommandCodeCollectionEntity_array *v26; // x22
  MaterialCollectionServantListViewManager_c *v27; // x8
  struct ListViewSort_o *commandCodeSortInfo; // x1
  UserServantCollectionEntity_array *CollectionList; // x21
  int v30; // w8
  __int64 v31; // x1
  MaterialCollectionServantListViewManager_c *v32; // x8
  struct ListViewSort_o *servantEquipSortInfo; // x1
  __int64 v34; // x1
  MaterialCollectionServantListViewManager_c *v35; // x8
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v37; // x1
  struct ListViewSort_o *sort; // x8
  unsigned int sortKind; // w9
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeTabSprite; // x23
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x8
  unsigned __int64 v46; // x20
  UserCommandCodeCollectionEntity_o *v47; // x24
  MaterialCollectionServantListViewItem_o *v48; // x23
  const MethodInfo *v49; // x4
  __int64 v50; // x8
  _QWORD *v51; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v53; // x8
  __int64 v54; // x8
  unsigned __int64 v55; // x22
  UserServantCollectionEntity_o *v56; // x24
  MaterialCollectionServantListViewItem_o *v57; // x23
  const MethodInfo *v58; // x4
  __int64 v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  __int64 v62; // x8
  UnityEngine_Object_o *completeSprite; // x20
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v65; // x1
  int32_t findSum[2]; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B11737 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___, *(_QWORD *)&kind, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&MaterialCollectionServantListViewItem_TypeInfo, v11, v12);
    sub_1BCA7E0(&MaterialCollectionServantListViewManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&StringLiteral_11910/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v19, v20);
    byte_4B11737 = 1;
  }
  *(_QWORD *)findSum = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  v23 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v23,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
  if ( kind == 1 )
  {
    if ( !MasterData_object )
      goto LABEL_67;
    CollectionList = UserServantCollectionMaster__getCollectionList(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       &findSum[1],
                       findSum,
                       1,
                       0,
                       0LL);
    v32 = MaterialCollectionServantListViewManager_TypeInfo;
    if ( !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo, v31);
      v32 = MaterialCollectionServantListViewManager_TypeInfo;
    }
    servantEquipSortInfo = v32->static_fields->servantEquipSortInfo;
    this->fields.sort = servantEquipSortInfo;
    sub_1BCA784(&this->fields.sort, servantEquipSortInfo);
    Instance = (DataManager_o *)this->fields.sort;
    if ( !Instance )
      goto LABEL_67;
    v26 = 0LL;
    v30 = 1;
  }
  else if ( kind == 3 )
  {
    if ( !Instance )
      goto LABEL_67;
    v26 = UserCommandCodeCollectionMaster__getCollectionList(
            (UserCommandCodeCollectionMaster_o *)Instance,
            &findSum[1],
            findSum,
            0LL);
    v27 = MaterialCollectionServantListViewManager_TypeInfo;
    if ( !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo, v25);
      v27 = MaterialCollectionServantListViewManager_TypeInfo;
    }
    commandCodeSortInfo = v27->static_fields->commandCodeSortInfo;
    this->fields.sort = commandCodeSortInfo;
    sub_1BCA784(&this->fields.sort, commandCodeSortInfo);
    Instance = (DataManager_o *)this->fields.sort;
    if ( !Instance )
      goto LABEL_67;
    CollectionList = 0LL;
    v30 = 3;
  }
  else
  {
    if ( !MasterData_object )
      goto LABEL_67;
    CollectionList = UserServantCollectionMaster__getCollectionList(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       &findSum[1],
                       findSum,
                       0,
                       1,
                       0LL);
    v35 = MaterialCollectionServantListViewManager_TypeInfo;
    if ( !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo, v34);
      v35 = MaterialCollectionServantListViewManager_TypeInfo;
    }
    p_servantSortInfo = &v35->static_fields->servantSortInfo;
    v37 = *p_servantSortInfo;
    this->fields.sort = *p_servantSortInfo;
    sub_1BCA784(&this->fields.sort, v37);
    Instance = (DataManager_o *)this->fields.sort;
    if ( !Instance )
      goto LABEL_67;
    v30 = 0;
    v26 = 0LL;
  }
  LODWORD(Instance->fields.writeMasterDataThread) = v30;
  ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_67;
  sortKind = sort->fields.sortKind;
  if ( sortKind > 0x1B || ((1 << sortKind) & 0x8000204) == 0 )
    sort->fields.sortKind = 27;
  iconScaleKind = sort->fields.iconScaleKind;
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
      goto LABEL_32;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_1BCA784(&this->fields.seed, normalSizeSeed);
LABEL_32:
  Instance = (DataManager_o *)this->fields.sort;
  if ( !Instance )
    goto LABEL_67;
  scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
  Instance = (DataManager_o *)ListViewSort__GetScaleKindSpriteName(
                                (ListViewSort_o *)Instance,
                                this->fields.scaleType,
                                0LL);
  if ( !scaleChangeTabSprite )
    goto LABEL_67;
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)Instance, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( kind == 3 )
  {
    if ( !v26 )
      goto LABEL_67;
    v45 = *(_QWORD *)&v26->max_length;
    if ( (int)v45 >= 1 )
    {
      v46 = 0LL;
      while ( v46 < (unsigned int)v45 )
      {
        v47 = v26->m_Items[v46];
        v48 = (MaterialCollectionServantListViewItem_o *)sub_1BCAA2C(
                                                           MaterialCollectionServantListViewItem_TypeInfo,
                                                           v22,
                                                           v43,
                                                           v44);
        MaterialCollectionServantListViewItem___ctor_31720444(v48, v46, v47, 3, v49);
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          goto LABEL_67;
        v50 = *(_QWORD *)&Instance->fields.m_CachedPtr;
        v51 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( !v50 )
          goto LABEL_67;
        m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v50 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v48,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
        }
        else
        {
          v53 = v50 + 8 * m_CancellationTokenSource_low;
          LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v53 + 32) = v48;
          Instance = (DataManager_o *)sub_1BCA784(v53 + 32, v48);
        }
        LODWORD(v45) = v26->max_length;
        if ( (__int64)++v46 >= (int)v45 )
          goto LABEL_56;
      }
      goto LABEL_68;
    }
  }
  else
  {
    if ( !CollectionList )
      goto LABEL_67;
    v54 = *(_QWORD *)&CollectionList->max_length;
    if ( (int)v54 >= 1 )
    {
      v55 = 0LL;
      while ( v55 < (unsigned int)v54 )
      {
        v56 = CollectionList->m_Items[v55];
        v57 = (MaterialCollectionServantListViewItem_o *)sub_1BCAA2C(
                                                           MaterialCollectionServantListViewItem_TypeInfo,
                                                           v22,
                                                           v43,
                                                           v44);
        MaterialCollectionServantListViewItem___ctor(v57, v55, v56, kind, v58);
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          goto LABEL_67;
        v59 = *(_QWORD *)&Instance->fields.m_CachedPtr;
        v60 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( !v59 )
          goto LABEL_67;
        v61 = SLODWORD(Instance->fields.m_CancellationTokenSource);
        if ( (unsigned int)v61 >= *(_DWORD *)(v59 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v57,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
        }
        else
        {
          v62 = v59 + 8 * v61;
          LODWORD(Instance->fields.m_CancellationTokenSource) = v61 + 1;
          *(_QWORD *)(v62 + 32) = v57;
          Instance = (DataManager_o *)sub_1BCA784(v62 + 32, v57);
        }
        LODWORD(v54) = CollectionList->max_length;
        if ( (__int64)++v55 >= (int)v54 )
          goto LABEL_56;
      }
LABEL_68:
      sub_1BCAA44(Instance, v22);
    }
  }
LABEL_56:
  completeSprite = (UnityEngine_Object_o *)this->fields.completeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  if ( UnityEngine_Object__op_Inequality(completeSprite, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.completeSprite;
    if ( !Instance )
      goto LABEL_67;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !CollectionList || !Instance )
      goto LABEL_67;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)Instance,
      findSum[1] >= (signed int)CollectionList->max_length,
      0LL);
  }
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11910/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
LABEL_67:
    sub_1BCAA3C(Instance, v22);
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  MaterialCollectionServantListViewManager__SetFilterButtonImage(this, v65);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewManager__CreateValentineList(
        MaterialCollectionServantListViewManager_o *this,
        int32_t kind,
        System_Collections_Generic_List_MaterialEventLogListViewItem_Info__o *infos,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  DataManager_o *Instance; // x0
  __int64 v32; // x1
  DataManager_o *v33; // x23
  Il2CppObject *MasterData_object; // x22
  struct ListViewSort_o *sort; // x8
  unsigned int sortKind; // w9
  int size; // w23
  MaterialEventLogServantListViewItem_c **v38; // x26
  int32_t i; // w24
  int64_t UserId; // x25
  UserServantCollectionEntity_o *Entity; // x25
  Il2CppObject *Item; // x27
  MaterialEventLogServantListViewItem_c **v43; // x29
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  MaterialEventLogServantListViewItem_o *v47; // x26
  __int64 v48; // x8
  _QWORD *v49; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v51; // x8
  __int64 v52; // x2
  __int64 v53; // x3
  System_Collections_Generic_List_object__o *itemList; // x21
  MaterialEventLogListViewItem_Info_o *v55; // x24
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  MaterialEventLogServantListViewItem_o *v59; // x22
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  Il2CppClass **v63; // x0
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v65; // x1
  const MethodInfo *v66; // x1
  bool v67; // w1
  const MethodInfo *v68; // x1
  const MethodInfo *v69; // x1
  int m_CancellationTokenSource; // w21
  int32_t v71; // w20
  __int64 methodPtr_low; // x10

  if ( (byte_4B11738 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___, *(_QWORD *)&kind, infos);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v7, v8);
    sub_1BCA7E0(&MaterialEventLogListViewItem_Info_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__, v19, v20);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&MaterialEventLogServantListViewItem_TypeInfo, v23, v24);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    sub_1BCA7E0(&StringLiteral_11911/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/, v29, v30);
    byte_4B11738 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  v33 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v33,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_38;
  sortKind = sort->fields.sortKind;
  if ( sortKind > 0x1B || ((1 << sortKind) & 0x8000204) == 0 )
    sort->fields.sortKind = 3;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !infos )
    goto LABEL_38;
  size = infos->fields._size;
  v38 = &MaterialEventLogServantListViewItem_TypeInfo;
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v32);
      UserId = NetworkManager__get_UserId(0LL);
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)infos,
                                    i,
                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
      if ( !Instance )
        goto LABEL_38;
      if ( !MasterData_object )
        goto LABEL_38;
      Entity = UserServantCollectionMaster__GetEntity(
                 (UserServantCollectionMaster_o *)MasterData_object,
                 UserId,
                 HIDWORD(Instance->fields.masterDataBytes),
                 0LL);
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)infos,
               i,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
      v43 = v38;
      v47 = (MaterialEventLogServantListViewItem_o *)sub_1BCAA2C(*v38, v44, v45, v46);
      MaterialEventLogServantListViewItem___ctor(
        v47,
        i,
        Entity,
        kind,
        (MaterialEventLogListViewItem_Info_o *)Item,
        0,
        0LL);
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        goto LABEL_38;
      v48 = *(_QWORD *)&Instance->fields.m_CachedPtr;
      v49 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !v48 )
        goto LABEL_38;
      m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v48 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v47,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
      }
      else
      {
        v51 = v48 + 8 * m_CancellationTokenSource_low;
        LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v51 + 32) = v47;
        sub_1BCA784(v51 + 32, v47);
      }
      v38 = v43;
    }
    if ( Entity )
    {
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v55 = (MaterialEventLogListViewItem_Info_o *)sub_1BCAA2C(
                                                     MaterialEventLogListViewItem_Info_TypeInfo,
                                                     v32,
                                                     v52,
                                                     v53);
      MaterialEventLogListViewItem_Info___ctor(v55, 0LL);
      v59 = (MaterialEventLogServantListViewItem_o *)sub_1BCAA2C(*v43, v56, v57, v58);
      MaterialEventLogServantListViewItem___ctor(v59, size, Entity, kind, v55, 1, 0LL);
      if ( !itemList )
        goto LABEL_38;
      items = itemList->fields._items;
      v61 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        goto LABEL_38;
      v62 = itemList->fields._size;
      if ( (unsigned int)v62 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v59,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
      }
      else
      {
        v63 = &items->obj.klass + v62;
        itemList->fields._size = v62 + 1;
        v63[4] = (Il2CppClass *)v59;
        sub_1BCA784(v63 + 4, v59);
      }
    }
  }
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11911/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_38;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0LL);
  MaterialCollectionServantListViewManager__SortDummyData(this, v65);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  v67 = MaterialCollectionServantListViewManager__GetFilterCount(this, v66) < 1;
  ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v67, 0LL);
  MaterialCollectionServantListViewManager__SetValentineFilterButtonImage(this, v68);
  MaterialCollectionServantListViewManager__ClearNewIcon(this, v69);
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
LABEL_38:
    sub_1BCAA3C(Instance, v32);
  m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource >= 1 )
  {
    v71 = 0;
    do
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v71,
                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Instance )
        break;
      methodPtr_low = LOBYTE((*v38)->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (MaterialEventLogServantListViewItem_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != *v38 )
      {
        break;
      }
      MaterialEventLogServantListViewItem__SetDummy((MaterialEventLogServantListViewItem_o *)Instance, 0LL);
      if ( m_CancellationTokenSource == ++v71 )
        goto LABEL_39;
      Instance = (DataManager_o *)this->fields.itemList;
    }
    while ( Instance );
    goto LABEL_38;
  }
LABEL_39:
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
}


void __fastcall MaterialCollectionServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MaterialCollectionServantListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4B11732 & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialCollectionServantListViewManager_TypeInfo, v1, v2);
    byte_4B11732 = 1;
  }
  v3 = MaterialCollectionServantListViewManager_TypeInfo;
  if ( !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo, v1);
    v3 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  servantSortInfo = v3->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL)
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->commandCodeSortInfo) == 0LL)
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->EventLogservantSortInfo) == 0LL) )
  {
    sub_1BCAA3C(servantSortInfo, v1);
  }
  ListViewSort__DeleteContinueData(servantSortInfo, 0LL);
}


void __fastcall MaterialCollectionServantListViewManager__DestroyList(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  MaterialCollectionServantListViewManager_c *v5; // x0
  ListViewSort_o *servantSortInfo; // x8
  __int64 v7; // x0
  __int64 v8; // x1
  ListViewSort_o *servantEquipSortInfo; // x8
  ListViewSort_o *commandCodeSortInfo; // x8
  ListViewSort_o *EventLogservantSortInfo; // x8

  if ( (byte_4B1173D & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialCollectionServantListViewManager_TypeInfo, method, v2);
    byte_4B1173D = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  v5 = MaterialCollectionServantListViewManager_TypeInfo;
  if ( !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo, v4);
    v5 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  servantSortInfo = v5->static_fields->servantSortInfo;
  if ( servantSortInfo )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5, v4);
      servantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->servantSortInfo;
      if ( !servantSortInfo )
        goto LABEL_28;
    }
    ListViewSort__Save(servantSortInfo, 0LL);
    v5 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5, v4);
    v5 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  servantEquipSortInfo = v5->static_fields->servantEquipSortInfo;
  if ( servantEquipSortInfo )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5, v4);
      servantEquipSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo;
      if ( !servantEquipSortInfo )
        goto LABEL_28;
    }
    ListViewSort__Save(servantEquipSortInfo, 0LL);
    v5 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5, v4);
    v5 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  commandCodeSortInfo = v5->static_fields->commandCodeSortInfo;
  if ( commandCodeSortInfo )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5, v4);
      commandCodeSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->commandCodeSortInfo;
      if ( !commandCodeSortInfo )
        goto LABEL_28;
    }
    ListViewSort__Save(commandCodeSortInfo, 0LL);
    v5 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5, v4);
    v5 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v5->static_fields->EventLogservantSortInfo;
  if ( EventLogservantSortInfo )
  {
    if ( v5->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v5, v4),
          (EventLogservantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->EventLogservantSortInfo) != 0LL) )
    {
      ListViewSort__Save(EventLogservantSortInfo, 0LL);
      return;
    }
LABEL_28:
    sub_1BCAA3C(v7, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewManager__EndEventLogSortKind(
        MaterialCollectionServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  MaterialEventLogServantSortSelectMenu_o *eventLogServantSortSelectMenu; // x0
  MaterialCollectionServantListViewManager_o *v8; // x0
  const MethodInfo *v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *MaterialEventLogListViewManager; // x21
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  int32_t FilterCount; // w20

  if ( (byte_4B1174A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, isDecide, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B1174A = 1;
  }
  eventLogServantSortSelectMenu = this->fields.eventLogServantSortSelectMenu;
  if ( !eventLogServantSortSelectMenu )
    goto LABEL_15;
  MaterialEventLogServantSortSelectMenu__Close(eventLogServantSortSelectMenu, 0LL);
  MaterialEventLogListViewManager = (UnityEngine_Object_o *)MaterialCollectionServantListViewManager__GetMaterialEventLogListViewManager(
                                                              v8,
                                                              v9);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  eventLogServantSortSelectMenu = (MaterialEventLogServantSortSelectMenu_o *)UnityEngine_Object__op_Inequality(
                                                                               MaterialEventLogListViewManager,
                                                                               0LL,
                                                                               0LL);
  if ( ((unsigned __int8)eventLogServantSortSelectMenu & 1) != 0 )
  {
    if ( !MaterialEventLogListViewManager )
      goto LABEL_15;
    MaterialEventLogListViewManager__SetSort(
      (MaterialEventLogListViewManager_o *)MaterialEventLogListViewManager,
      this->fields.sort,
      0LL);
  }
  if ( !isDecide )
    goto LABEL_14;
  MaterialCollectionServantListViewManager__AllInactiveUIWidget(this, (const MethodInfo *)isDecide);
  MaterialCollectionServantListViewManager__AllInitInactiveDummy(this, v12);
  if ( !this->fields.itemList )
LABEL_15:
    sub_1BCAA3C(eventLogServantSortSelectMenu, isDecide);
  FilterCount = MaterialCollectionServantListViewManager__GetFilterCount(this, (const MethodInfo *)isDecide);
  if ( FilterCount <= 11 )
    MaterialCollectionServantListViewManager__InactiveDummy(this, v13);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, FilterCount < 1, 0LL);
  ListViewManager__ScreenUpdate((ListViewManager_o *)this, 0LL);
LABEL_14:
  MaterialCollectionServantListViewManager__SetValentineFilterButtonImage(this, (const MethodInfo *)isDecide);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewManager__EndSelectSortKind(
        MaterialCollectionServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  MaterialCollectionServantSortSelectMenu_o *sortSelectMenu; // x0
  const MethodInfo *v6; // x1

  sortSelectMenu = this->fields.sortSelectMenu;
  if ( !sortSelectMenu )
    sub_1BCAA3C(0LL, isDecide);
  MaterialCollectionServantSortSelectMenu__Close(sortSelectMenu, 0LL);
  MaterialCollectionServantListViewManager__SetFilterButtonImage(this, v6);
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall MaterialCollectionServantListViewManager__EventLogSortKind(
        MaterialCollectionServantListViewManager_o *this,
        MaterialEventLogServantSortSelectMenu_o *eventLogServantSortSelectMenu,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  ListViewSort_o *sort; // x21
  MaterialEventLogServantSortSelectMenu_CallbackFunc_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4B11748 & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo, eventLogServantSortSelectMenu, method);
    sub_1BCA7E0(&Method_MaterialCollectionServantListViewManager_EndEventLogSortKind__, v6, v7);
    byte_4B11748 = 1;
  }
  if ( this->fields.isInput )
  {
    sort = this->fields.sort;
    v9 = (MaterialEventLogServantSortSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                                   MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                                   eventLogServantSortSelectMenu,
                                                                   method,
                                                                   v3);
    MaterialEventLogServantSortSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_MaterialCollectionServantListViewManager_EndEventLogSortKind__,
      0LL);
    if ( !eventLogServantSortSelectMenu )
      sub_1BCAA3C(v10, v11);
    MaterialEventLogServantSortSelectMenu__Open(eventLogServantSortSelectMenu, 0, sort, v9, 0LL);
  }
}


void __fastcall MaterialCollectionServantListViewManager__EventLogSortListSave(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MaterialCollectionServantListViewManager_c *v3; // x0
  ListViewSort_o *EventLogservantSortInfo; // x8
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4B11750 & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialCollectionServantListViewManager_TypeInfo, method, v2);
    byte_4B11750 = 1;
  }
  v3 = MaterialCollectionServantListViewManager_TypeInfo;
  if ( !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo, method);
    v3 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v3->static_fields->EventLogservantSortInfo;
  if ( EventLogservantSortInfo )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      EventLogservantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->EventLogservantSortInfo;
      if ( !EventLogservantSortInfo )
        sub_1BCAA3C(v5, v6);
    }
    ListViewSort__Save(EventLogservantSortInfo, 0LL);
  }
}


int32_t __fastcall MaterialCollectionServantListViewManager__GetFilterCount(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w22
  int32_t v10; // w21
  int32_t v11; // w20
  __int64 methodPtr_low; // x10

  if ( (byte_4B11749 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v4, v5);
    sub_1BCA7E0(&MaterialEventLogServantListViewItem_TypeInfo, v6, v7);
    byte_4B11749 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_13;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v10 = 0;
    v11 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v10,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(MaterialEventLogServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (MaterialEventLogServantListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialEventLogServantListViewItem_TypeInfo )
      {
        break;
      }
      if ( !LOBYTE(itemList[4].fields._size) )
        v11 += MaterialEventLogServantListViewItem__IsItemMatchFilter(
                 (MaterialEventLogServantListViewItem_o *)itemList,
                 this->fields.sort,
                 0LL);
      if ( size == ++v10 )
        return v11;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_13:
    sub_1BCAA3C(itemList, method);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
MaterialCollectionServantListViewItem_o *__fastcall MaterialCollectionServantListViewManager__GetItem(
        MaterialCollectionServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  MaterialCollectionServantListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  v4 = this;
  if ( (byte_4B1173E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    this = (MaterialCollectionServantListViewManager_o *)sub_1BCA7E0(
                                                           &MaterialCollectionServantListViewItem_TypeInfo,
                                                           v7,
                                                           v8);
    byte_4B1173E = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    sub_1BCAA3C(this, *(_QWORD *)&index);
  result = 0LL;
  if ( (index & 0x80000000) == 0 && itemList->fields._size > index )
  {
    result = (MaterialCollectionServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                          (System_Collections_Generic_List_object__o *)v4->fields.itemList,
                                                          index,
                                                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(MaterialCollectionServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (MaterialCollectionServantListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialCollectionServantListViewItem_TypeInfo )
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


MaterialEventLogListViewManager_o *__fastcall MaterialCollectionServantListViewManager__GetMaterialEventLogListViewManager(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  MaterialEventLogListViewManager_o *result; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x19
  __int64 v10; // x1
  bool v11; // w8
  __int64 methodPtr_low; // x10
  bool v13; // w8
  __int64 v14; // x19
  bool v15; // w8

  if ( (byte_4B11736 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomRootComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6);
    byte_4B11736 = 1;
  }
  result = (MaterialEventLogListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !result )
    goto LABEL_22;
  dropObjectList = result->fields.dropObjectList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)dropObjectList, 0LL, 0LL);
  result = 0LL;
  if ( !v11 )
  {
    if ( dropObjectList )
    {
      methodPtr_low = LOBYTE(MyRoomRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(dropObjectList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (MyRoomRootComponent_c *)dropObjectList->klass->_2.typeHierarchy[methodPtr_low - 1] != MyRoomRootComponent_TypeInfo )
          dropObjectList = 0LL;
      }
      else
      {
        dropObjectList = 0LL;
      }
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)dropObjectList, 0LL, 0LL);
    result = 0LL;
    if ( !v13 )
    {
      if ( !dropObjectList )
        goto LABEL_22;
      v14 = *(_QWORD *)&dropObjectList[1].fields._size;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v14, 0LL, 0LL);
      result = 0LL;
      if ( !v15 )
      {
        if ( v14 )
          return *(MaterialEventLogListViewManager_o **)(v14 + 416);
LABEL_22:
        sub_1BCAA3C(result, v8);
      }
    }
  }
  return result;
}


void __fastcall MaterialCollectionServantListViewManager__InactiveDummy(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w21
  int32_t v18; // w20
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v20; // x19
  int32_t v21; // w20
  __int64 v22; // x1
  Il2CppObject *Component_object; // x21

  if ( (byte_4B11752 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__, v10, v11);
    sub_1BCA7E0(&MaterialEventLogServantListViewItem_TypeInfo, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    byte_4B11752 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_24;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v18 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v18,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(MaterialEventLogServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (MaterialEventLogServantListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialEventLogServantListViewItem_TypeInfo )
      {
        break;
      }
      MaterialEventLogServantListViewItem__InactiveDummy((MaterialEventLogServantListViewItem_o *)itemList, 0LL);
      if ( size == ++v18 )
        goto LABEL_12;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_24:
    sub_1BCAA3C(itemList, method);
  }
LABEL_12:
  itemList = (System_Collections_Generic_List_object__o *)MaterialCollectionServantListViewManager__get_ObjectList(
                                                            this,
                                                            method);
  if ( !itemList )
    goto LABEL_24;
  v20 = itemList;
  if ( itemList->fields._size >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                v20,
                                                                v21,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__);
      if ( !itemList )
        goto LABEL_24;
      itemList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)itemList,
                                                                0LL);
      if ( !itemList )
        goto LABEL_24;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)itemList,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
      itemList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                (UnityEngine_Object_o *)Component_object,
                                                                0LL,
                                                                0LL);
      if ( ((unsigned __int8)itemList & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_24;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
      }
      if ( ++v21 >= v20->fields._size )
        return;
    }
  }
}


void __fastcall MaterialCollectionServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MaterialCollectionServantListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4B11733 & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialCollectionServantListViewManager_TypeInfo, v1, v2);
    byte_4B11733 = 1;
  }
  v3 = MaterialCollectionServantListViewManager_TypeInfo;
  if ( !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo, v1);
    v3 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  servantSortInfo = v3->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL)
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->commandCodeSortInfo) == 0LL)
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->EventLogservantSortInfo) == 0LL) )
  {
    sub_1BCAA3C(servantSortInfo, v1);
  }
  ListViewSort__InitLoad(servantSortInfo, 0LL);
}


void __fastcall MaterialCollectionServantListViewManager__ModifyItem(
        MaterialCollectionServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewManager__RequestListObject_31731784(this, 4, method);
}


void __fastcall MaterialCollectionServantListViewManager__ModifyList(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v12; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v14; // x21
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x22

  if ( (byte_4B1173F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v4, v5);
    sub_1BCA7E0(&MaterialCollectionServantListViewItem_TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    byte_4B1173F = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_1BCAA3C(itemList, method);
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               itemList,
               v12,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v14 = (ListViewItem_o *)Item;
        methodPtr_low = LOBYTE(MaterialCollectionServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (MaterialCollectionServantListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == MaterialCollectionServantListViewItem_TypeInfo )
        {
          monitor = (UnityEngine_Object_o *)Item[6].monitor;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
          if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
          {
            itemList = (System_Collections_Generic_List_object__o *)v14->fields.viewObject;
            if ( !itemList )
              goto LABEL_16;
            ListViewObject__SetItemSeed((ListViewObject_o *)itemList, v14, this->fields.seed, 0LL);
          }
        }
      }
      if ( size == ++v12 )
        break;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_16;
    }
  }
}


void __fastcall MaterialCollectionServantListViewManager__OnClickListView(
        MaterialCollectionServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall MaterialCollectionServantListViewManager__OnClickScaleChange(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  MaterialCollectionServantListViewManager_o *v9; // x0
  int v10; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  int32_t v13; // w1
  UISprite_o *scaleChangeTabSprite; // x20
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2

  if ( (byte_4B1174F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MaterialCollectionServantListViewManager_OnClickScaleChange__, method, v2);
    byte_4B1174F = 1;
  }
  v4 = Method_MaterialCollectionServantListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_MaterialCollectionServantListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_MaterialCollectionServantListViewManager_OnClickScaleChange__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v9 = this;
    v10 = 2;
    goto LABEL_11;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v9 = this;
    v10 = 3;
    goto LABEL_11;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v9 = this;
    v10 = 1;
LABEL_11:
    v9->fields.seed = smallSizeSeed;
    p_seed = &v9->fields.seed;
    *((_DWORD *)p_seed + 77) = v10;
    sub_1BCA784(p_seed, smallSizeSeed);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v13 = this->fields.scaleType,
        sort->fields.iconScaleKind = v13,
        scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v13, 0LL),
        !scaleChangeTabSprite)
    || (UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)sort, 0LL), (sort = this->fields.sort) == 0LL) )
  {
    sub_1BCAA3C(sort, v6);
  }
  ListViewSort__Save(sort, 0LL);
  MaterialCollectionServantListViewManager__ModifyList(this, v15);
  MaterialCollectionServantListViewManager__SetMode_31716764(this, 2, v16);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall MaterialCollectionServantListViewManager__OnClickSelectListView(
        MaterialCollectionServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_o *v4; // x20
  struct ListViewItem_o *linkItem; // x8
  struct MaterialCollectionServantListViewManager_CallbackFunc_o *callbackFunc; // x21
  __int64 methodPtr_low; // x10
  unsigned int Index; // w0

  v4 = this;
  if ( (byte_4B11745 & 1) == 0 )
  {
    this = (MaterialCollectionServantListViewManager_o *)sub_1BCA7E0(
                                                           &MaterialEventLogServantListViewItem_TypeInfo,
                                                           obj,
                                                           method);
    byte_4B11745 = 1;
  }
  if ( !obj )
    sub_1BCAA3C(this, obj);
  linkItem = obj->fields.linkItem;
  callbackFunc = v4->fields.callbackFunc;
  if ( !linkItem
    || (methodPtr_low = LOBYTE(MaterialEventLogServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MaterialEventLogServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialEventLogServantListViewItem_TypeInfo )
  {
    v4->fields.callbackFunc = 0LL;
    sub_1BCA784(&v4->fields.callbackFunc, 0LL);
  }
  if ( callbackFunc )
  {
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      1LL,
      Index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall MaterialCollectionServantListViewManager__OnClickSortAscendingOrder(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  ListViewSort_o *v6; // x0
  __int64 v7; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4B1174B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MaterialCollectionServantListViewManager_OnClickSortAscendingOrder__, method, v2);
    byte_4B1174B = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_MaterialCollectionServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_MaterialCollectionServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_MaterialCollectionServantListViewManager_OnClickSortAscendingOrder__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort
      || (sort->fields.isAscendingOrder ^= 1u,
          ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL),
          (v6 = this->fields.sort) == 0LL) )
    {
      sub_1BCAA3C(v6, v7);
    }
    ListViewSort__Save(v6, 0LL);
  }
}


void __fastcall MaterialCollectionServantListViewManager__OnClickSortKind(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  struct ListViewSort_o *sort; // x20
  int32_t listViewKind; // w8
  struct MaterialCollectionServantSortSelectMenu_o *v16; // x21
  MaterialCollectionServantSortSelectMenu_CallbackFunc_o *v17; // x22
  MaterialCollectionServantSortSelectMenu_o *v18; // x0
  int32_t v19; // w1
  struct MaterialCollectionServantSortSelectMenu_o *sortSelectMenu; // x21

  if ( (byte_4B11747 & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MaterialCollectionServantListViewManager_EndSelectSortKind__, v4, v5);
    sub_1BCA7E0(&Method_MaterialCollectionServantListViewManager_OnClickSortKind__, v6, v7);
    byte_4B11747 = 1;
  }
  if ( !this->fields.isInput )
    return;
  v8 = Method_MaterialCollectionServantListViewManager_OnClickSortKind__;
  if ( (*((_BYTE *)Method_MaterialCollectionServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_MaterialCollectionServantListViewManager_OnClickSortKind__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_19;
  listViewKind = sort->fields.listViewKind;
  switch ( listViewKind )
  {
    case 3:
      sortSelectMenu = this->fields.sortSelectMenu;
      v17 = (MaterialCollectionServantSortSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                                        MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                                        v11,
                                                                        v12,
                                                                        v13);
      MaterialCollectionServantSortSelectMenu_CallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_MaterialCollectionServantListViewManager_EndSelectSortKind__,
        0LL);
      if ( !sortSelectMenu )
        goto LABEL_19;
      v19 = 3;
      goto LABEL_17;
    case 1:
      sortSelectMenu = this->fields.sortSelectMenu;
      v17 = (MaterialCollectionServantSortSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                                        MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                                        v11,
                                                                        v12,
                                                                        v13);
      MaterialCollectionServantSortSelectMenu_CallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_MaterialCollectionServantListViewManager_EndSelectSortKind__,
        0LL);
      if ( !sortSelectMenu )
        goto LABEL_19;
      v19 = 1;
LABEL_17:
      v18 = sortSelectMenu;
      goto LABEL_18;
    case 0:
      v16 = this->fields.sortSelectMenu;
      v17 = (MaterialCollectionServantSortSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                                        MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                                        v11,
                                                                        v12,
                                                                        v13);
      MaterialCollectionServantSortSelectMenu_CallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_MaterialCollectionServantListViewManager_EndSelectSortKind__,
        0LL);
      if ( v16 )
      {
        v18 = v16;
        v19 = 0;
LABEL_18:
        MaterialCollectionServantSortSelectMenu__Open(v18, v19, sort, v17, 0LL);
        return;
      }
LABEL_19:
      sub_1BCAA3C(v10, v11);
  }
}


void __fastcall MaterialCollectionServantListViewManager__OnLongPushListView(
        MaterialCollectionServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_o *v4; // x20
  struct ListViewItem_o *linkItem; // x8
  struct MaterialCollectionServantListViewManager_CallbackFunc_o *callbackFunc; // x21
  __int64 methodPtr_low; // x10
  unsigned int Index; // w0

  v4 = this;
  if ( (byte_4B11746 & 1) == 0 )
  {
    this = (MaterialCollectionServantListViewManager_o *)sub_1BCA7E0(
                                                           &MaterialEventLogServantListViewItem_TypeInfo,
                                                           obj,
                                                           method);
    byte_4B11746 = 1;
  }
  if ( !obj )
    sub_1BCAA3C(this, obj);
  linkItem = obj->fields.linkItem;
  callbackFunc = v4->fields.callbackFunc;
  if ( !linkItem
    || (methodPtr_low = LOBYTE(MaterialEventLogServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MaterialEventLogServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialEventLogServantListViewItem_TypeInfo )
  {
    v4->fields.callbackFunc = 0LL;
    sub_1BCA784(&v4->fields.callbackFunc, 0LL);
  }
  if ( callbackFunc )
  {
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      1LL,
      Index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall MaterialCollectionServantListViewManager__OnMoveEnd(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B11744 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B11744 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( !UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
        goto LABEL_14;
      v9 = this->fields.scrollView;
      if ( v9 )
      {
        ((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v9->klass->vtable._8_UpdateScrollbars.method)(
          v9,
          1LL,
          v9->klass->vtable._9_SetDragAmount.methodPtr);
        v9 = this->fields.scrollView;
        if ( v9 )
        {
          if ( (((__int64 (__fastcall *)(UIScrollView_o *, Il2CppMethodPointer))v9->klass->vtable._6_get_shouldMoveVertically.method)(
                  v9,
                  v9->klass->vtable._7_get_shouldMove.methodPtr) & 1) == 0 )
            goto LABEL_14;
          v9 = this->fields.scrollView;
          if ( v9 )
          {
            UIScrollView__UpdatePosition(v9, 0LL);
LABEL_14:
            callbackFunc2 = this->fields.callbackFunc2;
            this->fields.callbackFunc2 = 0LL;
            sub_1BCA784(&this->fields.callbackFunc2, 0LL);
            if ( callbackFunc2 )
              ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
                callbackFunc2->fields.original_method_info,
                *(_QWORD *)&callbackFunc2->fields.extra_arg);
            return;
          }
        }
      }
      sub_1BCAA3C(v9, v8);
    }
  }
}


void __fastcall MaterialCollectionServantListViewManager__RefrashListDisp(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v7; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w21

  if ( (byte_4B1173C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__,
      method,
      v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__, v4, v5);
    byte_4B1173C = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)MaterialCollectionServantListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    goto LABEL_9;
  size = ObjectList->fields._size;
  v9 = ObjectList;
  if ( size >= 1 )
  {
    v10 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v9,
                                                                  v10,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( ++v10 >= v9->fields._size )
        return;
    }
LABEL_9:
    sub_1BCAA3C(ObjectList, v7);
  }
}


void __fastcall MaterialCollectionServantListViewManager__RequestInto(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x1
  System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *ObjectList; // x0
  __int64 v14; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v16; // x20
  int v17; // w24
  int32_t v18; // w21
  Il2CppObject *Item; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Action_o *v23; // x23

  if ( (byte_4B11743 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_MaterialCollectionServantListViewManager_OnMoveEnd__, v8, v9);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v10, v11);
    byte_4B11743 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ObjectList = MaterialCollectionServantListViewManager__get_ObjectList(this, v12);
  if ( !ObjectList )
LABEL_13:
    sub_1BCAA3C(ObjectList, v14);
  size = ObjectList->fields._size;
  v16 = (System_Collections_Generic_List_object__o *)ObjectList;
  this->fields.callbackCount = size;
  if ( size < 1 )
    goto LABEL_12;
  v17 = 0;
  v18 = 0;
  do
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v16,
             v18,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0LL) )
    {
      v23 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v21, v22);
      System_Action___ctor(v23, (Il2CppObject *)this, Method_MaterialCollectionServantListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        goto LABEL_13;
      ++v17;
      MaterialCollectionServantListViewObject__Init_31741544(
        (MaterialCollectionServantListViewObject_o *)Item,
        5,
        v23,
        0.1,
        0LL);
    }
    else
    {
      --this->fields.callbackCount;
    }
    ++v18;
  }
  while ( v18 < v16->fields._size );
  if ( !v17 )
  {
LABEL_12:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewManager__RequestListObject(
        MaterialCollectionServantListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v22; // x1
  int32_t size; // w8
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  Il2CppObject *current; // x21
  System_Action_o *v28; // x22
  __int64 v29; // x0
  __int64 v30; // x1
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B11741 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__Dispose__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__MoveNext__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__get_Current__,
      v11,
      v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__GetEnumerator__,
      v13,
      v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_MaterialCollectionServantListViewManager_OnMoveEnd__, v17, v18);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v19, v20);
    byte_4B11741 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  ObjectList = (System_Collections_Generic_List_object__o *)MaterialCollectionServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v22);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v31,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v31,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__MoveNext__) )
    {
      current = v31.fields._current;
      v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
      System_Action___ctor(v28, (Il2CppObject *)this, Method_MaterialCollectionServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v29, v30);
      MaterialCollectionServantListViewObject__Init_31741544(
        (MaterialCollectionServantListViewObject_o *)current,
        mode,
        v28,
        delay,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v31,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewManager__RequestListObject_31731784(
        MaterialCollectionServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v20; // x1
  int32_t size; // w8
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  Il2CppObject *current; // x21
  System_Action_o *v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B11742 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__Dispose__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__MoveNext__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__get_Current__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__GetEnumerator__,
      v11,
      v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_MaterialCollectionServantListViewManager_OnMoveEnd__, v15, v16);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v17, v18);
    byte_4B11742 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  ObjectList = (System_Collections_Generic_List_object__o *)MaterialCollectionServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v20);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v29,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v29,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__MoveNext__) )
    {
      current = v29.fields._current;
      v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
      System_Action___ctor(v26, (Il2CppObject *)this, Method_MaterialCollectionServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v27, v28);
      MaterialCollectionServantListViewObject__Init_31741644(
        (MaterialCollectionServantListViewObject_o *)current,
        mode,
        v26,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v29,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__Dispose__);
  }
}


void __fastcall MaterialCollectionServantListViewManager__SetFilterButtonImage(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  ListViewSort_o *sort; // x0
  System_String_o **v11; // x9
  System_String_o **v12; // x20
  UnityEngine_Color_o v13; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4B1173A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17645/*"btn_bg_05"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17646/*"btn_bg_06"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_448/*"#FE4545"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_431/*"#000000"*/, v8, v9);
    byte_4B1173A = 1;
  }
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_12;
  sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL);
  if ( !this->fields.filterSprite )
    goto LABEL_12;
  v11 = (System_String_o **)&StringLiteral_17645/*"btn_bg_05"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v11 = (System_String_o **)&StringLiteral_17646/*"btn_bg_06"*/;
  v12 = ((unsigned __int8)sort & 1) != 0
      ? (System_String_o **)&StringLiteral_431/*"#000000"*/
      : (System_String_o **)&StringLiteral_448/*"#FE4545"*/;
  UISprite__set_spriteName(this->fields.filterSprite, *v11, 0LL);
  *(_QWORD *)&v13.fields.r = 0LL;
  *(_QWORD *)&v13.fields.b = 0LL;
  UnityEngine_ColorUtility__TryParseHtmlString(*v12, &v13, 0LL);
  sort = (ListViewSort_o *)this->fields.sortKindLabel;
  if ( !sort )
LABEL_12:
    sub_1BCAA3C(sort, method);
  UILabel__set_effectColor((UILabel_o *)sort, v13, 0LL);
}


void __fastcall MaterialCollectionServantListViewManager__SetMode(
        MaterialCollectionServantListViewManager_o *this,
        int32_t mode,
        MaterialCollectionServantListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1BCA784(&this->fields.callbackFunc, callback);
  MaterialCollectionServantListViewManager__SetMode_31716764(this, mode, v6);
}


void __fastcall MaterialCollectionServantListViewManager__SetMode_31716764(
        MaterialCollectionServantListViewManager_o *this,
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
    MaterialCollectionServantListViewManager__RequestListObject_31731784(this, v6, v5);
  }
}


void __fastcall MaterialCollectionServantListViewManager__SetMode_31732752(
        MaterialCollectionServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BCA784(&this->fields.callbackFunc2, callback);
  MaterialCollectionServantListViewManager__SetMode_31716764(this, mode, v6);
}


void __fastcall MaterialCollectionServantListViewManager__SetObjectItem(
        MaterialCollectionServantListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4B11740 & 1) == 0 )
  {
    this = (MaterialCollectionServantListViewManager_o *)sub_1BCA7E0(
                                                           &MaterialCollectionServantListViewObject_TypeInfo,
                                                           obj,
                                                           item);
    byte_4B11740 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(MaterialCollectionServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MaterialCollectionServantListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialCollectionServantListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  MaterialCollectionServantListViewObject__Init_31739760((MaterialCollectionServantListViewObject_o *)obj, v7, 0LL);
}


void __fastcall MaterialCollectionServantListViewManager__SetSort(
        MaterialCollectionServantListViewManager_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  this->fields.sort = sort;
  sub_1BCA784(&this->fields.sort, sort);
}


void __fastcall MaterialCollectionServantListViewManager__SetSortButtonImage(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v17; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v19; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v21; // x8
  int32_t sortKind; // w9
  System_String_o **v23; // x8
  struct ListViewSort_o *v24; // x8
  System_String_o **v25; // x9
  System_String_o **v26; // x10
  System_String_o **v27; // x8
  System_String_o **v28; // x8

  if ( (byte_4B1174E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17718/*"btn_sort_up"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_17806/*"btn_txt_up"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_17761/*"btn_txt_new"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17751/*"btn_txt_down"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17768/*"btn_txt_old"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_17715/*"btn_sort_down"*/, v14, v15);
    byte_4B1174E = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_34;
    v19 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v19 )
      goto LABEL_34;
    UILabel__set_text(v19, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v21 = this->fields.sort;
    if ( v21 )
    {
      sortKind = v21->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v23 = (System_String_o **)(v21->fields.isAscendingOrder ? &StringLiteral_17768/*"btn_txt_old"*/ : &StringLiteral_17761/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v23, 0LL);
          v24 = this->fields.sort;
          if ( v24 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v25 = (System_String_o **)&StringLiteral_17715/*"btn_sort_down"*/;
              v26 = (System_String_o **)&StringLiteral_17718/*"btn_sort_up"*/;
LABEL_30:
              if ( v24->fields.isAscendingOrder )
                v28 = v25;
              else
                v28 = v26;
              UISprite__set_spriteName((UISprite_o *)sort, *v28, 0LL);
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
          v27 = (System_String_o **)(v21->fields.isAscendingOrder ? &StringLiteral_17806/*"btn_txt_up"*/ : &StringLiteral_17751/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v27, 0LL);
          v24 = this->fields.sort;
          if ( v24 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v25 = (System_String_o **)&StringLiteral_17718/*"btn_sort_up"*/;
              v26 = (System_String_o **)&StringLiteral_17715/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1BCAA3C(sort, v17);
  }
}


void __fastcall MaterialCollectionServantListViewManager__SetValentineFilterButtonImage(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  ListViewSort_o *sort; // x0
  System_String_o **v11; // x9
  System_String_o **v12; // x20
  UnityEngine_Color_o v13; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4B1173B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_448/*"#FE4545"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17688/*"btn_filter_on"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_431/*"#000000"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_17687/*"btn_filter"*/, v8, v9);
    byte_4B1173B = 1;
  }
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_12;
  sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL);
  if ( !this->fields.filterSprite )
    goto LABEL_12;
  v11 = (System_String_o **)&StringLiteral_17687/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v11 = (System_String_o **)&StringLiteral_17688/*"btn_filter_on"*/;
  v12 = ((unsigned __int8)sort & 1) != 0
      ? (System_String_o **)&StringLiteral_431/*"#000000"*/
      : (System_String_o **)&StringLiteral_448/*"#FE4545"*/;
  UISprite__set_spriteName(this->fields.filterSprite, *v11, 0LL);
  *(_QWORD *)&v13.fields.r = 0LL;
  *(_QWORD *)&v13.fields.b = 0LL;
  UnityEngine_ColorUtility__TryParseHtmlString(*v12, &v13, 0LL);
  sort = (ListViewSort_o *)this->fields.sortKindLabel;
  if ( !sort )
LABEL_12:
    sub_1BCAA3C(sort, method);
  UILabel__set_effectColor((UILabel_o *)sort, v13, 0LL);
}


void __fastcall MaterialCollectionServantListViewManager__SortAscendingOrder(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  struct ListViewSort_o *v8; // x0
  const MethodInfo *v9; // x1
  struct ListViewSort_o *sort; // x8
  __int64 v11; // x1
  UnityEngine_Object_o *MaterialEventLogListViewManager; // x20
  const MethodInfo *v13; // x1
  bool v14; // w1

  if ( (byte_4B1174C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MaterialCollectionServantListViewManager_SortAscendingOrder__, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B1174C = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_MaterialCollectionServantListViewManager_SortAscendingOrder__;
    if ( (*((_BYTE *)Method_MaterialCollectionServantListViewManager_SortAscendingOrder__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCA7F8(Method_MaterialCollectionServantListViewManager_SortAscendingOrder__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    sort = this->fields.sort;
    if ( sort )
    {
      sort->fields.isAscendingOrder ^= 1u;
      MaterialEventLogListViewManager = (UnityEngine_Object_o *)MaterialCollectionServantListViewManager__GetMaterialEventLogListViewManager(
                                                                  (MaterialCollectionServantListViewManager_o *)v8,
                                                                  v9);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      v8 = (struct ListViewSort_o *)UnityEngine_Object__op_Inequality(MaterialEventLogListViewManager, 0LL, 0LL);
      if ( ((unsigned __int8)v8 & 1) != 0 )
      {
        if ( !MaterialEventLogListViewManager )
          goto LABEL_15;
        MaterialEventLogListViewManager__SetSort(
          (MaterialEventLogListViewManager_o *)MaterialEventLogListViewManager,
          this->fields.sort,
          0LL);
      }
      MaterialCollectionServantListViewManager__SortDummyData(this, v9);
      ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
      v14 = MaterialCollectionServantListViewManager__GetFilterCount(this, v13) < 1;
      ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v14, 0LL);
      ListViewManager__ScreenUpdate((ListViewManager_o *)this, 0LL);
      v8 = this->fields.sort;
      if ( v8 )
      {
        ListViewSort__Save(v8, 0LL);
        ((void (__fastcall *)(MaterialCollectionServantListViewManager_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
          this,
          this->klass->vtable._6_GetFocusItemIndex.methodPtr);
        return;
      }
    }
LABEL_15:
    sub_1BCAA3C(v8, v9);
  }
}


void __fastcall MaterialCollectionServantListViewManager__SortDummyData(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  DataManager_o *Instance; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w23
  System_Collections_Generic_List_object__o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Collections_Generic_List_object__o *v32; // x20
  int32_t v33; // w21
  ListViewItem_o *v34; // x22
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  DataManager_o *v39; // x1
  Il2CppClass **v40; // x0
  struct ListViewSort_o *sort; // x8
  int32_t v42; // w1

  if ( (byte_4B1174D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MaterialEventLogServantListViewItem___ctor__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_ListViewItem__TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_MaterialEventLogServantListViewItem__TypeInfo, v16, v17);
    sub_1BCA7E0(&MaterialEventLogServantListViewItem_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21);
    byte_4B1174D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_27;
  size = itemList->fields._size;
  v28 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MaterialEventLogServantListViewItem__TypeInfo,
                                                       v23,
                                                       v24,
                                                       v25);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MaterialEventLogServantListViewItem___ctor__);
  v32 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                       v29,
                                                       v30,
                                                       v31);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  if ( size >= 1 )
  {
    v33 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v33,
                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Instance )
        break;
      v34 = (ListViewItem_o *)Instance;
      methodPtr_low = LOBYTE(MaterialEventLogServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (MaterialEventLogServantListViewItem_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialEventLogServantListViewItem_TypeInfo )
      {
        break;
      }
      if ( Instance[1].fields._DispLog )
      {
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          break;
        Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)Instance,
                                      v33,
                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !v32 )
          break;
        items = v32->fields._items;
        v37 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v32->fields._version;
        if ( !items )
          break;
        v38 = v32->fields._size;
        v39 = Instance;
        if ( (unsigned int)v38 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v32,
            (Il2CppObject *)Instance,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v40 = &items->obj.klass + v38;
          v32->fields._size = v38 + 1;
          v40[4] = (Il2CppClass *)v39;
          Instance = (DataManager_o *)sub_1BCA784(v40 + 4, v39);
        }
        sort = this->fields.sort;
        if ( !sort )
          break;
        if ( sort->fields.isAscendingOrder )
        {
          v42 = v33 + 999;
          v34->fields.index = v33 + 999;
        }
        else
        {
          v34->fields.index = -1;
          v42 = -1;
        }
        ListViewItem__SetSortIndex(v34, v42, 0LL);
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          break;
        Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)Instance,
                                      v33,
                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Instance )
          break;
        ListViewItem__Set((ListViewItem_o *)Instance, v34, 0LL);
      }
      MaterialEventLogServantListViewItem__DummyVisible((MaterialEventLogServantListViewItem_o *)v34, 0LL);
      if ( size == ++v33 )
        return;
    }
LABEL_27:
    sub_1BCAA3C(Instance, v23);
  }
}


void __fastcall MaterialCollectionServantListViewManager__add_callbackFunc(
        MaterialCollectionServantListViewManager_o *this,
        MaterialCollectionServantListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct MaterialCollectionServantListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  MaterialCollectionServantListViewManager_o *v10; // x0
  MaterialCollectionServantListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B1172E & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B1172E = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (MaterialCollectionServantListViewManager_CallbackFunc_c *)v7->klass != MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MaterialCollectionServantListViewManager_o *)sub_1BCACFC(v7);
  MaterialCollectionServantListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall MaterialCollectionServantListViewManager__add_callbackFunc2(
        MaterialCollectionServantListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  MaterialCollectionServantListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B11730 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B11730 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MaterialCollectionServantListViewManager_o *)sub_1BCACFC(v7);
  MaterialCollectionServantListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *__fastcall MaterialCollectionServantListViewManager__get_ClippingObjectList(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x21
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  __int64 v29; // x1
  Il2CppObject *v30; // x21
  ListViewItem_o *Item; // x0
  __int64 v32; // x1
  _BOOL8 v33; // x0
  __int64 v34; // x1
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B11735 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_MaterialCollectionServantListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B11735 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MaterialCollectionServantListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v41 = v40;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v41.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___);
      v30 = Component_object;
      if ( !Component_object )
        sub_1BCAA3C(0LL, v29);
      Item = (ListViewItem_o *)MaterialCollectionServantListViewObject__GetItem(
                                 (MaterialCollectionServantListViewObject_o *)Component_object,
                                 0LL);
      if ( !Item )
        sub_1BCAA3C(0LL, v32);
      if ( Item->fields.isTermination )
      {
        v33 = ListViewManager__ClippingItem_41463120((ListViewManager_o *)this, Item, 0LL);
        if ( v33 )
        {
          if ( !v21 )
            sub_1BCAA3C(v33, v34);
          items = v21->fields._items;
          v36 = Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__Add__;
          ++v21->fields._version;
          if ( !items )
            sub_1BCAA3C(v33, v34);
          size = v21->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            v30,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v21 )
          sub_1BCAA3C(Item, v32);
        items = v21->fields._items;
        v36 = Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__Add__;
        ++v21->fields._version;
        if ( !items )
          sub_1BCAA3C(Item, v32);
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v38 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v38[4] = (Il2CppClass *)v30;
        sub_1BCA784(v38 + 4, v30);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *)v21;
}


System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *__fastcall MaterialCollectionServantListViewManager__get_ObjectList(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  Il2CppObject *v29; // x1
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B11734 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_MaterialCollectionServantListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B11734 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MaterialCollectionServantListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v36 = v35;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v36.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___);
      v29 = Component_object;
      if ( !v21 )
        sub_1BCAA3C(Component_object, Component_object);
      items = v21->fields._items;
      v31 = Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1BCAA3C(Component_object, Component_object);
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          Component_object,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v29;
        sub_1BCA784(v33 + 4, v29);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *)v21;
}


void __fastcall MaterialCollectionServantListViewManager__remove_callbackFunc(
        MaterialCollectionServantListViewManager_o *this,
        MaterialCollectionServantListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct MaterialCollectionServantListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  MaterialCollectionServantListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B1172F & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B1172F = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (MaterialCollectionServantListViewManager_CallbackFunc_c *)v7->klass != MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MaterialCollectionServantListViewManager_o *)sub_1BCACFC(v7);
  MaterialCollectionServantListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall MaterialCollectionServantListViewManager__remove_callbackFunc2(
        MaterialCollectionServantListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  const MethodInfo *v10; // x0

  if ( (byte_4B11731 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B11731 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1BCACFC(v7);
  MaterialCollectionServantListViewManager__DeleteContinueData(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewManager_CallbackFunc___ctor(
        MaterialCollectionServantListViewManager_CallbackFunc_o *this,
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
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A05FF4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A05F9C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall MaterialCollectionServantListViewManager_CallbackFunc__BeginInvoke(
        MaterialCollectionServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v12[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v13; // [xsp+28h] [xbp-38h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v13 = index;
  v14 = kind;
  if ( (byte_4B11762 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&index);
    sub_1BCA7E0(&MaterialCollectionServantListViewManager_ResultKind_TypeInfo, v9, v10);
    byte_4B11762 = 1;
  }
  v12[2] = 0LL;
  v12[0] = j_il2cpp_value_box_0(MaterialCollectionServantListViewManager_ResultKind_TypeInfo, &v14);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v12, callback, object);
}


void __fastcall MaterialCollectionServantListViewManager_CallbackFunc__EndInvoke(
        MaterialCollectionServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall MaterialCollectionServantListViewManager_CallbackFunc__Invoke(
        MaterialCollectionServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    kind,
    index,
    *(_QWORD *)&this->fields.extra_arg);
}