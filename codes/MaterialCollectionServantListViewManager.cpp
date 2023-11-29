void __fastcall MaterialCollectionServantListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ListViewSort_o *v10; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  ListViewSort_o *v22; // x19
  struct MaterialCollectionServantListViewManager_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  ListViewSort_o *v34; // x19
  struct MaterialCollectionServantListViewManager_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  ListViewSort_o *v46; // x19
  struct MaterialCollectionServantListViewManager_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7

  if ( (byte_40FCB91 & 1) == 0 )
  {
    sub_B16FFC(&ListViewSort_TypeInfo, v1);
    sub_B16FFC(&MaterialCollectionServantListViewManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_8950, v6);
    sub_B16FFC(&StringLiteral_8951, v7);
    sub_B16FFC(&StringLiteral_8949, v8);
    sub_B16FFC(&StringLiteral_8952, v9);
    byte_40FCB91 = 1;
  }
  v10 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v1, v2, v3, v4);
  ListViewSort___ctor_30208480(v10, (System_String_o *)StringLiteral_8949, 27, 1, 0LL);
  static_fields = (BattleServantConfConponent_o *)MaterialCollectionServantListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v10;
  sub_B16F98(static_fields, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
  v22 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v18, v19, v20, v21);
  ListViewSort___ctor_30208480(v22, (System_String_o *)StringLiteral_8950, 27, 1, 0LL);
  v23 = MaterialCollectionServantListViewManager_TypeInfo->static_fields;
  v23->servantEquipSortInfo = v22;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v23->servantEquipSortInfo,
    (System_Int32_array **)v22,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v34 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v30, v31, v32, v33);
  ListViewSort___ctor_30208480(v34, (System_String_o *)StringLiteral_8951, 27, 1, 0LL);
  v35 = MaterialCollectionServantListViewManager_TypeInfo->static_fields;
  v35->commandCodeSortInfo = v34;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v35->commandCodeSortInfo,
    (System_Int32_array **)v34,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v46 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v42, v43, v44, v45);
  ListViewSort___ctor_30208480(v46, (System_String_o *)StringLiteral_8952, 3, 1, 0LL);
  v47 = MaterialCollectionServantListViewManager_TypeInfo->static_fields;
  v47->EventLogservantSortInfo = v46;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v47->EventLogservantSortInfo,
    (System_Int32_array **)v46,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
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
  __int64 v3; // x1
  struct ListViewItemSeed_o *seed; // x8
  UnityEngine_GameObject_o *parent; // x19
  UnityEngine_Transform_o *transform; // x0
  int32_t childCount; // w0
  int32_t v8; // w20
  int32_t i; // w21
  UnityEngine_Component_o *Child; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Behaviour_o *Component_srcLineSprite; // x22

  if ( (byte_40FCB8E & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FCB8E = 1;
  }
  seed = this->fields.seed;
  if ( !seed
    || (parent = seed->fields.parent) == 0LL
    || (transform = UnityEngine_GameObject__get_transform(seed->fields.parent, 0LL)) == 0LL )
  {
LABEL_22:
    sub_B170D4();
  }
  childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
  if ( childCount >= 1 )
  {
    v8 = childCount;
    for ( i = 0; i < v8; ++i )
    {
      Child = (UnityEngine_Component_o *)GameObjectExtensions__GetChild(parent, i, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Child, 0LL, 0LL) )
      {
        if ( !Child )
          goto LABEL_22;
        gameObject = UnityEngine_Component__get_gameObject(Child, 0LL);
        if ( !gameObject )
          goto LABEL_22;
        Component_srcLineSprite = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               gameObject,
                                                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
        {
          if ( !Component_srcLineSprite )
            goto LABEL_22;
          UnityEngine_Behaviour__set_enabled(Component_srcLineSprite, 0, 0LL);
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  signed __int64 size; // x20
  unsigned __int64 v7; // x21
  ListViewItem_o *v8; // x8
  __int64 v9; // x11
  __int64 v10; // x11
  MaterialEventLogServantListViewItem_o *v11; // x0

  if ( (byte_40FCB90 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    sub_B16FFC(&MaterialEventLogServantListViewItem_TypeInfo, v4);
    byte_40FCB90 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_18;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v7 = 0LL;
    do
    {
      if ( v7 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v8 = itemList->fields._items->m_Items[v7];
      if ( !v8 )
        break;
      v9 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v8->klass->_2.bitflags2 + 1) < (unsigned int)v9
        || (MaterialEventLogServantListViewItem_c *)v8->klass->_2.typeHierarchy[v9 - 1] != MaterialEventLogServantListViewItem_TypeInfo )
      {
        break;
      }
      v10 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v8->klass->_2.bitflags2 + 1) >= (unsigned int)v10 )
      {
        if ( (MaterialEventLogServantListViewItem_c *)v8->klass->_2.typeHierarchy[v10 - 1] == MaterialEventLogServantListViewItem_TypeInfo )
          v11 = (MaterialEventLogServantListViewItem_o *)itemList->fields._items->m_Items[v7];
        else
          v11 = 0LL;
      }
      else
      {
        v11 = 0LL;
      }
      MaterialEventLogServantListViewItem__initCoercionInactive(v11, 0LL);
      if ( (__int64)++v7 >= size )
        return;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_18:
    sub_B170D4();
  }
}


void __fastcall MaterialCollectionServantListViewManager__ClearNewIcon(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *ObjectList; // x0
  const MethodInfo *v5; // x1
  int size; // w8
  System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *v7; // x19
  __int64 v8; // x21
  __int64 v9; // x8
  MaterialCollectionServantListViewObject_o *v10; // x20
  const MethodInfo *v11; // x1

  if ( (byte_40FCB76 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__, v3);
    byte_40FCB76 = 1;
  }
  ObjectList = MaterialCollectionServantListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_11;
  size = ObjectList->fields._size;
  v7 = ObjectList;
  if ( size >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      if ( size <= (unsigned int)v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v9 = (__int64)v7->fields._items + 8 * v8;
      v10 = *(MaterialCollectionServantListViewObject_o **)(v9 + 32);
      if ( !v10 )
        break;
      MaterialCollectionServantListViewObject__ClearNewIcon(
        *(MaterialCollectionServantListViewObject_o **)(v9 + 32),
        v5);
      MaterialCollectionServantListViewObject__AttachedIconSetupDisp(v10, v11);
      size = v7->fields._size;
      if ( (int)++v8 >= size )
        return;
    }
LABEL_11:
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  DataManager_o *v14; // x22
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserCommandCodeCollectionMaster_o *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UserCommandCodeCollectionEntity_array *v23; // x22
  MaterialCollectionServantListViewManager_c *v24; // x8
  struct ListViewSort_o *commandCodeSortInfo; // x1
  ListViewSort_o **p_sort; // x23
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UserServantCollectionEntity_array *CollectionList; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  MaterialCollectionServantListViewManager_c *v40; // x8
  struct ListViewSort_o *servantEquipSortInfo; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  MaterialCollectionServantListViewManager_c *v48; // x8
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v50; // x1
  ListViewSort_o *v51; // x8
  unsigned int sortKind; // w9
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *scaleChangeTabSprite; // x23
  System_String_o *ScaleKindSpriteName; // x0
  __int64 v58; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  __int64 v63; // x8
  unsigned __int64 v64; // x20
  UserCommandCodeCollectionEntity_o *v65; // x24
  MaterialCollectionServantListViewItem_o *v66; // x23
  const MethodInfo *v67; // x4
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v69; // x8
  unsigned __int64 v70; // x22
  UserServantCollectionEntity_o *v71; // x24
  MaterialCollectionServantListViewItem_o *v72; // x23
  const MethodInfo *v73; // x4
  struct System_Collections_Generic_List_ListViewItem__o *v74; // x0
  UnityEngine_Object_o *completeSprite; // x20
  UnityEngine_Component_o *v76; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *emptyMessageLabel; // x20
  System_String_o *v79; // x0
  const MethodInfo *v80; // x1
  int32_t findSum[2]; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FCB74 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___, *(_QWORD *)&kind);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&MaterialCollectionServantListViewItem_TypeInfo, v8);
    sub_B16FFC(&MaterialCollectionServantListViewManager_TypeInfo, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&StringLiteral_11842, v12);
    byte_40FCB74 = 1;
  }
  *(_QWORD *)findSum = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  v14 = (DataManager_o *)Instance;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v16 = (UserCommandCodeCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               v14,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
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
    v40 = MaterialCollectionServantListViewManager_TypeInfo;
    if ( (BYTE3(MaterialCollectionServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo);
      v40 = MaterialCollectionServantListViewManager_TypeInfo;
    }
    servantEquipSortInfo = v40->static_fields->servantEquipSortInfo;
    this->fields.sort = servantEquipSortInfo;
    p_sort = &this->fields.sort;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.sort,
      (System_Int32_array **)servantEquipSortInfo,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
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
    v48 = MaterialCollectionServantListViewManager_TypeInfo;
    if ( (BYTE3(MaterialCollectionServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo);
      v48 = MaterialCollectionServantListViewManager_TypeInfo;
    }
    p_servantSortInfo = &v48->static_fields->servantSortInfo;
    v50 = *p_servantSortInfo;
    this->fields.sort = *p_servantSortInfo;
    p_sort = &this->fields.sort;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.sort,
      (System_Int32_array **)v50,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
    if ( !this->fields.sort )
      goto LABEL_67;
    this->fields.sort->fields.listViewKind = 0;
LABEL_25:
    if ( !*p_sort )
      goto LABEL_67;
    ListViewSort__Load(*p_sort, 0LL);
    v23 = 0LL;
    goto LABEL_27;
  }
  if ( !v16 )
    goto LABEL_67;
  v23 = UserCommandCodeCollectionMaster__getCollectionList(v16, &findSum[1], findSum, 0LL);
  v24 = MaterialCollectionServantListViewManager_TypeInfo;
  if ( (BYTE3(MaterialCollectionServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo);
    v24 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  commandCodeSortInfo = v24->static_fields->commandCodeSortInfo;
  this->fields.sort = commandCodeSortInfo;
  p_sort = &this->fields.sort;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)commandCodeSortInfo,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( !this->fields.sort )
    goto LABEL_67;
  this->fields.sort->fields.listViewKind = 3;
  if ( !*p_sort )
    goto LABEL_67;
  ListViewSort__Load(*p_sort, 0LL);
  CollectionList = 0LL;
LABEL_27:
  v51 = *p_sort;
  if ( !*p_sort )
    goto LABEL_67;
  sortKind = v51->fields.sortKind;
  if ( sortKind > 0x1B || ((1 << sortKind) & 0x8000204) == 0 )
  {
    v51->fields.sortKind = 27;
    v51 = *p_sort;
    if ( !*p_sort )
      goto LABEL_67;
  }
  iconScaleKind = v51->fields.iconScaleKind;
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
LABEL_38:
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_67;
  scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
  ScaleKindSpriteName = ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
  if ( !scaleChangeTabSprite )
    goto LABEL_67;
  UISprite__set_spriteName(scaleChangeTabSprite, ScaleKindSpriteName, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( kind == 3 )
  {
    if ( !v23 )
      goto LABEL_67;
    v63 = *(_QWORD *)&v23->max_length;
    if ( (int)v63 >= 1 )
    {
      v64 = 0LL;
      while ( v64 < (unsigned int)v63 )
      {
        v65 = v23->m_Items[v64];
        v66 = (MaterialCollectionServantListViewItem_o *)sub_B170CC(
                                                           MaterialCollectionServantListViewItem_TypeInfo,
                                                           v59,
                                                           v60,
                                                           v61,
                                                           v62);
        MaterialCollectionServantListViewItem___ctor_30088356(v66, v64, v65, 3, v67);
        itemList = this->fields.itemList;
        if ( !itemList )
          goto LABEL_67;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v66,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v63) = v23->max_length;
        if ( (__int64)++v64 >= (int)v63 )
          goto LABEL_54;
      }
      goto LABEL_68;
    }
  }
  else
  {
    if ( !CollectionList )
      goto LABEL_67;
    v69 = *(_QWORD *)&CollectionList->max_length;
    if ( (int)v69 >= 1 )
    {
      v70 = 0LL;
      while ( v70 < (unsigned int)v69 )
      {
        v71 = CollectionList->m_Items[v70];
        v72 = (MaterialCollectionServantListViewItem_o *)sub_B170CC(
                                                           MaterialCollectionServantListViewItem_TypeInfo,
                                                           v59,
                                                           v60,
                                                           v61,
                                                           v62);
        MaterialCollectionServantListViewItem___ctor(v72, v70, v71, kind, v73);
        v74 = this->fields.itemList;
        if ( !v74 )
          goto LABEL_67;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v74,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v72,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v69) = CollectionList->max_length;
        if ( (__int64)++v70 >= (int)v69 )
          goto LABEL_54;
      }
LABEL_68:
      sub_B17100(v58, v59, v60);
      sub_B170A0();
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
    v76 = (UnityEngine_Component_o *)this->fields.completeSprite;
    if ( !v76 )
      goto LABEL_67;
    gameObject = UnityEngine_Component__get_gameObject(v76, 0LL);
    if ( !CollectionList || !gameObject )
      goto LABEL_67;
    UnityEngine_GameObject__SetActive(gameObject, findSum[1] >= (signed int)CollectionList->max_length, 0LL);
  }
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v79 = LocalizationManager__Get((System_String_o *)StringLiteral_11842, 0LL);
  if ( !emptyMessageLabel )
LABEL_67:
    sub_B170D4();
  UILabel__set_text(emptyMessageLabel, v79, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  MaterialCollectionServantListViewManager__SetFilterButtonImage(this, v80);
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
  WebViewManager_o *Instance; // x0
  DataManager_o *v19; // x23
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  struct ListViewSort_o *sort; // x8
  unsigned int sortKind; // w9
  int size; // w23
  __int64 v24; // x28
  unsigned int v25; // w25
  int64_t UserId; // x24
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  UserServantCollectionEntity_o *Entity; // x24
  MaterialEventLogListViewItem_Info_o *v33; // x27
  MaterialEventLogServantListViewItem_o *v34; // x26
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  struct System_Collections_Generic_List_ListViewItem__o *v40; // x21
  MaterialEventLogListViewItem_Info_o *v41; // x25
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  MaterialEventLogServantListViewItem_o *v46; // x22
  UILabel_o *emptyMessageLabel; // x20
  System_String_o *v48; // x0
  const MethodInfo *v49; // x1
  const MethodInfo *v50; // x1
  bool v51; // w1
  const MethodInfo *v52; // x1
  const MethodInfo *v53; // x1
  struct System_Collections_Generic_List_ListViewItem__o *v54; // x23
  signed __int64 v55; // x20
  unsigned __int64 v56; // x21
  ListViewItem_o *v57; // x8
  __int64 v58; // x11
  __int64 v59; // x11
  MaterialEventLogServantListViewItem_o *v60; // x0

  if ( (byte_40FCB75 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___, *(_QWORD *)&kind);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v6);
    sub_B16FFC(&MaterialEventLogListViewItem_Info_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&MaterialEventLogServantListViewItem_TypeInfo, v14);
    sub_B16FFC(&NetworkManager_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&StringLiteral_11843, v17);
    byte_40FCB75 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  v19 = (DataManager_o *)Instance;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    v19,
    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
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
    v24 = 4LL;
    do
    {
      v25 = v24 - 4;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( infos->fields._size <= v25 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v27 = *((_QWORD *)&infos->fields._items->obj.klass + v24);
      if ( !v27 || !MasterData_WarQuestSelectionMaster )
        goto LABEL_44;
      Entity = UserServantCollectionMaster__GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 UserId,
                 *(_DWORD *)(v27 + 56),
                 0LL);
      if ( infos->fields._size <= v25 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v33 = (MaterialEventLogListViewItem_Info_o *)*((_QWORD *)&infos->fields._items->obj.klass + v24);
      v34 = (MaterialEventLogServantListViewItem_o *)sub_B170CC(
                                                       MaterialEventLogServantListViewItem_TypeInfo,
                                                       v28,
                                                       v29,
                                                       v30,
                                                       v31);
      MaterialEventLogServantListViewItem___ctor(v34, v25, Entity, kind, v33, 0, 0LL);
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_44;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      ++v24;
    }
    while ( (int)v24 - 4 < size );
    if ( Entity )
    {
      v40 = this->fields.itemList;
      v41 = (MaterialEventLogListViewItem_Info_o *)sub_B170CC(
                                                     MaterialEventLogListViewItem_Info_TypeInfo,
                                                     v36,
                                                     v37,
                                                     v38,
                                                     v39);
      MaterialEventLogListViewItem_Info___ctor(v41, 0LL);
      v46 = (MaterialEventLogServantListViewItem_o *)sub_B170CC(
                                                       MaterialEventLogServantListViewItem_TypeInfo,
                                                       v42,
                                                       v43,
                                                       v44,
                                                       v45);
      MaterialEventLogServantListViewItem___ctor(v46, size, Entity, kind, v41, 1, 0LL);
      if ( !v40 )
        goto LABEL_44;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v40,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v46,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    }
  }
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_11843, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_44;
  UILabel__set_text(emptyMessageLabel, v48, 0LL);
  MaterialCollectionServantListViewManager__SortDummyData(this, v49);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  v51 = MaterialCollectionServantListViewManager__GetFilterCount(this, v50) < 1;
  ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v51, 0LL);
  MaterialCollectionServantListViewManager__SetValentineFilterButtonImage(this, v52);
  MaterialCollectionServantListViewManager__ClearNewIcon(this, v53);
  v54 = this->fields.itemList;
  if ( !v54 )
LABEL_44:
    sub_B170D4();
  v55 = v54->fields._size;
  if ( (int)v55 >= 1 )
  {
    v56 = 0LL;
    while ( 1 )
    {
      if ( v56 >= (unsigned int)v54->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v57 = v54->fields._items->m_Items[v56];
      if ( !v57 )
        goto LABEL_44;
      v58 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v57->klass->_2.bitflags2 + 1) < (unsigned int)v58
        || (MaterialEventLogServantListViewItem_c *)v57->klass->_2.typeHierarchy[v58 - 1] != MaterialEventLogServantListViewItem_TypeInfo )
      {
        goto LABEL_44;
      }
      v59 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v57->klass->_2.bitflags2 + 1) >= (unsigned int)v59 )
      {
        if ( (MaterialEventLogServantListViewItem_c *)v57->klass->_2.typeHierarchy[v59 - 1] == MaterialEventLogServantListViewItem_TypeInfo )
          v60 = (MaterialEventLogServantListViewItem_o *)v54->fields._items->m_Items[v56];
        else
          v60 = 0LL;
      }
      else
      {
        v60 = 0LL;
      }
      MaterialEventLogServantListViewItem__SetDummy(v60, 0LL);
      if ( (__int64)++v56 >= v55 )
        break;
      v54 = this->fields.itemList;
      if ( !v54 )
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
  ListViewSort_o *servantEquipSortInfo; // x0
  ListViewSort_o *commandCodeSortInfo; // x0
  ListViewSort_o *EventLogservantSortInfo; // x0

  if ( (byte_40FCB6F & 1) == 0 )
  {
    sub_B16FFC(&MaterialCollectionServantListViewManager_TypeInfo, v1);
    byte_40FCB6F = 1;
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
        (servantEquipSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL)
    || (ListViewSort__DeleteContinueData(servantEquipSortInfo, 0LL),
        (commandCodeSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->commandCodeSortInfo) == 0LL)
    || (ListViewSort__DeleteContinueData(commandCodeSortInfo, 0LL),
        (EventLogservantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->EventLogservantSortInfo) == 0LL) )
  {
    sub_B170D4();
  }
  ListViewSort__DeleteContinueData(EventLogservantSortInfo, 0LL);
}


void __fastcall MaterialCollectionServantListViewManager__DestroyList(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfo; // x8
  ListViewSort_o *servantEquipSortInfo; // x8
  ListViewSort_o *commandCodeSortInfo; // x8
  ListViewSort_o *EventLogservantSortInfo; // x8

  if ( (byte_40FCB7A & 1) == 0 )
  {
    sub_B16FFC(&MaterialCollectionServantListViewManager_TypeInfo, method);
    byte_40FCB7A = 1;
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
    sub_B170D4();
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
  MaterialEventLogListViewManager_o *MaterialEventLogListViewManager; // x21
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  int32_t FilterCount; // w20

  if ( (byte_40FCB87 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, isDecide);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FCB87 = 1;
  }
  eventLogServantSortSelectMenu = this->fields.eventLogServantSortSelectMenu;
  if ( !eventLogServantSortSelectMenu )
    goto LABEL_16;
  MaterialEventLogServantSortSelectMenu__Close(eventLogServantSortSelectMenu, 0LL);
  MaterialEventLogListViewManager = MaterialCollectionServantListViewManager__GetMaterialEventLogListViewManager(v7, v8);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)MaterialEventLogListViewManager, 0LL, 0LL) )
  {
    if ( !MaterialEventLogListViewManager )
      goto LABEL_16;
    MaterialEventLogListViewManager__SetSort(MaterialEventLogListViewManager, this->fields.sort, v11);
  }
  if ( !isDecide )
    goto LABEL_15;
  MaterialCollectionServantListViewManager__AllInactiveUIWidget(this, v10);
  MaterialCollectionServantListViewManager__AllInitInactiveDummy(this, v12);
  if ( !this->fields.itemList )
LABEL_16:
    sub_B170D4();
  FilterCount = MaterialCollectionServantListViewManager__GetFilterCount(this, v13);
  if ( FilterCount <= 11 )
    MaterialCollectionServantListViewManager__InactiveDummy(this, v14);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, FilterCount < 1, 0LL);
  ListViewManager__ScreenUpdate((ListViewManager_o *)this, 0LL);
