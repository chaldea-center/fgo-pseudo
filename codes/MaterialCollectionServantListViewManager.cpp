void __fastcall MaterialCollectionServantListViewManager___cctor(const MethodInfo *method)
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
  struct MaterialCollectionServantListViewManager_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  ListViewSort_o *v17; // x19
  struct MaterialCollectionServantListViewManager_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  ListViewSort_o *v25; // x19
  struct MaterialCollectionServantListViewManager_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_438EDEA & 1) == 0 )
  {
    sub_B775C4(&ListViewSort_TypeInfo);
    sub_B775C4(&MaterialCollectionServantListViewManager_TypeInfo);
    sub_B775C4(&StringLiteral_9147/*"MaterialCollectionServant2"*/);
    sub_B775C4(&StringLiteral_9148/*"MaterialCollectionServant4"*/);
    sub_B775C4(&StringLiteral_9146/*"MaterialCollectionServant1"*/);
    sub_B775C4(&StringLiteral_9149/*"MaterialCollectionServant5"*/);
    byte_438EDEA = 1;
  }
  v1 = (ListViewSort_o *)sub_B77694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34308400(v1, (System_String_o *)StringLiteral_9146/*"MaterialCollectionServant1"*/, 27, 1, 0LL);
  static_fields = (BattleServantConfConponent_o *)MaterialCollectionServantListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
  v9 = (ListViewSort_o *)sub_B77694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34308400(v9, (System_String_o *)StringLiteral_9147/*"MaterialCollectionServant2"*/, 27, 1, 0LL);
  v10 = MaterialCollectionServantListViewManager_TypeInfo->static_fields;
  v10->servantEquipSortInfo = v9;
  sub_B77560(
    (BattleServantConfConponent_o *)&v10->servantEquipSortInfo,
    (System_Int32_array **)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (ListViewSort_o *)sub_B77694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34308400(v17, (System_String_o *)StringLiteral_9148/*"MaterialCollectionServant4"*/, 27, 1, 0LL);
  v18 = MaterialCollectionServantListViewManager_TypeInfo->static_fields;
  v18->commandCodeSortInfo = v17;
  sub_B77560(
    (BattleServantConfConponent_o *)&v18->commandCodeSortInfo,
    (System_Int32_array **)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (ListViewSort_o *)sub_B77694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34308400(v25, (System_String_o *)StringLiteral_9149/*"MaterialCollectionServant5"*/, 3, 1, 0LL);
  v26 = MaterialCollectionServantListViewManager_TypeInfo->static_fields;
  v26->EventLogservantSortInfo = v25;
  sub_B77560(
    (BattleServantConfConponent_o *)&v26->EventLogservantSortInfo,
    (System_Int32_array **)v25,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
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
  struct ListViewItemSeed_o *seed; // x8
  UnityEngine_GameObject_o *parent; // x19
  int32_t childCount; // w0
  int32_t v6; // w20
  int32_t i; // w21
  UnityEngine_Object_o *Child; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x22

  v2 = this;
  if ( (byte_438EDE7 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    this = (MaterialCollectionServantListViewManager_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438EDE7 = 1;
  }
  seed = v2->fields.seed;
  if ( !seed
    || (parent = seed->fields.parent) == 0LL
    || (this = (MaterialCollectionServantListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                               seed->fields.parent,
                                                               0LL)) == 0LL )
  {
LABEL_22:
    sub_B7769C(this, method);
  }
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0LL);
  if ( childCount >= 1 )
  {
    v6 = childCount;
    for ( i = 0; i < v6; ++i )
    {
      Child = (UnityEngine_Object_o *)GameObjectExtensions__GetChild(parent, i, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (MaterialCollectionServantListViewManager_o *)UnityEngine_Object__op_Inequality(Child, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !Child )
          goto LABEL_22;
        this = (MaterialCollectionServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)Child,
                                                               0LL);
        if ( !this )
          goto LABEL_22;
        Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (MaterialCollectionServantListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                               Component_srcLineSprite,
                                                               0LL,
                                                               0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !Component_srcLineSprite )
            goto LABEL_22;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, 0, 0LL);
        }
      }
    }
  }
}


