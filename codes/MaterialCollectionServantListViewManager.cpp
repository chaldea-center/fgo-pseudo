void __fastcall MaterialCollectionServantListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ListViewSort_o *v7; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  ListViewSort_o *v10; // x19
  struct MaterialCollectionServantListViewManager_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  ListViewSort_o *v14; // x19
  struct MaterialCollectionServantListViewManager_StaticFields *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  ListViewSort_o *v18; // x19
  struct MaterialCollectionServantListViewManager_StaticFields *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4AFD268 & 1) == 0 )
  {
    sub_1BC3008(&ListViewSort_TypeInfo, v1);
    sub_1BC3008(&MaterialCollectionServantListViewManager_TypeInfo, v2);
    sub_1BC3008(&StringLiteral_8877/*"MaterialCollectionServant2"*/, v3);
    sub_1BC3008(&StringLiteral_8878/*"MaterialCollectionServant4"*/, v4);
    sub_1BC3008(&StringLiteral_8876/*"MaterialCollectionServant1"*/, v5);
    sub_1BC3008(&StringLiteral_8879/*"MaterialCollectionServant5"*/, v6);
    byte_4AFD268 = 1;
  }
  v7 = (ListViewSort_o *)sub_1BC3254(ListViewSort_TypeInfo);
  ListViewSort___ctor_42802648(v7, (System_String_o *)StringLiteral_8876/*"MaterialCollectionServant1"*/, 27, 1, 0LL);
  MaterialCollectionServantListViewManager_TypeInfo->static_fields->servantSortInfo = v7;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)MaterialCollectionServantListViewManager_TypeInfo->static_fields,
    (int32_t)v7,
    v8,
    v9);
  v10 = (ListViewSort_o *)sub_1BC3254(ListViewSort_TypeInfo);
  ListViewSort___ctor_42802648(v10, (System_String_o *)StringLiteral_8877/*"MaterialCollectionServant2"*/, 27, 1, 0LL);
  static_fields = MaterialCollectionServantListViewManager_TypeInfo->static_fields;
  static_fields->servantEquipSortInfo = v10;
  sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->servantEquipSortInfo, (int32_t)v10, v12, v13);
  v14 = (ListViewSort_o *)sub_1BC3254(ListViewSort_TypeInfo);
  ListViewSort___ctor_42802648(v14, (System_String_o *)StringLiteral_8878/*"MaterialCollectionServant4"*/, 27, 1, 0LL);
  v15 = MaterialCollectionServantListViewManager_TypeInfo->static_fields;
  v15->commandCodeSortInfo = v14;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v15->commandCodeSortInfo, (int32_t)v14, v16, v17);
  v18 = (ListViewSort_o *)sub_1BC3254(ListViewSort_TypeInfo);
  ListViewSort___ctor_42802648(v18, (System_String_o *)StringLiteral_8879/*"MaterialCollectionServant5"*/, 3, 1, 0LL);
  v19 = MaterialCollectionServantListViewManager_TypeInfo->static_fields;
  v19->EventLogservantSortInfo = v18;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v19->EventLogservantSortInfo, (int32_t)v18, v20, v21);
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
  MaterialCollectionServantListViewManager_o *v2; // x19
  __int64 v3; // x1
  struct ListViewItemSeed_o *seed; // x8
  UnityEngine_GameObject_o *parent; // x19
  int32_t childCount; // w0
  int32_t v7; // w20
  int32_t i; // w21
  UnityEngine_Object_o *Child; // x22
  Il2CppObject *Component_object; // x22

  v2 = this;
  if ( (byte_4AFD265 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, method);
    this = (MaterialCollectionServantListViewManager_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    byte_4AFD265 = 1;
  }
  seed = v2->fields.seed;
  if ( !seed
    || (parent = seed->fields.parent) == 0LL
    || (this = (MaterialCollectionServantListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                               seed->fields.parent,
                                                               0LL)) == 0LL )
  {
LABEL_20:
    sub_1BC3264(this, method);
  }
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0LL);
  if ( childCount >= 1 )
  {
    v7 = childCount;
    for ( i = 0; v7 != i; ++i )
    {
      Child = (UnityEngine_Object_o *)GameObjectExtensions__GetChild(parent, i, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                             (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w21
  int32_t v7; // w20
  __int64 methodPtr_low; // x10

  if ( (byte_4AFD267 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    sub_1BC3008(&MaterialEventLogServantListViewItem_TypeInfo, v4);
    byte_4AFD267 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_11;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v7,
                                                                (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(MaterialEventLogServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (MaterialEventLogServantListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialEventLogServantListViewItem_TypeInfo )
      {
        break;
      }
      MaterialEventLogServantListViewItem__initCoercionInactive((MaterialEventLogServantListViewItem_o *)itemList, 0LL);
      if ( size == ++v7 )
        return;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_11:
    sub_1BC3264(itemList, method);
  }
}


void __fastcall MaterialCollectionServantListViewManager__ClearNewIcon(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v5; // x1
  System_Collections_Generic_List_object__o *v6; // x19
  int32_t v7; // w20
  MaterialCollectionServantListViewObject_o *v8; // x21
  const MethodInfo *v9; // x1

  if ( (byte_4AFD24D & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__, v3);
    byte_4AFD24D = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)MaterialCollectionServantListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    goto LABEL_9;
  v6 = ObjectList;
  if ( ObjectList->fields._size >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v6,
                                                                  v7,
                                                                  (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      v8 = (MaterialCollectionServantListViewObject_o *)ObjectList;
      MaterialCollectionServantListViewObject__ClearNewIcon((MaterialCollectionServantListViewObject_o *)ObjectList, v5);
      MaterialCollectionServantListViewObject__AttachedIconSetupDisp(v8, v9);
      if ( ++v7 >= v6->fields._size )
        return;
    }
LABEL_9:
    sub_1BC3264(ObjectList, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewManager__CreateList(
        MaterialCollectionServantListViewManager_o *this,
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
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  DataManager_o *v15; // x22
  Il2CppObject *MasterData_object; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UserCommandCodeCollectionEntity_array *v19; // x22
  MaterialCollectionServantListViewManager_c *v20; // x8
  struct ListViewSort_o *commandCodeSortInfo; // x1
  UserServantCollectionEntity_array *CollectionList; // x21
  int v23; // w8
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  MaterialCollectionServantListViewManager_c *v26; // x8
  struct ListViewSort_o *servantEquipSortInfo; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  MaterialCollectionServantListViewManager_c *v30; // x8
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v32; // x1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct ListViewSort_o *sort; // x8
  unsigned int sortKind; // w9
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeTabSprite; // x23
  __int64 v40; // x2
  __int64 v41; // x8
  unsigned __int64 v42; // x20
  UserCommandCodeCollectionEntity_o *v43; // x24
  MaterialCollectionServantListViewItem_o *v44; // x23
  const MethodInfo *v45; // x4
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  __int64 v48; // x8
  _QWORD *v49; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v51; // x8
  __int64 v52; // x8
  unsigned __int64 v53; // x22
  UserServantCollectionEntity_o *v54; // x24
  MaterialCollectionServantListViewItem_o *v55; // x23
  const MethodInfo *v56; // x4
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  __int64 v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  __int64 v62; // x8
  UnityEngine_Object_o *completeSprite; // x20
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v65; // x1
  int32_t findSum[2]; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4AFD24B & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___, *(_QWORD *)&kind);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__Add__, v6);
    sub_1BC3008(&LocalizationManager_TypeInfo, v7);
    sub_1BC3008(&MaterialCollectionServantListViewItem_TypeInfo, v8);
    sub_1BC3008(&MaterialCollectionServantListViewManager_TypeInfo, v9);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v10);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BC3008(&StringLiteral_11692/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v12);
    byte_4AFD24B = 1;
  }
  *(_QWORD *)findSum = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  v15 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v15,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
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
    v26 = MaterialCollectionServantListViewManager_TypeInfo;
    if ( !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo);
      v26 = MaterialCollectionServantListViewManager_TypeInfo;
    }
    servantEquipSortInfo = v26->static_fields->servantEquipSortInfo;
    this->fields.sort = servantEquipSortInfo;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)servantEquipSortInfo, v24, v25);
    Instance = (DataManager_o *)this->fields.sort;
    if ( !Instance )
      goto LABEL_67;
    v19 = 0LL;
    v23 = 1;
  }
  else if ( kind == 3 )
  {
    if ( !Instance )
      goto LABEL_67;
    v19 = UserCommandCodeCollectionMaster__getCollectionList(
            (UserCommandCodeCollectionMaster_o *)Instance,
            &findSum[1],
            findSum,
            0LL);
    v20 = MaterialCollectionServantListViewManager_TypeInfo;
    if ( !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo);
      v20 = MaterialCollectionServantListViewManager_TypeInfo;
    }
    commandCodeSortInfo = v20->static_fields->commandCodeSortInfo;
    this->fields.sort = commandCodeSortInfo;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)commandCodeSortInfo, v17, v18);
    Instance = (DataManager_o *)this->fields.sort;
    if ( !Instance )
      goto LABEL_67;
    CollectionList = 0LL;
    v23 = 3;
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
    v30 = MaterialCollectionServantListViewManager_TypeInfo;
    if ( !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo);
      v30 = MaterialCollectionServantListViewManager_TypeInfo;
    }
    p_servantSortInfo = &v30->static_fields->servantSortInfo;
    v32 = *p_servantSortInfo;
    this->fields.sort = *p_servantSortInfo;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)v32, v28, v29);
    Instance = (DataManager_o *)this->fields.sort;
    if ( !Instance )
      goto LABEL_67;
    v23 = 0;
    v19 = 0LL;
  }
  LODWORD(Instance->fields.writeMasterDataThread) = v23;
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v33, v34);
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
    if ( !v19 )
      goto LABEL_67;
    v41 = *(_QWORD *)&v19->max_length;
    if ( (int)v41 >= 1 )
    {
      v42 = 0LL;
      while ( v42 < (unsigned int)v41 )
      {
        v43 = v19->m_Items[v42];
        v44 = (MaterialCollectionServantListViewItem_o *)sub_1BC3254(MaterialCollectionServantListViewItem_TypeInfo);
        MaterialCollectionServantListViewItem___ctor_32394672(v44, v42, v43, 3, v45);
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          goto LABEL_67;
        v48 = *(_QWORD *)&Instance->fields.m_CachedPtr;
        v49 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( !v48 )
          goto LABEL_67;
        m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v48 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v44,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          v51 = v48 + 8 * m_CancellationTokenSource_low;
          LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v51 + 32) = v44;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 32), (int32_t)v44, v46, v47);
        }
        LODWORD(v41) = v19->max_length;
        if ( (__int64)++v42 >= (int)v41 )
          goto LABEL_56;
      }
      goto LABEL_68;
    }
  }
  else
  {
    if ( !CollectionList )
      goto LABEL_67;
    v52 = *(_QWORD *)&CollectionList->max_length;
    if ( (int)v52 >= 1 )
    {
      v53 = 0LL;
      while ( v53 < (unsigned int)v52 )
      {
        v54 = CollectionList->m_Items[v53];
        v55 = (MaterialCollectionServantListViewItem_o *)sub_1BC3254(MaterialCollectionServantListViewItem_TypeInfo);
        MaterialCollectionServantListViewItem___ctor(v55, v53, v54, kind, v56);
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
            (Il2CppObject *)v55,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
        }
        else
        {
          v62 = v59 + 8 * v61;
          LODWORD(Instance->fields.m_CancellationTokenSource) = v61 + 1;
          *(_QWORD *)(v62 + 32) = v55;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v62 + 32), (int32_t)v55, v57, v58);
        }
        LODWORD(v52) = CollectionList->max_length;
        if ( (__int64)++v53 >= (int)v52 )
          goto LABEL_56;
      }