LABEL_15:
  MaterialCollectionServantListViewManager__SetValentineFilterButtonImage(this, v10);
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
    sub_B170D4();
  MaterialCollectionServantSortSelectMenu__Close_30117220(sortSelectMenu, 0LL, method);
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
  __int64 v4; // x4
  __int64 v7; // x1
  ListViewSort_o *sort; // x21
  MaterialEventLogServantSortSelectMenu_CallbackFunc_o *v9; // x22

  if ( (byte_40FCB85 & 1) == 0 )
  {
    sub_B16FFC(&MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo, eventLogServantSortSelectMenu);
    sub_B16FFC(&Method_MaterialCollectionServantListViewManager_EndEventLogSortKind__, v7);
    byte_40FCB85 = 1;
  }
  if ( this->fields.isInput )
  {
    sort = this->fields.sort;
    v9 = (MaterialEventLogServantSortSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                                   MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                                   eventLogServantSortSelectMenu,
                                                                   method,
                                                                   v3,
                                                                   v4);
    MaterialEventLogServantSortSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_MaterialCollectionServantListViewManager_EndEventLogSortKind__,
      0LL);
    if ( !eventLogServantSortSelectMenu )
      sub_B170D4();
    MaterialEventLogServantSortSelectMenu__Open(eventLogServantSortSelectMenu, 0, sort, v9, 0LL);
  }
}