void __fastcall MaterialCollectionServantListViewManager__AllInitInactiveDummy(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  signed __int64 size; // x20
  unsigned __int64 v5; // x21
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  v2 = this;
  if ( (byte_438EDE9 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (MaterialCollectionServantListViewManager_o *)sub_B775C4(&MaterialEventLogServantListViewItem_TypeInfo);
    byte_438EDE9 = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
    goto LABEL_15;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v5 = 0LL;
    do
    {
      if ( v5 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v6 = itemList->fields._items->m_Items[v5];
      if ( !v6 )
        break;
      v7 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7
        || (MaterialEventLogServantListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] != MaterialEventLogServantListViewItem_TypeInfo )
      {
        break;
      }
      ++v5;
      if ( (MaterialEventLogServantListViewItem_c *)v6->klass->_2.typeHierarchy[*(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2
                                                                                + 1)
                                                                              - 1] != MaterialEventLogServantListViewItem_TypeInfo )
        v6 = 0LL;
      BYTE1(v6[1].fields.sortValue2) = 0;
      if ( (__int64)v5 >= size )
        return;
      itemList = v2->fields.itemList;
    }
    while ( itemList );
LABEL_15:
    sub_B7769C(this, method);
  }
}


void __fastcall MaterialCollectionServantListViewManager__ClearNewIcon(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *ObjectList; // x0
  __int64 v4; // x1
  int size; // w8
  System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *v6; // x19
  __int64 v7; // x21
  MaterialCollectionServantListViewObject_o *v8; // x20
  const MethodInfo *v9; // x1

  if ( (byte_438EDCF & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__);
    byte_438EDCF = 1;
  }
  ObjectList = MaterialCollectionServantListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_12;
  size = ObjectList->fields._size;
  v6 = ObjectList;
  if ( size >= 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      if ( size <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v8 = v6->fields._items->m_Items[v7];
      if ( !v8 )
        break;
      ObjectList = (System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *)v8->fields.itemDraw;
      if ( !ObjectList )
        break;
      MaterialCollectionServantListViewItemDraw__ClearNewIcon(
        (MaterialCollectionServantListViewItemDraw_o *)ObjectList,
        0LL);
      MaterialCollectionServantListViewObject__AttachedIconSetupDisp(v8, v9);
      size = v6->fields._size;
      if ( (int)++v7 >= size )
        return;
    }
LABEL_12:
    sub_B7769C(ObjectList, v4);
  }
}


void __fastcall MaterialCollectionServantListViewManager__CreateList(
        MaterialCollectionServantListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  DataManager_o *v7; // x22
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UserCommandCodeCollectionEntity_array *v15; // x22
  MaterialCollectionServantListViewManager_c *v16; // x8
  struct ListViewSort_o *commandCodeSortInfo; // x1
  struct ListViewSort_o **p_sort; // x23
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UserServantCollectionEntity_array *CollectionList; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  MaterialCollectionServantListViewManager_c *v32; // x8
  struct ListViewSort_o *servantEquipSortInfo; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  MaterialCollectionServantListViewManager_c *v40; // x8
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v42; // x1
  struct ListViewSort_o *v43; // x8
  unsigned int sortKind; // w9
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeTabSprite; // x23
  __int64 v48; // x8
  unsigned __int64 v49; // x20
  UserCommandCodeCollectionEntity_o *v50; // x24
  MaterialCollectionServantListViewItem_o *v51; // x23
  __int64 v52; // x8
  unsigned __int64 v53; // x22
  UserServantCollectionEntity_o *v54; // x24
  MaterialCollectionServantListViewItem_o *v55; // x23
  UnityEngine_Object_o *completeSprite; // x20
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v58; // x1
  __int64 v59; // x0
  int32_t findSum[2]; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_438EDCD & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&MaterialCollectionServantListViewItem_TypeInfo);
    sub_B775C4(&MaterialCollectionServantListViewManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_12110/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_438EDCD = 1;
  }
  *(_QWORD *)findSum = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  v7 = Instance;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          Instance,
                                                                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v7,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
  if ( kind == 1 )
  {
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_67;
    CollectionList = UserServantCollectionMaster__getCollectionList(
                       MasterData_WarQuestSelectionMaster,
                       &findSum[1],
                       findSum,
                       1,
                       0,
                       0LL);
    v32 = MaterialCollectionServantListViewManager_TypeInfo;
    if ( (BYTE3(MaterialCollectionServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo);
      v32 = MaterialCollectionServantListViewManager_TypeInfo;
    }
    servantEquipSortInfo = v32->static_fields->servantEquipSortInfo;
    this->fields.sort = servantEquipSortInfo;
    p_sort = &this->fields.sort;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.sort,
      (System_Int32_array **)servantEquipSortInfo,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    if ( !this->fields.sort )
      goto LABEL_67;
    this->fields.sort->fields.listViewKind = 1;
    goto LABEL_25;
  }
  if ( kind != 3 )
  {
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_67;
    CollectionList = UserServantCollectionMaster__getCollectionList(
                       MasterData_WarQuestSelectionMaster,
                       &findSum[1],
                       findSum,
                       0,
                       1,
                       0LL);
    v40 = MaterialCollectionServantListViewManager_TypeInfo;
    if ( (BYTE3(MaterialCollectionServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo);
      v40 = MaterialCollectionServantListViewManager_TypeInfo;
    }
    p_servantSortInfo = &v40->static_fields->servantSortInfo;
    v42 = *p_servantSortInfo;
    this->fields.sort = *p_servantSortInfo;
    p_sort = &this->fields.sort;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.sort,
      (System_Int32_array **)v42,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    if ( !this->fields.sort )
      goto LABEL_67;
    this->fields.sort->fields.listViewKind = 0;
LABEL_25:
    Instance = (DataManager_o *)*p_sort;
    if ( !*p_sort )
      goto LABEL_67;
    ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
    v15 = 0LL;
    goto LABEL_27;
  }
  if ( !Instance )
    goto LABEL_67;
  v15 = UserCommandCodeCollectionMaster__getCollectionList(
          (UserCommandCodeCollectionMaster_o *)Instance,
          &findSum[1],
          findSum,
          0LL);
  v16 = MaterialCollectionServantListViewManager_TypeInfo;
  if ( (BYTE3(MaterialCollectionServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo);
    v16 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  commandCodeSortInfo = v16->static_fields->commandCodeSortInfo;
  this->fields.sort = commandCodeSortInfo;
  p_sort = &this->fields.sort;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)commandCodeSortInfo,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  if ( !this->fields.sort )
    goto LABEL_67;
  this->fields.sort->fields.listViewKind = 3;
  Instance = (DataManager_o *)*p_sort;
  if ( !*p_sort )
    goto LABEL_67;
  ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
  CollectionList = 0LL;
LABEL_27:
  v43 = *p_sort;
  if ( !*p_sort )
    goto LABEL_67;
  sortKind = v43->fields.sortKind;
  if ( sortKind > 0x1B || ((1 << sortKind) & 0x8000204) == 0 )
  {
    v43->fields.sortKind = 27;
    v43 = *p_sort;
    if ( !*p_sort )
      goto LABEL_67;
  }
  iconScaleKind = v43->fields.iconScaleKind;
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
      goto LABEL_38;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
LABEL_38:
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
    if ( !v15 )
      goto LABEL_67;
    v48 = *(_QWORD *)&v15->max_length;
    if ( (int)v48 >= 1 )
    {
      v49 = 0LL;
      while ( v49 < (unsigned int)v48 )
      {
        v50 = v15->m_Items[v49];
        v51 = (MaterialCollectionServantListViewItem_o *)sub_B77694(MaterialCollectionServantListViewItem_TypeInfo);
        MaterialCollectionServantListViewItem___ctor_26372672(v51, v49, v50, 3, 0LL);
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          goto LABEL_67;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v51,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v48) = v15->max_length;
        if ( (__int64)++v49 >= (int)v48 )
          goto LABEL_54;
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
        v55 = (MaterialCollectionServantListViewItem_o *)sub_B77694(MaterialCollectionServantListViewItem_TypeInfo);
        MaterialCollectionServantListViewItem___ctor(v55, v53, v54, kind, 0LL);
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          goto LABEL_67;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v55,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v52) = CollectionList->max_length;
        if ( (__int64)++v53 >= (int)v52 )
          goto LABEL_54;
      }
LABEL_68:
      v59 = sub_B776C8(Instance);
      sub_B77668(v59, 0LL);
    }
  }
LABEL_54:
  completeSprite = (UnityEngine_Object_o *)this->fields.completeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12110/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
LABEL_67:
    sub_B7769C(Instance, v6);
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  MaterialCollectionServantListViewManager__SetFilterButtonImage(this, v58);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
}


