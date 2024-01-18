void __fastcall MaterialCollectionServantListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ListViewSort_o *v7; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  ListViewSort_o *v15; // x19
  struct MaterialCollectionServantListViewManager_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  ListViewSort_o *v23; // x19
  struct MaterialCollectionServantListViewManager_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  ListViewSort_o *v31; // x19
  struct MaterialCollectionServantListViewManager_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_4189D2C & 1) == 0 )
  {
    sub_B2C35C(&ListViewSort_TypeInfo, v1);
    sub_B2C35C(&MaterialCollectionServantListViewManager_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_8980/*"MaterialCollectionServant2"*/, v3);
    sub_B2C35C(&StringLiteral_8981/*"MaterialCollectionServant4"*/, v4);
    sub_B2C35C(&StringLiteral_8979/*"MaterialCollectionServant1"*/, v5);
    sub_B2C35C(&StringLiteral_8982/*"MaterialCollectionServant5"*/, v6);
    byte_4189D2C = 1;
  }
  v7 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v7, (System_String_o *)StringLiteral_8979/*"MaterialCollectionServant1"*/, 27, 1, 0LL);
  static_fields = (BattleServantConfConponent_o *)MaterialCollectionServantListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v7;
  sub_B2C2F8(static_fields, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
  v15 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v15, (System_String_o *)StringLiteral_8980/*"MaterialCollectionServant2"*/, 27, 1, 0LL);
  v16 = MaterialCollectionServantListViewManager_TypeInfo->static_fields;
  v16->servantEquipSortInfo = v15;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v16->servantEquipSortInfo,
    (System_Int32_array **)v15,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v23, (System_String_o *)StringLiteral_8981/*"MaterialCollectionServant4"*/, 27, 1, 0LL);
  v24 = MaterialCollectionServantListViewManager_TypeInfo->static_fields;
  v24->commandCodeSortInfo = v23;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v24->commandCodeSortInfo,
    (System_Int32_array **)v23,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v31, (System_String_o *)StringLiteral_8982/*"MaterialCollectionServant5"*/, 3, 1, 0LL);
  v32 = MaterialCollectionServantListViewManager_TypeInfo->static_fields;
  v32->EventLogservantSortInfo = v31;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v32->EventLogservantSortInfo,
    (System_Int32_array **)v31,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
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
  UnityEngine_Object_o *Component_srcLineSprite; // x22

  v2 = this;
  if ( (byte_4189D29 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, method);
    this = (MaterialCollectionServantListViewManager_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4189D29 = 1;
  }
  seed = v2->fields.seed;
  if ( !seed
    || (parent = seed->fields.parent) == 0LL
    || (this = (MaterialCollectionServantListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                               seed->fields.parent,
                                                               0LL)) == 0LL )
  {
LABEL_22:
    sub_B2C434(this, method);
  }
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0LL);
  if ( childCount >= 1 )
  {
    v7 = childCount;
    for ( i = 0; i < v7; ++i )
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
                                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  signed __int64 size; // x20
  unsigned __int64 v7; // x21
  ListViewItem_o *v8; // x8
  __int64 v9; // x11
  __int64 v10; // x11
  MaterialEventLogServantListViewItem_o *v11; // x0

  v2 = this;
  if ( (byte_4189D2B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    this = (MaterialCollectionServantListViewManager_o *)sub_B2C35C(&MaterialEventLogServantListViewItem_TypeInfo, v4);
    byte_4189D2B = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
    goto LABEL_18;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v7 = 0LL;
    do
    {
      if ( v7 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
      itemList = v2->fields.itemList;
    }
    while ( itemList );
LABEL_18:
    sub_B2C434(this, method);
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

  if ( (byte_4189D11 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__, v3);
    byte_4189D11 = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
    sub_B2C434(ObjectList, v5);
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
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UserCommandCodeCollectionEntity_array *v23; // x22
  MaterialCollectionServantListViewManager_c *v24; // x8
  struct ListViewSort_o *commandCodeSortInfo; // x1
  struct ListViewSort_o **p_sort; // x23
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
  struct ListViewSort_o *v51; // x8
  unsigned int sortKind; // w9
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeTabSprite; // x23
  __int64 v56; // x8
  unsigned __int64 v57; // x20
  UserCommandCodeCollectionEntity_o *v58; // x24
  MaterialCollectionServantListViewItem_o *v59; // x23
  const MethodInfo *v60; // x4
  __int64 v61; // x8
  unsigned __int64 v62; // x22
  UserServantCollectionEntity_o *v63; // x24
  MaterialCollectionServantListViewItem_o *v64; // x23
  const MethodInfo *v65; // x4
  UnityEngine_Object_o *completeSprite; // x20
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v68; // x1
  __int64 v69; // x0
  int32_t findSum[2]; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4189D0F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___, *(_QWORD *)&kind);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v6);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&MaterialCollectionServantListViewItem_TypeInfo, v8);
    sub_B2C35C(&MaterialCollectionServantListViewManager_TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&StringLiteral_11892/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v12);
    byte_4189D0F = 1;
  }
  *(_QWORD *)findSum = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  v15 = Instance;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          Instance,
                                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v15,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
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
    sub_B2C2F8(
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
    sub_B2C2F8(
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
    Instance = (DataManager_o *)*p_sort;
    if ( !*p_sort )
      goto LABEL_67;
    ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
    v23 = 0LL;
    goto LABEL_27;
  }
  if ( !Instance )
    goto LABEL_67;
  v23 = UserCommandCodeCollectionMaster__getCollectionList(
          (UserCommandCodeCollectionMaster_o *)Instance,
          &findSum[1],
          findSum,
          0LL);
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
  sub_B2C2F8(
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
  Instance = (DataManager_o *)*p_sort;
  if ( !*p_sort )
    goto LABEL_67;
  ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
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
    if ( !v23 )
      goto LABEL_67;
    v56 = *(_QWORD *)&v23->max_length;
    if ( (int)v56 >= 1 )
    {
      v57 = 0LL;
      while ( v57 < (unsigned int)v56 )
      {
        v58 = v23->m_Items[v57];
        v59 = (MaterialCollectionServantListViewItem_o *)sub_B2C42C(MaterialCollectionServantListViewItem_TypeInfo);
        MaterialCollectionServantListViewItem___ctor_28951200(v59, v57, v58, 3, v60);
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          goto LABEL_67;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v59,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v56) = v23->max_length;
        if ( (__int64)++v57 >= (int)v56 )
          goto LABEL_54;
      }
      goto LABEL_68;
    }
  }
  else
  {
    if ( !CollectionList )
      goto LABEL_67;
    v61 = *(_QWORD *)&CollectionList->max_length;
    if ( (int)v61 >= 1 )
    {
      v62 = 0LL;
      while ( v62 < (unsigned int)v61 )
      {
        v63 = CollectionList->m_Items[v62];
        v64 = (MaterialCollectionServantListViewItem_o *)sub_B2C42C(MaterialCollectionServantListViewItem_TypeInfo);
        MaterialCollectionServantListViewItem___ctor(v64, v62, v63, kind, v65);
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          goto LABEL_67;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v64,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v61) = CollectionList->max_length;
        if ( (__int64)++v62 >= (int)v61 )
          goto LABEL_54;
      }
LABEL_68:
      v69 = sub_B2C460(Instance);
      sub_B2C400(v69, 0LL);
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
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11892/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
LABEL_67:
    sub_B2C434(Instance, v14);
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  MaterialCollectionServantListViewManager__SetFilterButtonImage(this, v68);
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
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  struct ListViewSort_o *sort; // x8
  unsigned int sortKind; // w9
  int size; // w23
  __int64 v25; // x28
  unsigned int v26; // w25
  __int64 v27; // x8
  UserServantCollectionEntity_o *Entity; // x24
  MaterialEventLogListViewItem_Info_o *v29; // x27
  MaterialEventLogServantListViewItem_o *v30; // x26
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  MaterialEventLogListViewItem_Info_o *v32; // x25
  MaterialEventLogServantListViewItem_o *v33; // x22
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x1
  bool v37; // w1
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x1
  struct System_Collections_Generic_List_ListViewItem__o *v40; // x23
  signed __int64 v41; // x20
  unsigned __int64 v42; // x21
  ListViewItem_o *v43; // x8
  __int64 v44; // x11
  __int64 v45; // x11
  MaterialEventLogServantListViewItem_o *v46; // x0

  if ( (byte_4189D10 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___, *(_QWORD *)&kind);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v6);
    sub_B2C35C(&MaterialEventLogListViewItem_Info_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_B2C35C(&LocalizationManager_TypeInfo, v13);
    sub_B2C35C(&MaterialEventLogServantListViewItem_TypeInfo, v14);
    sub_B2C35C(&NetworkManager_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&StringLiteral_11893/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/, v17);
    byte_4189D10 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  v20 = Instance;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          Instance,
                                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v20,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
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
    v25 = 4LL;
    do
    {
      v26 = v25 - 4;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
      if ( infos->fields._size <= v26 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v27 = *((_QWORD *)&infos->fields._items->obj.klass + v25);
      if ( !v27 || !MasterData_WarQuestSelectionMaster )
        goto LABEL_44;
      Entity = UserServantCollectionMaster__GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 (int64_t)Instance,
                 *(_DWORD *)(v27 + 60),
                 0LL);
      if ( infos->fields._size <= v26 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v29 = (MaterialEventLogListViewItem_Info_o *)*((_QWORD *)&infos->fields._items->obj.klass + v25);
      v30 = (MaterialEventLogServantListViewItem_o *)sub_B2C42C(MaterialEventLogServantListViewItem_TypeInfo);
      MaterialEventLogServantListViewItem___ctor(v30, v26, Entity, kind, v29, 0, 0LL);
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        goto LABEL_44;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      ++v25;
    }
    while ( (int)v25 - 4 < size );
    if ( Entity )
    {
      itemList = this->fields.itemList;
      v32 = (MaterialEventLogListViewItem_Info_o *)sub_B2C42C(MaterialEventLogListViewItem_Info_TypeInfo);
      MaterialEventLogListViewItem_Info___ctor(v32, 0LL);
      v33 = (MaterialEventLogServantListViewItem_o *)sub_B2C42C(MaterialEventLogServantListViewItem_TypeInfo);
      MaterialEventLogServantListViewItem___ctor(v33, size, Entity, kind, v32, 1, 0LL);
      if ( !itemList )
        goto LABEL_44;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v33,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    }
  }
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11893/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_44;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0LL);
  MaterialCollectionServantListViewManager__SortDummyData(this, v35);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  v37 = MaterialCollectionServantListViewManager__GetFilterCount(this, v36) < 1;
  ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v37, 0LL);
  MaterialCollectionServantListViewManager__SetValentineFilterButtonImage(this, v38);
  MaterialCollectionServantListViewManager__ClearNewIcon(this, v39);
  v40 = this->fields.itemList;
  if ( !v40 )
LABEL_44:
    sub_B2C434(Instance, v19);
  v41 = v40->fields._size;
  if ( (int)v41 >= 1 )
  {
    v42 = 0LL;
    while ( 1 )
    {
      if ( v42 >= (unsigned int)v40->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v43 = v40->fields._items->m_Items[v42];
      if ( !v43 )
        goto LABEL_44;
      v44 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v43->klass->_2.bitflags2 + 1) < (unsigned int)v44
        || (MaterialEventLogServantListViewItem_c *)v43->klass->_2.typeHierarchy[v44 - 1] != MaterialEventLogServantListViewItem_TypeInfo )
      {
        goto LABEL_44;
      }
      v45 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v43->klass->_2.bitflags2 + 1) >= (unsigned int)v45 )
      {
        if ( (MaterialEventLogServantListViewItem_c *)v43->klass->_2.typeHierarchy[v45 - 1] == MaterialEventLogServantListViewItem_TypeInfo )
          v46 = (MaterialEventLogServantListViewItem_o *)v40->fields._items->m_Items[v42];
        else
          v46 = 0LL;
      }
      else
      {
        v46 = 0LL;
      }
      MaterialEventLogServantListViewItem__SetDummy(v46, 0LL);
      if ( (__int64)++v42 >= v41 )
        break;
      v40 = this->fields.itemList;
      if ( !v40 )
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

  if ( (byte_4189D0A & 1) == 0 )
  {
    sub_B2C35C(&MaterialCollectionServantListViewManager_TypeInfo, v1);
    byte_4189D0A = 1;
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
    sub_B2C434(servantSortInfo, v1);
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

  if ( (byte_4189D15 & 1) == 0 )
  {
    sub_B2C35C(&MaterialCollectionServantListViewManager_TypeInfo, method);
    byte_4189D15 = 1;
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
    sub_B2C434(v5, v6);
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

  if ( (byte_4189D22 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, isDecide);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4189D22 = 1;
  }
  eventLogServantSortSelectMenu = this->fields.eventLogServantSortSelectMenu;
  if ( !eventLogServantSortSelectMenu )
    goto LABEL_16;
  MaterialEventLogServantSortSelectMenu__Close(eventLogServantSortSelectMenu, 0LL);
  MaterialEventLogListViewManager = (UnityEngine_Object_o *)MaterialCollectionServantListViewManager__GetMaterialEventLogListViewManager(
                                                              v7,
                                                              v8);
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
      0LL);
  }
  if ( !isDecide )
    goto LABEL_15;
  MaterialCollectionServantListViewManager__AllInactiveUIWidget(this, (const MethodInfo *)isDecide);
  MaterialCollectionServantListViewManager__AllInitInactiveDummy(this, v10);
  if ( !this->fields.itemList )
