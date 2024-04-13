void __fastcall MaterialCollectionServantListViewManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  ListViewSort_o *v19; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  ListViewSort_o *v27; // x19
  struct MaterialCollectionServantListViewManager_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  ListViewSort_o *v35; // x19
  struct MaterialCollectionServantListViewManager_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  ListViewSort_o *v43; // x19
  struct MaterialCollectionServantListViewManager_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7

  if ( (byte_42EC2A3 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewSort_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&MaterialCollectionServantListViewManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_9074/*"MaterialCollectionServant2"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_9075/*"MaterialCollectionServant4"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_9073/*"MaterialCollectionServant1"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_9076/*"MaterialCollectionServant5"*/, v16, v17, v18);
    byte_42EC2A3 = 1;
  }
  v19 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v19, (System_String_o *)StringLiteral_9073/*"MaterialCollectionServant1"*/, 27, 1, 0LL);
  static_fields = (BattleServantConfConponent_o *)MaterialCollectionServantListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v19;
  sub_B5D560(static_fields, (System_Int32_array **)v19, v21, v22, v23, v24, v25, v26);
  v27 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v27, (System_String_o *)StringLiteral_9074/*"MaterialCollectionServant2"*/, 27, 1, 0LL);
  v28 = MaterialCollectionServantListViewManager_TypeInfo->static_fields;
  v28->servantEquipSortInfo = v27;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v28->servantEquipSortInfo,
    (System_Int32_array **)v27,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v35, (System_String_o *)StringLiteral_9075/*"MaterialCollectionServant4"*/, 27, 1, 0LL);
  v36 = MaterialCollectionServantListViewManager_TypeInfo->static_fields;
  v36->commandCodeSortInfo = v35;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v36->commandCodeSortInfo,
    (System_Int32_array **)v35,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v43, (System_String_o *)StringLiteral_9076/*"MaterialCollectionServant5"*/, 3, 1, 0LL);
  v44 = MaterialCollectionServantListViewManager_TypeInfo->static_fields;
  v44->EventLogservantSortInfo = v43;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v44->EventLogservantSortInfo,
    (System_Int32_array **)v43,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
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
  int v2; // w2
  __int64 v3; // x3
  MaterialCollectionServantListViewManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ListViewItemSeed_o *seed; // x8
  UnityEngine_GameObject_o *parent; // x19
  int32_t childCount; // w0
  int32_t v11; // w20
  int32_t i; // w21
  UnityEngine_Object_o *Child; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x22

  v4 = this;
  if ( (byte_42EC2A0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, (_DWORD)method, v2, v3);
    this = (MaterialCollectionServantListViewManager_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EC2A0 = 1;
  }
  seed = v4->fields.seed;
  if ( !seed
    || (parent = seed->fields.parent) == 0LL
    || (this = (MaterialCollectionServantListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                               seed->fields.parent,
                                                               0LL)) == 0LL )
  {
LABEL_22:
    sub_B5D69C(this, method);
  }
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0LL);
  if ( childCount >= 1 )
  {
    v11 = childCount;
    for ( i = 0; i < v11; ++i )
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
                                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
  int v2; // w2
  __int64 v3; // x3
  MaterialCollectionServantListViewManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  signed __int64 size; // x20
  unsigned __int64 v13; // x21
  ListViewItem_o *v14; // x8
  __int64 v15; // x11

  v4 = this;
  if ( (byte_42EC2A2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6, v7);
    this = (MaterialCollectionServantListViewManager_o *)sub_B5D5C4(
                                                           &MaterialEventLogServantListViewItem_TypeInfo,
                                                           v8,
                                                           v9,
                                                           v10);
    byte_42EC2A2 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_15;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v13 = 0LL;
    do
    {
      if ( v13 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v14 = itemList->fields._items->m_Items[v13];
      if ( !v14 )
        break;
      v15 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v14->klass->_2.bitflags2 + 1) < (unsigned int)v15
        || (MaterialEventLogServantListViewItem_c *)v14->klass->_2.typeHierarchy[v15 - 1] != MaterialEventLogServantListViewItem_TypeInfo )
      {
        break;
      }
      ++v13;
      if ( (MaterialEventLogServantListViewItem_c *)v14->klass->_2.typeHierarchy[*(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2
                                                                                 + 1)
                                                                               - 1] != MaterialEventLogServantListViewItem_TypeInfo )
        v14 = 0LL;
      BYTE1(v14[1].fields.sortValue2) = 0;
      if ( (__int64)v13 >= size )
        return;
      itemList = v4->fields.itemList;
    }
    while ( itemList );
LABEL_15:
    sub_B5D69C(this, method);
  }
}


void __fastcall MaterialCollectionServantListViewManager__ClearNewIcon(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *ObjectList; // x0
  __int64 v9; // x1
  int size; // w8
  System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *v11; // x19
  __int64 v12; // x21
  MaterialCollectionServantListViewObject_o *v13; // x20
  const MethodInfo *v14; // x1

  if ( (byte_42EC288 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__, v5, v6, v7);
    byte_42EC288 = 1;
  }
  ObjectList = MaterialCollectionServantListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_12;
  size = ObjectList->fields._size;
  v11 = ObjectList;
  if ( size >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( size <= (unsigned int)v12 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v13 = v11->fields._items->m_Items[v12];
      if ( !v13 )
        break;
      ObjectList = (System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *)v13->fields.itemDraw;
      if ( !ObjectList )
        break;
      MaterialCollectionServantListViewItemDraw__ClearNewIcon(
        (MaterialCollectionServantListViewItemDraw_o *)ObjectList,
        0LL);
      MaterialCollectionServantListViewObject__AttachedIconSetupDisp(v13, v14);
      size = v11->fields._size;
      if ( (int)++v12 >= size )
        return;
    }
LABEL_12:
    sub_B5D69C(ObjectList, v9);
  }
}


