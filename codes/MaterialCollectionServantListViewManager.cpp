void MaterialCollectionServantListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ListViewSort_o *v8; // x19
  struct MaterialCollectionServantListViewManager_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  ListViewSort_o *v16; // x19
  struct MaterialCollectionServantListViewManager_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  ListViewSort_o *v24; // x19
  struct MaterialCollectionServantListViewManager_StaticFields *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7

  if ( (byte_4D27930 & 1) == 0 )
  {
    sub_1C94098(&ListViewSort_TypeInfo);
    sub_1C94098(&MaterialCollectionServantListViewManager_TypeInfo);
    sub_1C94098(&StringLiteral_8979/*"MaterialCollectionServant2"*/);
    sub_1C94098(&StringLiteral_8980/*"MaterialCollectionServant4"*/);
    sub_1C94098(&StringLiteral_8978/*"MaterialCollectionServant1"*/);
    sub_1C94098(&StringLiteral_8981/*"MaterialCollectionServant5"*/);
    byte_4D27930 = 1;
  }
  v1 = (ListViewSort_o *)sub_1C942E4(ListViewSort_TypeInfo);
  ListViewSort___ctor_44628284(v1, (System_String_o *)StringLiteral_8978/*"MaterialCollectionServant1"*/, 27, 1, 0);
  MaterialCollectionServantListViewManager_TypeInfo->static_fields->servantSortInfo = v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)MaterialCollectionServantListViewManager_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v8 = (ListViewSort_o *)sub_1C942E4(ListViewSort_TypeInfo);
  ListViewSort___ctor_44628284(v8, (System_String_o *)StringLiteral_8979/*"MaterialCollectionServant2"*/, 27, 1, 0);
  static_fields = MaterialCollectionServantListViewManager_TypeInfo->static_fields;
  static_fields->servantEquipSortInfo = v8;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->servantEquipSortInfo,
    (int32_t)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (ListViewSort_o *)sub_1C942E4(ListViewSort_TypeInfo);
  ListViewSort___ctor_44628284(v16, (System_String_o *)StringLiteral_8980/*"MaterialCollectionServant4"*/, 27, 1, 0);
  v17 = MaterialCollectionServantListViewManager_TypeInfo->static_fields;
  v17->commandCodeSortInfo = v16;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v17->commandCodeSortInfo, (int32_t)v16, v18, v19, v20, v21, v22, v23);
  v24 = (ListViewSort_o *)sub_1C942E4(ListViewSort_TypeInfo);
  ListViewSort___ctor_44628284(v24, (System_String_o *)StringLiteral_8981/*"MaterialCollectionServant5"*/, 3, 1, 0);
  v25 = MaterialCollectionServantListViewManager_TypeInfo->static_fields;
  v25->EventLogservantSortInfo = v24;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v25->EventLogservantSortInfo, (int32_t)v24, v26, v27, v28, v29, v30, v31);
}


void MaterialCollectionServantListViewManager___ctor(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void MaterialCollectionServantListViewManager__AllInactiveUIWidget(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_o *v2; // x19
  struct ListViewItemSeed_o *seed; // x8
  UnityEngine_GameObject_o *parent; // x19
  int32_t childCount; // w0
  int32_t v6; // w20
  int32_t i; // w21
  UnityEngine_Object_o *Child; // x22
  Il2CppObject *Component_object; // x22

  v2 = this;
  if ( (byte_4D2792D & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    this = (MaterialCollectionServantListViewManager_o *)sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2792D = 1;
  }
  seed = v2->fields.seed;
  if ( !seed
    || (parent = seed->fields.parent) == 0
    || (this = (MaterialCollectionServantListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                               seed->fields.parent,
                                                               0)) == 0 )
  {
LABEL_20:
    sub_1C942F0(this, method);
  }
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0);
  if ( childCount >= 1 )
  {
    v6 = childCount;
    for ( i = 0; v6 != i; ++i )
    {
      Child = (UnityEngine_Object_o *)GameObjectExtensions__GetChild(parent, i, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (MaterialCollectionServantListViewManager_o *)UnityEngine_Object__op_Inequality(Child, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !Child )
          goto LABEL_20;
        this = (MaterialCollectionServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)Child,
                                                               0);
        if ( !this )
          goto LABEL_20;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)this,
                             (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (MaterialCollectionServantListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                               (UnityEngine_Object_o *)Component_object,
                                                               0,
                                                               0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_20;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
        }
      }
    }
  }
}


