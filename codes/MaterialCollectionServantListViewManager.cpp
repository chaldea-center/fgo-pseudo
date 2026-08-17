void MaterialCollectionServantListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ListViewSort_o *v8; // x19
  struct MaterialCollectionServantListViewManager_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  ListViewSort_o *v16; // x19
  struct MaterialCollectionServantListViewManager_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  ListViewSort_o *v24; // x19
  struct MaterialCollectionServantListViewManager_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_596B6C2 & 1) == 0 )
  {
    sub_2213A60(&ListViewSort_TypeInfo);
    sub_2213A60(&MaterialCollectionServantListViewManager_TypeInfo);
    sub_2213A60(&StringLiteral_9327/*"MaterialCollectionServant2"*/);
    sub_2213A60(&StringLiteral_9328/*"MaterialCollectionServant4"*/);
    sub_2213A60(&StringLiteral_9326/*"MaterialCollectionServant1"*/);
    sub_2213A60(&StringLiteral_9329/*"MaterialCollectionServant5"*/);
    byte_596B6C2 = 1;
  }
  v1 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50854784(v1, (System_String_o *)StringLiteral_9326/*"MaterialCollectionServant1"*/, 27, 1, 0);
  MaterialCollectionServantListViewManager_TypeInfo->static_fields->servantSortInfo = v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)MaterialCollectionServantListViewManager_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v8 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50854784(v8, (System_String_o *)StringLiteral_9327/*"MaterialCollectionServant2"*/, 27, 1, 0);
  static_fields = MaterialCollectionServantListViewManager_TypeInfo->static_fields;
  static_fields->servantEquipSortInfo = v8;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->servantEquipSortInfo,
    (int32_t)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50854784(v16, (System_String_o *)StringLiteral_9328/*"MaterialCollectionServant4"*/, 27, 1, 0);
  v17 = MaterialCollectionServantListViewManager_TypeInfo->static_fields;
  v17->commandCodeSortInfo = v16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->commandCodeSortInfo, (int32_t)v16, v18, v19, v20, v21, v22, v23);
  v24 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50854784(v24, (System_String_o *)StringLiteral_9329/*"MaterialCollectionServant5"*/, 3, 1, 0);
  v25 = MaterialCollectionServantListViewManager_TypeInfo->static_fields;
  v25->EventLogservantSortInfo = v24;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v25->EventLogservantSortInfo,
    (int32_t)v24,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
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
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *Child; // x22
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Component_object; // x22

  v2 = this;
  if ( (byte_596B6BF & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    this = (MaterialCollectionServantListViewManager_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B6BF = 1;
  }
  seed = v2->fields.seed;
  if ( !seed
    || (parent = seed->fields.parent) == 0
    || (this = (MaterialCollectionServantListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                               seed->fields.parent,
                                                               0)) == 0 )
  {
LABEL_20:
    sub_2213CDC(this, method);
  }
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0);
  if ( childCount >= 1 )
  {
    v6 = childCount;
    for ( i = 0; v6 != i; ++i )
    {
      Child = (UnityEngine_Object_o *)GameObjectExtensions__GetChild(parent, i, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
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
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
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
  MaterialCollectionServantListViewManager_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w21
  int32_t v5; // w20
  __int64 naturalAligment; // x10

  v2 = this;
  if ( (byte_596B6C1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (MaterialCollectionServantListViewManager_o *)sub_2213A60(&MaterialEventLogServantListViewItem_TypeInfo);
    byte_596B6C1 = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
    goto LABEL_12;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      this = (MaterialCollectionServantListViewManager_o *)v2->fields.itemList;
      if ( !this )
        break;
      this = (MaterialCollectionServantListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                             (System_Collections_Generic_List_object__o *)this,
                                                             v5,
                                                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        break;
      naturalAligment = MaterialEventLogServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (MaterialEventLogServantListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != MaterialEventLogServantListViewItem_TypeInfo )
      {
        break;
      }
      MaterialEventLogServantListViewItem__initCoercionInactive((MaterialEventLogServantListViewItem_o *)this, 0);
      if ( size == ++v5 )
        return;
    }
LABEL_12:
    sub_2213CDC(this, method);
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

  if ( (byte_596B6A7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__);
    byte_596B6A7 = 1;
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
                                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      v7 = (MaterialCollectionServantListViewObject_o *)ObjectList;
      MaterialCollectionServantListViewObject__ClearNewIcon((MaterialCollectionServantListViewObject_o *)ObjectList, v4);
      MaterialCollectionServantListViewObject__AttachedIconSetupDisp(v7, v8);
      if ( ++v6 >= v5->fields._size )
        return;
    }
LABEL_9:
    sub_2213CDC(ObjectList, v4);
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
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  UserCommandCodeCollectionEntity_array *v16; // x22
  MaterialCollectionServantListViewManager_c *v17; // x8
  struct ListViewSort_o *commandCodeSortInfo; // x1
  UserServantCollectionEntity_array *CollectionList; // x21
  int v20; // w8
  __int64 v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  MaterialCollectionServantListViewManager_c *v28; // x8
  struct ListViewSort_o *servantEquipSortInfo; // x1
  __int64 v30; // x1
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  MaterialCollectionServantListViewManager_c *v37; // x8
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v39; // x1
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  struct ListViewSort_o *sort; // x8
  unsigned int sortKind; // w9
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeTabSprite; // x23
  __int64 v51; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v53; // x20
  UserCommandCodeCollectionEntity_o *v54; // x24
  MaterialCollectionServantListViewItem_o *v55; // x23
  const MethodInfo *v56; // x4
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v64; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v66; // x8
  il2cpp_array_size_t v67; // x8
  unsigned __int64 v68; // x22
  UserServantCollectionEntity_o *v69; // x24
  MaterialCollectionServantListViewItem_o *v70; // x23
  const MethodInfo *v71; // x4
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  intptr_t v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  intptr_t v81; // x8
  UnityEngine_Object_o *completeSprite; // x20
  __int64 v83; // x2
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v85; // x1
  int32_t findSum[2]; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_596B6A5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&MaterialCollectionServantListViewItem_TypeInfo);
    sub_2213A60(&MaterialCollectionServantListViewManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_12319/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_596B6A5 = 1;
  }
  *(_QWORD *)findSum = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  v7 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v7,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
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
    v28 = MaterialCollectionServantListViewManager_TypeInfo;
    if ( !*(&MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo, v21, v22);
      v28 = MaterialCollectionServantListViewManager_TypeInfo;
    }
    servantEquipSortInfo = v28->static_fields->servantEquipSortInfo;
    this->fields.sort = servantEquipSortInfo;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.sort,
      (int32_t)servantEquipSortInfo,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    Instance = (DataManager_o *)this->fields.sort;
    if ( !Instance )
      goto LABEL_67;
    v16 = 0;
    v20 = 1;
  }
  else if ( kind == 3 )
  {
    if ( !Instance )
      goto LABEL_67;
    v16 = UserCommandCodeCollectionMaster__getCollectionList(
            (UserCommandCodeCollectionMaster_o *)Instance,
            &findSum[1],
            findSum,
            0);
    v17 = MaterialCollectionServantListViewManager_TypeInfo;
    if ( !*(&MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo, v9, v10);
      v17 = MaterialCollectionServantListViewManager_TypeInfo;
    }
    commandCodeSortInfo = v17->static_fields->commandCodeSortInfo;
    this->fields.sort = commandCodeSortInfo;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.sort,
      (int32_t)commandCodeSortInfo,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    Instance = (DataManager_o *)this->fields.sort;
    if ( !Instance )
      goto LABEL_67;
    CollectionList = 0;
    v20 = 3;
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
    v37 = MaterialCollectionServantListViewManager_TypeInfo;
    if ( !*(&MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo, v30, v31);
      v37 = MaterialCollectionServantListViewManager_TypeInfo;
    }
    p_servantSortInfo = &v37->static_fields->servantSortInfo;
    v39 = *p_servantSortInfo;
    this->fields.sort = *p_servantSortInfo;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.sort, (int32_t)v39, v31, v32, v33, v34, v35, v36);
    Instance = (DataManager_o *)this->fields.sort;
    if ( !Instance )
      goto LABEL_67;
    v20 = 0;
    v16 = 0;
  }
  LODWORD(Instance->fields.writeMasterDataThread) = v20;
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.seed,
    (int32_t)normalSizeSeed,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
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
    if ( !v16 )
      goto LABEL_67;
    max_length = v16->max_length;
    if ( (int)max_length >= 1 )
    {
      v53 = 0;
      while ( v53 < (unsigned int)max_length )
      {
        v54 = v16->m_Items[v53];
        v55 = (MaterialCollectionServantListViewItem_o *)sub_2213CCC(MaterialCollectionServantListViewItem_TypeInfo);
        MaterialCollectionServantListViewItem___ctor_39961612(v55, v53, v54, 3, v56);
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          goto LABEL_67;
        m_CachedPtr = Instance->fields.m_CachedPtr;
        v64 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          goto LABEL_67;
        m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v55,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
        }
        else
        {
          v66 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v66 + 32) = v55;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v66 + 32), (int32_t)v55, v57, v58, v59, v60, v61, v62);
        }
        LODWORD(max_length) = v16->max_length;
        if ( (__int64)++v53 >= (int)max_length )
          goto LABEL_56;
      }
      goto LABEL_68;
    }
  }
  else
  {
    if ( !CollectionList )
      goto LABEL_67;
    v67 = CollectionList->max_length;
    if ( (int)v67 >= 1 )
    {
      v68 = 0;
      while ( v68 < (unsigned int)v67 )
      {
        v69 = CollectionList->m_Items[v68];
        v70 = (MaterialCollectionServantListViewItem_o *)sub_2213CCC(MaterialCollectionServantListViewItem_TypeInfo);
        MaterialCollectionServantListViewItem___ctor(v70, v68, v69, kind, v71);
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          goto LABEL_67;
        v78 = Instance->fields.m_CachedPtr;
        v79 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( !v78 )
          goto LABEL_67;
        v80 = SLODWORD(Instance->fields.m_CancellationTokenSource);
        if ( (unsigned int)v80 >= *(_DWORD *)(v78 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v70,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
        }
        else
        {
          v81 = v78 + 8 * v80;
          LODWORD(Instance->fields.m_CancellationTokenSource) = v80 + 1;
          *(_QWORD *)(v81 + 32) = v70;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v81 + 32), (int32_t)v70, v72, v73, v74, v75, v76, v77);
        }
        LODWORD(v67) = CollectionList->max_length;
        if ( (__int64)++v68 >= (int)v67 )
          goto LABEL_56;
      }
LABEL_68:
      sub_2213CE4(Instance);
    }
  }