LABEL_68:
      sub_1BC326C(Instance, v14, v40);
    }
  }
LABEL_56:
  completeSprite = (UnityEngine_Object_o *)this->fields.completeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11692/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
LABEL_67:
    sub_1BC3264(Instance, v14);
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
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  DataManager_o *v20; // x23
  Il2CppObject *MasterData_object; // x22
  struct ListViewSort_o *sort; // x8
  unsigned int sortKind; // w9
  int size; // w23
  MaterialEventLogServantListViewItem_c **v25; // x27
  int32_t i; // w24
  NetworkManager_c *v27; // x0
  int64_t userIdNumber; // x26
  UserServantCollectionEntity_o *Entity; // x26
  Il2CppObject *Item; // x28
  MaterialEventLogServantListViewItem_c **v31; // x20
  MaterialEventLogServantListViewItem_o *v32; // x27
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  __int64 v35; // x8
  _QWORD *v36; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v38; // x8
  System_Collections_Generic_List_object__o *itemList; // x21
  MaterialEventLogListViewItem_Info_o *v40; // x24
  MaterialEventLogServantListViewItem_o *v41; // x22
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  Il2CppClass **v47; // x0
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v49; // x1
  const MethodInfo *v50; // x1
  bool v51; // w1
  const MethodInfo *v52; // x1
  const MethodInfo *v53; // x1
  int m_CancellationTokenSource; // w21
  int32_t v55; // w20
  __int64 methodPtr_low; // x10

  if ( (byte_4AFD24C & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___, *(_QWORD *)&kind);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v6);
    sub_1BC3008(&MaterialEventLogListViewItem_Info_TypeInfo, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__Add__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Count__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__, v12);
    sub_1BC3008(&LocalizationManager_TypeInfo, v13);
    sub_1BC3008(&MaterialEventLogServantListViewItem_TypeInfo, v14);
    sub_1BC3008(&NetworkManager_TypeInfo, v15);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BC3008(&StringLiteral_11693/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/, v17);
    byte_4AFD24C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  v20 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v20,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_42;
  sortKind = sort->fields.sortKind;
  if ( sortKind > 0x1B || ((1 << sortKind) & 0x8000204) == 0 )
    sort->fields.sortKind = 3;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !infos )
    goto LABEL_42;
  size = infos->fields._size;
  v25 = &MaterialEventLogServantListViewItem_TypeInfo;
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4AFC1F1 )
      {
        sub_1BC3008(&NetworkManager_TypeInfo, v19);
        byte_4AFC1F1 = 1;
      }
      v27 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v27 = NetworkManager_TypeInfo;
      }
      userIdNumber = v27->static_fields->userIdNumber;
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)infos,
                                    i,
                                    (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
      if ( !Instance )
        goto LABEL_42;
      if ( !MasterData_object )
        goto LABEL_42;
      Entity = UserServantCollectionMaster__GetEntity(
                 (UserServantCollectionMaster_o *)MasterData_object,
                 userIdNumber,
                 HIDWORD(Instance->fields.masterDataBytes),
                 0LL);
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)infos,
               i,
               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
      v31 = v25;
      v32 = (MaterialEventLogServantListViewItem_o *)sub_1BC3254(*v25);
      MaterialEventLogServantListViewItem___ctor(
        v32,
        i,
        Entity,
        kind,
        (MaterialEventLogListViewItem_Info_o *)Item,
        0,
        0LL);
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        goto LABEL_42;
      v35 = *(_QWORD *)&Instance->fields.m_CachedPtr;
      v36 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !v35 )
        goto LABEL_42;
      m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v35 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v32,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
      }
      else
      {
        v38 = v35 + 8 * m_CancellationTokenSource_low;
        LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v38 + 32) = v32;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v38 + 32), (int32_t)v32, v33, v34);
      }
      v25 = v31;
    }
    if ( Entity )
    {
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v40 = (MaterialEventLogListViewItem_Info_o *)sub_1BC3254(MaterialEventLogListViewItem_Info_TypeInfo);
      MaterialEventLogListViewItem_Info___ctor(v40, 0LL);
      v41 = (MaterialEventLogServantListViewItem_o *)sub_1BC3254(*v31);
      MaterialEventLogServantListViewItem___ctor(v41, size, Entity, kind, v40, 1, 0LL);
      if ( !itemList )
        goto LABEL_42;
      items = itemList->fields._items;
      v45 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        goto LABEL_42;
      v46 = itemList->fields._size;
      if ( (unsigned int)v46 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v41,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = &items->obj.klass + v46;
        itemList->fields._size = v46 + 1;
        v47[4] = (Il2CppClass *)v41;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v47 + 4), (int32_t)v41, v42, v43);
      }
    }
  }
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11693/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_42;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0LL);
  MaterialCollectionServantListViewManager__SortDummyData(this, v49);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  v51 = MaterialCollectionServantListViewManager__GetFilterCount(this, v50) < 1;
  ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v51, 0LL);
  MaterialCollectionServantListViewManager__SetValentineFilterButtonImage(this, v52);
  MaterialCollectionServantListViewManager__ClearNewIcon(this, v53);
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
LABEL_42:
    sub_1BC3264(Instance, v19);
  m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource >= 1 )
  {
    v55 = 0;
    do
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v55,
                                    (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Instance )
        break;
      methodPtr_low = LOBYTE((*v25)->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (MaterialEventLogServantListViewItem_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != *v25 )
      {
        break;
      }
      MaterialEventLogServantListViewItem__SetDummy((MaterialEventLogServantListViewItem_o *)Instance, 0LL);
      if ( m_CancellationTokenSource == ++v55 )
        goto LABEL_43;
      Instance = (DataManager_o *)this->fields.itemList;
    }
    while ( Instance );
    goto LABEL_42;
  }