void MaterialCollectionServantListViewManager__AllInitInactiveDummy(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w21
  int32_t v5; // w20
  __int64 naturalAligment; // x10

  if ( (byte_4D2792F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C94098(&MaterialEventLogServantListViewItem_TypeInfo);
    byte_4D2792F = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_11;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v5 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v5,
                                                                (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      naturalAligment = MaterialEventLogServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (MaterialEventLogServantListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != MaterialEventLogServantListViewItem_TypeInfo )
      {
        break;
      }
      ++v5;
      BYTE1(itemList[5].klass) = 0;
      if ( size == v5 )
        return;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_11:
    sub_1C942F0(itemList, method);
  }
}


void MaterialCollectionServantListViewManager__ClearNewIcon(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *v5; // x19
  int32_t v6; // w20
  MaterialCollectionServantListViewObject_o *v7; // x21
  const MethodInfo *v8; // x1

  if ( (byte_4D27915 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__);
    byte_4D27915 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)MaterialCollectionServantListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    goto LABEL_9;
  v5 = ObjectList;
  if ( ObjectList->fields._size >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v5,
                                                                  v6,
                                                                  (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      v7 = (MaterialCollectionServantListViewObject_o *)ObjectList;
      MaterialCollectionServantListViewObject__ClearNewIcon((MaterialCollectionServantListViewObject_o *)ObjectList, v4);
      MaterialCollectionServantListViewObject__AttachedIconSetupDisp(v7, v8);
      if ( ++v6 >= v5->fields._size )
        return;
    }
LABEL_9:
    sub_1C942F0(ObjectList, v4);
  }
}


void MaterialCollectionServantListViewManager__CreateList(
        MaterialCollectionServantListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  DataManager_o *v7; // x22
  Il2CppObject *MasterData_object; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  UserCommandCodeCollectionEntity_array *v15; // x22
  MaterialCollectionServantListViewManager_c *v16; // x8
  struct ListViewSort_o *commandCodeSortInfo; // x1
  UserServantCollectionEntity_array *CollectionList; // x21
  int v19; // w8
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  MaterialCollectionServantListViewManager_c *v26; // x8
  struct ListViewSort_o *servantEquipSortInfo; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  MaterialCollectionServantListViewManager_c *v34; // x8
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v36; // x1
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  struct ListViewSort_o *sort; // x8
  unsigned int sortKind; // w9
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeTabSprite; // x23
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v49; // x20
  UserCommandCodeCollectionEntity_o *v50; // x24
  MaterialCollectionServantListViewItem_o *v51; // x23
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v59; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v61; // x8
  il2cpp_array_size_t v62; // x8
  unsigned __int64 v63; // x22
  UserServantCollectionEntity_o *v64; // x24
  MaterialCollectionServantListViewItem_o *v65; // x23
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  intptr_t v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  intptr_t v75; // x8
  UnityEngine_Object_o *completeSprite; // x20
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v78; // x1
  int32_t findSum[2]; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4D27913 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&MaterialCollectionServantListViewItem_TypeInfo);
    sub_1C94098(&MaterialCollectionServantListViewManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_11855/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_4D27913 = 1;
  }
  *(_QWORD *)findSum = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  v7 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v7,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
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
                       0);
    v26 = MaterialCollectionServantListViewManager_TypeInfo;
    if ( !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo);
      v26 = MaterialCollectionServantListViewManager_TypeInfo;
    }
    servantEquipSortInfo = v26->static_fields->servantEquipSortInfo;
    this->fields.sort = servantEquipSortInfo;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.sort,
      (int32_t)servantEquipSortInfo,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    Instance = (DataManager_o *)this->fields.sort;
    if ( !Instance )
      goto LABEL_67;
    v15 = 0;
    v19 = 1;
  }
  else if ( kind == 3 )
  {
    if ( !Instance )
      goto LABEL_67;
    v15 = UserCommandCodeCollectionMaster__getCollectionList(
            (UserCommandCodeCollectionMaster_o *)Instance,
            &findSum[1],
            findSum,
            0);
    v16 = MaterialCollectionServantListViewManager_TypeInfo;
    if ( !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo);
      v16 = MaterialCollectionServantListViewManager_TypeInfo;
    }
    commandCodeSortInfo = v16->static_fields->commandCodeSortInfo;
    this->fields.sort = commandCodeSortInfo;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.sort,
      (int32_t)commandCodeSortInfo,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    Instance = (DataManager_o *)this->fields.sort;
    if ( !Instance )
      goto LABEL_67;
    CollectionList = 0;
    v19 = 3;
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
                       0);
    v34 = MaterialCollectionServantListViewManager_TypeInfo;
    if ( !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo);
      v34 = MaterialCollectionServantListViewManager_TypeInfo;
    }
    p_servantSortInfo = &v34->static_fields->servantSortInfo;
    v36 = *p_servantSortInfo;
    this->fields.sort = *p_servantSortInfo;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.sort, (int32_t)v36, v28, v29, v30, v31, v32, v33);
    Instance = (DataManager_o *)this->fields.sort;
    if ( !Instance )
      goto LABEL_67;
    v19 = 0;
    v15 = 0;
  }
  LODWORD(Instance->fields.writeMasterDataThread) = v19;
  ListViewSort__Load((ListViewSort_o *)Instance, 0);
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
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v37, v38, v39, v40, v41, v42);
LABEL_32:
  Instance = (DataManager_o *)this->fields.sort;
  if ( !Instance )
    goto LABEL_67;
  scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
  Instance = (DataManager_o *)ListViewSort__GetScaleKindSpriteName(
                                (ListViewSort_o *)Instance,
                                this->fields.scaleType,
                                0);
  if ( !scaleChangeTabSprite )
    goto LABEL_67;
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)Instance, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( kind == 3 )
  {
    if ( !v15 )
      goto LABEL_67;
    max_length = v15->max_length;
    if ( (int)max_length >= 1 )
    {
      v49 = 0;
      while ( v49 < (unsigned int)max_length )
      {
        v50 = v15->m_Items[v49];
        v51 = (MaterialCollectionServantListViewItem_o *)sub_1C942E4(MaterialCollectionServantListViewItem_TypeInfo);
        MaterialCollectionServantListViewItem___ctor_33936568(v51, v49, v50, 3, 0);
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          goto LABEL_67;
        m_CachedPtr = Instance->fields.m_CachedPtr;
        v59 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          goto LABEL_67;
        m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v51,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
        }
        else
        {
          v61 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v61 + 32) = v51;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v61 + 32), (int32_t)v51, v52, v53, v54, v55, v56, v57);
        }
        LODWORD(max_length) = v15->max_length;
        if ( (__int64)++v49 >= (int)max_length )
          goto LABEL_56;
      }
      goto LABEL_68;
    }
  }
  else
  {
    if ( !CollectionList )
      goto LABEL_67;
    v62 = CollectionList->max_length;
    if ( (int)v62 >= 1 )
    {
      v63 = 0;
      while ( v63 < (unsigned int)v62 )
      {
        v64 = CollectionList->m_Items[v63];
        v65 = (MaterialCollectionServantListViewItem_o *)sub_1C942E4(MaterialCollectionServantListViewItem_TypeInfo);
        MaterialCollectionServantListViewItem___ctor(v65, v63, v64, kind, 0);
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          goto LABEL_67;
        v72 = Instance->fields.m_CachedPtr;
        v73 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( !v72 )
          goto LABEL_67;
        v74 = SLODWORD(Instance->fields.m_CancellationTokenSource);
        if ( (unsigned int)v74 >= *(_DWORD *)(v72 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v65,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
        }
        else
        {
          v75 = v72 + 8 * v74;
          LODWORD(Instance->fields.m_CancellationTokenSource) = v74 + 1;
          *(_QWORD *)(v75 + 32) = v65;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v75 + 32), (int32_t)v65, v66, v67, v68, v69, v70, v71);
        }
        LODWORD(v62) = CollectionList->max_length;
        if ( (__int64)++v63 >= (int)v62 )
          goto LABEL_56;
      }
LABEL_68:
      sub_1C942F8(Instance);
    }
  }
LABEL_56:
  completeSprite = (UnityEngine_Object_o *)this->fields.completeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(completeSprite, 0, 0) )
  {
    Instance = (DataManager_o *)this->fields.completeSprite;
    if ( !Instance )
      goto LABEL_67;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !CollectionList || !Instance )
      goto LABEL_67;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)Instance,
      findSum[1] >= SLODWORD(CollectionList->max_length),
      0);
  }
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11855/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0);
  if ( !emptyMessageLabel )
LABEL_67:
    sub_1C942F0(Instance, v6);
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  MaterialCollectionServantListViewManager__SetFilterButtonImage(this, v78);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0);
}