LABEL_56:
  completeSprite = (UnityEngine_Object_o *)this->fields.completeSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v51);
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
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v83);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12319/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0);
  if ( !emptyMessageLabel )
LABEL_67:
    sub_2213CDC(Instance, v6);
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  MaterialCollectionServantListViewManager__SetFilterButtonImage(this, v85);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0);
}


void MaterialCollectionServantListViewManager__CreateValentineList(
        MaterialCollectionServantListViewManager_o *this,
        int32_t kind,
        System_Collections_Generic_List_MaterialEventLogListViewItem_Info__o *infos,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  DataManager_o *v8; // x23
  Il2CppObject *MasterData_object; // x22
  struct ListViewSort_o *sort; // x8
  unsigned int sortKind; // w9
  __int64 v12; // x2
  int size; // w23
  MaterialEventLogServantListViewItem_c **v14; // x27
  int32_t i; // w24
  NetworkManager_c *v16; // x0
  int64_t userIdNumber; // x26
  UserServantCollectionEntity_o *Entity; // x26
  Il2CppObject *Item; // x28
  MaterialEventLogServantListViewItem_c **v20; // x20
  MaterialEventLogServantListViewItem_o *v21; // x27
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v29; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v31; // x8
  System_Collections_Generic_List_object__o *itemList; // x21
  MaterialEventLogListViewItem_Info_o *v33; // x24
  MaterialEventLogServantListViewItem_o *v34; // x22
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  Il2CppClass **v44; // x0
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x1
  bool v48; // w1
  const MethodInfo *v49; // x1
  const MethodInfo *v50; // x1
  struct System_Collections_Generic_List_ListViewItem__o *v51; // x8
  int v52; // w21
  int32_t v53; // w20
  __int64 naturalAligment; // x10

  if ( (byte_596B6A6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&MaterialEventLogListViewItem_Info_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&MaterialEventLogServantListViewItem_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_12320/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/);
    byte_596B6A6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  v8 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v8,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_43;
  sortKind = sort->fields.sortKind;
  if ( sortKind > 0x1B || ((1 << sortKind) & 0x8000204) == 0 )
    sort->fields.sortKind = 3;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !infos )
    goto LABEL_43;
  size = infos->fields._size;
  v14 = &MaterialEventLogServantListViewItem_TypeInfo;
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v12);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      v16 = NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v12);
        v16 = NetworkManager_TypeInfo;
      }
      userIdNumber = v16->static_fields->userIdNumber;
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)infos,
                                    i,
                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
      if ( !Instance )
        goto LABEL_43;
      if ( !MasterData_object )
        goto LABEL_43;
      Entity = UserServantCollectionMaster__GetEntity(
                 (UserServantCollectionMaster_o *)MasterData_object,
                 userIdNumber,
                 HIDWORD(Instance->fields.masterDataBytes),
                 0);
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)infos,
               i,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
      v20 = v14;
      v21 = (MaterialEventLogServantListViewItem_o *)sub_2213CCC(*v14);
      MaterialEventLogServantListViewItem___ctor(
        v21,
        i,
        Entity,
        kind,
        (MaterialEventLogListViewItem_Info_o *)Item,
        0,
        0);
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        goto LABEL_43;
      m_CachedPtr = Instance->fields.m_CachedPtr;
      v29 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_43;
      m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v21,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v31 + 32) = v21;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 32), (int32_t)v21, v22, v23, v24, v25, v26, v27);
      }
      v14 = v20;
    }
    if ( Entity )
    {
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v33 = (MaterialEventLogListViewItem_Info_o *)sub_2213CCC(MaterialEventLogListViewItem_Info_TypeInfo);
      MaterialEventLogListViewItem_Info___ctor(v33, 0);
      v34 = (MaterialEventLogServantListViewItem_o *)sub_2213CCC(*v20);
      MaterialEventLogServantListViewItem___ctor(v34, size, Entity, kind, v33, 1, 0);
      if ( !itemList )
        goto LABEL_43;
      items = itemList->fields._items;
      v42 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        goto LABEL_43;
      v43 = itemList->fields._size;
      if ( (unsigned int)v43 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v34,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v44 = &items->obj.klass + v43;
        itemList->fields._size = v43 + 1;
        v44[4] = (Il2CppClass *)v34;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v44 + 4), (int32_t)v34, v35, v36, v37, v38, v39, v40);
      }
    }
  }
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v12);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12320/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/, 0);
  if ( !emptyMessageLabel )
    goto LABEL_43;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0);
  MaterialCollectionServantListViewManager__SortDummyData(this, v46);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  v48 = MaterialCollectionServantListViewManager__GetFilterCount(this, v47) < 1;
  ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v48, 0);
  MaterialCollectionServantListViewManager__SetValentineFilterButtonImage(this, v49);
  MaterialCollectionServantListViewManager__ClearNewIcon(this, v50);
  v51 = this->fields.itemList;
  if ( !v51 )