void __fastcall MaterialCollectionServantListViewManager__CreateList(
        MaterialCollectionServantListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  DataManager_o *Instance; // x0
  __int64 v31; // x1
  DataManager_o *v32; // x22
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UserCommandCodeCollectionEntity_array *v40; // x22
  MaterialCollectionServantListViewManager_c *v41; // x8
  struct ListViewSort_o *commandCodeSortInfo; // x1
  struct ListViewSort_o **p_sort; // x23
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  UserServantCollectionEntity_array *CollectionList; // x21
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  MaterialCollectionServantListViewManager_c *v57; // x8
  struct ListViewSort_o *servantEquipSortInfo; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  MaterialCollectionServantListViewManager_c *v65; // x8
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v67; // x1
  struct ListViewSort_o *v68; // x8
  unsigned int sortKind; // w9
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeTabSprite; // x23
  __int64 v73; // x8
  unsigned __int64 v74; // x20
  UserCommandCodeCollectionEntity_o *v75; // x24
  MaterialCollectionServantListViewItem_o *v76; // x23
  __int64 v77; // x8
  unsigned __int64 v78; // x22
  UserServantCollectionEntity_o *v79; // x24
  MaterialCollectionServantListViewItem_o *v80; // x23
  UnityEngine_Object_o *completeSprite; // x20
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v83; // x1
  __int64 v84; // x0
  int32_t findSum[2]; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42EC286 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___, kind, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9, v10, v11);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&MaterialCollectionServantListViewItem_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&MaterialCollectionServantListViewManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_12025/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v27, v28, v29);
    byte_42EC286 = 1;
  }
  *(_QWORD *)findSum = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  v32 = Instance;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          Instance,
                                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v32,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
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
    v57 = MaterialCollectionServantListViewManager_TypeInfo;
    if ( (BYTE3(MaterialCollectionServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo);
      v57 = MaterialCollectionServantListViewManager_TypeInfo;
    }
    servantEquipSortInfo = v57->static_fields->servantEquipSortInfo;
    this->fields.sort = servantEquipSortInfo;
    p_sort = &this->fields.sort;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.sort,
      (System_Int32_array **)servantEquipSortInfo,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
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
    v65 = MaterialCollectionServantListViewManager_TypeInfo;
    if ( (BYTE3(MaterialCollectionServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo);
      v65 = MaterialCollectionServantListViewManager_TypeInfo;
    }
    p_servantSortInfo = &v65->static_fields->servantSortInfo;
    v67 = *p_servantSortInfo;
    this->fields.sort = *p_servantSortInfo;
    p_sort = &this->fields.sort;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.sort,
      (System_Int32_array **)v67,
      v59,
      v60,
      v61,
      v62,
      v63,
      v64);
    if ( !this->fields.sort )
      goto LABEL_67;
    this->fields.sort->fields.listViewKind = 0;
LABEL_25:
    Instance = (DataManager_o *)*p_sort;
    if ( !*p_sort )
      goto LABEL_67;
    ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
    v40 = 0LL;
    goto LABEL_27;
  }
  if ( !Instance )
    goto LABEL_67;
  v40 = UserCommandCodeCollectionMaster__getCollectionList(
          (UserCommandCodeCollectionMaster_o *)Instance,
          &findSum[1],
          findSum,
          0LL);
  v41 = MaterialCollectionServantListViewManager_TypeInfo;
  if ( (BYTE3(MaterialCollectionServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo);
    v41 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  commandCodeSortInfo = v41->static_fields->commandCodeSortInfo;
  this->fields.sort = commandCodeSortInfo;
  p_sort = &this->fields.sort;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)commandCodeSortInfo,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  if ( !this->fields.sort )
    goto LABEL_67;
  this->fields.sort->fields.listViewKind = 3;
  Instance = (DataManager_o *)*p_sort;
  if ( !*p_sort )
    goto LABEL_67;
  ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
  CollectionList = 0LL;
LABEL_27:
  v68 = *p_sort;
  if ( !*p_sort )
    goto LABEL_67;
  sortKind = v68->fields.sortKind;
  if ( sortKind > 0x1B || ((1 << sortKind) & 0x8000204) == 0 )
  {
    v68->fields.sortKind = 27;
    v68 = *p_sort;
    if ( !*p_sort )
      goto LABEL_67;
  }
  iconScaleKind = v68->fields.iconScaleKind;
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
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
    if ( !v40 )
      goto LABEL_67;
    v73 = *(_QWORD *)&v40->max_length;
    if ( (int)v73 >= 1 )
    {
      v74 = 0LL;
      while ( v74 < (unsigned int)v73 )
      {
        v75 = v40->m_Items[v74];
        v76 = (MaterialCollectionServantListViewItem_o *)sub_B5D694(MaterialCollectionServantListViewItem_TypeInfo);
        MaterialCollectionServantListViewItem___ctor_25348204(v76, v74, v75, 3, 0LL);
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          goto LABEL_67;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v76,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v73) = v40->max_length;
        if ( (__int64)++v74 >= (int)v73 )
          goto LABEL_54;
      }
      goto LABEL_68;
    }
  }
  else
  {
    if ( !CollectionList )
      goto LABEL_67;
    v77 = *(_QWORD *)&CollectionList->max_length;
    if ( (int)v77 >= 1 )
    {
      v78 = 0LL;
      while ( v78 < (unsigned int)v77 )
      {
        v79 = CollectionList->m_Items[v78];
        v80 = (MaterialCollectionServantListViewItem_o *)sub_B5D694(MaterialCollectionServantListViewItem_TypeInfo);
        MaterialCollectionServantListViewItem___ctor(v80, v78, v79, kind, 0LL);
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          goto LABEL_67;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v80,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v77) = CollectionList->max_length;
        if ( (__int64)++v78 >= (int)v77 )
          goto LABEL_54;
      }
LABEL_68:
      v84 = sub_B5D6C8(Instance);
      sub_B5D668(v84, 0LL);
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
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12025/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
LABEL_67:
    sub_B5D69C(Instance, v31);
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  MaterialCollectionServantListViewManager__SetFilterButtonImage(this, v83);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
}


void __fastcall MaterialCollectionServantListViewManager__CreateValentineList(
        MaterialCollectionServantListViewManager_o *this,
        int32_t kind,
        System_Collections_Generic_List_MaterialEventLogListViewItem_Info__o *infos,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  DataManager_o *Instance; // x0
  const MethodInfo *v43; // x1
  DataManager_o *v44; // x23
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  struct ListViewSort_o *sort; // x8
  unsigned int sortKind; // w9
  int size; // w23
  __int64 v49; // x28
  unsigned int v50; // w25
  __int64 v51; // x8
  UserServantCollectionEntity_o *Entity; // x24
  MaterialEventLogListViewItem_Info_o *v53; // x27
  MaterialEventLogServantListViewItem_o *v54; // x26
  const MethodInfo *v55; // x6
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  MaterialEventLogListViewItem_Info_o *v57; // x25
  MaterialEventLogServantListViewItem_o *v58; // x22
  const MethodInfo *v59; // x6
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v61; // x1
  const MethodInfo *v62; // x1
  bool v63; // w1
  const MethodInfo *v64; // x1
  const MethodInfo *v65; // x1
  struct System_Collections_Generic_List_ListViewItem__o *v66; // x23
  signed __int64 v67; // x20
  unsigned __int64 v68; // x21
  ListViewItem_o *v69; // x8
  __int64 v70; // x11
  __int64 v71; // x11
  MaterialEventLogServantListViewItem_o *v72; // x0

  if ( (byte_42EC287 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___, kind, (_DWORD)infos, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v6, v7, v8);
    sub_B5D5C4(&MaterialEventLogListViewItem_Info_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v24, v25, v26);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&MaterialEventLogServantListViewItem_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&NetworkManager_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_12026/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/, v39, v40, v41);
    byte_42EC287 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  v44 = Instance;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          Instance,
                                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v44,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
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
    v49 = 4LL;
    do
    {
      v50 = v49 - 4;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
      if ( infos->fields._size <= v50 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v51 = *((_QWORD *)&infos->fields._items->obj.klass + v49);
      if ( !v51 || !MasterData_WarQuestSelectionMaster )
        goto LABEL_44;
      Entity = UserServantCollectionMaster__GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 (int64_t)Instance,
                 *(_DWORD *)(v51 + 60),
                 0LL);
      if ( infos->fields._size <= v50 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v53 = (MaterialEventLogListViewItem_Info_o *)*((_QWORD *)&infos->fields._items->obj.klass + v49);
      v54 = (MaterialEventLogServantListViewItem_o *)sub_B5D694(MaterialEventLogServantListViewItem_TypeInfo);
      MaterialEventLogServantListViewItem___ctor(v54, v50, Entity, kind, v53, 0, v55);
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        goto LABEL_44;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v54,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      ++v49;
    }
    while ( (int)v49 - 4 < size );
    if ( Entity )
    {
      itemList = this->fields.itemList;
      v57 = (MaterialEventLogListViewItem_Info_o *)sub_B5D694(MaterialEventLogListViewItem_Info_TypeInfo);
      MaterialEventLogListViewItem_Info___ctor(v57, 0LL);
      v58 = (MaterialEventLogServantListViewItem_o *)sub_B5D694(MaterialEventLogServantListViewItem_TypeInfo);
      MaterialEventLogServantListViewItem___ctor(v58, size, Entity, kind, v57, 1, v59);
      if ( !itemList )
        goto LABEL_44;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v58,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    }
  }
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12026/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_44;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0LL);
  MaterialCollectionServantListViewManager__SortDummyData(this, v61);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  v63 = MaterialCollectionServantListViewManager__GetFilterCount(this, v62) < 1;
  ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v63, 0LL);
  MaterialCollectionServantListViewManager__SetValentineFilterButtonImage(this, v64);
  MaterialCollectionServantListViewManager__ClearNewIcon(this, v65);
  v66 = this->fields.itemList;
  if ( !v66 )