void __fastcall MaterialCollectionServantListViewManager__CreateValentineList(
        MaterialCollectionServantListViewManager_o *this,
        int32_t kind,
        System_Collections_Generic_List_MaterialEventLogListViewItem_Info__o *infos,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v7; // x1
  DataManager_o *v8; // x23
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  struct ListViewSort_o *sort; // x8
  unsigned int sortKind; // w9
  int size; // w23
  __int64 v13; // x28
  unsigned int v14; // w25
  __int64 v15; // x8
  UserServantCollectionEntity_o *Entity; // x24
  MaterialEventLogListViewItem_Info_o *v17; // x27
  MaterialEventLogServantListViewItem_o *v18; // x26
  const MethodInfo *v19; // x6
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  MaterialEventLogListViewItem_Info_o *v21; // x25
  MaterialEventLogServantListViewItem_o *v22; // x22
  const MethodInfo *v23; // x6
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  bool v27; // w1
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x1
  struct System_Collections_Generic_List_ListViewItem__o *v30; // x23
  signed __int64 v31; // x20
  unsigned __int64 v32; // x21
  ListViewItem_o *v33; // x8
  __int64 v34; // x11
  __int64 v35; // x11
  MaterialEventLogServantListViewItem_o *v36; // x0

  if ( (byte_438EDCE & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B775C4(&MaterialEventLogListViewItem_Info_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&MaterialEventLogServantListViewItem_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_12111/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/);
    byte_438EDCE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  v8 = Instance;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          Instance,
                                                                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v8,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_44;
  sortKind = sort->fields.sortKind;
  if ( sortKind > 0x1B || ((1 << sortKind) & 0x8000204) == 0 )
    sort->fields.sortKind = 3;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !infos )
    goto LABEL_44;
  size = infos->fields._size;
  if ( size >= 1 )
  {
    v13 = 4LL;
    do
    {
      v14 = v13 - 4;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
      if ( infos->fields._size <= v14 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v15 = *((_QWORD *)&infos->fields._items->obj.klass + v13);
      if ( !v15 || !MasterData_WarQuestSelectionMaster )
        goto LABEL_44;
      Entity = UserServantCollectionMaster__GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 (int64_t)Instance,
                 *(_DWORD *)(v15 + 60),
                 0LL);
      if ( infos->fields._size <= v14 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v17 = (MaterialEventLogListViewItem_Info_o *)*((_QWORD *)&infos->fields._items->obj.klass + v13);
      v18 = (MaterialEventLogServantListViewItem_o *)sub_B77694(MaterialEventLogServantListViewItem_TypeInfo);
      MaterialEventLogServantListViewItem___ctor(v18, v14, Entity, kind, v17, 0, v19);
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        goto LABEL_44;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      ++v13;
    }
    while ( (int)v13 - 4 < size );
    if ( Entity )
    {
      itemList = this->fields.itemList;
      v21 = (MaterialEventLogListViewItem_Info_o *)sub_B77694(MaterialEventLogListViewItem_Info_TypeInfo);
      MaterialEventLogListViewItem_Info___ctor(v21, 0LL);
      v22 = (MaterialEventLogServantListViewItem_o *)sub_B77694(MaterialEventLogServantListViewItem_TypeInfo);
      MaterialEventLogServantListViewItem___ctor(v22, size, Entity, kind, v21, 1, v23);
      if ( !itemList )
        goto LABEL_44;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    }
  }
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12111/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_44;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0LL);
  MaterialCollectionServantListViewManager__SortDummyData(this, v25);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  v27 = MaterialCollectionServantListViewManager__GetFilterCount(this, v26) < 1;
  ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v27, 0LL);
  MaterialCollectionServantListViewManager__SetValentineFilterButtonImage(this, v28);
  MaterialCollectionServantListViewManager__ClearNewIcon(this, v29);
  v30 = this->fields.itemList;
  if ( !v30 )
LABEL_44:
    sub_B7769C(Instance, v7);
  v31 = v30->fields._size;
  if ( (int)v31 >= 1 )
  {
    v32 = 0LL;
    while ( 1 )
    {
      if ( v32 >= (unsigned int)v30->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v33 = v30->fields._items->m_Items[v32];
      if ( !v33 )
        goto LABEL_44;
      v34 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v33->klass->_2.bitflags2 + 1) < (unsigned int)v34
        || (MaterialEventLogServantListViewItem_c *)v33->klass->_2.typeHierarchy[v34 - 1] != MaterialEventLogServantListViewItem_TypeInfo )
      {
        goto LABEL_44;
      }
      v35 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v33->klass->_2.bitflags2 + 1) >= (unsigned int)v35 )
      {
        if ( (MaterialEventLogServantListViewItem_c *)v33->klass->_2.typeHierarchy[v35 - 1] == MaterialEventLogServantListViewItem_TypeInfo )
          v36 = (MaterialEventLogServantListViewItem_o *)v30->fields._items->m_Items[v32];
        else
          v36 = 0LL;
      }
      else
      {
        v36 = 0LL;
      }
      MaterialEventLogServantListViewItem__SetDummy(v36, v7);
      if ( (__int64)++v32 >= v31 )
        break;
      v30 = this->fields.itemList;
      if ( !v30 )
        goto LABEL_44;
    }
  }
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
}


void __fastcall MaterialCollectionServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialCollectionServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_438EDC8 & 1) == 0 )
  {
    sub_B775C4(&MaterialCollectionServantListViewManager_TypeInfo);
    byte_438EDC8 = 1;
  }
  v2 = MaterialCollectionServantListViewManager_TypeInfo;
  if ( (BYTE3(MaterialCollectionServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
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
    sub_B7769C(servantSortInfo, v1);
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

  if ( (byte_438EDD3 & 1) == 0 )
  {
    sub_B775C4(&MaterialCollectionServantListViewManager_TypeInfo);
    byte_438EDD3 = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  v3 = MaterialCollectionServantListViewManager_TypeInfo;
  if ( (BYTE3(MaterialCollectionServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo);
    v3 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  servantSortInfo = v3->static_fields->servantSortInfo;
  if ( servantSortInfo )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      servantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->servantSortInfo;
      if ( !servantSortInfo )
        goto LABEL_36;
    }
    ListViewSort__Save(servantSortInfo, 0LL);
    v3 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  servantEquipSortInfo = v3->static_fields->servantEquipSortInfo;
  if ( servantEquipSortInfo )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      servantEquipSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo;
      if ( !servantEquipSortInfo )
        goto LABEL_36;
    }
    ListViewSort__Save(servantEquipSortInfo, 0LL);
    v3 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  commandCodeSortInfo = v3->static_fields->commandCodeSortInfo;
  if ( commandCodeSortInfo )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      commandCodeSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->commandCodeSortInfo;
      if ( !commandCodeSortInfo )
        goto LABEL_36;
    }
    ListViewSort__Save(commandCodeSortInfo, 0LL);
    v3 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v3->static_fields->EventLogservantSortInfo;
  if ( EventLogservantSortInfo )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) == 0
      || v3->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v3),
          (EventLogservantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->EventLogservantSortInfo) != 0LL) )
    {
      ListViewSort__Save(EventLogservantSortInfo, 0LL);
      return;
    }
LABEL_36:
    sub_B7769C(v5, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewManager__EndEventLogSortKind(
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

  if ( (byte_438EDE0 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438EDE0 = 1;
  }
  eventLogServantSortSelectMenu = this->fields.eventLogServantSortSelectMenu;
  if ( !eventLogServantSortSelectMenu )
    goto LABEL_16;
  MaterialEventLogServantSortSelectMenu__Close_32485908(eventLogServantSortSelectMenu, 0LL, method);
  MaterialEventLogListViewManager = (UnityEngine_Object_o *)MaterialCollectionServantListViewManager__GetMaterialEventLogListViewManager(
                                                              v6,
                                                              v7);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  eventLogServantSortSelectMenu = (MaterialEventLogServantSortSelectMenu_o *)UnityEngine_Object__op_Inequality(
                                                                               MaterialEventLogListViewManager,
                                                                               0LL,
                                                                               0LL);
  if ( ((unsigned __int8)eventLogServantSortSelectMenu & 1) != 0 )
  {
    if ( !MaterialEventLogListViewManager )
      goto LABEL_16;
    MaterialEventLogListViewManager__SetSort(
      (MaterialEventLogListViewManager_o *)MaterialEventLogListViewManager,
      this->fields.sort,
      v9);
  }
  if ( !isDecide )
    goto LABEL_15;
  MaterialCollectionServantListViewManager__AllInactiveUIWidget(this, (const MethodInfo *)isDecide);
  MaterialCollectionServantListViewManager__AllInitInactiveDummy(this, v10);
  if ( !this->fields.itemList )
LABEL_16:
    sub_B7769C(eventLogServantSortSelectMenu, isDecide);
  FilterCount = MaterialCollectionServantListViewManager__GetFilterCount(this, (const MethodInfo *)isDecide);
  if ( FilterCount <= 11 )
    MaterialCollectionServantListViewManager__InactiveDummy(this, v11);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, FilterCount < 1, 0LL);
  ListViewManager__ScreenUpdate((ListViewManager_o *)this, 0LL);
LABEL_15:
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
    sub_B7769C(0LL, isDecide);
  MaterialCollectionServantSortSelectMenu__Close_32431808(sortSelectMenu, 0LL, method);
  MaterialCollectionServantListViewManager__SetFilterButtonImage(this, v6);
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall MaterialCollectionServantListViewManager__EventLogSortKind(
        MaterialCollectionServantListViewManager_o *this,
        MaterialEventLogServantSortSelectMenu_o *eventLogServantSortSelectMenu,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x21
  MaterialEventLogServantSortSelectMenu_CallbackFunc_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_438EDDE & 1) == 0 )
  {
    sub_B775C4(&MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_MaterialCollectionServantListViewManager_EndEventLogSortKind__);
    byte_438EDDE = 1;
  }
  if ( this->fields.isInput )
  {
    sort = this->fields.sort;
    v6 = (MaterialEventLogServantSortSelectMenu_CallbackFunc_o *)sub_B77694(MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo);
    MaterialEventLogServantSortSelectMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_MaterialCollectionServantListViewManager_EndEventLogSortKind__,
      0LL);
    if ( !eventLogServantSortSelectMenu )
      sub_B7769C(v7, v8);
    MaterialEventLogServantSortSelectMenu__Open(eventLogServantSortSelectMenu, 0, sort, v6, v9);
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

  if ( (byte_438EDE6 & 1) == 0 )
  {
    sub_B775C4(&MaterialCollectionServantListViewManager_TypeInfo);
    byte_438EDE6 = 1;
  }
  v2 = MaterialCollectionServantListViewManager_TypeInfo;
  if ( (BYTE3(MaterialCollectionServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo);
    v2 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v2->static_fields->EventLogservantSortInfo;
  if ( EventLogservantSortInfo )
  {
    if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v2);
      EventLogservantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->EventLogservantSortInfo;
      if ( !EventLogservantSortInfo )
        sub_B7769C(v4, v5);
    }
    ListViewSort__Save(EventLogservantSortInfo, 0LL);
  }
}