LABEL_43:
    sub_2213CDC(Instance, v7);
  v52 = v51->fields._size;
  if ( v52 >= 1 )
  {
    v53 = 0;
    do
    {
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        goto LABEL_43;
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v53,
                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Instance )
        goto LABEL_43;
      naturalAligment = (*v14)->_2.naturalAligment;
      if ( Instance->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (MaterialEventLogServantListViewItem_c *)Instance->klass->_2.typeHierarchy[naturalAligment - 1] != *v14 )
      {
        goto LABEL_43;
      }
      MaterialEventLogServantListViewItem__SetDummy((MaterialEventLogServantListViewItem_o *)Instance, 0);
    }
    while ( v52 != ++v53 );
  }
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0);
}


void MaterialCollectionServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MaterialCollectionServantListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_596B6A0 & 1) == 0 )
  {
    sub_2213A60(&MaterialCollectionServantListViewManager_TypeInfo);
    byte_596B6A0 = 1;
  }
  v3 = MaterialCollectionServantListViewManager_TypeInfo;
  if ( !*(&MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo, v1, v2);
    v3 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  servantSortInfo = v3->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0),
        (servantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0)
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0),
        (servantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->commandCodeSortInfo) == 0)
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0),
        (servantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->EventLogservantSortInfo) == 0) )
  {
    sub_2213CDC(servantSortInfo, v1);
  }
  ListViewSort__DeleteContinueData(servantSortInfo, 0);
}


void MaterialCollectionServantListViewManager__DestroyList(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  MaterialCollectionServantListViewManager_c *v5; // x0
  ListViewSort_o *servantSortInfo; // x8
  __int64 v7; // x0
  __int64 v8; // x1
  ListViewSort_o *servantEquipSortInfo; // x8
  ListViewSort_o *commandCodeSortInfo; // x8
  ListViewSort_o *EventLogservantSortInfo; // x8

  if ( (byte_596B6AB & 1) == 0 )
  {
    sub_2213A60(&MaterialCollectionServantListViewManager_TypeInfo);
    byte_596B6AB = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  v5 = MaterialCollectionServantListViewManager_TypeInfo;
  if ( !*(&MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo, v3, v4);
    v5 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  servantSortInfo = v5->static_fields->servantSortInfo;
  if ( servantSortInfo )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, v3, v4);
      servantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->servantSortInfo;
      if ( !servantSortInfo )
        goto LABEL_28;
    }
    ListViewSort__Save(servantSortInfo, 0);
    v5 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  if ( !*(&v5->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v5, v3, v4);
    v5 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  servantEquipSortInfo = v5->static_fields->servantEquipSortInfo;
  if ( servantEquipSortInfo )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, v3, v4);
      servantEquipSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo;
      if ( !servantEquipSortInfo )
        goto LABEL_28;
    }
    ListViewSort__Save(servantEquipSortInfo, 0);
    v5 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  if ( !*(&v5->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v5, v3, v4);
    v5 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  commandCodeSortInfo = v5->static_fields->commandCodeSortInfo;
  if ( commandCodeSortInfo )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, v3, v4);
      commandCodeSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->commandCodeSortInfo;
      if ( !commandCodeSortInfo )
        goto LABEL_28;
    }
    ListViewSort__Save(commandCodeSortInfo, 0);
    v5 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  if ( !*(&v5->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v5, v3, v4);
    v5 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v5->static_fields->EventLogservantSortInfo;
  if ( EventLogservantSortInfo )
  {
    if ( *(&v5->_2.cctor_finished + 1)
      || (j_il2cpp_runtime_class_init_0(v5, v3, v4),
          (EventLogservantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->EventLogservantSortInfo) != 0) )
    {
      ListViewSort__Save(EventLogservantSortInfo, 0);
      return;
    }
LABEL_28:
    sub_2213CDC(v7, v8);
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
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *MaterialEventLogListViewManager; // x21
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  int32_t FilterCount; // w20

  if ( (byte_596B6B8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B6B8 = 1;
  }
  eventLogServantSortSelectMenu = this->fields.eventLogServantSortSelectMenu;
  if ( !eventLogServantSortSelectMenu )
    goto LABEL_15;
  MaterialEventLogServantSortSelectMenu__Close(eventLogServantSortSelectMenu, 0);
  MaterialEventLogListViewManager = (UnityEngine_Object_o *)MaterialCollectionServantListViewManager__GetMaterialEventLogListViewManager(
                                                              v6,
                                                              v7);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
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
      0);
  }
  if ( !isDecide )
    goto LABEL_14;
  MaterialCollectionServantListViewManager__AllInactiveUIWidget(this, (const MethodInfo *)isDecide);
  MaterialCollectionServantListViewManager__AllInitInactiveDummy(this, v11);
  if ( !this->fields.itemList )
LABEL_15:
    sub_2213CDC(eventLogServantSortSelectMenu, isDecide);
  FilterCount = MaterialCollectionServantListViewManager__GetFilterCount(this, (const MethodInfo *)isDecide);
  if ( FilterCount <= 11 )
    MaterialCollectionServantListViewManager__InactiveDummy(this, v12);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, FilterCount < 1, 0);
  ListViewManager__ScreenUpdate((ListViewManager_o *)this, 0);