LABEL_44:
    sub_B5D69C(Instance, v43);
  v67 = v66->fields._size;
  if ( (int)v67 >= 1 )
  {
    v68 = 0LL;
    while ( 1 )
    {
      if ( v68 >= (unsigned int)v66->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v69 = v66->fields._items->m_Items[v68];
      if ( !v69 )
        goto LABEL_44;
      v70 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v69->klass->_2.bitflags2 + 1) < (unsigned int)v70
        || (MaterialEventLogServantListViewItem_c *)v69->klass->_2.typeHierarchy[v70 - 1] != MaterialEventLogServantListViewItem_TypeInfo )
      {
        goto LABEL_44;
      }
      v71 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v69->klass->_2.bitflags2 + 1) >= (unsigned int)v71 )
      {
        if ( (MaterialEventLogServantListViewItem_c *)v69->klass->_2.typeHierarchy[v71 - 1] == MaterialEventLogServantListViewItem_TypeInfo )
          v72 = (MaterialEventLogServantListViewItem_o *)v66->fields._items->m_Items[v68];
        else
          v72 = 0LL;
      }
      else
      {
        v72 = 0LL;
      }
      MaterialEventLogServantListViewItem__SetDummy(v72, v43);
      if ( (__int64)++v68 >= v67 )
        break;
      v66 = this->fields.itemList;
      if ( !v66 )
        goto LABEL_44;
    }
  }
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
}


void __fastcall MaterialCollectionServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  MaterialCollectionServantListViewManager_c *v4; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_42EC281 & 1) == 0 )
  {
    sub_B5D5C4(&MaterialCollectionServantListViewManager_TypeInfo, v1, v2, v3);
    byte_42EC281 = 1;
  }
  v4 = MaterialCollectionServantListViewManager_TypeInfo;
  if ( (BYTE3(MaterialCollectionServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo);
    v4 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  servantSortInfo = v4->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL)
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->commandCodeSortInfo) == 0LL)
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->EventLogservantSortInfo) == 0LL) )
  {
    sub_B5D69C(servantSortInfo, v1);
  }
  ListViewSort__DeleteContinueData(servantSortInfo, 0LL);
}


void __fastcall MaterialCollectionServantListViewManager__DestroyList(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MaterialCollectionServantListViewManager_c *v5; // x0
  ListViewSort_o *servantSortInfo; // x8
  __int64 v7; // x0
  __int64 v8; // x1
  ListViewSort_o *servantEquipSortInfo; // x8
  ListViewSort_o *commandCodeSortInfo; // x8
  ListViewSort_o *EventLogservantSortInfo; // x8

  if ( (byte_42EC28C & 1) == 0 )
  {
    sub_B5D5C4(&MaterialCollectionServantListViewManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC28C = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  v5 = MaterialCollectionServantListViewManager_TypeInfo;
  if ( (BYTE3(MaterialCollectionServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo);
    v5 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  servantSortInfo = v5->static_fields->servantSortInfo;
  if ( servantSortInfo )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      servantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->servantSortInfo;
      if ( !servantSortInfo )
        goto LABEL_36;
    }
    ListViewSort__Save(servantSortInfo, 0LL);
    v5 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  servantEquipSortInfo = v5->static_fields->servantEquipSortInfo;
  if ( servantEquipSortInfo )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      servantEquipSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo;
      if ( !servantEquipSortInfo )
        goto LABEL_36;
    }
    ListViewSort__Save(servantEquipSortInfo, 0LL);
    v5 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  commandCodeSortInfo = v5->static_fields->commandCodeSortInfo;
  if ( commandCodeSortInfo )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      commandCodeSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->commandCodeSortInfo;
      if ( !commandCodeSortInfo )
        goto LABEL_36;
    }
    ListViewSort__Save(commandCodeSortInfo, 0LL);
    v5 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v5->static_fields->EventLogservantSortInfo;
  if ( EventLogservantSortInfo )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) == 0
      || v5->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v5),
          (EventLogservantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->EventLogservantSortInfo) != 0LL) )
    {
      ListViewSort__Save(EventLogservantSortInfo, 0LL);
      return;
    }
LABEL_36:
    sub_B5D69C(v7, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewManager__EndEventLogSortKind(
        MaterialCollectionServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  MaterialEventLogServantSortSelectMenu_o *eventLogServantSortSelectMenu; // x0
  MaterialCollectionServantListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1
  UnityEngine_Object_o *MaterialEventLogListViewManager; // x21
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  int32_t FilterCount; // w20

  if ( (byte_42EC299 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42EC299 = 1;
  }
  eventLogServantSortSelectMenu = this->fields.eventLogServantSortSelectMenu;
  if ( !eventLogServantSortSelectMenu )
    goto LABEL_16;
  MaterialEventLogServantSortSelectMenu__Close_32028560(eventLogServantSortSelectMenu, 0LL, method);
  MaterialEventLogListViewManager = (UnityEngine_Object_o *)MaterialCollectionServantListViewManager__GetMaterialEventLogListViewManager(
                                                              v10,
                                                              v11);
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
      v13);
  }
  if ( !isDecide )
    goto LABEL_15;
  MaterialCollectionServantListViewManager__AllInactiveUIWidget(this, (const MethodInfo *)isDecide);
  MaterialCollectionServantListViewManager__AllInitInactiveDummy(this, v14);
  if ( !this->fields.itemList )
LABEL_16:
    sub_B5D69C(eventLogServantSortSelectMenu, isDecide);
  FilterCount = MaterialCollectionServantListViewManager__GetFilterCount(this, (const MethodInfo *)isDecide);
  if ( FilterCount <= 11 )
    MaterialCollectionServantListViewManager__InactiveDummy(this, v15);
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
    sub_B5D69C(0LL, isDecide);
  MaterialCollectionServantSortSelectMenu__Close_31974460(sortSelectMenu, 0LL, method);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  ListViewSort_o *sort; // x21
  MaterialEventLogServantSortSelectMenu_CallbackFunc_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4

  if ( (byte_42EC297 & 1) == 0 )
  {
    sub_B5D5C4(
      &MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo,
      (_DWORD)eventLogServantSortSelectMenu,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_MaterialCollectionServantListViewManager_EndEventLogSortKind__, v6, v7, v8);
    byte_42EC297 = 1;
  }
  if ( this->fields.isInput )
  {
    sort = this->fields.sort;
    v10 = (MaterialEventLogServantSortSelectMenu_CallbackFunc_o *)sub_B5D694(MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo);
    MaterialEventLogServantSortSelectMenu_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_MaterialCollectionServantListViewManager_EndEventLogSortKind__,
      0LL);
    if ( !eventLogServantSortSelectMenu )
      sub_B5D69C(v11, v12);
    MaterialEventLogServantSortSelectMenu__Open(eventLogServantSortSelectMenu, 0, sort, v10, v13);
  }
}