LABEL_43:
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
}


void __fastcall MaterialCollectionServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialCollectionServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4AFD246 & 1) == 0 )
  {
    sub_1BC3008(&MaterialCollectionServantListViewManager_TypeInfo, v1);
    byte_4AFD246 = 1;
  }
  v2 = MaterialCollectionServantListViewManager_TypeInfo;
  if ( !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo);
    v2 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL)
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->commandCodeSortInfo) == 0LL)
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->EventLogservantSortInfo) == 0LL) )
  {
    sub_1BC3264(servantSortInfo, v1);
  }
  ListViewSort__DeleteContinueData(servantSortInfo, 0LL);
}


void __fastcall MaterialCollectionServantListViewManager__DestroyList(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfo; // x8
  __int64 v5; // x0
  __int64 v6; // x1
  ListViewSort_o *servantEquipSortInfo; // x8
  ListViewSort_o *commandCodeSortInfo; // x8
  ListViewSort_o *EventLogservantSortInfo; // x8

  if ( (byte_4AFD251 & 1) == 0 )
  {
    sub_1BC3008(&MaterialCollectionServantListViewManager_TypeInfo, method);
    byte_4AFD251 = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  v3 = MaterialCollectionServantListViewManager_TypeInfo;
  if ( !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo);
    v3 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  servantSortInfo = v3->static_fields->servantSortInfo;
  if ( servantSortInfo )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      servantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->servantSortInfo;
      if ( !servantSortInfo )
        goto LABEL_28;
    }
    ListViewSort__Save(servantSortInfo, 0LL);
    v3 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  servantEquipSortInfo = v3->static_fields->servantEquipSortInfo;
  if ( servantEquipSortInfo )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      servantEquipSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo;
      if ( !servantEquipSortInfo )
        goto LABEL_28;
    }
    ListViewSort__Save(servantEquipSortInfo, 0LL);
    v3 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  commandCodeSortInfo = v3->static_fields->commandCodeSortInfo;
  if ( commandCodeSortInfo )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      commandCodeSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->commandCodeSortInfo;
      if ( !commandCodeSortInfo )
        goto LABEL_28;
    }
    ListViewSort__Save(commandCodeSortInfo, 0LL);
    v3 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v3->static_fields->EventLogservantSortInfo;
  if ( EventLogservantSortInfo )
  {
    if ( v3->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v3),
          (EventLogservantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->EventLogservantSortInfo) != 0LL) )
    {
      ListViewSort__Save(EventLogservantSortInfo, 0LL);
      return;
    }
LABEL_28:
    sub_1BC3264(v5, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewManager__EndEventLogSortKind(
        MaterialCollectionServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  MaterialEventLogServantSortSelectMenu_o *eventLogServantSortSelectMenu; // x0
  MaterialCollectionServantListViewManager_o *v7; // x0
  const MethodInfo *v8; // x1
  UnityEngine_Object_o *MaterialEventLogListViewManager; // x21
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  int32_t FilterCount; // w20

  if ( (byte_4AFD25E & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, isDecide);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    byte_4AFD25E = 1;
  }
  eventLogServantSortSelectMenu = this->fields.eventLogServantSortSelectMenu;
  if ( !eventLogServantSortSelectMenu )
    goto LABEL_15;
  MaterialEventLogServantSortSelectMenu__Close(eventLogServantSortSelectMenu, 0LL);
  MaterialEventLogListViewManager = (UnityEngine_Object_o *)MaterialCollectionServantListViewManager__GetMaterialEventLogListViewManager(
                                                              v7,
                                                              v8);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  MaterialCollectionServantListViewManager__AllInitInactiveDummy(this, v10);
  if ( !this->fields.itemList )
LABEL_15:
    sub_1BC3264(eventLogServantSortSelectMenu, isDecide);
  FilterCount = MaterialCollectionServantListViewManager__GetFilterCount(this, (const MethodInfo *)isDecide);
  if ( FilterCount <= 11 )
    MaterialCollectionServantListViewManager__InactiveDummy(this, v11);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, FilterCount < 1, 0LL);
  ListViewManager__ScreenUpdate((ListViewManager_o *)this, 0LL);
LABEL_14:
  MaterialCollectionServantListViewManager__SetValentineFilterButtonImage(this, (const MethodInfo *)isDecide);
}