void MaterialCollectionServantListViewManager__CreateValentineList(
        MaterialCollectionServantListViewManager_o *this,
        int32_t kind,
        System_Collections_Generic_List_MaterialEventLogListViewItem_Info__o *infos,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v7; // x1
  DataManager_o *v8; // x23
  Il2CppObject *MasterData_object; // x22
  struct ListViewSort_o *sort; // x8
  unsigned int sortKind; // w9
  int size; // w23
  MaterialEventLogServantListViewItem_c **v13; // x27
  int32_t i; // w24
  NetworkManager_c *v15; // x0
  int64_t userIdNumber; // x26
  UserServantCollectionEntity_o *Entity; // x26
  Il2CppObject *Item; // x28
  MaterialEventLogServantListViewItem_c **v19; // x20
  MaterialEventLogServantListViewItem_o *v20; // x27
  const MethodInfo *v21; // x6
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v29; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v31; // x8
  System_Collections_Generic_List_object__o *itemList; // x21
  MaterialEventLogListViewItem_Info_o *v33; // x24
  const MethodInfo *v34; // x1
  MaterialEventLogServantListViewItem_o *v35; // x22
  const MethodInfo *v36; // x6
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v48; // x1
  const MethodInfo *v49; // x1
  bool v50; // w1
  const MethodInfo *v51; // x1
  const MethodInfo *v52; // x1
  int m_CancellationTokenSource; // w21
  int32_t v54; // w20
  __int64 naturalAligment; // x10

  if ( (byte_4D27914 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C94098(&MaterialEventLogListViewItem_Info_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&MaterialEventLogServantListViewItem_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_11856/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/);
    byte_4D27914 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  v8 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v8,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_42;
  sortKind = sort->fields.sortKind;
  if ( sortKind > 0x1B || ((1 << sortKind) & 0x8000204) == 0 )
    sort->fields.sortKind = 3;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !infos )
    goto LABEL_42;
  size = infos->fields._size;
  v13 = &MaterialEventLogServantListViewItem_TypeInfo;
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2633A )
      {
        sub_1C94098(&NetworkManager_TypeInfo);
        byte_4D2633A = 1;
      }
      v15 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v15 = NetworkManager_TypeInfo;
      }
      userIdNumber = v15->static_fields->userIdNumber;
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)infos,
                                    i,
                                    (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
      if ( !Instance )
        goto LABEL_42;
      if ( !MasterData_object )
        goto LABEL_42;
      Entity = UserServantCollectionMaster__GetEntity(
                 (UserServantCollectionMaster_o *)MasterData_object,
                 userIdNumber,
                 HIDWORD(Instance->fields.masterDataBytes),
                 0);
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)infos,
               i,
               (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
      v19 = v13;
      v20 = (MaterialEventLogServantListViewItem_o *)sub_1C942E4(*v13);
      MaterialEventLogServantListViewItem___ctor(
        v20,
        i,
        Entity,
        kind,
        (MaterialEventLogListViewItem_Info_o *)Item,
        0,
        v21);
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        goto LABEL_42;
      m_CachedPtr = Instance->fields.m_CachedPtr;
      v29 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_42;
      m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v20,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v31 + 32) = v20;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v31 + 32), (int32_t)v20, v22, v23, v24, v25, v26, v27);
      }
      v13 = v19;
    }
    if ( Entity )
    {
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v33 = (MaterialEventLogListViewItem_Info_o *)sub_1C942E4(MaterialEventLogListViewItem_Info_TypeInfo);
      MaterialEventLogListViewItem_Info___ctor(v33, v34);
      v35 = (MaterialEventLogServantListViewItem_o *)sub_1C942E4(*v19);
      MaterialEventLogServantListViewItem___ctor(v35, size, Entity, kind, v33, 1, v36);
      if ( !itemList )
        goto LABEL_42;
      items = itemList->fields._items;
      v44 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        goto LABEL_42;
      v45 = itemList->fields._size;
      if ( (unsigned int)v45 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v35,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v46 = &items->obj.klass + v45;
        itemList->fields._size = v45 + 1;
        v46[4] = (Il2CppClass *)v35;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v46 + 4), (int32_t)v35, v37, v38, v39, v40, v41, v42);
      }
    }
  }
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11856/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/, 0);
  if ( !emptyMessageLabel )
    goto LABEL_42;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0);
  MaterialCollectionServantListViewManager__SortDummyData(this, v48);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  v50 = MaterialCollectionServantListViewManager__GetFilterCount(this, v49) < 1;
  ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v50, 0);
  MaterialCollectionServantListViewManager__SetValentineFilterButtonImage(this, v51);
  MaterialCollectionServantListViewManager__ClearNewIcon(this, v52);
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
LABEL_42:
    sub_1C942F0(Instance, v7);
  m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource >= 1 )
  {
    v54 = 0;
    do
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v54,
                                    (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Instance )
        break;
      naturalAligment = (*v13)->_2.naturalAligment;
      if ( Instance->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (MaterialEventLogServantListViewItem_c *)Instance->klass->_2.typeHierarchy[naturalAligment - 1] != *v13 )
      {
        break;
      }
      MaterialEventLogServantListViewItem__SetDummy((MaterialEventLogServantListViewItem_o *)Instance, v7);
      if ( m_CancellationTokenSource == ++v54 )
        goto LABEL_43;
      Instance = (DataManager_o *)this->fields.itemList;
    }
    while ( Instance );
    goto LABEL_42;
  }
LABEL_43:
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0);
}


void MaterialCollectionServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialCollectionServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4D2790E & 1) == 0 )
  {
    sub_1C94098(&MaterialCollectionServantListViewManager_TypeInfo);
    byte_4D2790E = 1;
  }
  v2 = MaterialCollectionServantListViewManager_TypeInfo;
  if ( !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo);
    v2 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0),
        (servantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0)
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0),
        (servantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->commandCodeSortInfo) == 0)
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0),
        (servantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->EventLogservantSortInfo) == 0) )
  {
    sub_1C942F0(servantSortInfo, v1);
  }
  ListViewSort__DeleteContinueData(servantSortInfo, 0);
}


void MaterialCollectionServantListViewManager__DestroyList(
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

  if ( (byte_4D27919 & 1) == 0 )
  {
    sub_1C94098(&MaterialCollectionServantListViewManager_TypeInfo);
    byte_4D27919 = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
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
    ListViewSort__Save(servantSortInfo, 0);
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
    ListViewSort__Save(servantEquipSortInfo, 0);
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
    ListViewSort__Save(commandCodeSortInfo, 0);
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
          (EventLogservantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->EventLogservantSortInfo) != 0) )
    {
      ListViewSort__Save(EventLogservantSortInfo, 0);
      return;
    }