void __fastcall MaterialCollectionServantListViewManager__EventLogSortListSave(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MaterialCollectionServantListViewManager_c *v4; // x0
  ListViewSort_o *EventLogservantSortInfo; // x8
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_42EC29F & 1) == 0 )
  {
    sub_B5D5C4(&MaterialCollectionServantListViewManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC29F = 1;
  }
  v4 = MaterialCollectionServantListViewManager_TypeInfo;
  if ( (BYTE3(MaterialCollectionServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo);
    v4 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v4->static_fields->EventLogservantSortInfo;
  if ( EventLogservantSortInfo )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      EventLogservantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->EventLogservantSortInfo;
      if ( !EventLogservantSortInfo )
        sub_B5D69C(v6, v7);
    }
    ListViewSort__Save(EventLogservantSortInfo, 0LL);
  }
}


int32_t __fastcall MaterialCollectionServantListViewManager__GetFilterCount(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MaterialCollectionServantListViewManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  signed __int64 size; // x21
  int32_t v13; // w20
  unsigned __int64 v14; // x22
  __int64 v15; // x10

  v4 = this;
  if ( (byte_42EC298 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6, v7);
    this = (MaterialCollectionServantListViewManager_o *)sub_B5D5C4(
                                                           &MaterialEventLogServantListViewItem_TypeInfo,
                                                           v8,
                                                           v9,
                                                           v10);
    byte_42EC298 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_15;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v13 = 0;
    v14 = 0LL;
    do
    {
      if ( v14 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      this = (MaterialCollectionServantListViewManager_o *)itemList->fields._items->m_Items[v14];
      if ( !this )
        break;
      v15 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v15
        || (MaterialEventLogServantListViewItem_c *)this->klass->_2.typeHierarchy[v15 - 1] != MaterialEventLogServantListViewItem_TypeInfo )
      {
        break;
      }
      if ( !LOBYTE(this->fields.itemList) )
      {
        this = (MaterialCollectionServantListViewManager_o *)((__int64 (__fastcall *)(MaterialCollectionServantListViewManager_o *, struct ListViewSort_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
                                                               this,
                                                               v4->fields.sort,
                                                               this->klass->vtable._6_GetDragRoot.methodPtr);
        v13 += (unsigned __int8)this & 1;
      }
      if ( (__int64)++v14 >= size )
        return v13;
      itemList = v4->fields.itemList;
    }
    while ( itemList );
LABEL_15:
    sub_B5D69C(this, method);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
MaterialCollectionServantListViewItem_o *__fastcall MaterialCollectionServantListViewManager__GetItem(
        MaterialCollectionServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  MaterialCollectionServantListViewManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  MaterialCollectionServantListViewItem_o *result; // x0
  int32_t size; // w8
  ListViewItem_o *v15; // x8
  __int64 v16; // x11

  v5 = this;
  if ( (byte_42EC28D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7, v8);
    this = (MaterialCollectionServantListViewManager_o *)sub_B5D5C4(
                                                           &MaterialCollectionServantListViewItem_TypeInfo,
                                                           v9,
                                                           v10,
                                                           v11);
    byte_42EC28D = 1;
  }
  itemList = v5->fields.itemList;
  if ( !itemList )
    sub_B5D69C(this, *(_QWORD *)&index);
  result = 0LL;
  if ( (index & 0x80000000) == 0 )
  {
    size = itemList->fields._size;
    if ( size > index )
    {
      if ( size <= (unsigned int)index )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v15 = itemList->fields._items->m_Items[index];
      if ( v15
        && (v16 = *(&MaterialCollectionServantListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v15->klass->_2.bitflags2 + 1) >= (unsigned int)v16) )
      {
        if ( (MaterialCollectionServantListViewItem_c *)v15->klass->_2.typeHierarchy[v16 - 1] == MaterialCollectionServantListViewItem_TypeInfo )
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
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  MaterialEventLogListViewManager_o *result; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *dropObjectList; // x19
  bool v13; // w8
  __int64 v14; // x10
  bool v15; // w8
  void *monitor; // x19
  bool v17; // w8

  if ( (byte_42EC285 & 1) == 0 )
  {
    sub_B5D5C4(&MyRoomRootComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7, v8, v9);
    byte_42EC285 = 1;
  }
  result = (MaterialEventLogListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !result )
    goto LABEL_25;
  dropObjectList = (UnityEngine_Object_o *)result->fields.dropObjectList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = UnityEngine_Object__op_Equality(dropObjectList, 0LL, 0LL);
  result = 0LL;
  if ( !v13 )
  {
    if ( dropObjectList )
    {
      v14 = *(&MyRoomRootComponent_TypeInfo->_2.bitflags2 + 1);
      if ( *(&dropObjectList->klass->_2.bitflags2 + 1) >= (unsigned int)v14 )
      {
        if ( (MyRoomRootComponent_c *)dropObjectList->klass->_2.typeHierarchy[v14 - 1] != MyRoomRootComponent_TypeInfo )
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
    v15 = UnityEngine_Object__op_Equality(dropObjectList, 0LL, 0LL);
    result = 0LL;
    if ( !v15 )
    {
      if ( !dropObjectList )
        goto LABEL_25;
      monitor = dropObjectList[2].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v17 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)monitor, 0LL, 0LL);
      result = 0LL;
      if ( !v17 )
      {
        if ( monitor )
          return (MaterialEventLogListViewManager_o *)*((_QWORD *)monitor + 49);
LABEL_25:
        sub_B5D69C(result, v11);
      }
    }
  }
  return result;
}


void __fastcall MaterialCollectionServantListViewManager__InactiveDummy(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MaterialCollectionServantListViewManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  signed __int64 size; // x20
  unsigned __int64 v25; // x21
  ListViewItem_o *v26; // x8
  __int64 v27; // x11
  __int64 v28; // x11
  MaterialEventLogServantListViewItem_o *v29; // x0
  int dropObjectList; // w8
  MaterialCollectionServantListViewManager_o *v31; // x19
  __int64 v32; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  v4 = this;
  if ( (byte_42EC2A1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v14, v15, v16);
    sub_B5D5C4(&MaterialEventLogServantListViewItem_TypeInfo, v17, v18, v19);
    this = (MaterialCollectionServantListViewManager_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42EC2A1 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_34;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v25 = 0LL;
    do
    {
      if ( v25 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v26 = itemList->fields._items->m_Items[v25];
      if ( !v26 )
        break;
      v27 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v27
        || (MaterialEventLogServantListViewItem_c *)v26->klass->_2.typeHierarchy[v27 - 1] != MaterialEventLogServantListViewItem_TypeInfo )
      {
        break;
      }
      v28 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v26->klass->_2.bitflags2 + 1) >= (unsigned int)v28 )
      {
        if ( (MaterialEventLogServantListViewItem_c *)v26->klass->_2.typeHierarchy[v28 - 1] == MaterialEventLogServantListViewItem_TypeInfo )
          v29 = (MaterialEventLogServantListViewItem_o *)itemList->fields._items->m_Items[v25];
        else
          v29 = 0LL;
      }
      else
      {
        v29 = 0LL;
      }
      MaterialEventLogServantListViewItem__InactiveDummy(v29, method);
      if ( (__int64)++v25 >= size )
        goto LABEL_19;
      itemList = v4->fields.itemList;
    }
    while ( itemList );
LABEL_34:
    sub_B5D69C(this, method);
  }
LABEL_19:
  this = (MaterialCollectionServantListViewManager_o *)MaterialCollectionServantListViewManager__get_ObjectList(
                                                         v4,
                                                         method);
  if ( !this )
    goto LABEL_34;
  dropObjectList = (int)this->fields.dropObjectList;
  v31 = this;
  if ( dropObjectList >= 1 )
  {
    v32 = 0LL;
    while ( 1 )
    {
      if ( dropObjectList <= (unsigned int)v32 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      this = *(MaterialCollectionServantListViewManager_o **)(*(_QWORD *)&v31->fields.m_CachedPtr + 8 * v32 + 32);
      if ( !this )
        goto LABEL_34;
      this = (MaterialCollectionServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
      if ( !this )
        goto LABEL_34;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
      dropObjectList = (int)v31->fields.dropObjectList;
      if ( (int)++v32 >= dropObjectList )
        return;
    }
  }
}


void __fastcall MaterialCollectionServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  MaterialCollectionServantListViewManager_c *v4; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_42EC282 & 1) == 0 )
  {
    sub_B5D5C4(&MaterialCollectionServantListViewManager_TypeInfo, v1, v2, v3);
    byte_42EC282 = 1;
  }
  v4 = MaterialCollectionServantListViewManager_TypeInfo;
  if ( (BYTE3(MaterialCollectionServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialCollectionServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialCollectionServantListViewManager_TypeInfo);
    v4 = MaterialCollectionServantListViewManager_TypeInfo;
  }
  servantSortInfo = v4->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL)
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->commandCodeSortInfo) == 0LL)
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantSortInfo = MaterialCollectionServantListViewManager_TypeInfo->static_fields->EventLogservantSortInfo) == 0LL) )
  {
    sub_B5D69C(servantSortInfo, v1);
  }
  ListViewSort__InitLoad(servantSortInfo, 0LL);
}