LABEL_16:
    sub_B2C434(eventLogServantSortSelectMenu, isDecide);
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
    sub_B2C434(0LL, isDecide);
  MaterialCollectionServantSortSelectMenu__Close_28979980(sortSelectMenu, 0LL, method);
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

  if ( (byte_4189D20 & 1) == 0 )
  {
    sub_B2C35C(&MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo, eventLogServantSortSelectMenu);
    sub_B2C35C(&Method_MaterialCollectionServantListViewManager_EndEventLogSortKind__, v5);
    byte_4189D20 = 1;
  }
  if ( this->fields.isInput )
  {
    sort = this->fields.sort;
    v7 = (MaterialEventLogServantSortSelectMenu_CallbackFunc_o *)sub_B2C42C(MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo);
    MaterialEventLogServantSortSelectMenu_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_MaterialCollectionServantListViewManager_EndEventLogSortKind__,
      0LL);
    if ( !eventLogServantSortSelectMenu )
      sub_B2C434(v8, v9);
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

  if ( (byte_4189D28 & 1) == 0 )
  {
    sub_B2C35C(&MaterialCollectionServantListViewManager_TypeInfo, method);
    byte_4189D28 = 1;
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
        sub_B2C434(v4, v5);
    }
    ListViewSort__Save(EventLogservantSortInfo, 0LL);
  }
}