LABEL_28:
    sub_1C942F0(v5, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void MaterialCollectionServantListViewManager__EndEventLogSortKind(
        MaterialCollectionServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  MaterialEventLogServantSortSelectMenu_o *eventLogServantSortSelectMenu; // x0
  MaterialCollectionServantListViewManager_o *v6; // x0
  const MethodInfo *v7; // x1
  UnityEngine_Object_o *MaterialEventLogListViewManager; // x21
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  int32_t FilterCount; // w20

  if ( (byte_4D27926 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D27926 = 1;
  }
  eventLogServantSortSelectMenu = this->fields.eventLogServantSortSelectMenu;
  if ( !eventLogServantSortSelectMenu )
    goto LABEL_15;
  MaterialEventLogServantSortSelectMenu__Close(eventLogServantSortSelectMenu, 0);
  MaterialEventLogListViewManager = (UnityEngine_Object_o *)MaterialCollectionServantListViewManager__GetMaterialEventLogListViewManager(
                                                              v6,
                                                              v7);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  eventLogServantSortSelectMenu = (MaterialEventLogServantSortSelectMenu_o *)UnityEngine_Object__op_Inequality(
                                                                               MaterialEventLogListViewManager,
                                                                               0,
                                                                               0);
  if ( ((unsigned __int8)eventLogServantSortSelectMenu & 1) != 0 )
  {
    if ( !MaterialEventLogListViewManager )
      goto LABEL_15;
    MaterialEventLogListViewManager__SetSort(
      (MaterialEventLogListViewManager_o *)MaterialEventLogListViewManager,
      this->fields.sort,
      v9);
  }
  if ( !isDecide )
    goto LABEL_14;
  MaterialCollectionServantListViewManager__AllInactiveUIWidget(this, (const MethodInfo *)isDecide);
  MaterialCollectionServantListViewManager__AllInitInactiveDummy(this, v10);
  if ( !this->fields.itemList )
LABEL_15:
    sub_1C942F0(eventLogServantSortSelectMenu, isDecide);
  FilterCount = MaterialCollectionServantListViewManager__GetFilterCount(this, (const MethodInfo *)isDecide);
  if ( FilterCount <= 11 )
    MaterialCollectionServantListViewManager__InactiveDummy(this, v11);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, FilterCount < 1, 0);
  ListViewManager__ScreenUpdate((ListViewManager_o *)this, 0);
LABEL_14:
  MaterialCollectionServantListViewManager__SetValentineFilterButtonImage(this, (const MethodInfo *)isDecide);
}


void MaterialCollectionServantListViewManager__EndSelectSortKind(
        MaterialCollectionServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  MaterialCollectionServantSortSelectMenu_o *sortSelectMenu; // x0
  const MethodInfo *v6; // x1

  sortSelectMenu = this->fields.sortSelectMenu;
  if ( !sortSelectMenu )
    sub_1C942F0(0, isDecide);
  MaterialCollectionServantSortSelectMenu__Close_33970388(sortSelectMenu, 0, method);
  MaterialCollectionServantListViewManager__SetFilterButtonImage(this, v6);
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void MaterialCollectionServantListViewManager__EventLogSortKind(
        MaterialCollectionServantListViewManager_o *this,
        MaterialEventLogServantSortSelectMenu_o *eventLogServantSortSelectMenu,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x21
  MaterialEventLogServantSortSelectMenu_CallbackFunc_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4D27924 & 1) == 0 )
  {
    sub_1C94098(&MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_MaterialCollectionServantListViewManager_EndEventLogSortKind__);
    byte_4D27924 = 1;
  }
  if ( this->fields.isInput )
  {
    sort = this->fields.sort;
    v6 = (MaterialEventLogServantSortSelectMenu_CallbackFunc_o *)sub_1C942E4(MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo);
    MaterialEventLogServantSortSelectMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_MaterialCollectionServantListViewManager_EndEventLogSortKind__,
      0);
    if ( !eventLogServantSortSelectMenu )
      sub_1C942F0(v7, v8);
    MaterialEventLogServantSortSelectMenu__Open(eventLogServantSortSelectMenu, 0, sort, v6, 0);
  }
}


void MaterialCollectionServantListViewManager__EventLogSortListSave(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_c *v2; // x0
  ListViewSort_o *EventLogservantSortInfo; // x8
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4D2792C & 1) == 0 )
  {
    sub_1C94098(&MaterialCollectionServantListViewManager_TypeInfo);
    byte_4D2792C = 1;
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
        sub_1C942F0(v4, v5);
    }
    ListViewSort__Save(EventLogservantSortInfo, 0);
  }
}