void __fastcall MaterialCollectionServantListViewManager__EndSelectSortKind(
        MaterialCollectionServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  MaterialCollectionServantSortSelectMenu_o *sortSelectMenu; // x0
  const MethodInfo *v6; // x1

  sortSelectMenu = this->fields.sortSelectMenu;
  if ( !sortSelectMenu )
    sub_1BC3264(0LL, isDecide);
  MaterialCollectionServantSortSelectMenu__Close_32424132(sortSelectMenu, 0LL, method);
  MaterialCollectionServantListViewManager__SetFilterButtonImage(this, v6);
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall MaterialCollectionServantListViewManager__EventLogSortKind(
        MaterialCollectionServantListViewManager_o *this,
        MaterialEventLogServantSortSelectMenu_o *eventLogServantSortSelectMenu,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ListViewSort_o *sort; // x21
  MaterialEventLogServantSortSelectMenu_CallbackFunc_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4AFD25C & 1) == 0 )
  {
    sub_1BC3008(&MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo, eventLogServantSortSelectMenu);
    sub_1BC3008(&Method_MaterialCollectionServantListViewManager_EndEventLogSortKind__, v5);
    byte_4AFD25C = 1;
  }
  if ( this->fields.isInput )
  {
    sort = this->fields.sort;
    v7 = (MaterialEventLogServantSortSelectMenu_CallbackFunc_o *)sub_1BC3254(MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo);
    MaterialEventLogServantSortSelectMenu_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_MaterialCollectionServantListViewManager_EndEventLogSortKind__,
      0LL);
    if ( !eventLogServantSortSelectMenu )
      sub_1BC3264(v8, v9);
    MaterialEventLogServantSortSelectMenu__Open(eventLogServantSortSelectMenu, 0, sort, v7, 0LL);
  }
}


void __fastcall MaterialCollectionServantListViewManager__EventLogSortListSave(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_c *v2; // x0
  ListViewSort_o *EventLogservantSortInfo; // x8
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4AFD264 & 1) == 0 )
  {
    sub_1BC3008(&MaterialCollectionServantListViewManager_TypeInfo, method);
    byte_4AFD264 = 1;
  }
  v2 = MaterialCollectionServantListViewManager_TypeInfo;
  if ( !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo);
    v2 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v2->static_fields->EventLogservantSortInfo;
  if ( EventLogservantSortInfo )
  {
    if ( !v2->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v2);
      EventLogservantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->EventLogservantSortInfo;
      if ( !EventLogservantSortInfo )
        sub_1BC3264(v4, v5);
    }
    ListViewSort__Save(EventLogservantSortInfo, 0LL);
  }
}


int32_t __fastcall MaterialCollectionServantListViewManager__GetFilterCount(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w22
  int32_t v7; // w21
  int32_t v8; // w20
  __int64 methodPtr_low; // x10

  if ( (byte_4AFD25D & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    sub_1BC3008(&MaterialEventLogServantListViewItem_TypeInfo, v4);
    byte_4AFD25D = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_13;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v7,
                                                                (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(MaterialEventLogServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (MaterialEventLogServantListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialEventLogServantListViewItem_TypeInfo )
      {
        break;
      }
      if ( !LOBYTE(itemList[4].fields._syncRoot) )
        v8 += MaterialEventLogServantListViewItem__IsItemMatchFilter(
                (MaterialEventLogServantListViewItem_o *)itemList,
                this->fields.sort,
                0LL);
      if ( size == ++v7 )
        return v8;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_13:
    sub_1BC3264(itemList, method);
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
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  MaterialCollectionServantListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  v4 = this;
  if ( (byte_4AFD252 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&index);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    this = (MaterialCollectionServantListViewManager_o *)sub_1BC3008(
                                                           &MaterialCollectionServantListViewItem_TypeInfo,
                                                           v6);
    byte_4AFD252 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    sub_1BC3264(this, *(_QWORD *)&index);
  result = 0LL;
  if ( (index & 0x80000000) == 0 && itemList->fields._size > index )
  {
    result = (MaterialCollectionServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                          (System_Collections_Generic_List_object__o *)v4->fields.itemList,
                                                          index,
                                                          (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v2; // x1
  __int64 v3; // x1
  MaterialEventLogListViewManager_o *result; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x19
  bool v7; // w8
  __int64 methodPtr_low; // x10
  bool v9; // w8
  __int64 v10; // x19
  bool v11; // w8

  if ( (byte_4AFD24A & 1) == 0 )
  {
    sub_1BC3008(&MyRoomRootComponent_TypeInfo, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v2);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_4AFD24A = 1;
  }
  result = (MaterialEventLogListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !result )
    goto LABEL_22;
  dropObjectList = result->fields.dropObjectList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)dropObjectList, 0LL, 0LL);
  result = 0LL;
  if ( !v7 )
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)dropObjectList, 0LL, 0LL);
    result = 0LL;
    if ( !v9 )
    {
      if ( !dropObjectList )
        goto LABEL_22;
      v10 = *(_QWORD *)&dropObjectList[1].fields._size;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v10, 0LL, 0LL);
      result = 0LL;
      if ( !v11 )
      {
        if ( v10 )
          return *(MaterialEventLogListViewManager_o **)(v10 + 416);
LABEL_22:
        sub_1BC3264(result, v5);
      }
    }
  }
  return result;
}


void __fastcall MaterialCollectionServantListViewManager__InactiveDummy(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w21
  int32_t v11; // w20
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v13; // x19
  int32_t v14; // w20
  Il2CppObject *Component_object; // x21

  if ( (byte_4AFD266 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__, v6);
    sub_1BC3008(&MaterialEventLogServantListViewItem_TypeInfo, v7);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v8);
    byte_4AFD266 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_24;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v11 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v11,
                                                                (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(MaterialEventLogServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (MaterialEventLogServantListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialEventLogServantListViewItem_TypeInfo )
      {
        break;
      }
      MaterialEventLogServantListViewItem__InactiveDummy((MaterialEventLogServantListViewItem_o *)itemList, 0LL);
      if ( size == ++v11 )
        goto LABEL_12;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_24:
    sub_1BC3264(itemList, method);
  }
LABEL_12:
  itemList = (System_Collections_Generic_List_object__o *)MaterialCollectionServantListViewManager__get_ObjectList(
                                                            this,
                                                            method);
  if ( !itemList )
    goto LABEL_24;
  v13 = itemList;
  if ( itemList->fields._size >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                v13,
                                                                v14,
                                                                (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__);
      if ( !itemList )
        goto LABEL_24;
      itemList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)itemList,
                                                                0LL);
      if ( !itemList )
        goto LABEL_24;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)itemList,
                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      if ( ++v14 >= v13->fields._size )
        return;
    }
  }
}