LABEL_14:
  MaterialCollectionServantListViewManager__SetValentineFilterButtonImage(this, (const MethodInfo *)isDecide);
}


// local variable allocation has failed, the output may be wrong!
void MaterialCollectionServantListViewManager__EndSelectSortKind(
        MaterialCollectionServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  MaterialCollectionServantSortSelectMenu_o *sortSelectMenu; // x0
  const MethodInfo *v6; // x1

  sortSelectMenu = this->fields.sortSelectMenu;
  if ( !sortSelectMenu )
    sub_2213CDC(0, isDecide);
  MaterialCollectionServantSortSelectMenu__Close(sortSelectMenu, 0);
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

  if ( (byte_596B6B6 & 1) == 0 )
  {
    sub_2213A60(&MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_MaterialCollectionServantListViewManager_EndEventLogSortKind__);
    byte_596B6B6 = 1;
  }
  if ( this->fields.isInput )
  {
    sort = this->fields.sort;
    v6 = (MaterialEventLogServantSortSelectMenu_CallbackFunc_o *)sub_2213CCC(MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo);
    MaterialEventLogServantSortSelectMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_MaterialCollectionServantListViewManager_EndEventLogSortKind__,
      0);
    if ( !eventLogServantSortSelectMenu )
      sub_2213CDC(v7, v8);
    MaterialEventLogServantSortSelectMenu__Open(eventLogServantSortSelectMenu, 0, sort, v6, 0);
  }
}


void MaterialCollectionServantListViewManager__EventLogSortListSave(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MaterialCollectionServantListViewManager_c *v3; // x0
  ListViewSort_o *EventLogservantSortInfo; // x8
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_596B6BE & 1) == 0 )
  {
    sub_2213A60(&MaterialCollectionServantListViewManager_TypeInfo);
    byte_596B6BE = 1;
  }
  v3 = MaterialCollectionServantListViewManager_TypeInfo;
  if ( !*(&MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo, method, v2);
    v3 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v3->static_fields->EventLogservantSortInfo;
  if ( EventLogservantSortInfo )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method, v2);
      EventLogservantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->EventLogservantSortInfo;
      if ( !EventLogservantSortInfo )
        sub_2213CDC(v5, v6);
    }
    ListViewSort__Save(EventLogservantSortInfo, 0);
  }
}