int32_t MaterialCollectionServantListViewManager__GetFilterCount(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w22
  int32_t v5; // w21
  int32_t v6; // w20
  __int64 naturalAligment; // x10

  if ( (byte_4D27925 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C94098(&MaterialEventLogServantListViewItem_TypeInfo);
    byte_4D27925 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_13;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v5,
                                                                (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      naturalAligment = MaterialEventLogServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (MaterialEventLogServantListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != MaterialEventLogServantListViewItem_TypeInfo )
      {
        break;
      }
      if ( !LOBYTE(itemList[5].klass) )
        v6 += ((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, struct ListViewSort_o *, const MethodInfo *))itemList->klass->vtable._5_set_Item.methodPtr)(
                itemList,
                this->fields.sort,
                itemList->klass->vtable._5_set_Item.method)
            & 1;
      if ( size == ++v5 )
        return v6;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_13:
    sub_1C942F0(itemList, method);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
MaterialCollectionServantListViewItem_o *MaterialCollectionServantListViewManager__GetItem(
        MaterialCollectionServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  MaterialCollectionServantListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  v4 = this;
  if ( (byte_4D2791A & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (MaterialCollectionServantListViewManager_o *)sub_1C94098(&MaterialCollectionServantListViewItem_TypeInfo);
    byte_4D2791A = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    sub_1C942F0(this, *(_QWORD *)&index);
  result = 0;
  if ( (index & 0x80000000) == 0 && itemList->fields._size > index )
  {
    result = (MaterialCollectionServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                          (System_Collections_Generic_List_object__o *)v4->fields.itemList,
                                                          index,
                                                          (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = MaterialCollectionServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (MaterialCollectionServantListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != MaterialCollectionServantListViewItem_TypeInfo )
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


MaterialEventLogListViewManager_o *MaterialCollectionServantListViewManager__GetMaterialEventLogListViewManager(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  MaterialEventLogListViewManager_o *result; // x0
  __int64 v3; // x1
  UnityEngine_Object_o *dropObjectList; // x19
  bool v5; // w8
  __int64 naturalAligment; // x10
  bool v7; // w8
  intptr_t m_CachedPtr; // x19
  bool v9; // w8

  if ( (byte_4D27912 & 1) == 0 )
  {
    sub_1C94098(&MyRoomRootComponent_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4D27912 = 1;
  }
  result = (MaterialEventLogListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !result )
    goto LABEL_22;
  dropObjectList = (UnityEngine_Object_o *)result->fields.dropObjectList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality(dropObjectList, 0, 0);
  result = 0;
  if ( !v5 )
  {
    if ( dropObjectList )
    {
      naturalAligment = MyRoomRootComponent_TypeInfo->_2.naturalAligment;
      if ( dropObjectList->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (MyRoomRootComponent_c *)dropObjectList->klass->_2.typeHierarchy[naturalAligment - 1] != MyRoomRootComponent_TypeInfo )
          dropObjectList = 0;
      }
      else
      {
        dropObjectList = 0;
      }
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Equality(dropObjectList, 0, 0);
    result = 0;
    if ( !v7 )
    {
      if ( !dropObjectList )
        goto LABEL_22;
      m_CachedPtr = dropObjectList[2].fields.m_CachedPtr;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)m_CachedPtr, 0, 0);
      result = 0;
      if ( !v9 )
      {
        if ( m_CachedPtr )
          return *(MaterialEventLogListViewManager_o **)(m_CachedPtr + 416);
LABEL_22:
        sub_1C942F0(result, v3);
      }
    }
  }
  return result;
}


void MaterialCollectionServantListViewManager__InactiveDummy(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w21
  int32_t v5; // w20
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_object__o *v7; // x19
  int32_t v8; // w20
  Il2CppObject *Component_object; // x21

  if ( (byte_4D2792E & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C94098(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__);
    sub_1C94098(&MaterialEventLogServantListViewItem_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2792E = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_24;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v5 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v5,
                                                                (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      naturalAligment = MaterialEventLogServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (MaterialEventLogServantListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != MaterialEventLogServantListViewItem_TypeInfo )
      {
        break;
      }
      MaterialEventLogServantListViewItem__InactiveDummy((MaterialEventLogServantListViewItem_o *)itemList, method);
      if ( size == ++v5 )
        goto LABEL_12;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_24:
    sub_1C942F0(itemList, method);
  }
LABEL_12:
  itemList = (System_Collections_Generic_List_object__o *)MaterialCollectionServantListViewManager__get_ObjectList(
                                                            this,
                                                            method);
  if ( !itemList )
    goto LABEL_24;
  v7 = itemList;
  if ( itemList->fields._size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                v7,
                                                                v8,
                                                                (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__);
      if ( !itemList )
        goto LABEL_24;
      itemList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)itemList,
                                                                0);
      if ( !itemList )
        goto LABEL_24;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)itemList,
                           (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      itemList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                (UnityEngine_Object_o *)Component_object,
                                                                0,
                                                                0);
      if ( ((unsigned __int8)itemList & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_24;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
      }
      if ( ++v8 >= v7->fields._size )
        return;
    }
  }
}


void MaterialCollectionServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialCollectionServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4D2790F & 1) == 0 )
  {
    sub_1C94098(&MaterialCollectionServantListViewManager_TypeInfo);
    byte_4D2790F = 1;
  }
  v2 = MaterialCollectionServantListViewManager_TypeInfo;
  if ( !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo);
    v2 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__InitLoad(servantSortInfo, 0),
        (servantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0)
    || (ListViewSort__InitLoad(servantSortInfo, 0),
        (servantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->commandCodeSortInfo) == 0)
    || (ListViewSort__InitLoad(servantSortInfo, 0),
        (servantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->EventLogservantSortInfo) == 0) )
  {
    sub_1C942F0(servantSortInfo, v1);
  }
  ListViewSort__InitLoad(servantSortInfo, 0);
}


void MaterialCollectionServantListViewManager__ModifyItem(
        MaterialCollectionServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewManager__RequestListObject_33952272(this, 4, method);
}


void MaterialCollectionServantListViewManager__ModifyList(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v5; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v7; // x21
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *klass; // x22

  if ( (byte_4D2791B & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C94098(&MaterialCollectionServantListViewItem_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2791B = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_1C942F0(itemList, method);
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               itemList,
               v5,
               (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v7 = (ListViewItem_o *)Item;
        naturalAligment = MaterialCollectionServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (MaterialCollectionServantListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == MaterialCollectionServantListViewItem_TypeInfo )
        {
          klass = (UnityEngine_Object_o *)Item[7].klass;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(klass, 0, 0) )
          {
            itemList = (System_Collections_Generic_List_object__o *)v7->fields.viewObject;
            if ( !itemList )
              goto LABEL_16;
            ListViewObject__SetItemSeed((ListViewObject_o *)itemList, v7, this->fields.seed, 0);
          }
        }
      }
      if ( size == ++v5 )
        break;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_16;
    }
  }
}


void MaterialCollectionServantListViewManager__OnClickListView(
        MaterialCollectionServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void MaterialCollectionServantListViewManager__OnClickScaleChange(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  MaterialCollectionServantListViewManager_o *v14; // x0
  int v15; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  int32_t v18; // w1
  UISprite_o *scaleChangeTabSprite; // x20
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2

  if ( (byte_4D2792B & 1) == 0 )
  {
    sub_1C94098(&Method_MaterialCollectionServantListViewManager_OnClickScaleChange__);
    byte_4D2792B = 1;
  }
  v3 = Method_MaterialCollectionServantListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_MaterialCollectionServantListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C940B0(Method_MaterialCollectionServantListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v14 = this;
    v15 = 2;
    goto LABEL_11;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v14 = this;
    v15 = 3;
    goto LABEL_11;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v14 = this;
    v15 = 1;
LABEL_11:
    v14->fields.seed = smallSizeSeed;
    p_seed = &v14->fields.seed;
    *((_DWORD *)p_seed + 77) = v15;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)p_seed, (int32_t)smallSizeSeed, v6, v7, v8, v9, v10, v11);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v18 = this->fields.scaleType,
        sort->fields.iconScaleKind = v18,
        scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v18, 0),
        !scaleChangeTabSprite)
    || (UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)sort, 0), (sort = this->fields.sort) == 0) )
  {
    sub_1C942F0(sort, v5);
  }
  ListViewSort__Save(sort, 0);
  MaterialCollectionServantListViewManager__ModifyList(this, v20);
  MaterialCollectionServantListViewManager__SetMode_33953360(this, 2, v21);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void MaterialCollectionServantListViewManager__OnClickSelectListView(
        MaterialCollectionServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  MaterialCollectionServantListViewManager_o *v9; // x20
  struct ListViewItem_o *linkItem; // x8
  struct MaterialCollectionServantListViewManager_CallbackFunc_o *callbackFunc; // x21
  __int64 naturalAligment; // x10
  unsigned int Index; // w0

  v9 = this;
  if ( (byte_4D27921 & 1) == 0 )
  {
    this = (MaterialCollectionServantListViewManager_o *)sub_1C94098(&MaterialEventLogServantListViewItem_TypeInfo);
    byte_4D27921 = 1;
  }
  if ( !obj )
    sub_1C942F0(this, obj);
  linkItem = obj->fields.linkItem;
  callbackFunc = v9->fields.callbackFunc;
  if ( !linkItem
    || (naturalAligment = MaterialEventLogServantListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (MaterialEventLogServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != MaterialEventLogServantListViewItem_TypeInfo )
  {
    v9->fields.callbackFunc = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v9->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
  }
  if ( callbackFunc )
  {
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      1,
      Index,
      callbackFunc->fields.method);
  }
}


void MaterialCollectionServantListViewManager__OnClickSortAscendingOrder(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  ListViewSort_o *v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4D27927 & 1) == 0 )
  {
    sub_1C94098(&Method_MaterialCollectionServantListViewManager_OnClickSortAscendingOrder__);
    byte_4D27927 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_MaterialCollectionServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_MaterialCollectionServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_MaterialCollectionServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort
      || (sort->fields.isAscendingOrder ^= 1u,
          ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0),
          (v5 = this->fields.sort) == 0) )
    {
      sub_1C942F0(v5, v6);
    }
    ListViewSort__Save(v5, 0);
  }
}