void __fastcall MaterialCollectionServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialCollectionServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4AFD247 & 1) == 0 )
  {
    sub_1BC3008(&MaterialCollectionServantListViewManager_TypeInfo, v1);
    byte_4AFD247 = 1;
  }
  v2 = MaterialCollectionServantListViewManager_TypeInfo;
  if ( !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo);
    v2 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL)
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->commandCodeSortInfo) == 0LL)
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->EventLogservantSortInfo) == 0LL) )
  {
    sub_1BC3264(servantSortInfo, v1);
  }
  ListViewSort__InitLoad(servantSortInfo, 0LL);
}


void __fastcall MaterialCollectionServantListViewManager__ModifyItem(
        MaterialCollectionServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewManager__RequestListObject_32406968(this, 4, method);
}


void __fastcall MaterialCollectionServantListViewManager__ModifyList(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v8; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v10; // x21
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x22

  if ( (byte_4AFD253 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    sub_1BC3008(&MaterialCollectionServantListViewItem_TypeInfo, v4);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    byte_4AFD253 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_1BC3264(itemList, method);
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               itemList,
               v8,
               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v10 = (ListViewItem_o *)Item;
        methodPtr_low = LOBYTE(MaterialCollectionServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (MaterialCollectionServantListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == MaterialCollectionServantListViewItem_TypeInfo )
        {
          monitor = (UnityEngine_Object_o *)Item[6].monitor;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
          {
            itemList = (System_Collections_Generic_List_object__o *)v10->fields.viewObject;
            if ( !itemList )
              goto LABEL_16;
            ListViewObject__SetItemSeed((ListViewObject_o *)itemList, v10, this->fields.seed, 0LL);
          }
        }
      }
      if ( size == ++v8 )
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  MaterialCollectionServantListViewManager_o *v10; // x0
  int v11; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  int32_t v14; // w1
  UISprite_o *scaleChangeTabSprite; // x20
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2

  if ( (byte_4AFD263 & 1) == 0 )
  {
    sub_1BC3008(&Method_MaterialCollectionServantListViewManager_OnClickScaleChange__, method);
    byte_4AFD263 = 1;
  }
  v3 = Method_MaterialCollectionServantListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_MaterialCollectionServantListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BC3020(Method_MaterialCollectionServantListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v10 = this;
    v11 = 2;
    goto LABEL_11;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v10 = this;
    v11 = 3;
    goto LABEL_11;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v10 = this;
    v11 = 1;
LABEL_11:
    v10->fields.seed = smallSizeSeed;
    p_seed = &v10->fields.seed;
    *((_DWORD *)p_seed + 77) = v11;
    sub_1BC2FAC((CGThumbnailListItem_o *)p_seed, (int32_t)smallSizeSeed, v6, v7);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v14 = this->fields.scaleType,
        sort->fields.iconScaleKind = v14,
        scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v14, 0LL),
        !scaleChangeTabSprite)
    || (UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)sort, 0LL), (sort = this->fields.sort) == 0LL) )
  {
    sub_1BC3264(sort, v5);
  }
  ListViewSort__Save(sort, 0LL);
  MaterialCollectionServantListViewManager__ModifyList(this, v16);
  MaterialCollectionServantListViewManager__SetMode_32390768(this, 2, v17);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall MaterialCollectionServantListViewManager__OnClickSelectListView(
        MaterialCollectionServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *v5; // x20
  struct ListViewItem_o *linkItem; // x8
  CGThumbnailListItem_c *klass; // x21
  __int64 methodPtr_low; // x10
  unsigned int Index; // w0

  v5 = (CGThumbnailListItem_o *)this;
  if ( (byte_4AFD259 & 1) == 0 )
  {
    this = (MaterialCollectionServantListViewManager_o *)sub_1BC3008(&MaterialEventLogServantListViewItem_TypeInfo, obj);
    byte_4AFD259 = 1;
  }
  if ( !obj )
    sub_1BC3264(this, obj);
  linkItem = obj->fields.linkItem;
  klass = v5[3].klass;
  if ( !linkItem
    || (methodPtr_low = LOBYTE(MaterialEventLogServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MaterialEventLogServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialEventLogServantListViewItem_TypeInfo )
  {
    v5[3].klass = 0LL;
    sub_1BC2FAC(v5 + 3, 0, (int32_t)method, v3);
  }
  if ( klass )
  {
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(Il2CppClass *, __int64, _QWORD, _QWORD))klass->_1.namespaze)(
      klass->_1.element_class,
      1LL,
      Index,
      *(_QWORD *)&klass->_1.byval_arg.bits);
  }
}


void __fastcall MaterialCollectionServantListViewManager__OnClickSortAscendingOrder(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  ListViewSort_o *v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4AFD25F & 1) == 0 )
  {
    sub_1BC3008(&Method_MaterialCollectionServantListViewManager_OnClickSortAscendingOrder__, method);
    byte_4AFD25F = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_MaterialCollectionServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_MaterialCollectionServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_MaterialCollectionServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort
      || (sort->fields.isAscendingOrder ^= 1u,
          ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL),
          (v5 = this->fields.sort) == 0LL) )
    {
      sub_1BC3264(v5, v6);
    }
    ListViewSort__Save(v5, 0LL);
  }
}