int32_t MaterialCollectionServantListViewManager__GetFilterCount(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w22
  int32_t v5; // w20
  int32_t v6; // w21
  __int64 naturalAligment; // x10

  v2 = this;
  if ( (byte_596B6B7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (MaterialCollectionServantListViewManager_o *)sub_2213A60(&MaterialEventLogServantListViewItem_TypeInfo);
    byte_596B6B7 = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
    goto LABEL_16;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      this = (MaterialCollectionServantListViewManager_o *)v2->fields.itemList;
      if ( !this )
        break;
      this = (MaterialCollectionServantListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                             (System_Collections_Generic_List_object__o *)this,
                                                             v6,
                                                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        break;
      naturalAligment = MaterialEventLogServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (MaterialEventLogServantListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != MaterialEventLogServantListViewItem_TypeInfo )
      {
        break;
      }
      if ( !LOBYTE(this->fields.itemSortList) )
        v5 += MaterialEventLogServantListViewItem__IsItemMatchFilter(
                (MaterialEventLogServantListViewItem_o *)this,
                v2->fields.sort,
                0);
      if ( size == ++v6 )
        return v5;
    }
LABEL_16:
    sub_2213CDC(this, method);
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
  if ( (byte_596B6AC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (MaterialCollectionServantListViewManager_o *)sub_2213A60(&MaterialCollectionServantListViewItem_TypeInfo);
    byte_596B6AC = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    sub_2213CDC(this, *(_QWORD *)&index);
  result = 0;
  if ( (index & 0x80000000) == 0 && itemList->fields._size > index )
  {
    result = (MaterialCollectionServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                          (System_Collections_Generic_List_object__o *)v4->fields.itemList,
                                                          index,
                                                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v4; // x2
  UnityEngine_Object_o *dropObjectList; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  bool v8; // w8
  __int64 naturalAligment; // x10
  __int64 v10; // x2
  bool v11; // w8
  intptr_t m_CachedPtr; // x19
  bool v13; // w8

  if ( (byte_596B6A4 & 1) == 0 )
  {
    sub_2213A60(&MyRoomRootComponent_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_596B6A4 = 1;
  }
  result = (MaterialEventLogListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !result )
    goto LABEL_22;
  dropObjectList = (UnityEngine_Object_o *)result->fields.dropObjectList;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  v8 = UnityEngine_Object__op_Equality(dropObjectList, 0, 0);
  result = 0;
  if ( !v8 )
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v11 = UnityEngine_Object__op_Equality(dropObjectList, 0, 0);
    result = 0;
    if ( !v11 )
    {
      if ( !dropObjectList )
        goto LABEL_22;
      m_CachedPtr = dropObjectList[2].fields.m_CachedPtr;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v10);
      v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)m_CachedPtr, 0, 0);
      result = 0;
      if ( !v13 )
      {
        if ( m_CachedPtr )
          return *(MaterialEventLogListViewManager_o **)(m_CachedPtr + 416);
LABEL_22:
        sub_2213CDC(result, v3);
      }
    }
  }
  return result;
}


void MaterialCollectionServantListViewManager__InactiveDummy(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w21
  int32_t v5; // w20
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_object__o *v7; // x19
  int32_t v8; // w20
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Component_object; // x21

  v2 = this;
  if ( (byte_596B6C0 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_2213A60(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__);
    sub_2213A60(&MaterialEventLogServantListViewItem_TypeInfo);
    this = (MaterialCollectionServantListViewManager_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B6C0 = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
    goto LABEL_23;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      this = (MaterialCollectionServantListViewManager_o *)v2->fields.itemList;
      if ( !this )
        break;
      this = (MaterialCollectionServantListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                             (System_Collections_Generic_List_object__o *)this,
                                                             v5,
                                                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        break;
      naturalAligment = MaterialEventLogServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (MaterialEventLogServantListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != MaterialEventLogServantListViewItem_TypeInfo )
      {
        break;
      }
      MaterialEventLogServantListViewItem__InactiveDummy((MaterialEventLogServantListViewItem_o *)this, 0);
      if ( size == ++v5 )
        goto LABEL_11;
    }
LABEL_23:
    sub_2213CDC(this, method);
  }
LABEL_11:
  this = (MaterialCollectionServantListViewManager_o *)MaterialCollectionServantListViewManager__get_ObjectList(
                                                         v2,
                                                         method);
  if ( !this )
    goto LABEL_23;
  v7 = (System_Collections_Generic_List_object__o *)this;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      this = (MaterialCollectionServantListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                             v7,
                                                             v8,
                                                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__);
      if ( !this )
        goto LABEL_23;
      this = (MaterialCollectionServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0);
      if ( !this )
        goto LABEL_23;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
      this = (MaterialCollectionServantListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                             (UnityEngine_Object_o *)Component_object,
                                                             0,
                                                             0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_23;
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
  __int64 v2; // x2
  MaterialCollectionServantListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_596B6A1 & 1) == 0 )
  {
    sub_2213A60(&MaterialCollectionServantListViewManager_TypeInfo);
    byte_596B6A1 = 1;
  }
  v3 = MaterialCollectionServantListViewManager_TypeInfo;
  if ( !*(&MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo, v1, v2);
    v3 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  servantSortInfo = v3->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__InitLoad(servantSortInfo, 0),
        (servantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0)
    || (ListViewSort__InitLoad(servantSortInfo, 0),
        (servantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->commandCodeSortInfo) == 0)
    || (ListViewSort__InitLoad(servantSortInfo, 0),
        (servantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->EventLogservantSortInfo) == 0) )
  {
    sub_2213CDC(servantSortInfo, v1);
  }
  ListViewSort__InitLoad(servantSortInfo, 0);
}


void MaterialCollectionServantListViewManager__ModifyItem(
        MaterialCollectionServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewManager__RequestListObject_39973148(this, 4, method);
}


void MaterialCollectionServantListViewManager__ModifyList(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w23
  int32_t v5; // w20
  Il2CppObject *Item; // x0
  __int64 v7; // x2
  Il2CppObject *v8; // x21
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *klass; // x22

  v2 = this;
  if ( (byte_596B6AD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&MaterialCollectionServantListViewItem_TypeInfo);
    this = (MaterialCollectionServantListViewManager_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B6AD = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
    goto LABEL_17;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      this = (MaterialCollectionServantListViewManager_o *)v2->fields.itemList;
      if ( !this )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               v5,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v8 = Item;
        naturalAligment = MaterialCollectionServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (MaterialCollectionServantListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == MaterialCollectionServantListViewItem_TypeInfo )
        {
          klass = (UnityEngine_Object_o *)Item[7].klass;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v7);
          if ( !UnityEngine_Object__op_Equality(klass, 0, 0) )
          {
            this = (MaterialCollectionServantListViewManager_o *)v8[7].klass;
            if ( !this )
              break;
            ListViewObject__SetItemSeed((ListViewObject_o *)this, (ListViewItem_o *)v8, v2->fields.seed, 0);
          }
        }
      }
      if ( size == ++v5 )
        return;
    }
LABEL_17:
    sub_2213CDC(this, method);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
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

  if ( (byte_596B6BD & 1) == 0 )
  {
    sub_2213A60(&Method_MaterialCollectionServantListViewManager_OnClickScaleChange__);
    byte_596B6BD = 1;
  }
  v3 = Method_MaterialCollectionServantListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_MaterialCollectionServantListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_MaterialCollectionServantListViewManager_OnClickScaleChange__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_seed, (int32_t)smallSizeSeed, v6, v7, v8, v9, v10, v11);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v18 = this->fields.scaleType,
        scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        sort->fields.iconScaleKind = v18,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v18, 0),
        !scaleChangeTabSprite)
    || (UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)sort, 0), (sort = this->fields.sort) == 0) )
  {
    sub_2213CDC(sort, v5);
  }
  ListViewSort__Save(sort, 0);
  MaterialCollectionServantListViewManager__ModifyList(this, v20);
  MaterialCollectionServantListViewManager__SetMode_39957704(this, 2, v21);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void MaterialCollectionServantListViewManager__OnClickSelectListView(
        MaterialCollectionServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MaterialCollectionServantListViewManager_o *v9; // x20
  struct ListViewItem_o *linkItem; // x9
  struct MaterialCollectionServantListViewManager_CallbackFunc_o *callbackFunc; // x21
  ListViewItem_c *klass; // x9
  __int64 naturalAligment; // x10
  __int64 Index; // x2

  v9 = this;
  if ( (byte_596B6B3 & 1) == 0 )
  {
    this = (MaterialCollectionServantListViewManager_o *)sub_2213A60(&MaterialEventLogServantListViewItem_TypeInfo);
    byte_596B6B3 = 1;
  }
  if ( !obj )
    sub_2213CDC(this, obj);
  linkItem = obj->fields.linkItem;
  callbackFunc = v9->fields.callbackFunc;
  if ( !linkItem
    || (klass = linkItem->klass,
        naturalAligment = MaterialEventLogServantListViewItem_TypeInfo->_2.naturalAligment,
        klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (MaterialEventLogServantListViewItem_c *)klass->_2.typeHierarchy[naturalAligment - 1] != MaterialEventLogServantListViewItem_TypeInfo )
  {
    v9->fields.callbackFunc = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v9->fields.callbackFunc,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
  if ( callbackFunc )
  {
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
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

  if ( (byte_596B6B9 & 1) == 0 )
  {
    sub_2213A60(&Method_MaterialCollectionServantListViewManager_OnClickSortAscendingOrder__);
    byte_596B6B9 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_MaterialCollectionServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_MaterialCollectionServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_MaterialCollectionServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort
      || (sort->fields.isAscendingOrder ^= 1u,
          ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0),
          (v5 = this->fields.sort) == 0) )
    {
      sub_2213CDC(v5, v6);
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
  MaterialCollectionServantSortSelectMenu_o *v11; // x0
  int32_t v12; // w1
  struct MaterialCollectionServantSortSelectMenu_o *v13; // x21
  struct MaterialCollectionServantSortSelectMenu_o *sortSelectMenu; // x21

  if ( (byte_596B6B5 & 1) == 0 )
  {
    sub_2213A60(&MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_MaterialCollectionServantListViewManager_EndSelectSortKind__);
    sub_2213A60(&Method_MaterialCollectionServantListViewManager_OnClickSortKind__);
    byte_596B6B5 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_MaterialCollectionServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_MaterialCollectionServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_MaterialCollectionServantListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_18;
    listViewKind = sort->fields.listViewKind;
    switch ( listViewKind )
    {
      case 3:
        sortSelectMenu = this->fields.sortSelectMenu;
        v10 = (MaterialCollectionServantSortSelectMenu_CallbackFunc_o *)sub_2213CCC(MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo);
        MaterialCollectionServantSortSelectMenu_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_MaterialCollectionServantListViewManager_EndSelectSortKind__,
          0);
        if ( sortSelectMenu )
        {
          v11 = sortSelectMenu;
          v12 = 3;
          goto LABEL_17;
        }
        goto LABEL_18;
      case 1:
        v13 = this->fields.sortSelectMenu;
        v10 = (MaterialCollectionServantSortSelectMenu_CallbackFunc_o *)sub_2213CCC(MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo);
        MaterialCollectionServantSortSelectMenu_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_MaterialCollectionServantListViewManager_EndSelectSortKind__,
          0);
        if ( v13 )
        {
          v11 = v13;
          v12 = 1;
          goto LABEL_17;
        }
LABEL_18:
        sub_2213CDC(v5, v6);
      case 0:
        v9 = this->fields.sortSelectMenu;
        v10 = (MaterialCollectionServantSortSelectMenu_CallbackFunc_o *)sub_2213CCC(MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo);
        MaterialCollectionServantSortSelectMenu_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_MaterialCollectionServantListViewManager_EndSelectSortKind__,
          0);
        if ( v9 )
        {
          v11 = v9;
          v12 = 0;
LABEL_17:
          MaterialCollectionServantSortSelectMenu__Open(v11, v12, sort, v10, 0);
          return;
        }
        goto LABEL_18;
    }
  }
}