void MaterialCollectionServantListViewManager__OnClickSortKind(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x20
  int32_t listViewKind; // w8
  struct MaterialCollectionServantSortSelectMenu_o *v9; // x21
  MaterialCollectionServantSortSelectMenu_CallbackFunc_o *v10; // x22
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x4
  MaterialCollectionServantSortSelectMenu_o *v13; // x0
  int32_t v14; // w1
  struct MaterialCollectionServantSortSelectMenu_o *sortSelectMenu; // x21
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3

  if ( (byte_4D27923 & 1) == 0 )
  {
    sub_1C94098(&MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_MaterialCollectionServantListViewManager_EndSelectSortKind__);
    sub_1C94098(&Method_MaterialCollectionServantListViewManager_OnClickSortKind__);
    byte_4D27923 = 1;
  }
  if ( !this->fields.isInput )
    return;
  v3 = Method_MaterialCollectionServantListViewManager_OnClickSortKind__;
  if ( (*((_BYTE *)Method_MaterialCollectionServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C940B0(Method_MaterialCollectionServantListViewManager_OnClickSortKind__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_19;
  listViewKind = sort->fields.listViewKind;
  switch ( listViewKind )
  {
    case 3:
      sortSelectMenu = this->fields.sortSelectMenu;
      v10 = (MaterialCollectionServantSortSelectMenu_CallbackFunc_o *)sub_1C942E4(MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo);
      MaterialCollectionServantSortSelectMenu_CallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_MaterialCollectionServantListViewManager_EndSelectSortKind__,
        v16);
      if ( !sortSelectMenu )
        goto LABEL_19;
      v14 = 3;
      goto LABEL_17;
    case 1:
      sortSelectMenu = this->fields.sortSelectMenu;
      v10 = (MaterialCollectionServantSortSelectMenu_CallbackFunc_o *)sub_1C942E4(MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo);
      MaterialCollectionServantSortSelectMenu_CallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_MaterialCollectionServantListViewManager_EndSelectSortKind__,
        v17);
      if ( !sortSelectMenu )
        goto LABEL_19;
      v14 = 1;
LABEL_17:
      v13 = sortSelectMenu;
      goto LABEL_18;
    case 0:
      v9 = this->fields.sortSelectMenu;
      v10 = (MaterialCollectionServantSortSelectMenu_CallbackFunc_o *)sub_1C942E4(MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo);
      MaterialCollectionServantSortSelectMenu_CallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_MaterialCollectionServantListViewManager_EndSelectSortKind__,
        v11);
      if ( v9 )
      {
        v13 = v9;
        v14 = 0;
LABEL_18:
        MaterialCollectionServantSortSelectMenu__Open(v13, v14, sort, v10, v12);
        return;
      }
LABEL_19:
      sub_1C942F0(v5, v6);
  }
}


void MaterialCollectionServantListViewManager__OnLongPushListView(
        MaterialCollectionServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  MaterialCollectionServantListViewManager_o *v9; // x20
  struct ListViewItem_o *linkItem; // x8
  struct MaterialCollectionServantListViewManager_CallbackFunc_o *callbackFunc; // x21
  __int64 naturalAligment; // x10
  unsigned int Index; // w0

  v9 = this;
  if ( (byte_4D27922 & 1) == 0 )
  {
    this = (MaterialCollectionServantListViewManager_o *)sub_1C94098(&MaterialEventLogServantListViewItem_TypeInfo);
    byte_4D27922 = 1;
  }
  if ( !obj )
    sub_1C942F0(this, obj);
  linkItem = obj->fields.linkItem;
  callbackFunc = v9->fields.callbackFunc;
  if ( !linkItem
    || (naturalAligment = MaterialEventLogServantListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (MaterialEventLogServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != MaterialEventLogServantListViewItem_TypeInfo )
  {
    v9->fields.callbackFunc = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v9->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
  }
  if ( callbackFunc )
  {
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      1,
      Index,
      callbackFunc->fields.method);
  }
}


void MaterialCollectionServantListViewManager__OnMoveEnd(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  UIScrollView_o *v14; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4D27920 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D27920 = 1;
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
      if ( !UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
        goto LABEL_14;
      v14 = this->fields.scrollView;
      if ( v14 )
      {
        ((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))v14->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v14,
          1,
          v14->klass->vtable._8_UpdateScrollbars.method);
        v14 = this->fields.scrollView;
        if ( v14 )
        {
          if ( (((__int64 (__fastcall *)(UIScrollView_o *, const MethodInfo *))v14->klass->vtable._6_get_shouldMoveVertically.methodPtr)(
                  v14,
                  v14->klass->vtable._6_get_shouldMoveVertically.method)
              & 1) == 0 )
            goto LABEL_14;
          v14 = this->fields.scrollView;
          if ( v14 )
          {
            UIScrollView__UpdatePosition(v14, 0);
LABEL_14:
            callbackFunc2 = this->fields.callbackFunc2;
            this->fields.callbackFunc2 = 0;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2, 0, v8, v9, v10, v11, v12, v13);
            if ( callbackFunc2 )
              ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
                callbackFunc2->fields.method_code,
                callbackFunc2->fields.method);
            return;
          }
        }
      }
      sub_1C942F0(v14, v7);
    }
  }
}


void MaterialCollectionServantListViewManager__RefrashListDisp(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w21

  if ( (byte_4D27918 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__);
    byte_4D27918 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)MaterialCollectionServantListViewManager__get_ObjectList(
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
                                                                  (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__);
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
    sub_1C942F0(ObjectList, v4);
  }
}


void MaterialCollectionServantListViewManager__RequestInto(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *ObjectList; // x0
  __int64 v5; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v7; // x20
  int v8; // w24
  int32_t v9; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v11; // x23
  const MethodInfo *v12; // x3

  if ( (byte_4D2791F & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__);
    sub_1C94098(&Method_MaterialCollectionServantListViewManager_OnMoveEnd__);
    sub_1C94098(&StringLiteral_9964/*"OnMoveEnd"*/);
    byte_4D2791F = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  ObjectList = MaterialCollectionServantListViewManager__get_ObjectList(this, v3);
  if ( !ObjectList )
LABEL_13:
    sub_1C942F0(ObjectList, v5);
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
             (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0) )
    {
      v11 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_MaterialCollectionServantListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        goto LABEL_13;
      ++v8;
      MaterialCollectionServantListViewObject__Init_33954040(
        (MaterialCollectionServantListViewObject_o *)Item,
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
      (System_String_o *)StringLiteral_9964/*"OnMoveEnd"*/,
      0.0,
      0);
  }
}


// local variable allocation has failed, the output may be wrong!
void MaterialCollectionServantListViewManager__RequestListObject(
        MaterialCollectionServantListViewManager_o *this,
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

  if ( (byte_4D2791D & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__);
    sub_1C94098(&Method_MaterialCollectionServantListViewManager_OnMoveEnd__);
    sub_1C94098(&StringLiteral_9964/*"OnMoveEnd"*/);
    byte_4D2791D = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)MaterialCollectionServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C942F0(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9964/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_MaterialCollectionServantListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C942F0(v12, v13);
      MaterialCollectionServantListViewObject__Init_33954040(
        (MaterialCollectionServantListViewObject_o *)current,
        mode,
        v11,
        delay,
        v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void MaterialCollectionServantListViewManager__RequestListObject_33952272(
        MaterialCollectionServantListViewManager_o *this,
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

  if ( (byte_4D2791E & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__);
    sub_1C94098(&Method_MaterialCollectionServantListViewManager_OnMoveEnd__);
    sub_1C94098(&StringLiteral_9964/*"OnMoveEnd"*/);
    byte_4D2791E = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)MaterialCollectionServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C942F0(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9964/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_MaterialCollectionServantListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C942F0(v10, v11);
      MaterialCollectionServantListViewObject__Init_33954140(
        (MaterialCollectionServantListViewObject_o *)current,
        mode,
        v9,
        v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__Dispose__);
  }
}


void MaterialCollectionServantListViewManager__SetFilterButtonImage(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  System_String_o **v4; // x9
  System_String_o **v5; // x20
  UnityEngine_Color_o v6; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4D27916 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_17526/*"btn_bg_05"*/);
    sub_1C94098(&StringLiteral_17527/*"btn_bg_06"*/);
    sub_1C94098(&StringLiteral_422/*"#FE4545"*/);
    sub_1C94098(&StringLiteral_403/*"#000000"*/);
    byte_4D27916 = 1;
  }
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_10;
  sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0);
  if ( !this->fields.filterSprite )
    goto LABEL_10;
  v4 = (System_String_o **)&StringLiteral_17526/*"btn_bg_05"*/;
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v5 = (System_String_o **)&StringLiteral_403/*"#000000"*/;
  }
  else
  {
    v4 = (System_String_o **)&StringLiteral_17527/*"btn_bg_06"*/;
    v5 = (System_String_o **)&StringLiteral_422/*"#FE4545"*/;
  }
  UISprite__set_spriteName(this->fields.filterSprite, *v4, 0);
  *(_QWORD *)&v6.fields.r = 0;
  *(_QWORD *)&v6.fields.b = 0;
  UnityEngine_ColorUtility__TryParseHtmlString(*v5, &v6, 0);
  sort = (ListViewSort_o *)this->fields.sortKindLabel;
  if ( !sort )