void __fastcall MaterialCollectionServantListViewManager__OnClickSortKind(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x0
  __int64 v8; // x1
  struct ListViewSort_o *sort; // x20
  int32_t listViewKind; // w8
  struct MaterialCollectionServantSortSelectMenu_o *v11; // x21
  MaterialCollectionServantSortSelectMenu_CallbackFunc_o *v12; // x22
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x4
  MaterialCollectionServantSortSelectMenu_o *v15; // x0
  int32_t v16; // w1
  struct MaterialCollectionServantSortSelectMenu_o *sortSelectMenu; // x21
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3

  if ( (byte_4AFD25B & 1) == 0 )
  {
    sub_1BC3008(&MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_MaterialCollectionServantListViewManager_EndSelectSortKind__, v3);
    sub_1BC3008(&Method_MaterialCollectionServantListViewManager_OnClickSortKind__, v4);
    byte_4AFD25B = 1;
  }
  if ( !this->fields.isInput )
    return;
  v5 = Method_MaterialCollectionServantListViewManager_OnClickSortKind__;
  if ( (*((_BYTE *)Method_MaterialCollectionServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BC3020(Method_MaterialCollectionServantListViewManager_OnClickSortKind__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_19;
  listViewKind = sort->fields.listViewKind;
  switch ( listViewKind )
  {
    case 3:
      sortSelectMenu = this->fields.sortSelectMenu;
      v12 = (MaterialCollectionServantSortSelectMenu_CallbackFunc_o *)sub_1BC3254(MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo);
      MaterialCollectionServantSortSelectMenu_CallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_MaterialCollectionServantListViewManager_EndSelectSortKind__,
        v18);
      if ( !sortSelectMenu )
        goto LABEL_19;
      v16 = 3;
      goto LABEL_17;
    case 1:
      sortSelectMenu = this->fields.sortSelectMenu;
      v12 = (MaterialCollectionServantSortSelectMenu_CallbackFunc_o *)sub_1BC3254(MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo);
      MaterialCollectionServantSortSelectMenu_CallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_MaterialCollectionServantListViewManager_EndSelectSortKind__,
        v19);
      if ( !sortSelectMenu )
        goto LABEL_19;
      v16 = 1;
LABEL_17:
      v15 = sortSelectMenu;
      goto LABEL_18;
    case 0:
      v11 = this->fields.sortSelectMenu;
      v12 = (MaterialCollectionServantSortSelectMenu_CallbackFunc_o *)sub_1BC3254(MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo);
      MaterialCollectionServantSortSelectMenu_CallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_MaterialCollectionServantListViewManager_EndSelectSortKind__,
        v13);
      if ( v11 )
      {
        v15 = v11;
        v16 = 0;
LABEL_18:
        MaterialCollectionServantSortSelectMenu__Open(v15, v16, sort, v12, v14);
        return;
      }
LABEL_19:
      sub_1BC3264(v7, v8);
  }
}


void __fastcall MaterialCollectionServantListViewManager__OnLongPushListView(
        MaterialCollectionServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *v5; // x20
  struct ListViewItem_o *linkItem; // x8
  CGThumbnailListItem_c *klass; // x21
  __int64 methodPtr_low; // x10
  unsigned int Index; // w0

  v5 = (CGThumbnailListItem_o *)this;
  if ( (byte_4AFD25A & 1) == 0 )
  {
    this = (MaterialCollectionServantListViewManager_o *)sub_1BC3008(&MaterialEventLogServantListViewItem_TypeInfo, obj);
    byte_4AFD25A = 1;
  }
  if ( !obj )
    sub_1BC3264(this, obj);
  linkItem = obj->fields.linkItem;
  klass = v5[3].klass;
  if ( !linkItem
    || (methodPtr_low = LOBYTE(MaterialEventLogServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MaterialEventLogServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialEventLogServantListViewItem_TypeInfo )
  {
    v5[3].klass = 0LL;
    sub_1BC2FAC(v5 + 3, 0, (int32_t)method, v3);
  }
  if ( klass )
  {
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(Il2CppClass *, __int64, _QWORD, _QWORD))klass->_1.namespaze)(
      klass->_1.element_class,
      1LL,
      Index,
      *(_QWORD *)&klass->_1.byval_arg.bits);
  }
}


void __fastcall MaterialCollectionServantListViewManager__OnMoveEnd(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4AFD258 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFD258 = 1;
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
      if ( !UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
        goto LABEL_14;
      v10 = this->fields.scrollView;
      if ( v10 )
      {
        ((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
        v10 = this->fields.scrollView;
        if ( v10 )
        {
          if ( (((__int64 (__fastcall *)(UIScrollView_o *, Il2CppMethodPointer))v10->klass->vtable._6_get_shouldMoveVertically.method)(
                  v10,
                  v10->klass->vtable._7_get_shouldMove.methodPtr) & 1) == 0 )
            goto LABEL_14;
          v10 = this->fields.scrollView;
          if ( v10 )
          {
            UIScrollView__UpdatePosition(v10, 0LL);
LABEL_14:
            callbackFunc2 = this->fields.callbackFunc2;
            this->fields.callbackFunc2 = 0LL;
            sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
            if ( callbackFunc2 )
              ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
                callbackFunc2->fields.original_method_info,
                *(_QWORD *)&callbackFunc2->fields.extra_arg);
            return;
          }
        }
      }
      sub_1BC3264(v10, v7);
    }
  }
}


void __fastcall MaterialCollectionServantListViewManager__RefrashListDisp(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v5; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w21

  if ( (byte_4AFD250 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__, v3);
    byte_4AFD250 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)MaterialCollectionServantListViewManager__get_ObjectList(
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
                                                                  (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__);
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
    sub_1BC3264(ObjectList, v5);
  }
}


void __fastcall MaterialCollectionServantListViewManager__RequestInto(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *ObjectList; // x0
  __int64 v9; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v11; // x20
  int v12; // w24
  int32_t v13; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v15; // x23
  const MethodInfo *v16; // x3

  if ( (byte_4AFD257 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__, v4);
    sub_1BC3008(&Method_MaterialCollectionServantListViewManager_OnMoveEnd__, v5);
    sub_1BC3008(&StringLiteral_9854/*"OnMoveEnd"*/, v6);
    byte_4AFD257 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ObjectList = MaterialCollectionServantListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_13:
    sub_1BC3264(ObjectList, v9);
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
             (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0LL) )
    {
      v15 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_MaterialCollectionServantListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        goto LABEL_13;
      ++v12;
      MaterialCollectionServantListViewObject__Init_32408580(
        (MaterialCollectionServantListViewObject_o *)Item,
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
      (System_String_o *)StringLiteral_9854/*"OnMoveEnd"*/,
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

  if ( (byte_4AFD255 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__Dispose__,
      v7);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__MoveNext__,
      v8);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__get_Current__,
      v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__GetEnumerator__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__, v11);
    sub_1BC3008(&Method_MaterialCollectionServantListViewManager_OnMoveEnd__, v12);
    sub_1BC3008(&StringLiteral_9854/*"OnMoveEnd"*/, v13);
    byte_4AFD255 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)MaterialCollectionServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BC3264(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9854/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_MaterialCollectionServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BC3264(v19, v20);
      MaterialCollectionServantListViewObject__Init_32408580(
        (MaterialCollectionServantListViewObject_o *)current,
        mode,
        v18,
        delay,
        v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewManager__RequestListObject_32406968(
        MaterialCollectionServantListViewManager_o *this,
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

  if ( (byte_4AFD256 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__Dispose__,
      v5);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__MoveNext__,
      v6);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__get_Current__,
      v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__GetEnumerator__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__, v9);
    sub_1BC3008(&Method_MaterialCollectionServantListViewManager_OnMoveEnd__, v10);
    sub_1BC3008(&StringLiteral_9854/*"OnMoveEnd"*/, v11);
    byte_4AFD256 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)MaterialCollectionServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BC3264(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9854/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_MaterialCollectionServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BC3264(v17, v18);
      MaterialCollectionServantListViewObject__Init_32408680(
        (MaterialCollectionServantListViewObject_o *)current,
        mode,
        v16,
        v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__Dispose__);
  }
}


void __fastcall MaterialCollectionServantListViewManager__SetFilterButtonImage(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ListViewSort_o *sort; // x0
  System_String_o **v7; // x9
  System_String_o **v8; // x20
  UnityEngine_Color_o v9; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4AFD24E & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_17289/*"btn_bg_05"*/, method);
    sub_1BC3008(&StringLiteral_17290/*"btn_bg_06"*/, v3);
    sub_1BC3008(&StringLiteral_421/*"#FE4545"*/, v4);
    sub_1BC3008(&StringLiteral_402/*"#000000"*/, v5);
    byte_4AFD24E = 1;
  }
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_12;
  sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL);
  if ( !this->fields.filterSprite )
    goto LABEL_12;
  v7 = (System_String_o **)&StringLiteral_17289/*"btn_bg_05"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v7 = (System_String_o **)&StringLiteral_17290/*"btn_bg_06"*/;
  v8 = ((unsigned __int8)sort & 1) != 0
     ? (System_String_o **)&StringLiteral_402/*"#000000"*/
     : (System_String_o **)&StringLiteral_421/*"#FE4545"*/;
  UISprite__set_spriteName(this->fields.filterSprite, *v7, 0LL);
  *(_QWORD *)&v9.fields.r = 0LL;
  *(_QWORD *)&v9.fields.b = 0LL;
  UnityEngine_ColorUtility__TryParseHtmlString(*v8, &v9, 0LL);
  sort = (ListViewSort_o *)this->fields.sortKindLabel;
  if ( !sort )