int32_t __fastcall MaterialCollectionServantListViewManager__GetFilterCount(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  signed __int64 size; // x21
  int32_t v7; // w20
  unsigned __int64 v8; // x22
  __int64 v9; // x10

  v2 = this;
  if ( (byte_4189D21 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    this = (MaterialCollectionServantListViewManager_o *)sub_B2C35C(&MaterialEventLogServantListViewItem_TypeInfo, v4);
    byte_4189D21 = 1;
  }
  itemList = v2->fields.itemList;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      this = (MaterialCollectionServantListViewManager_o *)itemList->fields._items->m_Items[v8];
      if ( !this )
        break;
      v9 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v9
        || (MaterialEventLogServantListViewItem_c *)this->klass->_2.typeHierarchy[v9 - 1] != MaterialEventLogServantListViewItem_TypeInfo )
      {
        break;
      }
      if ( !LOBYTE(this->fields.itemList) )
      {
        this = (MaterialCollectionServantListViewManager_o *)MaterialEventLogServantListViewItem__IsItemMatchFilter(
                                                               (MaterialEventLogServantListViewItem_o *)this,
                                                               v2->fields.sort,
                                                               0LL);
        v7 += (unsigned __int8)this & 1;
      }
      if ( (__int64)++v8 >= size )
        return v7;
      itemList = v2->fields.itemList;
    }
    while ( itemList );