void __fastcall MaterialCollectionServantListViewManager__EventLogSortListSave(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_c *v2; // x0
  ListViewSort_o *EventLogservantSortInfo; // x8

  if ( (byte_40FCB8D & 1) == 0 )
  {
    sub_B16FFC(&MaterialCollectionServantListViewManager_TypeInfo, method);
    byte_40FCB8D = 1;
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
        sub_B170D4();
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  signed __int64 size; // x21
  int32_t v7; // w20
  unsigned __int64 v8; // x22
  MaterialEventLogServantListViewItem_o *v9; // x0
  __int64 v10; // x10

  if ( (byte_40FCB86 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    sub_B16FFC(&MaterialEventLogServantListViewItem_TypeInfo, v4);
    byte_40FCB86 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_15;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v7 = 0;
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v9 = (MaterialEventLogServantListViewItem_o *)itemList->fields._items->m_Items[v8];
      if ( !v9 )
        break;
      v10 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v9->klass->_2.bitflags2 + 1) < (unsigned int)v10
        || (MaterialEventLogServantListViewItem_c *)v9->klass->_2.typeHierarchy[v10 - 1] != MaterialEventLogServantListViewItem_TypeInfo )
      {
        break;
      }
      if ( !v9->fields.isDummy )
        v7 += MaterialEventLogServantListViewItem__IsItemMatchFilter(v9, this->fields.sort, 0LL);
      if ( (__int64)++v8 >= size )
        return v7;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_15:
    sub_B170D4();
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
MaterialCollectionServantListViewItem_o *__fastcall MaterialCollectionServantListViewManager__GetItem(
        MaterialCollectionServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  MaterialCollectionServantListViewItem_o *result; // x0
  int32_t size; // w8
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  if ( (byte_40FCB7B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B16FFC(&MaterialCollectionServantListViewItem_TypeInfo, v6);
    byte_40FCB7B = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B170D4();
  result = 0LL;
  if ( (index & 0x80000000) == 0 )
  {
    size = itemList->fields._size;
    if ( size > index )
    {
      if ( size <= (unsigned int)index )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v10 = itemList->fields._items->m_Items[index];
      if ( v10
        && (v11 = *(&MaterialCollectionServantListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v10->klass->_2.bitflags2 + 1) >= (unsigned int)v11) )
      {
        if ( (MaterialCollectionServantListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == MaterialCollectionServantListViewItem_TypeInfo )
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
  __int64 v2; // x1
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  UnityEngine_Object_o *basePanel; // x19
  bool v6; // w8
  MaterialEventLogListViewManager_o *result; // x0
  __int64 v8; // x10
  bool v9; // w8
  void *monitor; // x19
  bool v11; // w8

  if ( (byte_40FCB73 & 1) == 0 )
  {
    sub_B16FFC(&MyRoomRootComponent_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v2);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_40FCB73 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  basePanel = (UnityEngine_Object_o *)Instance->fields.basePanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(basePanel, 0LL, 0LL);
  result = 0LL;
  if ( !v6 )
  {
    if ( basePanel )
    {
      v8 = *(&MyRoomRootComponent_TypeInfo->_2.bitflags2 + 1);
      if ( *(&basePanel->klass->_2.bitflags2 + 1) >= (unsigned int)v8 )
      {
        if ( (MyRoomRootComponent_c *)basePanel->klass->_2.typeHierarchy[v8 - 1] != MyRoomRootComponent_TypeInfo )
          basePanel = 0LL;
      }
      else
      {
        basePanel = 0LL;
      }
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v9 = UnityEngine_Object__op_Equality(basePanel, 0LL, 0LL);
    result = 0LL;
    if ( !v9 )
    {
      if ( !basePanel )
        goto LABEL_25;
      monitor = basePanel[2].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)monitor, 0LL, 0LL);
      result = 0LL;
      if ( !v11 )
      {
        if ( monitor )
          return (MaterialEventLogListViewManager_o *)*((_QWORD *)monitor + 49);
LABEL_25:
        sub_B170D4();
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  signed __int64 size; // x20
  unsigned __int64 v11; // x21
  ListViewItem_o *v12; // x8
  __int64 v13; // x11
  __int64 v14; // x11
  MaterialEventLogServantListViewItem_o *v15; // x0
  System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *ObjectList; // x0
  int v17; // w8
  System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *v18; // x19
  __int64 v19; // x21
  UnityEngine_Component_o *v20; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Behaviour_o *Component_srcLineSprite; // x20

  if ( (byte_40FCB8F & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_B16FFC(&MaterialEventLogServantListViewItem_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40FCB8F = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_34;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v11 = 0LL;
    do
    {
      if ( v11 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v12 = itemList->fields._items->m_Items[v11];
      if ( !v12 )
        break;
      v13 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v12->klass->_2.bitflags2 + 1) < (unsigned int)v13
        || (MaterialEventLogServantListViewItem_c *)v12->klass->_2.typeHierarchy[v13 - 1] != MaterialEventLogServantListViewItem_TypeInfo )
      {
        break;
      }
      v14 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v12->klass->_2.bitflags2 + 1) >= (unsigned int)v14 )
      {
        if ( (MaterialEventLogServantListViewItem_c *)v12->klass->_2.typeHierarchy[v14 - 1] == MaterialEventLogServantListViewItem_TypeInfo )
          v15 = (MaterialEventLogServantListViewItem_o *)itemList->fields._items->m_Items[v11];
        else
          v15 = 0LL;
      }
      else
      {
        v15 = 0LL;
      }
      MaterialEventLogServantListViewItem__InactiveDummy(v15, 0LL);
      if ( (__int64)++v11 >= size )
        goto LABEL_19;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_34:
    sub_B170D4();
  }
LABEL_19:
  ObjectList = MaterialCollectionServantListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_34;
  v17 = ObjectList->fields._size;
  v18 = ObjectList;
  if ( v17 >= 1 )
  {
    v19 = 0LL;
    while ( 1 )
    {
      if ( v17 <= (unsigned int)v19 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v20 = (UnityEngine_Component_o *)v18->fields._items->m_Items[v19];
      if ( !v20 )
        goto LABEL_34;
      gameObject = UnityEngine_Component__get_gameObject(v20, 0LL);
      if ( !gameObject )
        goto LABEL_34;
      Component_srcLineSprite = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             gameObject,
                                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
      {
        if ( !Component_srcLineSprite )
          goto LABEL_34;
        UnityEngine_Behaviour__set_enabled(Component_srcLineSprite, 0, 0LL);
      }
      v17 = v18->fields._size;
      if ( (int)++v19 >= v17 )
        return;
    }
  }
}


void __fastcall MaterialCollectionServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialCollectionServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0
  ListViewSort_o *servantEquipSortInfo; // x0
  ListViewSort_o *commandCodeSortInfo; // x0
  ListViewSort_o *EventLogservantSortInfo; // x0

  if ( (byte_40FCB70 & 1) == 0 )
  {
    sub_B16FFC(&MaterialCollectionServantListViewManager_TypeInfo, v1);
    byte_40FCB70 = 1;
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
        (servantEquipSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL)
    || (ListViewSort__InitLoad(servantEquipSortInfo, 0LL),
        (commandCodeSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->commandCodeSortInfo) == 0LL)
    || (ListViewSort__InitLoad(commandCodeSortInfo, 0LL),
        (EventLogservantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->EventLogservantSortInfo) == 0LL) )
  {
    sub_B170D4();
  }
  ListViewSort__InitLoad(EventLogservantSortInfo, 0LL);
}


void __fastcall MaterialCollectionServantListViewManager__ModifyItem(
        MaterialCollectionServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewManager__RequestListObject_30099796(this, 4, method);
}


void __fastcall MaterialCollectionServantListViewManager__ModifyList(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  signed __int64 size; // x22
  unsigned __int64 v8; // x23
  ListViewItem_o *v9; // x20
  __int64 v10; // x10
  UnityEngine_Object_o *viewObject; // x21
  ListViewObject_o *v12; // x0

  if ( (byte_40FCB7C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    sub_B16FFC(&MaterialCollectionServantListViewItem_TypeInfo, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FCB7C = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_19:
    sub_B170D4();
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v9 = itemList->fields._items->m_Items[v8];
      if ( v9 )
      {
        v10 = *(&MaterialCollectionServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v9->klass->_2.bitflags2 + 1) >= (unsigned int)v10
          && (MaterialCollectionServantListViewItem_c *)v9->klass->_2.typeHierarchy[v10 - 1] == MaterialCollectionServantListViewItem_TypeInfo )
        {
          viewObject = (UnityEngine_Object_o *)v9->fields.viewObject;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL) )
          {
            v12 = v9->fields.viewObject;
            if ( !v12 )
              goto LABEL_19;
            ListViewObject__SetItemSeed(v12, v9, this->fields.seed, 0LL);
          }
        }
      }
      if ( (__int64)++v8 >= size )
        break;
      itemList = this->fields.itemList;
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
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v11; // w8
  struct ListViewSort_o *sort; // x8
  ListViewSort_o *v13; // x0
  UISprite_o *scaleChangeTabSprite; // x20
  System_String_o *ScaleKindSpriteName; // x0
  ListViewSort_o *v16; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x2

  if ( (byte_40FCB8C & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FCB8C = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v11 = 2;
    goto LABEL_12;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v11 = 3;
    goto LABEL_12;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v11 = 1;
LABEL_12:
    this->fields.scaleType = v11;
    this->fields.seed = smallSizeSeed;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)smallSizeSeed,
      v3,
      v4,
      v5,
      v6,
      v7,
      v8);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType, (v13 = this->fields.sort) == 0LL)
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        ScaleKindSpriteName = ListViewSort__GetScaleKindSpriteName(v13, this->fields.scaleType, 0LL),
        !scaleChangeTabSprite)
    || (UISprite__set_spriteName(scaleChangeTabSprite, ScaleKindSpriteName, 0LL), (v16 = this->fields.sort) == 0LL) )
  {
    sub_B170D4();
  }
  ListViewSort__Save(v16, 0LL);
  MaterialCollectionServantListViewManager__ModifyList(this, v17);
  MaterialCollectionServantListViewManager__SetMode_30084748(this, 2, v18);
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
  struct ListViewItem_o *linkItem; // x8
  MaterialCollectionServantListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v12; // x10
  int32_t Index; // w2

  if ( (byte_40FCB82 & 1) == 0 )
  {
    sub_B16FFC(&MaterialEventLogServantListViewItem_TypeInfo, obj);
    byte_40FCB82 = 1;
  }
  if ( !obj )
    sub_B170D4();
  linkItem = obj->fields.linkItem;
  callbackFunc = this->fields.callbackFunc;
  if ( !linkItem
    || (v12 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v12)
    || (MaterialEventLogServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] != MaterialEventLogServantListViewItem_TypeInfo )
  {
    this->fields.callbackFunc = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
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
  struct ListViewSort_o *sort; // x8
  ListViewSort_o *v4; // x0

  if ( (byte_40FCB88 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FCB88 = 1;
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
          (v4 = this->fields.sort) == 0LL) )
    {
      sub_B170D4();
    }
    ListViewSort__Save(v4, 0LL);
  }
}


void __fastcall MaterialCollectionServantListViewManager__OnClickSortKind(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  struct ListViewSort_o *sort; // x20
  int32_t listViewKind; // w8
  struct MaterialCollectionServantSortSelectMenu_o *v11; // x21
  MaterialCollectionServantSortSelectMenu_CallbackFunc_o *v12; // x22
  const MethodInfo *v13; // x4
  MaterialCollectionServantSortSelectMenu_o *v14; // x0
  int32_t v15; // w1
  struct MaterialCollectionServantSortSelectMenu_o *sortSelectMenu; // x21

  if ( (byte_40FCB84 & 1) == 0 )
  {
    sub_B16FFC(&MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_MaterialCollectionServantListViewManager_EndSelectSortKind__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FCB84 = 1;
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
      v12 = (MaterialCollectionServantSortSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                                        MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                                        v5,
                                                                        v6,
                                                                        v7,
                                                                        v8);
      MaterialCollectionServantSortSelectMenu_CallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_MaterialCollectionServantListViewManager_EndSelectSortKind__,
        0LL);
      if ( !sortSelectMenu )
        goto LABEL_20;
      v15 = 3;
LABEL_18:
      v14 = sortSelectMenu;
      goto LABEL_19;
    case 1:
      sortSelectMenu = this->fields.sortSelectMenu;
      v12 = (MaterialCollectionServantSortSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                                        MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                                        v5,
                                                                        v6,
                                                                        v7,
                                                                        v8);
      MaterialCollectionServantSortSelectMenu_CallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_MaterialCollectionServantListViewManager_EndSelectSortKind__,
        0LL);
      if ( !sortSelectMenu )
        goto LABEL_20;
      v15 = 1;
      goto LABEL_18;
    case 0:
      v11 = this->fields.sortSelectMenu;
      v12 = (MaterialCollectionServantSortSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                                        MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                                        v5,
                                                                        v6,
                                                                        v7,
                                                                        v8);
      MaterialCollectionServantSortSelectMenu_CallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_MaterialCollectionServantListViewManager_EndSelectSortKind__,
        0LL);
      if ( v11 )
      {
        v14 = v11;
        v15 = 0;
LABEL_19:
        MaterialCollectionServantSortSelectMenu__Open(v14, v15, sort, v12, v13);
        return;
      }
LABEL_20:
      sub_B170D4();
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
  struct ListViewItem_o *linkItem; // x8
  MaterialCollectionServantListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v12; // x10
  int32_t Index; // w2

  if ( (byte_40FCB83 & 1) == 0 )
  {
    sub_B16FFC(&MaterialEventLogServantListViewItem_TypeInfo, obj);
    byte_40FCB83 = 1;
  }
  if ( !obj )
    sub_B170D4();
  linkItem = obj->fields.linkItem;
  callbackFunc = this->fields.callbackFunc;
  if ( !linkItem
    || (v12 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v12)
    || (MaterialEventLogServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] != MaterialEventLogServantListViewItem_TypeInfo )
  {
    this->fields.callbackFunc = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct UIScrollView_o *v13; // x0
  struct UIScrollView_o *v14; // x0
  UIScrollView_o *v15; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_40FCB81 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FCB81 = 1;
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
      v13 = this->fields.scrollView;
      if ( v13 )
      {
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._8_UpdateScrollbars.method)(
          v13,
          1LL,
          v13->klass->vtable._9_SetDragAmount.methodPtr);
        v14 = this->fields.scrollView;
        if ( v14 )
        {
          if ( (((__int64 (__fastcall *)(struct UIScrollView_o *, Il2CppMethodPointer))v14->klass->vtable._6_get_shouldMoveVertically.method)(
                  v14,
                  v14->klass->vtable._7_get_shouldMove.methodPtr) & 1) == 0 )
            goto LABEL_15;
          v15 = this->fields.scrollView;
          if ( v15 )
          {
            UIScrollView__UpdatePosition(v15, 0LL);
LABEL_15:
            callbackFunc2 = this->fields.callbackFunc2;
            this->fields.callbackFunc2 = 0LL;
            sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v7, v8, v9, v10, v11, v12);
            if ( callbackFunc2 )
              System_Action__Invoke(callbackFunc2, 0LL);
            return;
          }
        }
      }
      sub_B170D4();
    }
  }
}


void __fastcall MaterialCollectionServantListViewManager__RefrashListDisp(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *ObjectList; // x0
  int32_t size; // w8
  System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *v6; // x20
  int v7; // w8
  __int64 v8; // x21
  MaterialCollectionServantListViewObject_o *v9; // x0

  if ( (byte_40FCB79 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__, v3);
    byte_40FCB79 = 1;
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v9 = v6->fields._items->m_Items[v8];
        if ( !v9 )
          break;
        ((void (__fastcall *)(MaterialCollectionServantListViewObject_o *, bool, Il2CppMethodPointer))v9->klass->vtable._9_SetInput.method)(
          v9,
          this->fields.isInput,
          v9->klass->vtable._10_Invalidation.methodPtr);
        v7 = v6->fields._size;
        if ( (int)++v8 >= v7 )
          return;
      }
LABEL_12:
      sub_B170D4();
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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
  System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *v9; // x20
  signed __int64 size; // x8
  unsigned __int64 v11; // x24
  int v12; // w23
  MaterialCollectionServantListViewObject_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Action_o *v18; // x22
  const MethodInfo *v19; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FCB80 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__, v4);
    sub_B16FFC(&Method_MaterialCollectionServantListViewManager_OnMoveEnd__, v5);
    sub_B16FFC(&StringLiteral_10004, v6);
    byte_40FCB80 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ObjectList = MaterialCollectionServantListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_15:
    sub_B170D4();
  v9 = ObjectList;
  this->fields.callbackCount = ObjectList->fields._size;
  LODWORD(size) = ObjectList->fields._size;
  if ( (int)size < 1 )
    goto LABEL_14;
  v11 = 0LL;
  v12 = 0;
  do
  {
    if ( v11 >= (unsigned int)size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v13 = v9->fields._items->m_Items[v11];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v13, 0LL) )
    {
      v18 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_MaterialCollectionServantListViewManager_OnMoveEnd__, 0LL);
      if ( !v13 )
        goto LABEL_15;
      ++v12;
      zero = UnityEngine_Vector3__get_zero(0LL);
      MaterialCollectionServantListViewObject__Init(v13, 5, v18, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v19);
    }
    else
    {
      --this->fields.callbackCount;
    }
    size = v9->fields._size;
    ++v11;
  }
  while ( (__int64)v11 < size );
  if ( !v12 )
  {
LABEL_14:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004,
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *current; // x21
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FCB7E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__Dispose__,
      v7);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__MoveNext__,
      v8);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__get_Current__,
      v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__, v11);
    sub_B16FFC(&Method_MaterialCollectionServantListViewManager_OnMoveEnd__, v12);
    sub_B16FFC(&StringLiteral_10004, v13);
    byte_40FCB7E = 1;
  }
  memset(&v23, 0, sizeof(v23));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MaterialCollectionServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__MoveNext__) )
    {
      current = v23.fields.current;
      v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
      System_Action___ctor(v21, (Il2CppObject *)this, Method_MaterialCollectionServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      zero = UnityEngine_Vector3__get_zero(0LL);
      MaterialCollectionServantListViewObject__Init(
        (MaterialCollectionServantListViewObject_o *)current,
        mode,
        v21,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v22);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewManager__RequestListObject_30099796(
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FCB7F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__Dispose__,
      v5);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__MoveNext__,
      v6);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__get_Current__,
      v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__GetEnumerator__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__, v9);
    sub_B16FFC(&Method_MaterialCollectionServantListViewManager_OnMoveEnd__, v10);
    sub_B16FFC(&StringLiteral_10004, v11);
    byte_40FCB7F = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MaterialCollectionServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__MoveNext__) )
    {
      current = v21.fields.current;
      v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_MaterialCollectionServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      zero = UnityEngine_Vector3__get_zero(0LL);
      MaterialCollectionServantListViewObject__Init(
        (MaterialCollectionServantListViewObject_o *)current,
        mode,
        v19,
        0.0,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v20);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__Dispose__);
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
  bool v7; // w0
  System_String_o **v8; // x9
  System_String_o **v9; // x20
  UILabel_o *sortKindLabel; // x0
  UnityEngine_Color_o v11; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_40FCB77 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16892, method);
    sub_B16FFC(&StringLiteral_16893, v3);
    sub_B16FFC(&StringLiteral_360, v4);
    sub_B16FFC(&StringLiteral_347, v5);
    byte_40FCB77 = 1;
  }
  *(_QWORD *)&v11.fields.r = 0LL;
  *(_QWORD *)&v11.fields.b = 0LL;
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_12;
  v7 = ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL);
  if ( !this->fields.filterSprite )
    goto LABEL_12;
  v8 = (System_String_o **)&StringLiteral_16892;
  if ( !v7 )
    v8 = (System_String_o **)&StringLiteral_16893;
  v9 = v7 ? (System_String_o **)&StringLiteral_347 : (System_String_o **)&StringLiteral_360;
  UISprite__set_spriteName(this->fields.filterSprite, *v8, 0LL);
  *(_QWORD *)&v11.fields.r = 0LL;
  *(_QWORD *)&v11.fields.b = 0LL;
  UnityEngine_ColorUtility__TryParseHtmlString(*v9, &v11, 0LL);
  sortKindLabel = this->fields.sortKindLabel;
  if ( !sortKindLabel )