LABEL_12:
    sub_1BC3264(sort, method);
  UILabel__set_effectColor((UILabel_o *)sort, v9, 0LL);
}


void __fastcall MaterialCollectionServantListViewManager__SetMode(
        MaterialCollectionServantListViewManager_o *this,
        int32_t mode,
        MaterialCollectionServantListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  MaterialCollectionServantListViewManager__SetMode_32390768(this, mode, v6);
}


void __fastcall MaterialCollectionServantListViewManager__SetMode_32390768(
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
    MaterialCollectionServantListViewManager__RequestListObject_32406968(this, v6, v5);
  }
}


void __fastcall MaterialCollectionServantListViewManager__SetMode_32408004(
        MaterialCollectionServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  MaterialCollectionServantListViewManager__SetMode_32390768(this, mode, v6);
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
  if ( (byte_4AFD254 & 1) == 0 )
  {
    this = (MaterialCollectionServantListViewManager_o *)sub_1BC3008(
                                                           &MaterialCollectionServantListViewObject_TypeInfo,
                                                           obj);
    byte_4AFD254 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(MaterialCollectionServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MaterialCollectionServantListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialCollectionServantListViewObject_TypeInfo )
  {
    sub_1BC3264(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  MaterialCollectionServantListViewObject__Init_32407928(
    (MaterialCollectionServantListViewObject_o *)obj,
    v7,
    (const MethodInfo *)item);
}


void __fastcall MaterialCollectionServantListViewManager__SetSort(
        MaterialCollectionServantListViewManager_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.sort = sort;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)sort, (int32_t)method, v3);
}


void __fastcall MaterialCollectionServantListViewManager__SetSortButtonImage(
        MaterialCollectionServantListViewManager_o *this,
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
  System_String_o **v18; // x9
  System_String_o **v19; // x10
  System_String_o **v20; // x8
  System_String_o **v21; // x8

  if ( (byte_4AFD262 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&StringLiteral_17368/*"btn_sort_up"*/, v3);
    sub_1BC3008(&StringLiteral_17463/*"btn_txt_up"*/, v4);
    sub_1BC3008(&StringLiteral_17416/*"btn_txt_new"*/, v5);
    sub_1BC3008(&StringLiteral_17406/*"btn_txt_down"*/, v6);
    sub_1BC3008(&StringLiteral_17423/*"btn_txt_old"*/, v7);
    sub_1BC3008(&StringLiteral_17365/*"btn_sort_down"*/, v8);
    byte_4AFD262 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_34;
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v12 )
      goto LABEL_34;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17423/*"btn_txt_old"*/ : &StringLiteral_17416/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v18 = (System_String_o **)&StringLiteral_17365/*"btn_sort_down"*/;
              v19 = (System_String_o **)&StringLiteral_17368/*"btn_sort_up"*/;
LABEL_30:
              if ( v17->fields.isAscendingOrder )
                v21 = v18;
              else
                v21 = v19;
              UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
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
          v20 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17463/*"btn_txt_up"*/ : &StringLiteral_17406/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v18 = (System_String_o **)&StringLiteral_17368/*"btn_sort_up"*/;
              v19 = (System_String_o **)&StringLiteral_17365/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1BC3264(sort, v10);
  }
}


void __fastcall MaterialCollectionServantListViewManager__SetValentineFilterButtonImage(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ListViewSort_o *sort; // x0
  System_String_o **v7; // x9
  System_String_o **v8; // x20
  UnityEngine_Color_o v9; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4AFD24F & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_421/*"#FE4545"*/, method);
    sub_1BC3008(&StringLiteral_17332/*"btn_filter_on"*/, v3);
    sub_1BC3008(&StringLiteral_402/*"#000000"*/, v4);
    sub_1BC3008(&StringLiteral_17331/*"btn_filter"*/, v5);
    byte_4AFD24F = 1;
  }
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_12;
  sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL);
  if ( !this->fields.filterSprite )
    goto LABEL_12;
  v7 = (System_String_o **)&StringLiteral_17331/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v7 = (System_String_o **)&StringLiteral_17332/*"btn_filter_on"*/;
  v8 = ((unsigned __int8)sort & 1) != 0
     ? (System_String_o **)&StringLiteral_402/*"#000000"*/
     : (System_String_o **)&StringLiteral_421/*"#FE4545"*/;
  UISprite__set_spriteName(this->fields.filterSprite, *v7, 0LL);
  *(_QWORD *)&v9.fields.r = 0LL;
  *(_QWORD *)&v9.fields.b = 0LL;
  UnityEngine_ColorUtility__TryParseHtmlString(*v8, &v9, 0LL);
  sort = (ListViewSort_o *)this->fields.sortKindLabel;
  if ( !sort )
LABEL_12:
    sub_1BC3264(sort, method);
  UILabel__set_effectColor((UILabel_o *)sort, v9, 0LL);
}