LABEL_10:
    sub_1C942F0(sort, method);
  UILabel__set_effectColor((UILabel_o *)sort, v6, 0);
}


void MaterialCollectionServantListViewManager__SetMode(
        MaterialCollectionServantListViewManager_o *this,
        int32_t mode,
        MaterialCollectionServantListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  MaterialCollectionServantListViewManager__SetMode_33953360(this, mode, v10);
}


void MaterialCollectionServantListViewManager__SetMode_33953360(
        MaterialCollectionServantListViewManager_o *this,
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
    MaterialCollectionServantListViewManager__RequestListObject_33952272(this, v6, v5);
  }
}


void MaterialCollectionServantListViewManager__SetMode_33953464(
        MaterialCollectionServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  MaterialCollectionServantListViewManager__SetMode_33953360(this, mode, v10);
}


void MaterialCollectionServantListViewManager__SetObjectItem(
        MaterialCollectionServantListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4D2791C & 1) == 0 )
  {
    this = (MaterialCollectionServantListViewManager_o *)sub_1C94098(&MaterialCollectionServantListViewObject_TypeInfo);
    byte_4D2791C = 1;
  }
  if ( !obj
    || (naturalAligment = MaterialCollectionServantListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (MaterialCollectionServantListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != MaterialCollectionServantListViewObject_TypeInfo )
  {
    sub_1C942F0(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  MaterialCollectionServantListViewObject__Init_33953232(
    (MaterialCollectionServantListViewObject_o *)obj,
    v7,
    (const MethodInfo *)item);
}


void MaterialCollectionServantListViewManager__SetSort(
        MaterialCollectionServantListViewManager_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.sort = sort;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.sort, (int32_t)sort, (int32_t)method, v3, v4, v5, v6, v7);
}


void MaterialCollectionServantListViewManager__SetSortButtonImage(
        MaterialCollectionServantListViewManager_o *this,
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
  System_String_o **v12; // x9
  System_String_o **v13; // x10
  System_String_o **v14; // x8
  System_String_o **v15; // x8

  if ( (byte_4D2792A & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_17609/*"btn_sort_up"*/);
    sub_1C94098(&StringLiteral_17709/*"btn_txt_up"*/);
    sub_1C94098(&StringLiteral_17660/*"btn_txt_new"*/);
    sub_1C94098(&StringLiteral_17650/*"btn_txt_down"*/);
    sub_1C94098(&StringLiteral_17667/*"btn_txt_old"*/);
    sub_1C94098(&StringLiteral_17606/*"btn_sort_down"*/);
    byte_4D2792A = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_34;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v6 )
      goto LABEL_34;
    UILabel__set_text(v6, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
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
          v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17667/*"btn_txt_old"*/ : &StringLiteral_17660/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v10, 0);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_17606/*"btn_sort_down"*/;
              v13 = (System_String_o **)&StringLiteral_17609/*"btn_sort_up"*/;
LABEL_30:
              if ( v11->fields.isAscendingOrder )
                v15 = v12;
              else
                v15 = v13;
              UISprite__set_spriteName((UISprite_o *)sort, *v15, 0);
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
          v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17709/*"btn_txt_up"*/ : &StringLiteral_17650/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_17609/*"btn_sort_up"*/;
              v13 = (System_String_o **)&StringLiteral_17606/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1C942F0(sort, v4);
  }
}


void MaterialCollectionServantListViewManager__SetValentineFilterButtonImage(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  System_String_o **v4; // x9
  System_String_o **v5; // x20
  UnityEngine_Color_o v6; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4D27917 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_422/*"#FE4545"*/);
    sub_1C94098(&StringLiteral_17573/*"btn_filter_on"*/);
    sub_1C94098(&StringLiteral_403/*"#000000"*/);
    sub_1C94098(&StringLiteral_17572/*"btn_filter"*/);
    byte_4D27917 = 1;
  }
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_10;
  sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0);
  if ( !this->fields.filterSprite )
    goto LABEL_10;
  v4 = (System_String_o **)&StringLiteral_17572/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v5 = (System_String_o **)&StringLiteral_403/*"#000000"*/;
  }
  else
  {
    v4 = (System_String_o **)&StringLiteral_17573/*"btn_filter_on"*/;
    v5 = (System_String_o **)&StringLiteral_422/*"#FE4545"*/;
  }
  UISprite__set_spriteName(this->fields.filterSprite, *v4, 0);
  *(_QWORD *)&v6.fields.r = 0;
  *(_QWORD *)&v6.fields.b = 0;
  UnityEngine_ColorUtility__TryParseHtmlString(*v5, &v6, 0);
  sort = (ListViewSort_o *)this->fields.sortKindLabel;
  if ( !sort )
LABEL_10:
    sub_1C942F0(sort, method);
  UILabel__set_effectColor((UILabel_o *)sort, v6, 0);
}