void __fastcall MaterialCollectionServantListViewManager__ModifyItem(
        MaterialCollectionServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewManager__RequestListObject_31955340(this, 4, method);
}


void __fastcall MaterialCollectionServantListViewManager__ModifyList(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MaterialCollectionServantListViewManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  signed __int64 size; // x22
  unsigned __int64 v16; // x23
  ListViewItem_o *v17; // x20
  __int64 v18; // x10
  UnityEngine_Object_o *viewObject; // x21

  v4 = this;
  if ( (byte_42EC28E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6, v7);
    sub_B5D5C4(&MaterialCollectionServantListViewItem_TypeInfo, v8, v9, v10);
    this = (MaterialCollectionServantListViewManager_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    byte_42EC28E = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_19:
    sub_B5D69C(this, method);
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v17 = itemList->fields._items->m_Items[v16];
      if ( v17 )
      {
        v18 = *(&MaterialCollectionServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v17->klass->_2.bitflags2 + 1) >= (unsigned int)v18
          && (MaterialCollectionServantListViewItem_c *)v17->klass->_2.typeHierarchy[v18 - 1] == MaterialCollectionServantListViewItem_TypeInfo )
        {
          viewObject = (UnityEngine_Object_o *)v17->fields.viewObject;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          this = (MaterialCollectionServantListViewManager_o *)UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            this = (MaterialCollectionServantListViewManager_o *)v17->fields.viewObject;
            if ( !this )
              goto LABEL_19;
            ListViewObject__SetItemSeed((ListViewObject_o *)this, v17, v4->fields.seed, 0LL);
          }
        }
      }
      if ( (__int64)++v16 >= size )
        break;
      itemList = v4->fields.itemList;
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
  int v2; // w2
  __int64 v3; // x3
  ListViewSort_o *ScaleKindSpriteName; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v15; // w8
  struct ListViewSort_o *sort; // x8
  UISprite_o *scaleChangeTabSprite; // x20
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2

  if ( (byte_42EC29E & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC29E = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v15 = 2;
    goto LABEL_12;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v15 = 3;
    goto LABEL_12;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v15 = 1;
LABEL_12:
    this->fields.scaleType = v15;
    this->fields.seed = smallSizeSeed;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)smallSizeSeed,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
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
    sub_B5D69C(ScaleKindSpriteName, v6);
  }
  ListViewSort__Save(ScaleKindSpriteName, 0LL);
  MaterialCollectionServantListViewManager__ModifyList(this, v18);
  MaterialCollectionServantListViewManager__SetMode_31956444(this, 2, v19);
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
  if ( (byte_42EC294 & 1) == 0 )
  {
    this = (MaterialCollectionServantListViewManager_o *)sub_B5D5C4(
                                                           &MaterialEventLogServantListViewItem_TypeInfo,
                                                           (_DWORD)obj,
                                                           (_DWORD)method,
                                                           v3);
    byte_42EC294 = 1;
  }
  if ( !obj )
    sub_B5D69C(this, obj);
  linkItem = obj->fields.linkItem;
  callbackFunc = v9->fields.callbackFunc;
  if ( !linkItem
    || (v12 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v12)
    || (MaterialEventLogServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] != MaterialEventLogServantListViewItem_TypeInfo )
  {
    v9->fields.callbackFunc = 0LL;
    sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  ListViewSort_o *v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_42EC29A & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC29A = 1;
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
          (v5 = this->fields.sort) == 0LL) )
    {
      sub_B5D69C(v5, v6);
    }
    ListViewSort__Save(v5, 0LL);
  }
}


void __fastcall MaterialCollectionServantListViewManager__OnClickSortKind(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x0
  __int64 v12; // x1
  struct ListViewSort_o *sort; // x20
  int32_t listViewKind; // w8
  struct MaterialCollectionServantSortSelectMenu_o *v15; // x21
  MaterialCollectionServantSortSelectMenu_CallbackFunc_o *v16; // x22
  const MethodInfo *v17; // x4
  MaterialCollectionServantSortSelectMenu_o *v18; // x0
  int32_t v19; // w1
  struct MaterialCollectionServantSortSelectMenu_o *sortSelectMenu; // x21

  if ( (byte_42EC296 & 1) == 0 )
  {
    sub_B5D5C4(&MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MaterialCollectionServantListViewManager_EndSelectSortKind__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42EC296 = 1;
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
      v16 = (MaterialCollectionServantSortSelectMenu_CallbackFunc_o *)sub_B5D694(MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo);
      MaterialCollectionServantSortSelectMenu_CallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        Method_MaterialCollectionServantListViewManager_EndSelectSortKind__,
        0LL);
      if ( !sortSelectMenu )
        goto LABEL_20;
      v19 = 3;
LABEL_18:
      v18 = sortSelectMenu;
      goto LABEL_19;
    case 1:
      sortSelectMenu = this->fields.sortSelectMenu;
      v16 = (MaterialCollectionServantSortSelectMenu_CallbackFunc_o *)sub_B5D694(MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo);
      MaterialCollectionServantSortSelectMenu_CallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        Method_MaterialCollectionServantListViewManager_EndSelectSortKind__,
        0LL);
      if ( !sortSelectMenu )
        goto LABEL_20;
      v19 = 1;
      goto LABEL_18;
    case 0:
      v15 = this->fields.sortSelectMenu;
      v16 = (MaterialCollectionServantSortSelectMenu_CallbackFunc_o *)sub_B5D694(MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo);
      MaterialCollectionServantSortSelectMenu_CallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        Method_MaterialCollectionServantListViewManager_EndSelectSortKind__,
        0LL);
      if ( v15 )
      {
        v18 = v15;
        v19 = 0;
LABEL_19:
        MaterialCollectionServantSortSelectMenu__Open(v18, v19, sort, v16, v17);
        return;
      }