LABEL_15:
    sub_B2C434(this, method);
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  MaterialCollectionServantListViewItem_o *result; // x0
  int32_t size; // w8
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  v4 = this;
  if ( (byte_4189D16 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&index);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    this = (MaterialCollectionServantListViewManager_o *)sub_B2C35C(&MaterialCollectionServantListViewItem_TypeInfo, v6);
    byte_4189D16 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    sub_B2C434(this, *(_QWORD *)&index);
  result = 0LL;
  if ( (index & 0x80000000) == 0 )
  {
    size = itemList->fields._size;
    if ( size > index )
    {
      if ( size <= (unsigned int)index )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  MaterialEventLogListViewManager_o *result; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *dropObjectList; // x19
  bool v7; // w8
  __int64 v8; // x10
  bool v9; // w8
  void *monitor; // x19
  bool v11; // w8

  if ( (byte_4189D0E & 1) == 0 )
  {
    sub_B2C35C(&MyRoomRootComponent_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v2);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_4189D0E = 1;
  }
  result = (MaterialEventLogListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !result )
    goto LABEL_25;
  dropObjectList = (UnityEngine_Object_o *)result->fields.dropObjectList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Equality(dropObjectList, 0LL, 0LL);
  result = 0LL;
  if ( !v7 )
  {
    if ( dropObjectList )
    {
      v8 = *(&MyRoomRootComponent_TypeInfo->_2.bitflags2 + 1);
      if ( *(&dropObjectList->klass->_2.bitflags2 + 1) >= (unsigned int)v8 )
      {
        if ( (MyRoomRootComponent_c *)dropObjectList->klass->_2.typeHierarchy[v8 - 1] != MyRoomRootComponent_TypeInfo )
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
    v9 = UnityEngine_Object__op_Equality(dropObjectList, 0LL, 0LL);
    result = 0LL;
    if ( !v9 )
    {
      if ( !dropObjectList )
        goto LABEL_25;
      monitor = dropObjectList[2].monitor;
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
        sub_B2C434(result, v5);
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
  int dropObjectList; // w8
  MaterialCollectionServantListViewManager_o *v17; // x19
  __int64 v18; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  v2 = this;
  if ( (byte_4189D2A & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_B2C35C(&MaterialEventLogServantListViewItem_TypeInfo, v7);
    this = (MaterialCollectionServantListViewManager_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_4189D2A = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
    goto LABEL_34;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v11 = 0LL;
    do
    {
      if ( v11 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
      itemList = v2->fields.itemList;
    }
    while ( itemList );
LABEL_34:
    sub_B2C434(this, method);
  }
LABEL_19:
  this = (MaterialCollectionServantListViewManager_o *)MaterialCollectionServantListViewManager__get_ObjectList(
                                                         v2,
                                                         method);
  if ( !this )
    goto LABEL_34;
  dropObjectList = (int)this->fields.dropObjectList;
  v17 = this;
  if ( dropObjectList >= 1 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      if ( dropObjectList <= (unsigned int)v18 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      this = *(MaterialCollectionServantListViewManager_o **)(*(_QWORD *)&v17->fields.m_CachedPtr + 8 * v18 + 32);
      if ( !this )
        goto LABEL_34;
      this = (MaterialCollectionServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
      if ( !this )
        goto LABEL_34;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
      dropObjectList = (int)v17->fields.dropObjectList;
      if ( (int)++v18 >= dropObjectList )
        return;
    }
  }
}


void __fastcall MaterialCollectionServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialCollectionServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4189D0B & 1) == 0 )
  {
    sub_B2C35C(&MaterialCollectionServantListViewManager_TypeInfo, v1);
    byte_4189D0B = 1;
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
    sub_B2C434(servantSortInfo, v1);
  }
  ListViewSort__InitLoad(servantSortInfo, 0LL);
}


void __fastcall MaterialCollectionServantListViewManager__ModifyItem(
        MaterialCollectionServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewManager__RequestListObject_28962640(this, 4, method);
}


void __fastcall MaterialCollectionServantListViewManager__ModifyList(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  signed __int64 size; // x22
  unsigned __int64 v8; // x23
  ListViewItem_o *v9; // x20
  __int64 v10; // x10
  UnityEngine_Object_o *viewObject; // x21

  v2 = this;
  if ( (byte_4189D17 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    sub_B2C35C(&MaterialCollectionServantListViewItem_TypeInfo, v4);
    this = (MaterialCollectionServantListViewManager_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4189D17 = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
LABEL_19:
    sub_B2C434(this, method);
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
          this = (MaterialCollectionServantListViewManager_o *)UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            this = (MaterialCollectionServantListViewManager_o *)v9->fields.viewObject;
            if ( !this )
              goto LABEL_19;
            ListViewObject__SetItemSeed((ListViewObject_o *)this, v9, v2->fields.seed, 0LL);
          }
        }
      }
      if ( (__int64)++v8 >= size )
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

  if ( (byte_4189D27 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4189D27 = 1;
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
    sub_B2C2F8(
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
    sub_B2C434(ScaleKindSpriteName, v4);
  }
  ListViewSort__Save(ScaleKindSpriteName, 0LL);
  MaterialCollectionServantListViewManager__ModifyList(this, v16);
  MaterialCollectionServantListViewManager__SetMode_28947592(this, 2, v17);
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
  if ( (byte_4189D1D & 1) == 0 )
  {
    this = (MaterialCollectionServantListViewManager_o *)sub_B2C35C(&MaterialEventLogServantListViewItem_TypeInfo, obj);
    byte_4189D1D = 1;
  }
  if ( !obj )
    sub_B2C434(this, obj);
  linkItem = obj->fields.linkItem;
  callbackFunc = v9->fields.callbackFunc;
  if ( !linkItem
    || (v12 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v12)
    || (MaterialEventLogServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] != MaterialEventLogServantListViewItem_TypeInfo )
  {
    v9->fields.callbackFunc = 0LL;
    sub_B2C2F8(
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

  if ( (byte_4189D23 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4189D23 = 1;
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
      sub_B2C434(v3, v4);
    }
    ListViewSort__Save(v3, 0LL);
  }
}


void __fastcall MaterialCollectionServantListViewManager__OnClickSortKind(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x20
  int32_t listViewKind; // w8
  struct MaterialCollectionServantSortSelectMenu_o *v9; // x21
  MaterialCollectionServantSortSelectMenu_CallbackFunc_o *v10; // x22
  const MethodInfo *v11; // x4
  MaterialCollectionServantSortSelectMenu_o *v12; // x0
  int32_t v13; // w1
  struct MaterialCollectionServantSortSelectMenu_o *sortSelectMenu; // x21

  if ( (byte_4189D1F & 1) == 0 )
  {
    sub_B2C35C(&MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_MaterialCollectionServantListViewManager_EndSelectSortKind__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4189D1F = 1;
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
      v10 = (MaterialCollectionServantSortSelectMenu_CallbackFunc_o *)sub_B2C42C(MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo);
      MaterialCollectionServantSortSelectMenu_CallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_MaterialCollectionServantListViewManager_EndSelectSortKind__,
        0LL);
      if ( !sortSelectMenu )
        goto LABEL_20;
      v13 = 3;
LABEL_18:
      v12 = sortSelectMenu;
      goto LABEL_19;
    case 1:
      sortSelectMenu = this->fields.sortSelectMenu;
      v10 = (MaterialCollectionServantSortSelectMenu_CallbackFunc_o *)sub_B2C42C(MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo);
      MaterialCollectionServantSortSelectMenu_CallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_MaterialCollectionServantListViewManager_EndSelectSortKind__,
        0LL);
      if ( !sortSelectMenu )
        goto LABEL_20;
      v13 = 1;
      goto LABEL_18;
    case 0:
      v9 = this->fields.sortSelectMenu;
      v10 = (MaterialCollectionServantSortSelectMenu_CallbackFunc_o *)sub_B2C42C(MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo);
      MaterialCollectionServantSortSelectMenu_CallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_MaterialCollectionServantListViewManager_EndSelectSortKind__,
        0LL);
      if ( v9 )
      {
        v12 = v9;
        v13 = 0;
LABEL_19:
        MaterialCollectionServantSortSelectMenu__Open(v12, v13, sort, v10, v11);
        return;
      }
LABEL_20:
      sub_B2C434(v5, v6);
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
  if ( (byte_4189D1E & 1) == 0 )
  {
    this = (MaterialCollectionServantListViewManager_o *)sub_B2C35C(&MaterialEventLogServantListViewItem_TypeInfo, obj);
    byte_4189D1E = 1;
  }
  if ( !obj )
    sub_B2C434(this, obj);
  linkItem = obj->fields.linkItem;
  callbackFunc = v9->fields.callbackFunc;
  if ( !linkItem
    || (v12 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v12)
    || (MaterialEventLogServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] != MaterialEventLogServantListViewItem_TypeInfo )
  {
    v9->fields.callbackFunc = 0LL;
    sub_B2C2F8(
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

  if ( (byte_4189D1C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189D1C = 1;
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
            sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
            if ( callbackFunc2 )
              System_Action__Invoke(callbackFunc2, 0LL);
            return;
          }
        }
      }
      sub_B2C434(v14, v7);
    }
  }
}


void __fastcall MaterialCollectionServantListViewManager__RefrashListDisp(
        MaterialCollectionServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *ObjectList; // x0
  __int64 v5; // x1
  int32_t size; // w8
  System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *v7; // x20
  int v8; // w8
  __int64 v9; // x21

  if ( (byte_4189D14 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__, v3);
    byte_4189D14 = 1;
  }
  ObjectList = MaterialCollectionServantListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_12;
  size = ObjectList->fields._size;
  v7 = ObjectList;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    v8 = ObjectList->fields._size;
    if ( v8 >= 1 )
    {
      v9 = 0LL;
      while ( 1 )
      {
        if ( v8 <= (unsigned int)v9 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        ObjectList = (System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *)v7->fields._items->m_Items[v9];
        if ( !ObjectList )
          break;
        ((void (__fastcall *)(System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
          ObjectList,
          this->fields.isInput,
          ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
        v8 = v7->fields._size;
        if ( (int)++v9 >= v8 )
          return;
      }
LABEL_12:
      sub_B2C434(ObjectList, v5);
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
  __int64 v9; // x1
  System_Collections_Generic_List_MaterialCollectionServantListViewObject__o *v10; // x20
  signed __int64 size; // x8
  unsigned __int64 v12; // x24
  int v13; // w23
  MaterialCollectionServantListViewObject_o *v14; // x21
  System_Action_o *v15; // x22
  const MethodInfo *v16; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4189D1B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Item__, v4);
    sub_B2C35C(&Method_MaterialCollectionServantListViewManager_OnMoveEnd__, v5);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v6);
    byte_4189D1B = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ObjectList = MaterialCollectionServantListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_15:
    sub_B2C434(ObjectList, v9);
  v10 = ObjectList;
  this->fields.callbackCount = ObjectList->fields._size;
  LODWORD(size) = ObjectList->fields._size;
  if ( (int)size < 1 )
    goto LABEL_14;
  v12 = 0LL;
  v13 = 0;
  do
  {
    if ( v12 >= (unsigned int)size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v14 = v10->fields._items->m_Items[v12];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v14, 0LL) )
    {
      v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_MaterialCollectionServantListViewManager_OnMoveEnd__, 0LL);
      if ( !v14 )
        goto LABEL_15;
      ++v13;
      zero = UnityEngine_Vector3__get_zero(0LL);
      MaterialCollectionServantListViewObject__Init(v14, 5, v15, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v16);
    }
    else
    {
      --this->fields.callbackCount;
    }
    size = v10->fields._size;
    ++v12;
  }
  while ( (__int64)v12 < size );
  if ( !v13 )
  {
LABEL_14:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
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
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4189D19 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__Dispose__,
      v7);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__MoveNext__,
      v8);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__get_Current__,
      v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__, v11);
    sub_B2C35C(&Method_MaterialCollectionServantListViewManager_OnMoveEnd__, v12);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v13);
    byte_4189D19 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MaterialCollectionServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_MaterialCollectionServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v19, v20);
      zero = UnityEngine_Vector3__get_zero(0LL);
      MaterialCollectionServantListViewObject__Init(
        (MaterialCollectionServantListViewObject_o *)current,
        mode,
        v18,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v21);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewManager__RequestListObject_28962640(
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
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4189D1A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__Dispose__,
      v5);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__MoveNext__,
      v6);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__get_Current__,
      v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__get_Count__, v9);
    sub_B2C35C(&Method_MaterialCollectionServantListViewManager_OnMoveEnd__, v10);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v11);
    byte_4189D1A = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MaterialCollectionServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_MaterialCollectionServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v17, v18);
      zero = UnityEngine_Vector3__get_zero(0LL);
      MaterialCollectionServantListViewObject__Init(
        (MaterialCollectionServantListViewObject_o *)current,
        mode,
        v16,
        0.0,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MaterialCollectionServantListViewObject__Dispose__);
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
  UnityEngine_Color_o v9; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_4189D12 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16958/*"btn_bg_05"*/, method);
    sub_B2C35C(&StringLiteral_16959/*"btn_bg_06"*/, v3);
    sub_B2C35C(&StringLiteral_361/*"#FE4545"*/, v4);
    sub_B2C35C(&StringLiteral_347/*"#000000"*/, v5);
    byte_4189D12 = 1;
  }
  *(_QWORD *)&v9.fields.r = 0LL;
  *(_QWORD *)&v9.fields.b = 0LL;
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_12;
  sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL);
  if ( !this->fields.filterSprite )
    goto LABEL_12;
  v7 = (System_String_o **)&StringLiteral_16958/*"btn_bg_05"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v7 = (System_String_o **)&StringLiteral_16959/*"btn_bg_06"*/;
  v8 = ((unsigned __int8)sort & 1) != 0
     ? (System_String_o **)&StringLiteral_347/*"#000000"*/
     : (System_String_o **)&StringLiteral_361/*"#FE4545"*/;
  UISprite__set_spriteName(this->fields.filterSprite, *v7, 0LL);
  *(_QWORD *)&v9.fields.r = 0LL;
  *(_QWORD *)&v9.fields.b = 0LL;
  UnityEngine_ColorUtility__TryParseHtmlString(*v8, &v9, 0LL);
  sort = (ListViewSort_o *)this->fields.sortKindLabel;
  if ( !sort )