void MaterialCollectionServantListViewManager__SortAscendingOrder(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct ListViewSort_o *v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *sort; // x8
  UnityEngine_Object_o *MaterialEventLogListViewManager; // x20
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  bool v11; // w1

  if ( (byte_4D27928 & 1) == 0 )
  {
    sub_1C94098(&Method_MaterialCollectionServantListViewManager_SortAscendingOrder__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D27928 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_MaterialCollectionServantListViewManager_SortAscendingOrder__;
    if ( (*((_BYTE *)Method_MaterialCollectionServantListViewManager_SortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_MaterialCollectionServantListViewManager_SortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( sort )
    {
      sort->fields.isAscendingOrder ^= 1u;
      MaterialEventLogListViewManager = (UnityEngine_Object_o *)MaterialCollectionServantListViewManager__GetMaterialEventLogListViewManager(
                                                                  (MaterialCollectionServantListViewManager_o *)v5,
                                                                  v6);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v5 = (struct ListViewSort_o *)UnityEngine_Object__op_Inequality(MaterialEventLogListViewManager, 0, 0);
      if ( ((unsigned __int8)v5 & 1) != 0 )
      {
        if ( !MaterialEventLogListViewManager )
          goto LABEL_15;
        MaterialEventLogListViewManager__SetSort(
          (MaterialEventLogListViewManager_o *)MaterialEventLogListViewManager,
          this->fields.sort,
          v9);
      }
      MaterialCollectionServantListViewManager__SortDummyData(this, v6);
      ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
      v11 = MaterialCollectionServantListViewManager__GetFilterCount(this, v10) < 1;
      ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v11, 0);
      ListViewManager__ScreenUpdate((ListViewManager_o *)this, 0);
      v5 = this->fields.sort;
      if ( v5 )
      {
        ListViewSort__Save(v5, 0);
        ((void (__fastcall *)(MaterialCollectionServantListViewManager_o *, const MethodInfo *))this->klass->vtable._5_SetSortButtonImage.methodPtr)(
          this,
          this->klass->vtable._5_SetSortButtonImage.method);
        return;
      }
    }
LABEL_15:
    sub_1C942F0(v5, v6);
  }
}


void MaterialCollectionServantListViewManager__SortDummyData(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w23
  System_Collections_Generic_List_object__o *v7; // x0
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w21
  ListViewItem_o *v10; // x22
  __int64 naturalAligment; // x10
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  DataManager_o *v21; // x1
  Il2CppClass **v22; // x0
  struct ListViewSort_o *sort; // x8
  int32_t v24; // w1

  if ( (byte_4D27929 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_MaterialEventLogServantListViewItem___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_MaterialEventLogServantListViewItem__TypeInfo);
    sub_1C94098(&MaterialEventLogServantListViewItem_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D27929 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_27;
  size = itemList->fields._size;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_MaterialEventLogServantListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_MaterialEventLogServantListViewItem___ctor__);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  if ( size >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v9,
                                    (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Instance )
        break;
      v10 = (ListViewItem_o *)Instance;
      naturalAligment = MaterialEventLogServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( Instance->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (MaterialEventLogServantListViewItem_c *)Instance->klass->_2.typeHierarchy[naturalAligment - 1] != MaterialEventLogServantListViewItem_TypeInfo )
      {
        break;
      }
      if ( LOBYTE(Instance[1].fields.lookup) )
      {
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          break;
        Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)Instance,
                                      v9,
                                      (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !v8 )
          break;
        items = v8->fields._items;
        v19 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v8->fields._version;
        if ( !items )
          break;
        v20 = v8->fields._size;
        v21 = Instance;
        if ( (unsigned int)v20 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            (Il2CppObject *)Instance,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + v20;
          v8->fields._size = v20 + 1;
          v22[4] = (Il2CppClass *)v21;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v22 + 4), (int32_t)v21, v12, v13, v14, v15, v16, v17);
        }
        sort = this->fields.sort;
        if ( !sort )
          break;
        if ( sort->fields.isAscendingOrder )
        {
          v24 = v9 + 999;
          v10->fields.index = v9 + 999;
        }
        else
        {
          v10->fields.index = -1;
          v24 = -1;
        }
        ListViewItem__SetSortIndex(v10, v24, 0);
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          break;
        Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)Instance,
                                      v9,
                                      (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Instance )
          break;
        ListViewItem__Set((ListViewItem_o *)Instance, v10, 0);
      }
      MaterialEventLogServantListViewItem__DummyVisible((MaterialEventLogServantListViewItem_o *)v10, v4);
      if ( size == ++v9 )
        return;
    }
LABEL_27:
    sub_1C942F0(Instance, v4);
  }
}


void MaterialCollectionServantListViewManager__add_callbackFunc(
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

  if ( (byte_4D2790A & 1) == 0 )
  {
    sub_1C94098(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo);
    byte_4D2790A = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (MaterialCollectionServantListViewManager_CallbackFunc_c *)v7->klass != MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CEFE6C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MaterialCollectionServantListViewManager_o *)sub_1C9468C(v7);
  MaterialCollectionServantListViewManager__remove_callbackFunc(v10, v11, v12);
}


void MaterialCollectionServantListViewManager__add_callbackFunc2(
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

  if ( (byte_4D2790C & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    byte_4D2790C = 1;
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
    v8 = sub_1CEFE6C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MaterialCollectionServantListViewManager_o *)sub_1C9468C(v7);
  MaterialCollectionServantListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *MaterialCollectionServantListViewManager__get_ClippingObjectList(
        MaterialCollectionServantListViewManager_o *this,
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  _BOOL8 v20; // x0
  __int64 v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4D27911 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___);
    sub_1C94098(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject___ctor__);
    sub_1C94098(&System_Collections_Generic_List_MaterialCollectionServantListViewObject__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D27911 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_MaterialCollectionServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C942F0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C942F0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C942F0(0, v10);
      Item = (ListViewItem_o *)MaterialCollectionServantListViewObject__GetItem(
                                 (MaterialCollectionServantListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C942F0(0, v13);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_44610268((ListViewManager_o *)this, Item, 0);
        if ( v20 )
        {
          if ( !v3 )
            sub_1C942F0(v20, v21);
          items = v3->fields._items;
          v23 = Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C942F0(v20, v21);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C942F0(Item, v13);
        items = v3->fields._items;
        v23 = Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C942F0(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v25 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v11;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v11, v14, v15, v16, v17, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *)v3;
}


System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *MaterialCollectionServantListViewManager__get_ObjectList(
        MaterialCollectionServantListViewManager_o *this,
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject *v16; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D27910 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___);
    sub_1C94098(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject___ctor__);
    sub_1C94098(&System_Collections_Generic_List_MaterialCollectionServantListViewObject__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D27910 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_MaterialCollectionServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C942F0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C942F0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C942F0(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C942F0(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *)v3;
}


void MaterialCollectionServantListViewManager__remove_callbackFunc(
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

  if ( (byte_4D2790B & 1) == 0 )
  {
    sub_1C94098(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo);
    byte_4D2790B = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (MaterialCollectionServantListViewManager_CallbackFunc_c *)v7->klass != MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CEFE6C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MaterialCollectionServantListViewManager_o *)sub_1C9468C(v7);
  MaterialCollectionServantListViewManager__add_callbackFunc2(v10, v11, v12);
}


void MaterialCollectionServantListViewManager__remove_callbackFunc2(
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

  if ( (byte_4D2790D & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    byte_4D2790D = 1;
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
    v8 = sub_1CEFE6C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1C9468C(v7);
  MaterialCollectionServantListViewManager__DeleteContinueData(v10);
}


void MaterialCollectionServantListViewManager_CallbackFunc___ctor(
        MaterialCollectionServantListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC17E4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC178C;
}


System_IAsyncResult_o *MaterialCollectionServantListViewManager_CallbackFunc__BeginInvoke(
        MaterialCollectionServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v11; // [xsp+28h] [xbp-38h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v11 = index;
  v12 = kind;
  if ( (byte_4D27931 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&MaterialCollectionServantListViewManager_ResultKind_TypeInfo);
    byte_4D27931 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(MaterialCollectionServantListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v10, callback, object);
}


void MaterialCollectionServantListViewManager_CallbackFunc__EndInvoke(
        MaterialCollectionServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


void MaterialCollectionServantListViewManager_CallbackFunc__Invoke(
        MaterialCollectionServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    kind,
    index,
    this->fields.method);
}