void __fastcall MaterialCollectionServantListViewManager__SortAscendingOrder(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct ListViewSort_o *v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *sort; // x8
  UnityEngine_Object_o *MaterialEventLogListViewManager; // x20
  const MethodInfo *v10; // x1
  bool v11; // w1

  if ( (byte_4AFD260 & 1) == 0 )
  {
    sub_1BC3008(&Method_MaterialCollectionServantListViewManager_SortAscendingOrder__, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    byte_4AFD260 = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_MaterialCollectionServantListViewManager_SortAscendingOrder__;
    if ( (*((_BYTE *)Method_MaterialCollectionServantListViewManager_SortAscendingOrder__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BC3020(Method_MaterialCollectionServantListViewManager_SortAscendingOrder__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( sort )
    {
      sort->fields.isAscendingOrder ^= 1u;
      MaterialEventLogListViewManager = (UnityEngine_Object_o *)MaterialCollectionServantListViewManager__GetMaterialEventLogListViewManager(
                                                                  (MaterialCollectionServantListViewManager_o *)v6,
                                                                  v7);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v6 = (struct ListViewSort_o *)UnityEngine_Object__op_Inequality(MaterialEventLogListViewManager, 0LL, 0LL);
      if ( ((unsigned __int8)v6 & 1) != 0 )
      {
        if ( !MaterialEventLogListViewManager )
          goto LABEL_15;
        MaterialEventLogListViewManager__SetSort(
          (MaterialEventLogListViewManager_o *)MaterialEventLogListViewManager,
          this->fields.sort,
          0LL);
      }
      MaterialCollectionServantListViewManager__SortDummyData(this, v7);
      ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
      v11 = MaterialCollectionServantListViewManager__GetFilterCount(this, v10) < 1;
      ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v11, 0LL);
      ListViewManager__ScreenUpdate((ListViewManager_o *)this, 0LL);
      v6 = this->fields.sort;
      if ( v6 )
      {
        ListViewSort__Save(v6, 0LL);
        ((void (__fastcall *)(MaterialCollectionServantListViewManager_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
          this,
          this->klass->vtable._6_GetFocusItemIndex.methodPtr);
        return;
      }
    }
LABEL_15:
    sub_1BC3264(v6, v7);
  }
}


void __fastcall MaterialCollectionServantListViewManager__SortDummyData(
        MaterialCollectionServantListViewManager_o *this,
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
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w23
  System_Collections_Generic_List_object__o *v16; // x0
  System_Collections_Generic_List_object__o *v17; // x20
  int32_t v18; // w21
  ListViewItem_o *v19; // x22
  __int64 methodPtr_low; // x10
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  DataManager_o *v26; // x1
  Il2CppClass **v27; // x0
  struct ListViewSort_o *sort; // x8
  int32_t v29; // w1

  if ( (byte_4AFD261 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__Add__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_MaterialEventLogServantListViewItem___ctor__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_1BC3008(&System_Collections_Generic_List_ListViewItem__TypeInfo, v8);
    sub_1BC3008(&System_Collections_Generic_List_MaterialEventLogServantListViewItem__TypeInfo, v9);
    sub_1BC3008(&MaterialEventLogServantListViewItem_TypeInfo, v10);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4AFD261 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_27;
  size = itemList->fields._size;
  v16 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_MaterialEventLogServantListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_MaterialEventLogServantListViewItem___ctor__);
  v17 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  if ( size >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v18,
                                    (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Instance )
        break;
      v19 = (ListViewItem_o *)Instance;
      methodPtr_low = LOBYTE(MaterialEventLogServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (MaterialEventLogServantListViewItem_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialEventLogServantListViewItem_TypeInfo )
      {
        break;
      }
      if ( LOBYTE(Instance[1].fields.datalist) )
      {
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          break;
        Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)Instance,
                                      v18,
                                      (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !v17 )
          break;
        items = v17->fields._items;
        v24 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v17->fields._version;
        if ( !items )
          break;
        v25 = v17->fields._size;
        v26 = Instance;
        if ( (unsigned int)v25 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            (Il2CppObject *)Instance,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + v25;
          v17->fields._size = v25 + 1;
          v27[4] = (Il2CppClass *)v26;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v26, v21, v22);
        }
        sort = this->fields.sort;
        if ( !sort )
          break;
        if ( sort->fields.isAscendingOrder )
        {
          v29 = v18 + 999;
          v19->fields.index = v18 + 999;
        }
        else
        {
          v19->fields.index = -1;
          v29 = -1;
        }
        ListViewItem__SetSortIndex(v19, v29, 0LL);
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          break;
        Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)Instance,
                                      v18,
                                      (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Instance )
          break;
        ListViewItem__Set((ListViewItem_o *)Instance, v19, 0LL);
      }
      MaterialEventLogServantListViewItem__DummyVisible((MaterialEventLogServantListViewItem_o *)v19, 0LL);
      if ( size == ++v18 )
        return;
    }
LABEL_27:
    sub_1BC3264(Instance, v13);
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

  if ( (byte_4AFD242 & 1) == 0 )
  {
    sub_1BC3008(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_4AFD242 = 1;
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
    v8 = sub_1BFD098(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MaterialCollectionServantListViewManager_o *)sub_1BC3524(v7);
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

  if ( (byte_4AFD244 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, value);
    byte_4AFD244 = 1;
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
    v8 = sub_1BFD098(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MaterialCollectionServantListViewManager_o *)sub_1BC3524(v7);
  MaterialCollectionServantListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *__fastcall MaterialCollectionServantListViewManager__get_ClippingObjectList(
        MaterialCollectionServantListViewManager_o *this,
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
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  _BOOL8 v24; // x0
  __int64 v25; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4AFD249 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_MaterialCollectionServantListViewObject__TypeInfo, v9);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v10);
    byte_4AFD249 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_MaterialCollectionServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BC3264(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BC3264(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1BC3264(0LL, v18);
      Item = (ListViewItem_o *)MaterialCollectionServantListViewObject__GetItem(
                                 (MaterialCollectionServantListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1BC3264(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v24 = ListViewManager__ClippingItem_42785324((ListViewManager_o *)this, Item, 0LL);
        if ( v24 )
        {
          if ( !v11 )
            sub_1BC3264(v24, v25);
          items = v11->fields._items;
          v27 = Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1BC3264(v24, v25);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1BC3264(Item, v21);
        items = v11->fields._items;
        v27 = Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1BC3264(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v29 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v19, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *)v11;
}


System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *__fastcall MaterialCollectionServantListViewManager__get_ObjectList(
        MaterialCollectionServantListViewManager_o *this,
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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4AFD248 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_MaterialCollectionServantListViewObject__TypeInfo, v9);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v10);
    byte_4AFD248 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_MaterialCollectionServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BC3264(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BC3264(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1BC3264(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BC3264(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *)v11;
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

  if ( (byte_4AFD243 & 1) == 0 )
  {
    sub_1BC3008(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_4AFD243 = 1;
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
    v8 = sub_1BFD098(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MaterialCollectionServantListViewManager_o *)sub_1BC3524(v7);
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

  if ( (byte_4AFD245 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, value);
    byte_4AFD245 = 1;
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
    v8 = sub_1BFD098(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1BC3524(v7);
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A063D8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A06380;
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
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = index;
  v16 = kind;
  if ( (byte_4AFD269 & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1BC3008(&MaterialCollectionServantListViewManager_ResultKind_TypeInfo, v9);
    byte_4AFD269 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             MaterialCollectionServantListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&index,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, v14, callback, object);
}


void __fastcall MaterialCollectionServantListViewManager_CallbackFunc__EndInvoke(
        MaterialCollectionServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
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