LABEL_20:
      sub_B5D69C(v11, v12);
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
  if ( (byte_42EC295 & 1) == 0 )
  {
    this = (MaterialCollectionServantListViewManager_o *)sub_B5D5C4(
                                                           &MaterialEventLogServantListViewItem_TypeInfo,
                                                           (_DWORD)obj,
                                                           (_DWORD)method,
                                                           v3);
    byte_42EC295 = 1;
  }
  if ( !obj )
    sub_B5D69C(this, obj);
  linkItem = obj->fields.linkItem;
  callbackFunc = v9->fields.callbackFunc;
  if ( !linkItem
    || (v12 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v12)
    || (MaterialEventLogServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] != MaterialEventLogServantListViewItem_TypeInfo )
  {
    v9->fields.callbackFunc = 0LL;
    sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  int32_t callbackCount; // w8
  bool v6; // vf
  int32_t v7; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UIScrollView_o *v16; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_42EC293 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC293 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v6 = __OFSUB__(callbackCount, 1);
  v7 = callbackCount - 1;
  if ( v7 < 0 == v6 )
  {
    this->fields.callbackCount = v7;
    if ( !v7 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
        goto LABEL_15;
      v16 = this->fields.scrollView;
      if ( v16 )
      {
        ((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v16->klass->vtable._8_UpdateScrollbars.method)(
          v16,
          1LL,
          v16->klass->vtable._9_SetDragAmount.methodPtr);
        v16 = this->fields.scrollView;
        if ( v16 )
        {
          if ( (((__int64 (__fastcall *)(UIScrollView_o *, Il2CppMethodPointer))v16->klass->vtable._6_get_shouldMoveVertically.method)(
                  v16,
                  v16->klass->vtable._7_get_shouldMove.methodPtr) & 1) == 0 )
            goto LABEL_15;
          v16 = this->fields.scrollView;
          if ( v16 )
          {
            UIScrollView__UpdatePosition(v16, 0LL);
LABEL_15:
            callbackFunc2 = this->fields.callbackFunc2;
            this->fields.callbackFunc2 = 0LL;
            sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
            if ( callbackFunc2 )
              System_Action__Invoke(callbackFunc2, 0LL);
            return;
          }
        }
      }
      sub_B5D69C(v16, v9);
    }
  }
}


void __fastcall MaterialCollectionServantListViewManager__RefrashListDisp(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *ObjectList; // x0
  __int64 v9; // x1
  int32_t size; // w8
  System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *v11; // x20
  int v12; // w8
  __int64 v13; // x21

  if ( (byte_42EC28B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__, v5, v6, v7);
    byte_42EC28B = 1;
  }
  ObjectList = MaterialCollectionServantListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_12;
  size = ObjectList->fields._size;
  v11 = ObjectList;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    v12 = ObjectList->fields._size;
    if ( v12 >= 1 )
    {
      v13 = 0LL;
      while ( 1 )
      {
        if ( v12 <= (unsigned int)v13 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        ObjectList = (System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *)v11->fields._items->m_Items[v13];
        if ( !ObjectList )
          break;
        ((void (__fastcall *)(System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
          ObjectList,
          this->fields.isInput,
          ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
        v12 = v11->fields._size;
        if ( (int)++v13 >= v12 )
          return;
      }
LABEL_12:
      sub_B5D69C(ObjectList, v9);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewManager__RequestInto(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  const MethodInfo *v17; // x1
  System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *ObjectList; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *v20; // x20
  signed __int64 size; // x8
  unsigned __int64 v22; // x24
  int v23; // w23
  MaterialCollectionServantListViewObject_o *v24; // x21
  System_Action_o *v25; // x22
  const MethodInfo *v26; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EC292 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__, v8, v9, v10);
    sub_B5D5C4(&Method_MaterialCollectionServantListViewManager_OnMoveEnd__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v14, v15, v16);
    byte_42EC292 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ObjectList = MaterialCollectionServantListViewManager__get_ObjectList(this, v17);
  if ( !ObjectList )
LABEL_15:
    sub_B5D69C(ObjectList, v19);
  v20 = ObjectList;
  this->fields.callbackCount = ObjectList->fields._size;
  LODWORD(size) = ObjectList->fields._size;
  if ( (int)size < 1 )
    goto LABEL_14;
  v22 = 0LL;
  v23 = 0;
  do
  {
    if ( v22 >= (unsigned int)size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v24 = v20->fields._items->m_Items[v22];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v24, 0LL) )
    {
      v25 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v25, (Il2CppObject *)this, Method_MaterialCollectionServantListViewManager_OnMoveEnd__, 0LL);
      if ( !v24 )
        goto LABEL_15;
      ++v23;
      zero = UnityEngine_Vector3__get_zero(0LL);
      MaterialCollectionServantListViewObject__Init(v24, 5, v25, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v26);
    }
    else
    {
      --this->fields.callbackCount;
    }
    size = v20->fields._size;
    ++v22;
  }
  while ( (__int64)v22 < size );
  if ( !v23 )
  {
LABEL_14:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
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
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v30; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v33; // x22
  __int64 v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x3
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EC290 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v4);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__Dispose__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__MoveNext__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__get_Current__,
      v14,
      v15,
      v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__GetEnumerator__,
      v17,
      v18,
      v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__,
      v20,
      v21,
      v22);
    sub_B5D5C4(&Method_MaterialCollectionServantListViewManager_OnMoveEnd__, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v26, v27, v28);
    byte_42EC290 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MaterialCollectionServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v30);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v37,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v37,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__MoveNext__) )
    {
      current = v37.fields.current;
      v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v33, (Il2CppObject *)this, Method_MaterialCollectionServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v34, v35);
      zero = UnityEngine_Vector3__get_zero(0LL);
      MaterialCollectionServantListViewObject__Init(
        (MaterialCollectionServantListViewObject_o *)current,
        mode,
        v33,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v36);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v37,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewManager__RequestListObject_31955340(
        MaterialCollectionServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v28; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x3
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EC291 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__Dispose__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__MoveNext__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__GetEnumerator__,
      v15,
      v16,
      v17);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__,
      v18,
      v19,
      v20);
    sub_B5D5C4(&Method_MaterialCollectionServantListViewManager_OnMoveEnd__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v24, v25, v26);
    byte_42EC291 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MaterialCollectionServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v28);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v35,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v35,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__MoveNext__) )
    {
      current = v35.fields.current;
      v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_MaterialCollectionServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v32, v33);
      zero = UnityEngine_Vector3__get_zero(0LL);
      MaterialCollectionServantListViewObject__Init(
        (MaterialCollectionServantListViewObject_o *)current,
        mode,
        v31,
        0.0,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v34);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v35,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__Dispose__);
  }
}


void __fastcall MaterialCollectionServantListViewManager__SetFilterButtonImage(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  ListViewSort_o *sort; // x0
  System_String_o **v15; // x9
  System_String_o **v16; // x20
  UnityEngine_Color_o v17; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_42EC289 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17167/*"btn_bg_05"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17168/*"btn_bg_06"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_367/*"#FE4545"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_353/*"#000000"*/, v11, v12, v13);
    byte_42EC289 = 1;
  }
  *(_QWORD *)&v17.fields.r = 0LL;
  *(_QWORD *)&v17.fields.b = 0LL;
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_12;
  sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL);
  if ( !this->fields.filterSprite )
    goto LABEL_12;
  v15 = (System_String_o **)&StringLiteral_17167/*"btn_bg_05"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v15 = (System_String_o **)&StringLiteral_17168/*"btn_bg_06"*/;
  v16 = ((unsigned __int8)sort & 1) != 0
      ? (System_String_o **)&StringLiteral_353/*"#000000"*/
      : (System_String_o **)&StringLiteral_367/*"#FE4545"*/;
  UISprite__set_spriteName(this->fields.filterSprite, *v15, 0LL);
  *(_QWORD *)&v17.fields.r = 0LL;
  *(_QWORD *)&v17.fields.b = 0LL;
  UnityEngine_ColorUtility__TryParseHtmlString(*v16, &v17, 0LL);
  sort = (ListViewSort_o *)this->fields.sortKindLabel;
  if ( !sort )