LABEL_12:
    sub_B2C434(sort, method);
  UILabel__set_effectColor((UILabel_o *)sort, v9, 0LL);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  MaterialCollectionServantListViewManager__SetMode_28947592(this, mode, v10);
}


void __fastcall MaterialCollectionServantListViewManager__SetMode_28947592(
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
  MaterialCollectionServantListViewManager__RequestListObject_28962640(this, v6, v5);
}


void __fastcall MaterialCollectionServantListViewManager__SetMode_28963688(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  MaterialCollectionServantListViewManager__SetMode_28947592(this, mode, v10);
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
  if ( (byte_4189D18 & 1) == 0 )
  {
    this = (MaterialCollectionServantListViewManager_o *)sub_B2C35C(
                                                           &MaterialCollectionServantListViewObject_TypeInfo,
                                                           obj);
    byte_4189D18 = 1;
  }
  if ( !obj
    || (v6 = *(&MaterialCollectionServantListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (MaterialCollectionServantListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != MaterialCollectionServantListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
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
  sub_B2C2F8(
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
  __int64 v10; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v12; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v14; // x8
  int32_t sortKind; // w9
  System_String_o **v16; // x8
  struct ListViewSort_o *v17; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v19; // x9
  System_String_o **v20; // x10
  System_String_o **v21; // x8
  struct ListViewSort_o *v22; // x8
  System_String_o **v23; // x8

  if ( (byte_4189D26 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17021/*"btn_sort_up"*/, v3);
    sub_B2C35C(&StringLiteral_17104/*"btn_txt_up"*/, v4);
    sub_B2C35C(&StringLiteral_17061/*"btn_txt_new"*/, v5);
    sub_B2C35C(&StringLiteral_17051/*"btn_txt_down"*/, v6);
    sub_B2C35C(&StringLiteral_17068/*"btn_txt_old"*/, v7);
    sub_B2C35C(&StringLiteral_17018/*"btn_sort_down"*/, v8);
    byte_4189D26 = 1;
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
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v12 )
      goto LABEL_36;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
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
    v14 = this->fields.sort;
    if ( v14 )
    {
      sortKind = v14->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17068/*"btn_txt_old"*/ : &StringLiteral_17061/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v17->fields.isAscendingOrder;
              v19 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
              v20 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
LABEL_32:
              if ( isAscendingOrder )
                v23 = v19;
              else
                v23 = v20;
              UISprite__set_spriteName((UISprite_o *)sort, *v23, 0LL);
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
          v21 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17104/*"btn_txt_up"*/ : &StringLiteral_17051/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
          v22 = this->fields.sort;
          if ( v22 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v22->fields.isAscendingOrder;
              v19 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
              v20 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_36:
    sub_B2C434(sort, v10);
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
  UnityEngine_Color_o v9; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_4189D13 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_361/*"#FE4545"*/, method);
    sub_B2C35C(&StringLiteral_16993/*"btn_filter_on"*/, v3);
    sub_B2C35C(&StringLiteral_347/*"#000000"*/, v4);
    sub_B2C35C(&StringLiteral_16992/*"btn_filter"*/, v5);
    byte_4189D13 = 1;
  }
  *(_QWORD *)&v9.fields.r = 0LL;
  *(_QWORD *)&v9.fields.b = 0LL;
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_12;
  sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL);
  if ( !this->fields.filterSprite )
    goto LABEL_12;
  v7 = (System_String_o **)&StringLiteral_16992/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v7 = (System_String_o **)&StringLiteral_16993/*"btn_filter_on"*/;
  v8 = ((unsigned __int8)sort & 1) != 0
     ? (System_String_o **)&StringLiteral_347/*"#000000"*/
     : (System_String_o **)&StringLiteral_361/*"#FE4545"*/;
  UISprite__set_spriteName(this->fields.filterSprite, *v7, 0LL);
  *(_QWORD *)&v9.fields.r = 0LL;
  *(_QWORD *)&v9.fields.b = 0LL;
  UnityEngine_ColorUtility__TryParseHtmlString(*v8, &v9, 0LL);
  sort = (ListViewSort_o *)this->fields.sortKindLabel;
  if ( !sort )
LABEL_12:
    sub_B2C434(sort, method);
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

  if ( (byte_4189D24 & 1) == 0 )
  {
    sub_B2C35C(&Method_MaterialCollectionServantListViewManager_SortAscendingOrder__, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4189D24 = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_MaterialCollectionServantListViewManager_SortAscendingOrder__;
    if ( (*((_BYTE *)Method_MaterialCollectionServantListViewManager_SortAscendingOrder__ + 75) & 2) != 0 )
      v4 = (_QWORD *)sub_B2C364(Method_MaterialCollectionServantListViewManager_SortAscendingOrder__);
    v5 = (System_Reflection_MethodBase_o *)sub_B2C340(v4, v4[3]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    sort = this->fields.sort;
    if ( sort )
    {
      sort->fields.isAscendingOrder ^= 1u;
      MaterialEventLogListViewManager = (UnityEngine_Object_o *)MaterialCollectionServantListViewManager__GetMaterialEventLogListViewManager(
                                                                  (MaterialCollectionServantListViewManager_o *)v6,
                                                                  v7);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v6 = (struct ListViewSort_o *)UnityEngine_Object__op_Inequality(MaterialEventLogListViewManager, 0LL, 0LL);
      if ( ((unsigned __int8)v6 & 1) != 0 )
      {
        if ( !MaterialEventLogListViewManager )
          goto LABEL_16;
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
          this->klass->vtable._6_GetDragRoot.methodPtr);
        return;
      }
    }
LABEL_16:
    sub_B2C434(v6, v7);
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
  __int64 size; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  __int64 i; // x23
  struct System_Collections_Generic_List_ListViewItem__o *v19; // x21
  unsigned __int64 v20; // x27
  ListViewItem_o *v21; // x21
  __int64 v22; // x10
  struct System_Collections_Generic_List_ListViewItem__o *v23; // x28
  struct ListViewSort_o *sort; // x8
  int32_t v25; // w1
  struct System_Collections_Generic_List_ListViewItem__o *v26; // x28
  __int64 v27; // x8

  if ( (byte_4189D25 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialEventLogServantListViewItem___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B2C35C(&System_Collections_Generic_List_ListViewItem__TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_List_MaterialEventLogServantListViewItem__TypeInfo, v9);
    sub_B2C35C(&MaterialEventLogServantListViewItem_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4189D25 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_29;
  size = itemList->fields._size;
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MaterialEventLogServantListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MaterialEventLogServantListViewItem___ctor__);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  if ( (int)size >= 1 )
  {
    for ( i = 4LL; ; ++i )
    {
      v19 = this->fields.itemList;
      if ( !v19 )
        break;
      v20 = i - 4;
      if ( i - 4 >= (unsigned __int64)(unsigned int)v19->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v21 = (ListViewItem_o *)*((_QWORD *)&v19->fields._items->obj.klass + i);
      if ( !v21 )
        break;
      v22 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v21->klass->_2.bitflags2 + 1) < (unsigned int)v22
        || (MaterialEventLogServantListViewItem_c *)v21->klass->_2.typeHierarchy[v22 - 1] != MaterialEventLogServantListViewItem_TypeInfo )
      {
        break;
      }
      if ( LOBYTE(v21[1].fields.sortValue2) )
      {
        v23 = this->fields.itemList;
        if ( !v23 )
          break;
        if ( v20 >= (unsigned int)v23->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( !v17 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v17,
          *((EventMissionProgressRequest_Argument_ProgressData_o **)&v23->fields._items->obj.klass + i),
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        sort = this->fields.sort;
        if ( !sort )
          break;
        if ( sort->fields.isAscendingOrder )
        {
          v25 = i + 995;
          v21->fields.index = i + 995;
        }
        else
        {
          v21->fields.index = -1;
          v25 = -1;
        }
        ListViewItem__SetSortIndex(v21, v25, 0LL);
        v26 = this->fields.itemList;
        if ( !v26 )
          break;
        if ( v20 >= (unsigned int)v26->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        Instance = (DataManager_o *)*((_QWORD *)&v26->fields._items->obj.klass + i);
        if ( !Instance )
          break;
        ListViewItem__Set((ListViewItem_o *)Instance, v21, 0LL);
      }
      MaterialEventLogServantListViewItem__DummyVisible((MaterialEventLogServantListViewItem_o *)v21, 0LL);
      v27 = i - 3;
      if ( v27 >= size )
        return;
    }
LABEL_29:
    sub_B2C434(Instance, v13);
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

  if ( (byte_4189D06 & 1) == 0 )
  {
    sub_B2C35C(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_4189D06 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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

  if ( (byte_4189D08 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4189D08 = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  MaterialCollectionServantListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4189D0D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_MaterialCollectionServantListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_4189D0D = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MaterialCollectionServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (MaterialCollectionServantListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                               (UnityEngine_GameObject_o *)current,
                                                                               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B2C434(0LL, v18);
      Item = (ListViewItem_o *)MaterialCollectionServantListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B2C434(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_24147020((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_B2C434(v22, v23);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v11 )
          sub_B2C434(Item, v21);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          v19,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4189D0C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_MaterialCollectionServantListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_4189D0C = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MaterialCollectionServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MaterialCollectionServantListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4189D07 & 1) == 0 )
  {
    sub_B2C35C(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_4189D07 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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

  if ( (byte_4189D09 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4189D09 = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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
  sub_B2C2F8(
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
  if ( (byte_4185D14 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&MaterialCollectionServantListViewManager_ResultKind_TypeInfo, v9);
    byte_4185D14 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(MaterialCollectionServantListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall MaterialCollectionServantListViewManager_CallbackFunc__EndInvoke(
        MaterialCollectionServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
        sub_B2C418(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&index, method);
      if ( (sub_B2C38C(v23) & 1) == 0 )
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
      v25 = sub_B2C384(v23);
      v26 = sub_B2C788(v23);
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
            v19 = sub_AC5258(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B2C40C(v18, v23);
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
            v17 = sub_AC5258(v22, class_0, v10, v12);
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