LABEL_12:
    sub_B170D4();
  UILabel__set_effectColor(sortKindLabel, v11, 0LL);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  MaterialCollectionServantListViewManager__SetMode_30084748(this, mode, v10);
}


void __fastcall MaterialCollectionServantListViewManager__SetMode_30084748(
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
  MaterialCollectionServantListViewManager__RequestListObject_30099796(this, v6, v5);
}


void __fastcall MaterialCollectionServantListViewManager__SetMode_30100844(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  MaterialCollectionServantListViewManager__SetMode_30084748(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewManager__SetObjectItem(
        MaterialCollectionServantListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  int v9; // s1
  int32_t v12; // w1

  if ( (byte_40FCB7D & 1) == 0 )
  {
    sub_B16FFC(&MaterialCollectionServantListViewObject_TypeInfo, obj);
    byte_40FCB7D = 1;
  }
  if ( !obj
    || (v6 = *(&MaterialCollectionServantListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (MaterialCollectionServantListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != MaterialCollectionServantListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  initMode = this->fields.initMode;
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
  sub_B16F98(
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *sortKindLabel; // x20
  ListViewSort_o *sort; // x0
  UILabel_o *v11; // x20
  System_String_o *SortKindButtonText; // x0
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v14; // x8
  int32_t sortKind; // w9
  UISprite_o *sortExplanationSprite; // x0
  System_String_o **v17; // x8
  struct ListViewSort_o *v18; // x8
  UISprite_o *v19; // x0
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v21; // x9
  System_String_o **v22; // x10
  UISprite_o *v23; // x0
  System_String_o **v24; // x8
  struct ListViewSort_o *v25; // x8
  System_String_o **v26; // x8

  if ( (byte_40FCB8B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16955, v3);
    sub_B16FFC(&StringLiteral_17038, v4);
    sub_B16FFC(&StringLiteral_16995, v5);
    sub_B16FFC(&StringLiteral_16985, v6);
    sub_B16FFC(&StringLiteral_17002, v7);
    sub_B16FFC(&StringLiteral_16952, v8);
    byte_40FCB8B = 1;
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
    v11 = this->fields.sortKindLabel;
    SortKindButtonText = ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v11 )
      goto LABEL_36;
    UILabel__set_text(v11, SortKindButtonText, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL) )
  {
    v14 = this->fields.sort;
    if ( v14 )
    {
      sortKind = v14->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sortExplanationSprite = this->fields.sortExplanationSprite;
        if ( sortExplanationSprite )
        {
          v17 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17002 : &StringLiteral_16995);
          UISprite__set_spriteName(sortExplanationSprite, *v17, 0LL);
          v18 = this->fields.sort;
          if ( v18 )
          {
            v19 = this->fields.sortOrderSprite;
            if ( v19 )
            {
              isAscendingOrder = v18->fields.isAscendingOrder;
              v21 = (System_String_o **)&StringLiteral_16952;
              v22 = (System_String_o **)&StringLiteral_16955;
LABEL_32:
              if ( isAscendingOrder )
                v26 = v21;
              else
                v26 = v22;
              UISprite__set_spriteName(v19, *v26, 0LL);
              return;
            }
          }
        }
      }
      else
      {
        v23 = this->fields.sortExplanationSprite;
        if ( v23 )
        {
          v24 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17038 : &StringLiteral_16985);
          UISprite__set_spriteName(v23, *v24, 0LL);
          v25 = this->fields.sort;
          if ( v25 )
          {
            v19 = this->fields.sortOrderSprite;
            if ( v19 )
            {
              isAscendingOrder = v25->fields.isAscendingOrder;
              v21 = (System_String_o **)&StringLiteral_16955;
              v22 = (System_String_o **)&StringLiteral_16952;
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_36:
    sub_B170D4();
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
  bool v7; // w0
  System_String_o **v8; // x9
  System_String_o **v9; // x20
  UILabel_o *sortKindLabel; // x0
  UnityEngine_Color_o v11; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_40FCB78 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_360, method);
    sub_B16FFC(&StringLiteral_16927, v3);
    sub_B16FFC(&StringLiteral_347, v4);
    sub_B16FFC(&StringLiteral_16926, v5);
    byte_40FCB78 = 1;
  }
  *(_QWORD *)&v11.fields.r = 0LL;
  *(_QWORD *)&v11.fields.b = 0LL;
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_12;
  v7 = ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL);
  if ( !this->fields.filterSprite )
    goto LABEL_12;
  v8 = (System_String_o **)&StringLiteral_16926;
  if ( !v7 )
    v8 = (System_String_o **)&StringLiteral_16927;
  v9 = v7 ? (System_String_o **)&StringLiteral_347 : (System_String_o **)&StringLiteral_360;
  UISprite__set_spriteName(this->fields.filterSprite, *v8, 0LL);
  *(_QWORD *)&v11.fields.r = 0LL;
  *(_QWORD *)&v11.fields.b = 0LL;
  UnityEngine_ColorUtility__TryParseHtmlString(*v9, &v11, 0LL);
  sortKindLabel = this->fields.sortKindLabel;
  if ( !sortKindLabel )
LABEL_12:
    sub_B170D4();
  UILabel__set_effectColor(sortKindLabel, v11, 0LL);
}


void __fastcall MaterialCollectionServantListViewManager__SortAscendingOrder(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  MaterialCollectionServantListViewManager_o *v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *sort; // x8
  MaterialEventLogListViewManager_o *MaterialEventLogListViewManager; // x20
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  bool v13; // w1
  ListViewSort_o *v14; // x0

  if ( (byte_40FCB89 & 1) == 0 )
  {
    sub_B16FFC(&Method_MaterialCollectionServantListViewManager_SortAscendingOrder__, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FCB89 = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_MaterialCollectionServantListViewManager_SortAscendingOrder__;
    if ( (*((_BYTE *)Method_MaterialCollectionServantListViewManager_SortAscendingOrder__ + 75) & 2) != 0 )
      v4 = (_QWORD *)sub_B17004(Method_MaterialCollectionServantListViewManager_SortAscendingOrder__);
    v5 = (System_Reflection_MethodBase_o *)sub_B16FE0(v4, v4[3]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    sort = this->fields.sort;
    if ( sort )
    {
      sort->fields.isAscendingOrder ^= 1u;
      MaterialEventLogListViewManager = MaterialCollectionServantListViewManager__GetMaterialEventLogListViewManager(
                                          v6,
                                          v7);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)MaterialEventLogListViewManager, 0LL, 0LL) )
      {
        if ( !MaterialEventLogListViewManager )
          goto LABEL_16;
        MaterialEventLogListViewManager__SetSort(MaterialEventLogListViewManager, this->fields.sort, v11);
      }
      MaterialCollectionServantListViewManager__SortDummyData(this, v10);
      ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
      v13 = MaterialCollectionServantListViewManager__GetFilterCount(this, v12) < 1;
      ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v13, 0LL);
      ListViewManager__ScreenUpdate((ListViewManager_o *)this, 0LL);
      v14 = this->fields.sort;
      if ( v14 )
      {
        ListViewSort__Save(v14, 0LL);
        ((void (__fastcall *)(MaterialCollectionServantListViewManager_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
          this,
          this->klass->vtable._6_GetDragRoot.methodPtr);
        return;
      }
    }
LABEL_16:
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 size; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  __int64 i; // x23
  struct System_Collections_Generic_List_ListViewItem__o *v26; // x21
  unsigned __int64 v27; // x27
  ListViewItem_o *v28; // x21
  __int64 v29; // x10
  struct System_Collections_Generic_List_ListViewItem__o *v30; // x28
  struct ListViewSort_o *sort; // x8
  int32_t v32; // w1
  struct System_Collections_Generic_List_ListViewItem__o *v33; // x28
  ListViewItem_o *v34; // x0
  __int64 v35; // x8

  if ( (byte_40FCB8A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialEventLogServantListViewItem___ctor__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B16FFC(&System_Collections_Generic_List_ListViewItem__TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_List_MaterialEventLogServantListViewItem__TypeInfo, v9);
    sub_B16FFC(&MaterialEventLogServantListViewItem_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40FCB8A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_29;
  size = itemList->fields._size;
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_MaterialEventLogServantListViewItem__TypeInfo,
                                                                                                  v13,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MaterialEventLogServantListViewItem___ctor__);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  if ( (int)size >= 1 )
  {
    for ( i = 4LL; ; ++i )
    {
      v26 = this->fields.itemList;
      if ( !v26 )
        break;
      v27 = i - 4;
      if ( i - 4 >= (unsigned __int64)(unsigned int)v26->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v28 = (ListViewItem_o *)*((_QWORD *)&v26->fields._items->obj.klass + i);
      if ( !v28 )
        break;
      v29 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v28->klass->_2.bitflags2 + 1) < (unsigned int)v29
        || (MaterialEventLogServantListViewItem_c *)v28->klass->_2.typeHierarchy[v29 - 1] != MaterialEventLogServantListViewItem_TypeInfo )
      {
        break;
      }
      if ( LOBYTE(v28[1].fields.sortValue2) )
      {
        v30 = this->fields.itemList;
        if ( !v30 )
          break;
        if ( v27 >= (unsigned int)v30->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( !v24 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v24,
          *((EventMissionProgressRequest_Argument_ProgressData_o **)&v30->fields._items->obj.klass + i),
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        sort = this->fields.sort;
        if ( !sort )
          break;
        if ( sort->fields.isAscendingOrder )
        {
          v32 = i + 995;
          v28->fields.index = i + 995;
        }
        else
        {
          v28->fields.index = -1;
          v32 = -1;
        }
        ListViewItem__SetSortIndex(v28, v32, 0LL);
        v33 = this->fields.itemList;
        if ( !v33 )
          break;
        if ( v27 >= (unsigned int)v33->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v34 = (ListViewItem_o *)*((_QWORD *)&v33->fields._items->obj.klass + i);
        if ( !v34 )
          break;
        ListViewItem__Set(v34, v28, 0LL);
      }
      MaterialEventLogServantListViewItem__DummyVisible((MaterialEventLogServantListViewItem_o *)v28, 0LL);
      v35 = i - 3;
      if ( v35 >= size )
        return;
    }
LABEL_29:
    sub_B170D4();
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

  if ( (byte_40FCB6B & 1) == 0 )
  {
    sub_B16FFC(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FCB6B = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
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

  if ( (byte_40FCB6D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FCB6D = 1;
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
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  MaterialCollectionServantListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *__fastcall MaterialCollectionServantListViewManager__get_ClippingObjectList(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  MaterialCollectionServantListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40FCB72 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_MaterialCollectionServantListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FCB72 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_MaterialCollectionServantListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (MaterialCollectionServantListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                               (UnityEngine_GameObject_o *)current,
                                                                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B170D4();
      Item = (ListViewItem_o *)MaterialCollectionServantListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B170D4();
      if ( Item->fields.isTermination )
      {
        if ( ListViewManager__ClippingItem_30192136((ListViewManager_o *)this, Item, 0LL) )
        {
          if ( !v14 )
            sub_B170D4();
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v14 )
          sub_B170D4();
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          v19,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *)v14;
}


System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *__fastcall MaterialCollectionServantListViewManager__get_ObjectList(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FCB71 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_MaterialCollectionServantListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FCB71 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_MaterialCollectionServantListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___);
      if ( !v14 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *)v14;
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

  if ( (byte_40FCB6C & 1) == 0 )
  {
    sub_B16FFC(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FCB6C = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
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

  if ( (byte_40FCB6E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FCB6E = 1;
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
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  MaterialCollectionServantListViewManager__DeleteContinueData(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewManager_CallbackFunc___ctor(
        MaterialCollectionServantListViewManager_CallbackFunc_o *this,
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
  sub_B16F98(
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
System_IAsyncResult_o *__fastcall MaterialCollectionServantListViewManager_CallbackFunc__BeginInvoke(
        MaterialCollectionServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = index;
  v13 = kind;
  if ( (byte_40F6961 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&MaterialCollectionServantListViewManager_ResultKind_TypeInfo, v9);
    byte_40F6961 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(MaterialCollectionServantListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall MaterialCollectionServantListViewManager_CallbackFunc__EndInvoke(
        MaterialCollectionServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&index);
      if ( (sub_B1702C(v22) & 1) == 0 )
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
      v24 = sub_B17024(v22);
      v25 = sub_B17428(v22);
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
            v18 = sub_AAFEF8(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B170AC(v17, v22);
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
            v16 = sub_AAFEF8(v21, class_0, v10);
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