void MaterialCollectionServantListViewManager__OnLongPushListView(
        MaterialCollectionServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MaterialCollectionServantListViewManager_o *v9; // x20
  struct ListViewItem_o *linkItem; // x9
  struct MaterialCollectionServantListViewManager_CallbackFunc_o *callbackFunc; // x21
  ListViewItem_c *klass; // x9
  __int64 naturalAligment; // x10
  __int64 Index; // x2

  v9 = this;
  if ( (byte_596B6B4 & 1) == 0 )
  {
    this = (MaterialCollectionServantListViewManager_o *)sub_2213A60(&MaterialEventLogServantListViewItem_TypeInfo);
    byte_596B6B4 = 1;
  }
  if ( !obj )
    sub_2213CDC(this, obj);
  linkItem = obj->fields.linkItem;
  callbackFunc = v9->fields.callbackFunc;
  if ( !linkItem
    || (klass = linkItem->klass,
        naturalAligment = MaterialEventLogServantListViewItem_TypeInfo->_2.naturalAligment,
        klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (MaterialEventLogServantListViewItem_c *)klass->_2.typeHierarchy[naturalAligment - 1] != MaterialEventLogServantListViewItem_TypeInfo )
  {
    v9->fields.callbackFunc = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v9->fields.callbackFunc,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
  if ( callbackFunc )
  {
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
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
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  UIScrollView_o *v15; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_596B6B2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B6B2 = 1;
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      if ( !UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
        goto LABEL_14;
      v15 = this->fields.scrollView;
      if ( v15 )
      {
        ((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))v15->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v15,
          1,
          v15->klass->vtable._8_UpdateScrollbars.method);
        v15 = this->fields.scrollView;
        if ( v15 )
        {
          if ( (((__int64 (__fastcall *)(UIScrollView_o *, const MethodInfo *))v15->klass->vtable._6_get_shouldMoveVertically.methodPtr)(
                  v15,
                  v15->klass->vtable._6_get_shouldMoveVertically.method)
              & 1) == 0 )
            goto LABEL_14;
          v15 = this->fields.scrollView;
          if ( v15 )
          {
            UIScrollView__UpdatePosition(v15, 0);
LABEL_14:
            callbackFunc2 = this->fields.callbackFunc2;
            this->fields.callbackFunc2 = 0;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v9, v10, v11, v12, v13, v14);
            if ( callbackFunc2 )
              ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
                callbackFunc2->fields.method_code,
                callbackFunc2->fields.method);
            return;
          }
        }
      }
      sub_2213CDC(v15, v8);
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

  if ( (byte_596B6AA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__);
    byte_596B6AA = 1;
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
                                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__);
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
    sub_2213CDC(ObjectList, v4);
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
  System_String_o *v13; // x1

  if ( (byte_596B6B1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__);
    sub_2213A60(&Method_MaterialCollectionServantListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596B6B1 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  ObjectList = MaterialCollectionServantListViewManager__get_ObjectList(this, v3);
  if ( !ObjectList )
LABEL_13:
    sub_2213CDC(ObjectList, v5);
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
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0) )
    {
      v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_MaterialCollectionServantListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        goto LABEL_13;
      ++v8;
      MaterialCollectionServantListViewObject__Init_39974756(
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
    v13 = (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/;
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v13, 0.0, 0);
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
  const MethodInfo_448473C *v10; // x1
  Il2CppObject *current; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596B6AF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__);
    sub_2213A60(&Method_MaterialCollectionServantListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596B6AF = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)MaterialCollectionServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    v10 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_MaterialCollectionServantListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v13, v14);
      MaterialCollectionServantListViewObject__Init_39974756(
        (MaterialCollectionServantListViewObject_o *)current,
        mode,
        v12,
        delay,
        v15);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void MaterialCollectionServantListViewManager__RequestListObject_39973148(
        MaterialCollectionServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  const MethodInfo_448473C *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  __int64 v14; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v15; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596B6B0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__);
    sub_2213A60(&Method_MaterialCollectionServantListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596B6B0 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)MaterialCollectionServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v8 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v8);
    v14 = 0;
    v15 = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_MaterialCollectionServantListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v11, v12);
      MaterialCollectionServantListViewObject__Init_39974856(
        (MaterialCollectionServantListViewObject_o *)current,
        mode,
        v10,
        v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__Dispose__);
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

  if ( (byte_596B6A8 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18202/*"btn_bg_05"*/);
    sub_2213A60(&StringLiteral_18203/*"btn_bg_06"*/);
    sub_2213A60(&StringLiteral_449/*"#FE4545"*/);
    sub_2213A60(&StringLiteral_429/*"#000000"*/);
    byte_596B6A8 = 1;
  }
  sort = this->fields.sort;
  *(_QWORD *)&v6.fields.r = 0;
  *(_QWORD *)&v6.fields.b = 0;
  if ( !sort )
    goto LABEL_10;
  sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0);
  if ( !this->fields.filterSprite )
    goto LABEL_10;
  v4 = (System_String_o **)&StringLiteral_18202/*"btn_bg_05"*/;
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v5 = (System_String_o **)&StringLiteral_429/*"#000000"*/;
  }
  else
  {
    v4 = (System_String_o **)&StringLiteral_18203/*"btn_bg_06"*/;
    v5 = (System_String_o **)&StringLiteral_449/*"#FE4545"*/;
  }
  UISprite__set_spriteName(this->fields.filterSprite, *v4, 0);
  *(_QWORD *)&v6.fields.r = 0;
  *(_QWORD *)&v6.fields.b = 0;
  UnityEngine_ColorUtility__TryParseHtmlString(*v5, &v6, 0);
  sort = (ListViewSort_o *)this->fields.sortKindLabel;
  if ( !sort )