LABEL_12:
    sub_B5D69C(sort, method);
  UILabel__set_effectColor((UILabel_o *)sort, v17, 0LL);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  MaterialCollectionServantListViewManager__SetMode_31956444(this, mode, v10);
}


void __fastcall MaterialCollectionServantListViewManager__SetMode_31956444(
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
  MaterialCollectionServantListViewManager__RequestListObject_31955340(this, v6, v5);
}


void __fastcall MaterialCollectionServantListViewManager__SetMode_31956556(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  MaterialCollectionServantListViewManager__SetMode_31956444(this, mode, v10);
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
  if ( (byte_42EC28F & 1) == 0 )
  {
    this = (MaterialCollectionServantListViewManager_o *)sub_B5D5C4(
                                                           &MaterialCollectionServantListViewObject_TypeInfo,
                                                           (_DWORD)obj,
                                                           (_DWORD)item,
                                                           method);
    byte_42EC28F = 1;
  }
  if ( !obj
    || (v6 = *(&MaterialCollectionServantListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (MaterialCollectionServantListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != MaterialCollectionServantListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
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
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v24; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v26; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v28; // x8
  int32_t sortKind; // w9
  System_String_o **v30; // x8
  struct ListViewSort_o *v31; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v33; // x9
  System_String_o **v34; // x10
  System_String_o **v35; // x8
  struct ListViewSort_o *v36; // x8
  System_String_o **v37; // x8

  if ( (byte_42EC29D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17230/*"btn_sort_up"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17314/*"btn_txt_up"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17270/*"btn_txt_new"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17260/*"btn_txt_down"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17277/*"btn_txt_old"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_17227/*"btn_sort_down"*/, v20, v21, v22);
    byte_42EC29D = 1;
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
    v26 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v26 )
      goto LABEL_36;
    UILabel__set_text(v26, (System_String_o *)sort, 0LL);
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
    v28 = this->fields.sort;
    if ( v28 )
    {
      sortKind = v28->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v30 = (System_String_o **)(v28->fields.isAscendingOrder ? &StringLiteral_17277/*"btn_txt_old"*/ : &StringLiteral_17270/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v30, 0LL);
          v31 = this->fields.sort;
          if ( v31 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v31->fields.isAscendingOrder;
              v33 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
              v34 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
LABEL_32:
              if ( isAscendingOrder )
                v37 = v33;
              else
                v37 = v34;
              UISprite__set_spriteName((UISprite_o *)sort, *v37, 0LL);
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
          v35 = (System_String_o **)(v28->fields.isAscendingOrder ? &StringLiteral_17314/*"btn_txt_up"*/ : &StringLiteral_17260/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v35, 0LL);
          v36 = this->fields.sort;
          if ( v36 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v36->fields.isAscendingOrder;
              v33 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
              v34 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_36:
    sub_B5D69C(sort, v24);
  }
}


void __fastcall MaterialCollectionServantListViewManager__SetValentineFilterButtonImage(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  ListViewSort_o *sort; // x0
  System_String_o **v15; // x9
  System_String_o **v16; // x20
  UnityEngine_Color_o v17; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_42EC28A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_367/*"#FE4545"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17202/*"btn_filter_on"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_353/*"#000000"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17201/*"btn_filter"*/, v11, v12, v13);
    byte_42EC28A = 1;
  }
  *(_QWORD *)&v17.fields.r = 0LL;
  *(_QWORD *)&v17.fields.b = 0LL;
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_12;
  sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL);
  if ( !this->fields.filterSprite )
    goto LABEL_12;
  v15 = (System_String_o **)&StringLiteral_17201/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v15 = (System_String_o **)&StringLiteral_17202/*"btn_filter_on"*/;
  v16 = ((unsigned __int8)sort & 1) != 0
      ? (System_String_o **)&StringLiteral_353/*"#000000"*/
      : (System_String_o **)&StringLiteral_367/*"#FE4545"*/;
  UISprite__set_spriteName(this->fields.filterSprite, *v15, 0LL);
  *(_QWORD *)&v17.fields.r = 0LL;
  *(_QWORD *)&v17.fields.b = 0LL;
  UnityEngine_ColorUtility__TryParseHtmlString(*v16, &v17, 0LL);
  sort = (ListViewSort_o *)this->fields.sortKindLabel;
  if ( !sort )
LABEL_12:
    sub_B5D69C(sort, method);
  UILabel__set_effectColor((UILabel_o *)sort, v17, 0LL);
}


void __fastcall MaterialCollectionServantListViewManager__SortAscendingOrder(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  struct ListViewSort_o *v10; // x0
  const MethodInfo *v11; // x1
  struct ListViewSort_o *sort; // x8
  UnityEngine_Object_o *MaterialEventLogListViewManager; // x20
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1
  bool v16; // w1

  if ( (byte_42EC29B & 1) == 0 )
  {
    sub_B5D5C4(&Method_MaterialCollectionServantListViewManager_SortAscendingOrder__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EC29B = 1;
  }
  if ( this->fields.isInput )
  {
    v8 = Method_MaterialCollectionServantListViewManager_SortAscendingOrder__;
    if ( (*((_BYTE *)Method_MaterialCollectionServantListViewManager_SortAscendingOrder__ + 75) & 2) != 0 )
      v8 = (_QWORD *)sub_B5D5CC(Method_MaterialCollectionServantListViewManager_SortAscendingOrder__);
    v9 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v8, v8[3]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    sort = this->fields.sort;
    if ( sort )
    {
      sort->fields.isAscendingOrder ^= 1u;
      MaterialEventLogListViewManager = (UnityEngine_Object_o *)MaterialCollectionServantListViewManager__GetMaterialEventLogListViewManager(
                                                                  (MaterialCollectionServantListViewManager_o *)v10,
                                                                  v11);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v10 = (struct ListViewSort_o *)UnityEngine_Object__op_Inequality(MaterialEventLogListViewManager, 0LL, 0LL);
      if ( ((unsigned __int8)v10 & 1) != 0 )
      {
        if ( !MaterialEventLogListViewManager )
          goto LABEL_16;
        MaterialEventLogListViewManager__SetSort(
          (MaterialEventLogListViewManager_o *)MaterialEventLogListViewManager,
          this->fields.sort,
          v14);
      }
      MaterialCollectionServantListViewManager__SortDummyData(this, v11);
      ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
      v16 = MaterialCollectionServantListViewManager__GetFilterCount(this, v15) < 1;
      ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v16, 0LL);
      ListViewManager__ScreenUpdate((ListViewManager_o *)this, 0LL);
      v10 = this->fields.sort;
      if ( v10 )
      {
        ListViewSort__Save(v10, 0LL);
        ((void (__fastcall *)(MaterialCollectionServantListViewManager_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
          this,
          this->klass->vtable._6_GetDragRoot.methodPtr);
        return;
      }
    }
LABEL_16:
    sub_B5D69C(v10, v11);
  }
}


void __fastcall MaterialCollectionServantListViewManager__SortDummyData(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  DataManager_o *Instance; // x0
  const MethodInfo *v33; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 size; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v37; // x20
  __int64 i; // x23
  struct System_Collections_Generic_List_ListViewItem__o *v39; // x21
  unsigned __int64 v40; // x27
  ListViewItem_o *v41; // x21
  __int64 v42; // x10
  struct System_Collections_Generic_List_ListViewItem__o *v43; // x28
  struct ListViewSort_o *sort; // x8
  int32_t v45; // w1
  struct System_Collections_Generic_List_ListViewItem__o *v46; // x28
  __int64 v47; // x8

  if ( (byte_42EC29C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MaterialEventLogServantListViewItem___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_ListViewItem__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_MaterialEventLogServantListViewItem__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&MaterialEventLogServantListViewItem_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30, v31);
    byte_42EC29C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_29;
  size = itemList->fields._size;
  v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MaterialEventLogServantListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v36,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MaterialEventLogServantListViewItem___ctor__);
  v37 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v37,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  if ( (int)size >= 1 )
  {
    for ( i = 4LL; ; ++i )
    {
      v39 = this->fields.itemList;
      if ( !v39 )
        break;
      v40 = i - 4;
      if ( i - 4 >= (unsigned __int64)(unsigned int)v39->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v41 = (ListViewItem_o *)*((_QWORD *)&v39->fields._items->obj.klass + i);
      if ( !v41 )
        break;
      v42 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v41->klass->_2.bitflags2 + 1) < (unsigned int)v42
        || (MaterialEventLogServantListViewItem_c *)v41->klass->_2.typeHierarchy[v42 - 1] != MaterialEventLogServantListViewItem_TypeInfo )
      {
        break;
      }
      if ( LOBYTE(v41[1].fields.sortValue2) )
      {
        v43 = this->fields.itemList;
        if ( !v43 )
          break;
        if ( v40 >= (unsigned int)v43->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( !v37 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v37,
          *((EventMissionProgressRequest_Argument_ProgressData_o **)&v43->fields._items->obj.klass + i),
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        sort = this->fields.sort;
        if ( !sort )
          break;
        if ( sort->fields.isAscendingOrder )
        {
          v45 = i + 995;
          v41->fields.index = i + 995;
        }
        else
        {
          v41->fields.index = -1;
          v45 = -1;
        }
        ListViewItem__SetSortIndex(v41, v45, 0LL);
        v46 = this->fields.itemList;
        if ( !v46 )
          break;
        if ( v40 >= (unsigned int)v46->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        Instance = (DataManager_o *)*((_QWORD *)&v46->fields._items->obj.klass + i);
        if ( !Instance )
          break;
        ListViewItem__Set((ListViewItem_o *)Instance, v41, 0LL);
      }
      MaterialEventLogServantListViewItem__DummyVisible((MaterialEventLogServantListViewItem_o *)v41, v33);
      v47 = i - 3;
      if ( v47 >= size )
        return;
    }
LABEL_29:
    sub_B5D69C(Instance, v33);
  }
}


void __fastcall MaterialCollectionServantListViewManager__add_callbackFunc(
        MaterialCollectionServantListViewManager_o *this,
        MaterialCollectionServantListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct MaterialCollectionServantListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MaterialCollectionServantListViewManager_o *v11; // x0
  MaterialCollectionServantListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EC27D & 1) == 0 )
  {
    sub_B5D5C4(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC27D = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (MaterialCollectionServantListViewManager_CallbackFunc_c *)v8->klass != MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  MaterialCollectionServantListViewManager__remove_callbackFunc(v11, v12, v13);
}


void __fastcall MaterialCollectionServantListViewManager__add_callbackFunc2(
        MaterialCollectionServantListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MaterialCollectionServantListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EC27F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC27F = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  MaterialCollectionServantListViewManager__remove_callbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *__fastcall MaterialCollectionServantListViewManager__get_ClippingObjectList(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v33; // x0
  __int64 v34; // x1
  MaterialCollectionServantListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v36; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x21
  ListViewItem_o *Item; // x0
  __int64 v39; // x1
  _BOOL8 v40; // x0
  __int64 v41; // x1
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42EC284 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_MaterialCollectionServantListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42EC284 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MaterialCollectionServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v44 = v43;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v44.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (MaterialCollectionServantListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                               (UnityEngine_GameObject_o *)current,
                                                                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___);
      v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B5D69C(0LL, v36);
      Item = (ListViewItem_o *)MaterialCollectionServantListViewObject__GetItem(Component_srcLineSprite, v36);
      if ( !Item )
        sub_B5D69C(0LL, v39);
      if ( Item->fields.isTermination )
      {
        v40 = ListViewManager__ClippingItem_23920288((ListViewManager_o *)this, Item, 0LL);
        if ( v40 )
        {
          if ( !v29 )
            sub_B5D69C(v40, v41);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v29 )
          sub_B5D69C(Item, v39);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v29,
          v37,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *)v29;
}


System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *__fastcall MaterialCollectionServantListViewManager__get_ObjectList(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v33; // x0
  __int64 v34; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42EC283 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_MaterialCollectionServantListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42EC283 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MaterialCollectionServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v38.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___);
      if ( !v29 )
        sub_B5D69C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *)v29;
}


void __fastcall MaterialCollectionServantListViewManager__remove_callbackFunc(
        MaterialCollectionServantListViewManager_o *this,
        MaterialCollectionServantListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct MaterialCollectionServantListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MaterialCollectionServantListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EC27E & 1) == 0 )
  {
    sub_B5D5C4(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC27E = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (MaterialCollectionServantListViewManager_CallbackFunc_c *)v8->klass != MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  MaterialCollectionServantListViewManager__add_callbackFunc2(v11, v12, v13);
}


void __fastcall MaterialCollectionServantListViewManager__remove_callbackFunc2(
        MaterialCollectionServantListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  const MethodInfo *v11; // x0

  if ( (byte_42EC280 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC280 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  MaterialCollectionServantListViewManager__DeleteContinueData(v11);
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
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall MaterialCollectionServantListViewManager_CallbackFunc__BeginInvoke(
        MaterialCollectionServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v13[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v14; // [xsp+18h] [xbp-28h] BYREF
  int32_t v15; // [xsp+1Ch] [xbp-24h] BYREF

  v14 = index;
  v15 = kind;
  if ( (byte_42E5F3E & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, kind, index, callback);
    sub_B5D5C4(&MaterialCollectionServantListViewManager_ResultKind_TypeInfo, v9, v10, v11);
    byte_42E5F3E = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(MaterialCollectionServantListViewManager_ResultKind_TypeInfo, &v15);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_B5D568(this, v13, callback, object);
}


void __fastcall MaterialCollectionServantListViewManager_CallbackFunc__EndInvoke(
        MaterialCollectionServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  MaterialCollectionServantListViewManager_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+Ch] [xbp-54h] BYREF
  MaterialCollectionServantListViewManager_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

  v35 = this;
  v34 = kind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v35;
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
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&index);
      if ( (sub_B5D5F4(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, (unsigned int)index, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, (unsigned int)index, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B5D5EC(v23);
      v26 = sub_B5D9F0(v23);
      if ( (v25 & 1) != 0 )
      {
        v28 = v34;
        if ( (v26 & 1) != 0 )
        {
          v29 = *v22;
          v30 = *(_QWORD *)(v23 + 24);
          v31 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_35;
            }
            v19 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v19 = sub_AF54C0(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B5D674(v18, v23);
        (*v20)(v22, v28, (unsigned int)index, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          v14 = v34;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v13 + 16LL * (int)(*v16 + v10) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AF54C0(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v17)(
            v22,
            v14,
            (unsigned int)index,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            v34,
            (unsigned int)index,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v24)(v22, v34, (unsigned int)index, v23);
    goto LABEL_38;
  }
}