int32_t __fastcall MaterialCollectionServantListViewManager__GetFilterCount(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  signed __int64 size; // x21
  int32_t v5; // w20
  unsigned __int64 v6; // x22
  __int64 v7; // x10

  v2 = this;
  if ( (byte_438EDDF & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (MaterialCollectionServantListViewManager_o *)sub_B775C4(&MaterialEventLogServantListViewItem_TypeInfo);
    byte_438EDDF = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
    goto LABEL_15;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v5 = 0;
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      this = (MaterialCollectionServantListViewManager_o *)itemList->fields._items->m_Items[v6];
      if ( !this )
        break;
      v7 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v7
        || (MaterialEventLogServantListViewItem_c *)this->klass->_2.typeHierarchy[v7 - 1] != MaterialEventLogServantListViewItem_TypeInfo )
      {
        break;
      }
      if ( !LOBYTE(this->fields.itemList) )
      {
        this = (MaterialCollectionServantListViewManager_o *)((__int64 (__fastcall *)(MaterialCollectionServantListViewManager_o *, struct ListViewSort_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
                                                               this,
                                                               v2->fields.sort,
                                                               this->klass->vtable._6_GetDragRoot.methodPtr);
        v5 += (unsigned __int8)this & 1;
      }
      if ( (__int64)++v6 >= size )
        return v5;
      itemList = v2->fields.itemList;
    }
    while ( itemList );
LABEL_15:
    sub_B7769C(this, method);
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  MaterialCollectionServantListViewItem_o *result; // x0
  int32_t size; // w8
  ListViewItem_o *v8; // x8
  __int64 v9; // x11

  v4 = this;
  if ( (byte_438EDD4 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (MaterialCollectionServantListViewManager_o *)sub_B775C4(&MaterialCollectionServantListViewItem_TypeInfo);
    byte_438EDD4 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    sub_B7769C(this, *(_QWORD *)&index);
  result = 0LL;
  if ( (index & 0x80000000) == 0 )
  {
    size = itemList->fields._size;
    if ( size > index )
    {
      if ( size <= (unsigned int)index )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v8 = itemList->fields._items->m_Items[index];
      if ( v8
        && (v9 = *(&MaterialCollectionServantListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v8->klass->_2.bitflags2 + 1) >= (unsigned int)v9) )
      {
        if ( (MaterialCollectionServantListViewItem_c *)v8->klass->_2.typeHierarchy[v9 - 1] == MaterialCollectionServantListViewItem_TypeInfo )
          return (MaterialCollectionServantListViewItem_o *)itemList->fields._items->m_Items[index];
        else
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
  MaterialEventLogListViewManager_o *result; // x0
  __int64 v3; // x1
  UnityEngine_Object_o *dropObjectList; // x19
  bool v5; // w8
  __int64 v6; // x10
  bool v7; // w8
  void *monitor; // x19
  bool v9; // w8

  if ( (byte_438EDCC & 1) == 0 )
  {
    sub_B775C4(&MyRoomRootComponent_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_438EDCC = 1;
  }
  result = (MaterialEventLogListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !result )
    goto LABEL_25;
  dropObjectList = (UnityEngine_Object_o *)result->fields.dropObjectList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Equality(dropObjectList, 0LL, 0LL);
  result = 0LL;
  if ( !v5 )
  {
    if ( dropObjectList )
    {
      v6 = *(&MyRoomRootComponent_TypeInfo->_2.bitflags2 + 1);
      if ( *(&dropObjectList->klass->_2.bitflags2 + 1) >= (unsigned int)v6 )
      {
        if ( (MyRoomRootComponent_c *)dropObjectList->klass->_2.typeHierarchy[v6 - 1] != MyRoomRootComponent_TypeInfo )
          dropObjectList = 0LL;
      }
      else
      {
        dropObjectList = 0LL;
      }
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Equality(dropObjectList, 0LL, 0LL);
    result = 0LL;
    if ( !v7 )
    {
      if ( !dropObjectList )
        goto LABEL_25;
      monitor = dropObjectList[2].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)monitor, 0LL, 0LL);
      result = 0LL;
      if ( !v9 )
      {
        if ( monitor )
          return (MaterialEventLogListViewManager_o *)*((_QWORD *)monitor + 50);
LABEL_25:
        sub_B7769C(result, v3);
      }
    }
  }
  return result;
}


void __fastcall MaterialCollectionServantListViewManager__InactiveDummy(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  signed __int64 size; // x20
  unsigned __int64 v5; // x21
  ListViewItem_o *v6; // x8
  __int64 v7; // x11
  __int64 v8; // x11
  MaterialEventLogServantListViewItem_o *v9; // x0
  int dropObjectList; // w8
  MaterialCollectionServantListViewManager_o *v11; // x19
  __int64 v12; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  v2 = this;
  if ( (byte_438EDE8 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&MaterialEventLogServantListViewItem_TypeInfo);
    this = (MaterialCollectionServantListViewManager_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438EDE8 = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
    goto LABEL_34;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v5 = 0LL;
    do
    {
      if ( v5 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v6 = itemList->fields._items->m_Items[v5];
      if ( !v6 )
        break;
      v7 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7
        || (MaterialEventLogServantListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] != MaterialEventLogServantListViewItem_TypeInfo )
      {
        break;
      }
      v8 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v6->klass->_2.bitflags2 + 1) >= (unsigned int)v8 )
      {
        if ( (MaterialEventLogServantListViewItem_c *)v6->klass->_2.typeHierarchy[v8 - 1] == MaterialEventLogServantListViewItem_TypeInfo )
          v9 = (MaterialEventLogServantListViewItem_o *)itemList->fields._items->m_Items[v5];
        else
          v9 = 0LL;
      }
      else
      {
        v9 = 0LL;
      }
      MaterialEventLogServantListViewItem__InactiveDummy(v9, method);
      if ( (__int64)++v5 >= size )
        goto LABEL_19;
      itemList = v2->fields.itemList;
    }
    while ( itemList );
LABEL_34:
    sub_B7769C(this, method);
  }
LABEL_19:
  this = (MaterialCollectionServantListViewManager_o *)MaterialCollectionServantListViewManager__get_ObjectList(
                                                         v2,
                                                         method);
  if ( !this )
    goto LABEL_34;
  dropObjectList = (int)this->fields.dropObjectList;
  v11 = this;
  if ( dropObjectList >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( dropObjectList <= (unsigned int)v12 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      this = *(MaterialCollectionServantListViewManager_o **)(*(_QWORD *)&v11->fields.m_CachedPtr + 8 * v12 + 32);
      if ( !this )
        goto LABEL_34;
      this = (MaterialCollectionServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
      if ( !this )
        goto LABEL_34;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (MaterialCollectionServantListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                             Component_srcLineSprite,
                                                             0LL,
                                                             0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !Component_srcLineSprite )
          goto LABEL_34;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, 0, 0LL);
      }
      dropObjectList = (int)v11->fields.dropObjectList;
      if ( (int)++v12 >= dropObjectList )
        return;
    }
  }
}


void __fastcall MaterialCollectionServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialCollectionServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_438EDC9 & 1) == 0 )
  {
    sub_B775C4(&MaterialCollectionServantListViewManager_TypeInfo);
    byte_438EDC9 = 1;
  }
  v2 = MaterialCollectionServantListViewManager_TypeInfo;
  if ( (BYTE3(MaterialCollectionServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
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
    sub_B7769C(servantSortInfo, v1);
  }
  ListViewSort__InitLoad(servantSortInfo, 0LL);
}


void __fastcall MaterialCollectionServantListViewManager__ModifyItem(
        MaterialCollectionServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewManager__RequestListObject_32412688(this, 4, method);
}


void __fastcall MaterialCollectionServantListViewManager__ModifyList(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  signed __int64 size; // x22
  unsigned __int64 v5; // x23
  ListViewItem_o *v6; // x20
  __int64 v7; // x10
  UnityEngine_Object_o *viewObject; // x21

  v2 = this;
  if ( (byte_438EDD5 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&MaterialCollectionServantListViewItem_TypeInfo);
    this = (MaterialCollectionServantListViewManager_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438EDD5 = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
LABEL_19:
    sub_B7769C(this, method);
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v5 = 0LL;
    while ( 1 )
    {
      if ( v5 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v6 = itemList->fields._items->m_Items[v5];
      if ( v6 )
      {
        v7 = *(&MaterialCollectionServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v6->klass->_2.bitflags2 + 1) >= (unsigned int)v7
          && (MaterialCollectionServantListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == MaterialCollectionServantListViewItem_TypeInfo )
        {
          viewObject = (UnityEngine_Object_o *)v6->fields.viewObject;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          this = (MaterialCollectionServantListViewManager_o *)UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            this = (MaterialCollectionServantListViewManager_o *)v6->fields.viewObject;
            if ( !this )
              goto LABEL_19;
            ListViewObject__SetItemSeed((ListViewObject_o *)this, v6, v2->fields.seed, 0LL);
          }
        }
      }
      if ( (__int64)++v5 >= size )
        break;
      itemList = v2->fields.itemList;
      if ( !itemList )
        goto LABEL_19;
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
  ListViewSort_o *ScaleKindSpriteName; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v13; // w8
  struct ListViewSort_o *sort; // x8
  UISprite_o *scaleChangeTabSprite; // x20
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2

  if ( (byte_438EDE5 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438EDE5 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v13 = 2;
    goto LABEL_12;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v13 = 3;
    goto LABEL_12;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v13 = 1;
LABEL_12:
    this->fields.scaleType = v13;
    this->fields.seed = smallSizeSeed;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)smallSizeSeed,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType, (ScaleKindSpriteName = this->fields.sort) == 0LL)
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        ScaleKindSpriteName = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(
                                                  ScaleKindSpriteName,
                                                  this->fields.scaleType,
                                                  0LL),
        !scaleChangeTabSprite)
    || (UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)ScaleKindSpriteName, 0LL),
        (ScaleKindSpriteName = this->fields.sort) == 0LL) )
  {
    sub_B7769C(ScaleKindSpriteName, v4);
  }
  ListViewSort__Save(ScaleKindSpriteName, 0LL);
  MaterialCollectionServantListViewManager__ModifyList(this, v16);
  MaterialCollectionServantListViewManager__SetMode_32413792(this, 2, v17);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall MaterialCollectionServantListViewManager__OnClickSelectListView(
        MaterialCollectionServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  MaterialCollectionServantListViewManager_o *v9; // x21
  struct ListViewItem_o *linkItem; // x8
  MaterialCollectionServantListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v12; // x10
  int32_t Index; // w2

  v9 = this;
  if ( (byte_438EDDB & 1) == 0 )
  {
    this = (MaterialCollectionServantListViewManager_o *)sub_B775C4(&MaterialEventLogServantListViewItem_TypeInfo);
    byte_438EDDB = 1;
  }
  if ( !obj )
    sub_B7769C(this, obj);
  linkItem = obj->fields.linkItem;
  callbackFunc = v9->fields.callbackFunc;
  if ( !linkItem
    || (v12 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v12)
    || (MaterialEventLogServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] != MaterialEventLogServantListViewItem_TypeInfo )
  {
    v9->fields.callbackFunc = 0LL;
    sub_B77560(
      (BattleServantConfConponent_o *)&v9->fields.callbackFunc,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
  if ( callbackFunc )
  {
    Index = ListViewObject__get_Index(obj, 0LL);
    MaterialCollectionServantListViewManager_CallbackFunc__Invoke(callbackFunc, 1, Index, 0LL);
  }
}


void __fastcall MaterialCollectionServantListViewManager__OnClickSortAscendingOrder(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *v3; // x0
  __int64 v4; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_438EDE1 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438EDE1 = 1;
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
    if ( !sort
      || (sort->fields.isAscendingOrder ^= 1u,
          ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL),
          (v3 = this->fields.sort) == 0LL) )
    {
      sub_B7769C(v3, v4);
    }
    ListViewSort__Save(v3, 0LL);
  }
}


void __fastcall MaterialCollectionServantListViewManager__OnClickSortKind(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct ListViewSort_o *sort; // x20
  int32_t listViewKind; // w8
  struct MaterialCollectionServantSortSelectMenu_o *v7; // x21
  MaterialCollectionServantSortSelectMenu_CallbackFunc_o *v8; // x22
  const MethodInfo *v9; // x4
  MaterialCollectionServantSortSelectMenu_o *v10; // x0
  int32_t v11; // w1
  struct MaterialCollectionServantSortSelectMenu_o *sortSelectMenu; // x21

  if ( (byte_438EDDD & 1) == 0 )
  {
    sub_B775C4(&MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_MaterialCollectionServantListViewManager_EndSelectSortKind__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438EDDD = 1;
  }
  if ( !this->fields.isInput )
    return;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_20;
  listViewKind = sort->fields.listViewKind;
  switch ( listViewKind )
  {
    case 3:
      sortSelectMenu = this->fields.sortSelectMenu;
      v8 = (MaterialCollectionServantSortSelectMenu_CallbackFunc_o *)sub_B77694(MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo);
      MaterialCollectionServantSortSelectMenu_CallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_MaterialCollectionServantListViewManager_EndSelectSortKind__,
        0LL);
      if ( !sortSelectMenu )
        goto LABEL_20;
      v11 = 3;
LABEL_18:
      v10 = sortSelectMenu;
      goto LABEL_19;
    case 1:
      sortSelectMenu = this->fields.sortSelectMenu;
      v8 = (MaterialCollectionServantSortSelectMenu_CallbackFunc_o *)sub_B77694(MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo);
      MaterialCollectionServantSortSelectMenu_CallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_MaterialCollectionServantListViewManager_EndSelectSortKind__,
        0LL);
      if ( !sortSelectMenu )
        goto LABEL_20;
      v11 = 1;
      goto LABEL_18;
    case 0:
      v7 = this->fields.sortSelectMenu;
      v8 = (MaterialCollectionServantSortSelectMenu_CallbackFunc_o *)sub_B77694(MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo);
      MaterialCollectionServantSortSelectMenu_CallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_MaterialCollectionServantListViewManager_EndSelectSortKind__,
        0LL);
      if ( v7 )
      {
        v10 = v7;
        v11 = 0;
LABEL_19:
        MaterialCollectionServantSortSelectMenu__Open(v10, v11, sort, v8, v9);
        return;
      }
LABEL_20:
      sub_B7769C(v3, v4);
  }
}


void __fastcall MaterialCollectionServantListViewManager__OnLongPushListView(
        MaterialCollectionServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  MaterialCollectionServantListViewManager_o *v9; // x21
  struct ListViewItem_o *linkItem; // x8
  MaterialCollectionServantListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v12; // x10
  int32_t Index; // w2

  v9 = this;
  if ( (byte_438EDDC & 1) == 0 )
  {
    this = (MaterialCollectionServantListViewManager_o *)sub_B775C4(&MaterialEventLogServantListViewItem_TypeInfo);
    byte_438EDDC = 1;
  }
  if ( !obj )
    sub_B7769C(this, obj);
  linkItem = obj->fields.linkItem;
  callbackFunc = v9->fields.callbackFunc;
  if ( !linkItem
    || (v12 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v12)
    || (MaterialEventLogServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] != MaterialEventLogServantListViewItem_TypeInfo )
  {
    v9->fields.callbackFunc = 0LL;
    sub_B77560(
      (BattleServantConfConponent_o *)&v9->fields.callbackFunc,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
  if ( callbackFunc )
  {
    Index = ListViewObject__get_Index(obj, 0LL);
    MaterialCollectionServantListViewManager_CallbackFunc__Invoke(callbackFunc, 1, Index, 0LL);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UIScrollView_o *v14; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_438EDDA & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438EDDA = 1;
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
      if ( !UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
        goto LABEL_15;
      v14 = this->fields.scrollView;
      if ( v14 )
      {
        ((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
        v14 = this->fields.scrollView;
        if ( v14 )
        {
          if ( (((__int64 (__fastcall *)(UIScrollView_o *, Il2CppMethodPointer))v14->klass->vtable._6_get_shouldMoveVertically.method)(
                  v14,
                  v14->klass->vtable._7_get_shouldMove.methodPtr) & 1) == 0 )
            goto LABEL_15;
          v14 = this->fields.scrollView;
          if ( v14 )
          {
            UIScrollView__UpdatePosition(v14, 0LL);
LABEL_15:
            callbackFunc2 = this->fields.callbackFunc2;
            this->fields.callbackFunc2 = 0LL;
            sub_B77560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
            if ( callbackFunc2 )
              System_Action__Invoke(callbackFunc2, 0LL);
            return;
          }
        }
      }
      sub_B7769C(v14, v7);
    }
  }
}


void __fastcall MaterialCollectionServantListViewManager__RefrashListDisp(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *ObjectList; // x0
  __int64 v4; // x1
  int32_t size; // w8
  System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *v6; // x20
  int v7; // w8
  __int64 v8; // x21

  if ( (byte_438EDD2 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__);
    byte_438EDD2 = 1;
  }
  ObjectList = MaterialCollectionServantListViewManager__get_ObjectList(this, method);
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        ObjectList = (System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *)v6->fields._items->m_Items[v8];
        if ( !ObjectList )
          break;
        ((void (__fastcall *)(System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
          ObjectList,
          this->fields.isInput,
          ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
        v7 = v6->fields._size;
        if ( (int)++v8 >= v7 )
          return;
      }
LABEL_12:
      sub_B7769C(ObjectList, v4);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewManager__RequestInto(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *ObjectList; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *v6; // x20
  signed __int64 size; // x8
  unsigned __int64 v8; // x24
  int v9; // w23
  MaterialCollectionServantListViewObject_o *v10; // x21
  System_Action_o *v11; // x22
  const MethodInfo *v12; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_438EDD9 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__);
    sub_B775C4(&Method_MaterialCollectionServantListViewManager_OnMoveEnd__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_438EDD9 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ObjectList = MaterialCollectionServantListViewManager__get_ObjectList(this, v3);
  if ( !ObjectList )
LABEL_15:
    sub_B7769C(ObjectList, v5);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v10 = v6->fields._items->m_Items[v8];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v10, 0LL) )
    {
      v11 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_MaterialCollectionServantListViewManager_OnMoveEnd__, 0LL);
      if ( !v10 )
        goto LABEL_15;
      ++v9;
      zero = UnityEngine_Vector3__get_zero(0LL);
      MaterialCollectionServantListViewObject__Init(v10, 5, v11, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v12);
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
      (System_String_o *)StringLiteral_10218/*"OnMoveEnd"*/,
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

  if ( (byte_438EDD7 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__);
    sub_B775C4(&Method_MaterialCollectionServantListViewManager_OnMoveEnd__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_438EDD7 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MaterialCollectionServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B7769C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10218/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      ObjectList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__MoveNext__) )
    {
      current = v15.fields.current;
      v11 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_MaterialCollectionServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7769C(v12, v13);
      zero = UnityEngine_Vector3__get_zero(0LL);
      MaterialCollectionServantListViewObject__Init(
        (MaterialCollectionServantListViewObject_o *)current,
        mode,
        v11,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v14);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewManager__RequestListObject_32412688(
        MaterialCollectionServantListViewManager_o *this,
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

  if ( (byte_438EDD8 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__);
    sub_B775C4(&Method_MaterialCollectionServantListViewManager_OnMoveEnd__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_438EDD8 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MaterialCollectionServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B7769C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10218/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      ObjectList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v13,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__MoveNext__) )
    {
      current = v13.fields.current;
      v9 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_MaterialCollectionServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7769C(v10, v11);
      zero = UnityEngine_Vector3__get_zero(0LL);
      MaterialCollectionServantListViewObject__Init(
        (MaterialCollectionServantListViewObject_o *)current,
        mode,
        v9,
        0.0,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v12);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__Dispose__);
  }
}


void __fastcall MaterialCollectionServantListViewManager__SetFilterButtonImage(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  System_String_o **v4; // x9
  System_String_o **v5; // x20
  UnityEngine_Color_o v6; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_438EDD0 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17297/*"btn_bg_05"*/);
    sub_B775C4(&StringLiteral_17298/*"btn_bg_06"*/);
    sub_B775C4(&StringLiteral_372/*"#FE4545"*/);
    sub_B775C4(&StringLiteral_357/*"#000000"*/);
    byte_438EDD0 = 1;
  }
  *(_QWORD *)&v6.fields.r = 0LL;
  *(_QWORD *)&v6.fields.b = 0LL;
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_12;
  sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL);
  if ( !this->fields.filterSprite )
    goto LABEL_12;
  v4 = (System_String_o **)&StringLiteral_17297/*"btn_bg_05"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v4 = (System_String_o **)&StringLiteral_17298/*"btn_bg_06"*/;
  v5 = ((unsigned __int8)sort & 1) != 0
     ? (System_String_o **)&StringLiteral_357/*"#000000"*/
     : (System_String_o **)&StringLiteral_372/*"#FE4545"*/;
  UISprite__set_spriteName(this->fields.filterSprite, *v4, 0LL);
  *(_QWORD *)&v6.fields.r = 0LL;
  *(_QWORD *)&v6.fields.b = 0LL;
  UnityEngine_ColorUtility__TryParseHtmlString(*v5, &v6, 0LL);
  sort = (ListViewSort_o *)this->fields.sortKindLabel;
  if ( !sort )
LABEL_12:
    sub_B7769C(sort, method);
  UILabel__set_effectColor((UILabel_o *)sort, v6, 0LL);
}


void __fastcall MaterialCollectionServantListViewManager__SetMode(
        MaterialCollectionServantListViewManager_o *this,
        int32_t mode,
        MaterialCollectionServantListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  MaterialCollectionServantListViewManager__SetMode_32413792(this, mode, v10);
}


void __fastcall MaterialCollectionServantListViewManager__SetMode_32413792(
        MaterialCollectionServantListViewManager_o *this,
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
  MaterialCollectionServantListViewManager__RequestListObject_32412688(this, v6, v5);
}


void __fastcall MaterialCollectionServantListViewManager__SetMode_32413904(
        MaterialCollectionServantListViewManager_o *this,
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
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  MaterialCollectionServantListViewManager__SetMode_32413792(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewManager__SetObjectItem(
        MaterialCollectionServantListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  int v9; // s1
  int32_t v12; // w1

  v5 = this;
  if ( (byte_438EDD6 & 1) == 0 )
  {
    this = (MaterialCollectionServantListViewManager_o *)sub_B775C4(&MaterialCollectionServantListViewObject_TypeInfo);
    byte_438EDD6 = 1;
  }
  if ( !obj
    || (v6 = *(&MaterialCollectionServantListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (MaterialCollectionServantListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != MaterialCollectionServantListViewObject_TypeInfo )
  {
    sub_B7769C(this, obj);
  }
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v12 = 3;
  else
    v12 = 2;
  MaterialCollectionServantListViewObject__Init(
    (MaterialCollectionServantListViewObject_o *)obj,
    v12,
    0LL,
    0.0,
    *(UnityEngine_Vector3_o *)&v9,
    v8);
}


void __fastcall MaterialCollectionServantListViewManager__SetSort(
        MaterialCollectionServantListViewManager_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.sort = sort;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)sort,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall MaterialCollectionServantListViewManager__SetSortButtonImage(
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
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v13; // x9
  System_String_o **v14; // x10
  System_String_o **v15; // x8
  struct ListViewSort_o *v16; // x8
  System_String_o **v17; // x8

  if ( (byte_438EDE4 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_17360/*"btn_sort_up"*/);
    sub_B775C4(&StringLiteral_17444/*"btn_txt_up"*/);
    sub_B775C4(&StringLiteral_17400/*"btn_txt_new"*/);
    sub_B775C4(&StringLiteral_17390/*"btn_txt_down"*/);
    sub_B775C4(&StringLiteral_17407/*"btn_txt_old"*/);
    sub_B775C4(&StringLiteral_17357/*"btn_sort_down"*/);
    byte_438EDE4 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_36;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v6 )
      goto LABEL_36;
    UILabel__set_text(v6, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
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
          v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17407/*"btn_txt_old"*/ : &StringLiteral_17400/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v10, 0LL);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v11->fields.isAscendingOrder;
              v13 = (System_String_o **)&StringLiteral_17357/*"btn_sort_down"*/;
              v14 = (System_String_o **)&StringLiteral_17360/*"btn_sort_up"*/;
LABEL_32:
              if ( isAscendingOrder )
                v17 = v13;
              else
                v17 = v14;
              UISprite__set_spriteName((UISprite_o *)sort, *v17, 0LL);
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
          v15 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17444/*"btn_txt_up"*/ : &StringLiteral_17390/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
          v16 = this->fields.sort;
          if ( v16 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v16->fields.isAscendingOrder;
              v13 = (System_String_o **)&StringLiteral_17360/*"btn_sort_up"*/;
              v14 = (System_String_o **)&StringLiteral_17357/*"btn_sort_down"*/;
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_36:
    sub_B7769C(sort, v4);
  }
}


void __fastcall MaterialCollectionServantListViewManager__SetValentineFilterButtonImage(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  System_String_o **v4; // x9
  System_String_o **v5; // x20
  UnityEngine_Color_o v6; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_438EDD1 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_372/*"#FE4545"*/);
    sub_B775C4(&StringLiteral_17332/*"btn_filter_on"*/);
    sub_B775C4(&StringLiteral_357/*"#000000"*/);
    sub_B775C4(&StringLiteral_17331/*"btn_filter"*/);
    byte_438EDD1 = 1;
  }
  *(_QWORD *)&v6.fields.r = 0LL;
  *(_QWORD *)&v6.fields.b = 0LL;
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_12;
  sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL);
  if ( !this->fields.filterSprite )
    goto LABEL_12;
  v4 = (System_String_o **)&StringLiteral_17331/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v4 = (System_String_o **)&StringLiteral_17332/*"btn_filter_on"*/;
  v5 = ((unsigned __int8)sort & 1) != 0
     ? (System_String_o **)&StringLiteral_357/*"#000000"*/
     : (System_String_o **)&StringLiteral_372/*"#FE4545"*/;
  UISprite__set_spriteName(this->fields.filterSprite, *v4, 0LL);
  *(_QWORD *)&v6.fields.r = 0LL;
  *(_QWORD *)&v6.fields.b = 0LL;
  UnityEngine_ColorUtility__TryParseHtmlString(*v5, &v6, 0LL);
  sort = (ListViewSort_o *)this->fields.sortKindLabel;
  if ( !sort )
LABEL_12:
    sub_B7769C(sort, method);
  UILabel__set_effectColor((UILabel_o *)sort, v6, 0LL);
}


void __fastcall MaterialCollectionServantListViewManager__SortAscendingOrder(
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

  if ( (byte_438EDE2 & 1) == 0 )
  {
    sub_B775C4(&Method_MaterialCollectionServantListViewManager_SortAscendingOrder__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438EDE2 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_MaterialCollectionServantListViewManager_SortAscendingOrder__;
    if ( (*((_BYTE *)Method_MaterialCollectionServantListViewManager_SortAscendingOrder__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_MaterialCollectionServantListViewManager_SortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( sort )
    {
      sort->fields.isAscendingOrder ^= 1u;
      MaterialEventLogListViewManager = (UnityEngine_Object_o *)MaterialCollectionServantListViewManager__GetMaterialEventLogListViewManager(
                                                                  (MaterialCollectionServantListViewManager_o *)v5,
                                                                  v6);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v5 = (struct ListViewSort_o *)UnityEngine_Object__op_Inequality(MaterialEventLogListViewManager, 0LL, 0LL);
      if ( ((unsigned __int8)v5 & 1) != 0 )
      {
        if ( !MaterialEventLogListViewManager )
          goto LABEL_16;
        MaterialEventLogListViewManager__SetSort(
          (MaterialEventLogListViewManager_o *)MaterialEventLogListViewManager,
          this->fields.sort,
          v9);
      }
      MaterialCollectionServantListViewManager__SortDummyData(this, v6);
      ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
      v11 = MaterialCollectionServantListViewManager__GetFilterCount(this, v10) < 1;
      ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v11, 0LL);
      ListViewManager__ScreenUpdate((ListViewManager_o *)this, 0LL);
      v5 = this->fields.sort;
      if ( v5 )
      {
        ListViewSort__Save(v5, 0LL);
        ((void (__fastcall *)(MaterialCollectionServantListViewManager_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
          this,
          this->klass->vtable._6_GetDragRoot.methodPtr);
        return;
      }
    }
LABEL_16:
    sub_B7769C(v5, v6);
  }
}


void __fastcall MaterialCollectionServantListViewManager__SortDummyData(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 size; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  __int64 i; // x23
  struct System_Collections_Generic_List_ListViewItem__o *v10; // x21
  unsigned __int64 v11; // x27
  ListViewItem_o *v12; // x21
  __int64 v13; // x10
  struct System_Collections_Generic_List_ListViewItem__o *v14; // x28
  struct ListViewSort_o *sort; // x8
  int32_t v16; // w1
  struct System_Collections_Generic_List_ListViewItem__o *v17; // x28
  __int64 v18; // x8

  if ( (byte_438EDE3 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_MaterialEventLogServantListViewItem___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_MaterialEventLogServantListViewItem__TypeInfo);
    sub_B775C4(&MaterialEventLogServantListViewItem_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438EDE3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_29;
  size = itemList->fields._size;
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_MaterialEventLogServantListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_MaterialEventLogServantListViewItem___ctor__);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  if ( (int)size >= 1 )
  {
    for ( i = 4LL; ; ++i )
    {
      v10 = this->fields.itemList;
      if ( !v10 )
        break;
      v11 = i - 4;
      if ( i - 4 >= (unsigned __int64)(unsigned int)v10->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v12 = (ListViewItem_o *)*((_QWORD *)&v10->fields._items->obj.klass + i);
      if ( !v12 )
        break;
      v13 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v12->klass->_2.bitflags2 + 1) < (unsigned int)v13
        || (MaterialEventLogServantListViewItem_c *)v12->klass->_2.typeHierarchy[v13 - 1] != MaterialEventLogServantListViewItem_TypeInfo )
      {
        break;
      }
      if ( LOBYTE(v12[1].fields.sortValue2) )
      {
        v14 = this->fields.itemList;
        if ( !v14 )
          break;
        if ( v11 >= (unsigned int)v14->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        if ( !v8 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v8,
          *((EventMissionProgressRequest_Argument_ProgressData_o **)&v14->fields._items->obj.klass + i),
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        sort = this->fields.sort;
        if ( !sort )
          break;
        if ( sort->fields.isAscendingOrder )
        {
          v16 = i + 995;
          v12->fields.index = i + 995;
        }
        else
        {
          v12->fields.index = -1;
          v16 = -1;
        }
        ListViewItem__SetSortIndex(v12, v16, 0LL);
        v17 = this->fields.itemList;
        if ( !v17 )
          break;
        if ( v11 >= (unsigned int)v17->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        Instance = (DataManager_o *)*((_QWORD *)&v17->fields._items->obj.klass + i);
        if ( !Instance )
          break;
        ListViewItem__Set((ListViewItem_o *)Instance, v12, 0LL);
      }
      MaterialEventLogServantListViewItem__DummyVisible((MaterialEventLogServantListViewItem_o *)v12, v4);
      v18 = i - 3;
      if ( v18 >= size )
        return;
    }
LABEL_29:
    sub_B7769C(Instance, v4);
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

  if ( (byte_438EDC4 & 1) == 0 )
  {
    sub_B775C4(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo);
    byte_438EDC4 = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
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

  if ( (byte_438EDC6 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438EDC6 = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
  MaterialCollectionServantListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *__fastcall MaterialCollectionServantListViewManager__get_ClippingObjectList(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  MaterialCollectionServantListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v10; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_438EDCB & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_MaterialCollectionServantListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438EDCB = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_MaterialCollectionServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7769C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
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
        sub_B7769C(v7, v8);
      Component_srcLineSprite = (MaterialCollectionServantListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                               (UnityEngine_GameObject_o *)current,
                                                                               (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___);
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B7769C(0LL, v10);
      Item = (ListViewItem_o *)MaterialCollectionServantListViewObject__GetItem(Component_srcLineSprite, v10);
      if ( !Item )
        sub_B7769C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_24185472((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_B7769C(v14, v15);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v3 )
          sub_B7769C(Item, v13);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          v11,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *)v3;
}


System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *__fastcall MaterialCollectionServantListViewManager__get_ObjectList(
        MaterialCollectionServantListViewManager_o *this,
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

  if ( (byte_438EDCA & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_MaterialCollectionServantListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438EDCA = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_MaterialCollectionServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7769C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
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
        sub_B7769C(v7, v8);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___);
      if ( !v3 )
        sub_B7769C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *)v3;
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

  if ( (byte_438EDC5 & 1) == 0 )
  {
    sub_B775C4(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo);
    byte_438EDC5 = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
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

  if ( (byte_438EDC7 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438EDC7 = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B77560(p_method);
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
  __int64 v9; // x2
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = index;
  v13 = kind;
  if ( (byte_43889BE & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&MaterialCollectionServantListViewManager_ResultKind_TypeInfo);
    byte_43889BE = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(MaterialCollectionServantListViewManager_ResultKind_TypeInfo, &v13, *(_QWORD *)&index);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12, v9);
  return (System_IAsyncResult_o *)sub_B77568(this, v11, callback, object);
}


void __fastcall MaterialCollectionServantListViewManager_CallbackFunc__EndInvoke(
        MaterialCollectionServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewManager_CallbackFunc__Invoke(
        MaterialCollectionServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  MaterialCollectionServantListViewManager_CallbackFunc_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned int v13; // w23
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  MaterialCollectionServantListViewManager_CallbackFunc_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(unsigned int *, _QWORD, __int64); // x24
  char v24; // w24
  char v25; // w0
  unsigned int v26; // w24
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+Ch] [xbp-54h] BYREF
  MaterialCollectionServantListViewManager_CallbackFunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

  v33 = this;
  v32 = kind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v33;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (MaterialCollectionServantListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind);
      if ( (sub_B775F4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_36;
      v23((unsigned int *)v32, (unsigned int)index, v22);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v21 )
    {
      v23(&v32 - 4, (unsigned int)index, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B775EC(v22);
      v25 = sub_B779F0(v22);
      if ( (v24 & 1) != 0 )
      {
        v26 = v32;
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_B0F4C0(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B77674(v17, v22);
        (*v19)(v21, v26, (unsigned int)index, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v32;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_B0F4C0(v21, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v16)(
            v21,
            v13,
            (unsigned int)index,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v32,
            (unsigned int)index,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v23)(v21, v32, (unsigned int)index, v22);
    goto LABEL_38;
  }
}