LABEL_10:
    sub_2213CDC(sort, method);
  UILabel__set_effectColor((UILabel_o *)sort, v6, 0);
}


void MaterialCollectionServantListViewManager__SetMode(
        MaterialCollectionServantListViewManager_o *this,
        int32_t mode,
        MaterialCollectionServantListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  MaterialCollectionServantListViewManager__SetMode_39957704(this, mode, v10);
}


void MaterialCollectionServantListViewManager__SetMode_39957704(
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
    MaterialCollectionServantListViewManager__RequestListObject_39973148(this, v6, v5);
  }
}


void MaterialCollectionServantListViewManager__SetMode_39974192(
        MaterialCollectionServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  MaterialCollectionServantListViewManager__SetMode_39957704(this, mode, v10);
}


void MaterialCollectionServantListViewManager__SetObjectItem(
        MaterialCollectionServantListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_596B6AE & 1) == 0 )
  {
    sub_2213A60(&MaterialCollectionServantListViewObject_TypeInfo);
    byte_596B6AE = 1;
  }
  if ( obj
    && (naturalAligment = MaterialCollectionServantListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (MaterialCollectionServantListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == MaterialCollectionServantListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 2 )
  {
    if ( v7 )
    {
      v8 = 2;
      goto LABEL_14;
    }
LABEL_15:
    sub_2213CDC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 3;
LABEL_14:
  MaterialCollectionServantListViewObject__Init_39974116(
    (MaterialCollectionServantListViewObject_o *)v7,
    v8,
    (const MethodInfo *)item);
}


void MaterialCollectionServantListViewManager__SetSort(
        MaterialCollectionServantListViewManager_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.sort = sort;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.sort,
    (int32_t)sort,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MaterialCollectionServantListViewManager__SetSortButtonImage(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  ListViewSort_o *sort; // x0
  UILabel_o *v8; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v10; // x8
  int32_t sortKind; // w9
  System_String_o **v12; // x8
  struct ListViewSort_o *v13; // x8
  System_String_o **v14; // x9
  System_String_o **v15; // x10
  System_String_o **v16; // x8
  System_String_o **v17; // x8

  if ( (byte_596B6BC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_18291/*"btn_sort_up"*/);
    sub_2213A60(&StringLiteral_18395/*"btn_txt_up"*/);
    sub_2213A60(&StringLiteral_18344/*"btn_txt_new"*/);
    sub_2213A60(&StringLiteral_18334/*"btn_txt_down"*/);
    sub_2213A60(&StringLiteral_18352/*"btn_txt_old"*/);
    sub_2213A60(&StringLiteral_18288/*"btn_sort_down"*/);
    byte_596B6BC = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_34;
    v8 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v8 )
      goto LABEL_34;
    UILabel__set_text(v8, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v10 = this->fields.sort;
    if ( v10 )
    {
      sortKind = v10->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v12 = (System_String_o **)(v10->fields.isAscendingOrder ? &StringLiteral_18352/*"btn_txt_old"*/ : &StringLiteral_18344/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v12, 0);
          v13 = this->fields.sort;
          if ( v13 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v14 = (System_String_o **)&StringLiteral_18288/*"btn_sort_down"*/;
              v15 = (System_String_o **)&StringLiteral_18291/*"btn_sort_up"*/;
LABEL_30:
              if ( v13->fields.isAscendingOrder )
                v17 = v14;
              else
                v17 = v15;
              UISprite__set_spriteName((UISprite_o *)sort, *v17, 0);
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
          v16 = (System_String_o **)(v10->fields.isAscendingOrder ? &StringLiteral_18395/*"btn_txt_up"*/ : &StringLiteral_18334/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v16, 0);
          v13 = this->fields.sort;
          if ( v13 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v14 = (System_String_o **)&StringLiteral_18291/*"btn_sort_up"*/;
              v15 = (System_String_o **)&StringLiteral_18288/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_2213CDC(sort, v5);
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

  if ( (byte_596B6A9 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_449/*"#FE4545"*/);
    sub_2213A60(&StringLiteral_18255/*"btn_filter_on"*/);
    sub_2213A60(&StringLiteral_429/*"#000000"*/);
    sub_2213A60(&StringLiteral_18254/*"btn_filter"*/);
    byte_596B6A9 = 1;
  }
  sort = this->fields.sort;
  *(_QWORD *)&v6.fields.r = 0;
  *(_QWORD *)&v6.fields.b = 0;
  if ( !sort )
    goto LABEL_10;
  sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0);
  if ( !this->fields.filterSprite )
    goto LABEL_10;
  v4 = (System_String_o **)&StringLiteral_18254/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v5 = (System_String_o **)&StringLiteral_429/*"#000000"*/;
  }
  else
  {
    v4 = (System_String_o **)&StringLiteral_18255/*"btn_filter_on"*/;
    v5 = (System_String_o **)&StringLiteral_449/*"#FE4545"*/;
  }
  UISprite__set_spriteName(this->fields.filterSprite, *v4, 0);
  *(_QWORD *)&v6.fields.r = 0;
  *(_QWORD *)&v6.fields.b = 0;
  UnityEngine_ColorUtility__TryParseHtmlString(*v5, &v6, 0);
  sort = (ListViewSort_o *)this->fields.sortKindLabel;
  if ( !sort )
LABEL_10:
    sub_2213CDC(sort, method);
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
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *MaterialEventLogListViewManager; // x20
  const MethodInfo *v11; // x1
  bool v12; // w1

  if ( (byte_596B6BA & 1) == 0 )
  {
    sub_2213A60(&Method_MaterialCollectionServantListViewManager_SortAscendingOrder__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B6BA = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_MaterialCollectionServantListViewManager_SortAscendingOrder__;
    if ( (*((_BYTE *)Method_MaterialCollectionServantListViewManager_SortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_MaterialCollectionServantListViewManager_SortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( sort )
    {
      sort->fields.isAscendingOrder ^= 1u;
      MaterialEventLogListViewManager = (UnityEngine_Object_o *)MaterialCollectionServantListViewManager__GetMaterialEventLogListViewManager(
                                                                  (MaterialCollectionServantListViewManager_o *)v5,
                                                                  v6);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
      v5 = (struct ListViewSort_o *)UnityEngine_Object__op_Inequality(MaterialEventLogListViewManager, 0, 0);
      if ( ((unsigned __int8)v5 & 1) != 0 )
      {
        if ( !MaterialEventLogListViewManager )
          goto LABEL_15;
        MaterialEventLogListViewManager__SetSort(
          (MaterialEventLogListViewManager_o *)MaterialEventLogListViewManager,
          this->fields.sort,
          0);
      }
      MaterialCollectionServantListViewManager__SortDummyData(this, v6);
      ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
      v12 = MaterialCollectionServantListViewManager__GetFilterCount(this, v11) < 1;
      ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v12, 0);
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
    sub_2213CDC(v5, v6);
  }
}


void MaterialCollectionServantListViewManager__SortDummyData(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w23
  System_Collections_Generic_List_object__o *v7; // x0
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w21
  ListViewItem_o *v10; // x22
  __int64 naturalAligment; // x10
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  DataManager_o *v21; // x1
  Il2CppClass **v22; // x0
  struct ListViewSort_o *sort; // x8
  int32_t v24; // w1
  ListViewItem_o *v25; // x0

  if ( (byte_596B6BB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MaterialEventLogServantListViewItem___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_MaterialEventLogServantListViewItem__TypeInfo);
    sub_2213A60(&MaterialEventLogServantListViewItem_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596B6BB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_27;
  size = itemList->fields._size;
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MaterialEventLogServantListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MaterialEventLogServantListViewItem___ctor__);
  v8 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
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
                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
                                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + v20;
          v8->fields._size = v20 + 1;
          v22[4] = (Il2CppClass *)v21;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v21, v12, v13, v14, v15, v16, v17);
        }
        sort = this->fields.sort;
        if ( !sort )
          break;
        if ( sort->fields.isAscendingOrder )
        {
          v24 = v9 + 999;
          v25 = v10;
          v10->fields.index = v9 + 999;
        }
        else
        {
          v10->fields.index = -1;
          v25 = v10;
          v24 = -1;
        }
        ListViewItem__SetSortIndex(v25, v24, 0);
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          break;
        Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)Instance,
                                      v9,
                                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Instance )
          break;
        ListViewItem__Set((ListViewItem_o *)Instance, v10, 0);
      }
      MaterialEventLogServantListViewItem__DummyVisible((MaterialEventLogServantListViewItem_o *)v10, 0);
      if ( size == ++v9 )
        return;
    }
LABEL_27:
    sub_2213CDC(Instance, v4);
  }
}


void MaterialCollectionServantListViewManager__add_callbackFunc(
        MaterialCollectionServantListViewManager_o *this,
        MaterialCollectionServantListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  MaterialCollectionServantListViewManager_o *v11; // x0
  MaterialCollectionServantListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596B69C & 1) == 0 )
  {
    sub_2213A60(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo);
    byte_596B69C = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (MaterialCollectionServantListViewManager_CallbackFunc_c *)v6->klass != MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCollectionServantListViewManager_o *)sub_221405C(
                                                        v6,
                                                        MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo,
                                                        v7,
                                                        v8);
  MaterialCollectionServantListViewManager__remove_callbackFunc(v11, v12, v13);
}


void MaterialCollectionServantListViewManager__add_callbackFunc2(
        MaterialCollectionServantListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  MaterialCollectionServantListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596B69E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596B69E = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCollectionServantListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  MaterialCollectionServantListViewManager__remove_callbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *MaterialCollectionServantListViewManager__get_ClippingObjectList(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *v13; // x21
  ListViewItem_o *Item; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  _BOOL8 v21; // x0
  __int64 v22; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596B6A3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_MaterialCollectionServantListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B6A3 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MaterialCollectionServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  v28.fields._list = 0;
  *(_QWORD *)&v28.fields._index = &v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_2213CDC(0, v12);
      Item = (ListViewItem_o *)MaterialCollectionServantListViewObject__GetItem(
                                 (MaterialCollectionServantListViewObject_o *)Component_object,
                                 v12);
      if ( !Item )
        sub_2213CDC(0, 0);
      if ( Item->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_50835204((ListViewManager_o *)this, Item, 0);
        if ( v21 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v24 = Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_2213CDC(v21, v22);
          }
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3
          || (items = v3->fields._items,
              v24 = Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_2213CDC(Item, Item);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v13;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v13, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *)v3;
}


System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *MaterialCollectionServantListViewManager__get_ObjectList(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596B6A2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_MaterialCollectionServantListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B6A2 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MaterialCollectionServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_2213CDC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *)v3;
}


void MaterialCollectionServantListViewManager__remove_callbackFunc(
        MaterialCollectionServantListViewManager_o *this,
        MaterialCollectionServantListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  MaterialCollectionServantListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596B69D & 1) == 0 )
  {
    sub_2213A60(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo);
    byte_596B69D = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (MaterialCollectionServantListViewManager_CallbackFunc_c *)v6->klass != MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCollectionServantListViewManager_o *)sub_221405C(
                                                        v6,
                                                        MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo,
                                                        v7,
                                                        v8);
  MaterialCollectionServantListViewManager__add_callbackFunc2(v11, v12, v13);
}


void MaterialCollectionServantListViewManager__remove_callbackFunc2(
        MaterialCollectionServantListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  const MethodInfo *v11; // x0

  if ( (byte_596B69F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596B69F = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (const MethodInfo *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  MaterialCollectionServantListViewManager__DeleteContinueData(v11);
}


void MaterialCollectionServantListViewManager_CallbackFunc___ctor(
        MaterialCollectionServantListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_2002328;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_20022D0;
}


System_IAsyncResult_o *MaterialCollectionServantListViewManager_CallbackFunc__BeginInvoke(
        MaterialCollectionServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v12 = kind;
  v11 = index;
  if ( (byte_596B6C3 & 1) == 0 )
  {
    sub_2213A60(&MaterialCollectionServantListViewManager_ResultKind_TypeInfo);
    byte_596B6C3 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(MaterialCollectionServantListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_5984348, &v11);
  return (System_IAsyncResult_o *)sub_2213A14(this, v10, callback, object);
}


void MaterialCollectionServantListViewManager_CallbackFunc__EndInvoke(
        MaterialCollectionServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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