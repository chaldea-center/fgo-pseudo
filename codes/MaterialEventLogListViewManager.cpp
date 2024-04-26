void __fastcall MaterialEventLogListViewManager___cctor(const MethodInfo *method)
{
  MaterialEventLogListViewManager_c *v1; // x8
  ListViewSort_o *v2; // x19
  struct MaterialEventLogListViewManager_StaticFields *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_435578A & 1) == 0 )
  {
    sub_B70694(&ListViewSort_TypeInfo);
    sub_B70694(&MaterialEventLogListViewManager_TypeInfo);
    sub_B70694(&StringLiteral_9092/*"MaterialCollectionServant6"*/);
    byte_435578A = 1;
  }
  MaterialEventLogListViewManager_TypeInfo->static_fields->VL_LIST_POS_Y = -30.0;
  MaterialEventLogListViewManager_TypeInfo->static_fields->VL_ARRANGEMENT_PY = -102.0;
  v1 = MaterialEventLogListViewManager_TypeInfo;
  MaterialEventLogListViewManager_TypeInfo->static_fields->VL_SCROLLBAR_POS_Y = 70.0;
  v1->static_fields->VL_SCROLLBAR_HEIGHT = 320;
  v1->static_fields->VL_PANEL_WIDTH = 500;
  v1->static_fields->VL_PANEL_HEIGHT = 440;
  v1->static_fields->VL_PANEL_CENTER_Y = 30;
  v1->static_fields->NORMAL_LIST_POS_Y = -35.0;
  v1->static_fields->NORMAL_ARRANGEMENT_PY = -120.0;
  v1->static_fields->NORMAL_SCROLLBAR_POS_Y = 45.0;
  v1->static_fields->NORMAL_SCROLLBAR_BACK_HEIGHT = 400;
  v1->static_fields->NORMAL_SCROLLBAR_FORE_HEIGHT = 404;
  v1->static_fields->NORMAL_PANEL_WIDTH = 500;
  v1->static_fields->NORMAL_PANEL_HEIGHT = 500;
  v1->static_fields->NORMAL_PANEL_CENTER_Y = 0;
  v2 = (ListViewSort_o *)sub_B70764(ListViewSort_TypeInfo);
  ListViewSort___ctor_33980040(v2, (System_String_o *)StringLiteral_9092/*"MaterialCollectionServant6"*/, 27, 1, 0LL);
  static_fields = MaterialEventLogListViewManager_TypeInfo->static_fields;
  static_fields->EventLogservantSortInfo = v2;
  sub_B70630(
    (BattleServantConfConponent_o *)&static_fields->EventLogservantSortInfo,
    (System_Int32_array **)v2,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


void __fastcall MaterialEventLogListViewManager___ctor(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall MaterialEventLogListViewManager__Awake(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct UnityEngine_BoxCollider_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct UIScrollView_o *scrollView; // x8
  ListViewSort_o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4355771 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_B70694(&ListViewSort_TypeInfo);
    byte_4355771 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (Component_srcLineSprite = (struct UnityEngine_BoxCollider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        gameObject,
                                                                        (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.mBoxCollider = Component_srcLineSprite,
        sub_B70630(
          (BattleServantConfConponent_o *)&this->fields.mBoxCollider,
          (System_Int32_array **)Component_srcLineSprite,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.mBoxCollider) == 0LL)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL),
        (scrollView = this->fields.scrollView) == 0LL) )
  {
    sub_B7076C(gameObject, v4);
  }
  BYTE1(scrollView->fields.scrollWheelFactor) = 0;
  v13 = (ListViewSort_o *)sub_B70764(ListViewSort_TypeInfo);
  ListViewSort___ctor(v13, 3, 1, 0LL);
  this->fields.sort = v13;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


void __fastcall MaterialEventLogListViewManager__Back(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  MaterialEventLogListViewManager_o *v2; // x19
  _BOOL4 issortButton; // w8
  BattleServantConfConponent_o *p_sort; // x19
  ListViewSort_o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  MaterialEventLogListViewManager_o *v12; // x0
  const MethodInfo *v13; // x1
  UnityEngine_Object_o *MaterialCollectionServantListViewManager; // x19
  MaterialEventLogListViewManager_c *v15; // x0
  ListViewSort_o *EventLogservantSortInfo; // x8

  v2 = this;
  if ( (byte_4355786 & 1) == 0 )
  {
    sub_B70694(&ListViewSort_TypeInfo);
    sub_B70694(&MaterialEventLogListViewManager_TypeInfo);
    this = (MaterialEventLogListViewManager_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4355786 = 1;
  }
  issortButton = v2->fields.issortButton;
  p_sort = (BattleServantConfConponent_o *)&v2->fields.sort;
  if ( !issortButton )
  {
    if ( !p_sort->klass )
      goto LABEL_21;
    *((_BYTE *)&p_sort->klass->_1.this_arg.bits + 4) = 1;
  }
  v5 = (ListViewSort_o *)sub_B70764(ListViewSort_TypeInfo);
  ListViewSort___ctor(v5, 3, 1, 0LL);
  p_sort->klass = (BattleServantConfConponent_c *)v5;
  sub_B70630(p_sort, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  MaterialCollectionServantListViewManager = (UnityEngine_Object_o *)MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                                                       v12,
                                                                       v13);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (MaterialEventLogListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                MaterialCollectionServantListViewManager,
                                                0LL,
                                                0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !MaterialCollectionServantListViewManager )
      goto LABEL_21;
    MaterialCollectionServantListViewManager__EventLogSortListSave(
      (MaterialCollectionServantListViewManager_o *)this,
      method);
  }
  v15 = MaterialEventLogListViewManager_TypeInfo;
  if ( (BYTE3(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
    v15 = MaterialEventLogListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v15->static_fields->EventLogservantSortInfo;
  if ( EventLogservantSortInfo )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) == 0
      || v15->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v15),
          (EventLogservantSortInfo = MaterialEventLogListViewManager_TypeInfo->static_fields->EventLogservantSortInfo) != 0LL) )
    {
      ListViewSort__Save(EventLogservantSortInfo, 0LL);
      return;
    }
LABEL_21:
    sub_B7076C(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogListViewManager__CheckPlayableMaterial(
        MaterialEventLogListViewManager_o *this,
        int32_t servantId,
        int32_t limitCount,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  MaterialEventLogListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v9; // x1
  MaterialEventLogListViewObject_o *v10; // x22
  MaterialEventLogListViewItem_o *Item; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  MaterialEventLogListViewItem_o *v14; // x21
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8
  bool v16; // w23
  const MethodInfo *v17; // x2
  __int64 v18; // x0
  __int64 v19; // x1
  struct MaterialEventLogListViewItem_Info_o *v20; // x8
  struct MaterialEventLogListViewItem_Info_o *v21; // x8
  unsigned int v22; // w9
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_435577E & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    byte_435577E = 1;
  }
  memset(&v25, 0, sizeof(v25));
  objectList = this->fields.objectList;
  this->fields.selectedLimitCount = limitCount;
  if ( !objectList )
    sub_B7076C(0LL, *(_QWORD *)&servantId);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v24,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v25,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v25.fields.current )
      sub_B7076C(0LL, v23);
    Component_srcLineSprite = (MaterialEventLogListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    (UnityEngine_GameObject_o *)v25.fields.current,
                                                                    (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___);
    v10 = Component_srcLineSprite;
    if ( !Component_srcLineSprite )
      sub_B7076C(0LL, v9);
    Item = MaterialEventLogListViewObject__GetItem(Component_srcLineSprite, v9);
    v14 = Item;
    if ( !Item )
      sub_B7076C(0LL, v12);
    info_k__BackingField = Item->fields._info_k__BackingField;
    if ( info_k__BackingField && info_k__BackingField->fields.svt_id == servantId )
    {
      v16 = MaterialEventLogListViewItem__CheckPlayableMaterial(Item, limitCount, v13);
      MaterialEventLogListViewObject__SetEnableSelect(v10, v16, v17);
      v20 = v14->fields._info_k__BackingField;
      if ( v16 )
      {
        if ( !v20 )
          sub_B7076C(v18, v19);
        v20->fields.flag &= ~1u;
        v21 = v14->fields._info_k__BackingField;
        if ( !v21 )
          sub_B7076C(v18, v19);
        v22 = v21->fields.flag & 0xFFFFFFFB;
      }
      else
      {
        if ( !v20 )
          sub_B7076C(v18, v19);
        v20->fields.flag |= 1u;
        v21 = v14->fields._info_k__BackingField;
        if ( !v21 )
          sub_B7076C(v18, v19);
        v22 = v21->fields.flag | 4;
      }
      v21->fields.flag = v22;
    }
    else
    {
      MaterialEventLogListViewObject__SetEnableSelect(v10, 1, v13);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v25,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall MaterialEventLogListViewManager__CreateInfos(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x20
  __int64 v6; // x10
  UnityEngine_Object_o *monitor; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x11
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4355788 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info___ctor__);
    sub_B70694(&System_Collections_Generic_List_MaterialEventLogListViewItem_Info__TypeInfo);
    sub_B70694(&MaterialEventLogListViewItem_TypeInfo);
    sub_B70694(&MyRoomRootComponent_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4355788 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  v5 = (UnityEngine_Object_o *)*((_QWORD *)Instance + 3);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v5, 0LL, 0LL) )
  {
    if ( v5 )
    {
      v6 = *(&MyRoomRootComponent_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v5->klass->_2.bitflags2 + 1) >= (unsigned int)v6 )
      {
        if ( (MyRoomRootComponent_c *)v5->klass->_2.typeHierarchy[v6 - 1] != MyRoomRootComponent_TypeInfo )
          v5 = 0LL;
      }
      else
      {
        v5 = 0LL;
      }
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = (void *)UnityEngine_Object__op_Equality(v5, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      if ( !v5 )
        goto LABEL_35;
      monitor = (UnityEngine_Object_o *)v5[2].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
      {
        v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_MaterialEventLogListViewItem_Info__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v8,
          (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info___ctor__);
        Instance = this->fields.itemSortList;
        if ( Instance )
        {
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            &v18,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
            (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          while ( 1 )
          {
            v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v18,
                   (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v9 )
              break;
            if ( v18.fields.current )
            {
              v10 = *(&MaterialEventLogListViewItem_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v18.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v10
                && (MaterialEventLogListViewItem_c *)v18.fields.current->klass->_2.typeHierarchy[v10 - 1] == MaterialEventLogListViewItem_TypeInfo )
              {
                v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)v18.fields.current[7].monitor;
                if ( v11 )
                {
                  if ( !v8 )
                    sub_B7076C(v9, v11);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v8,
                    v11,
                    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__Add__);
                }
              }
            }
          }
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v18,
            (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          if ( monitor )
          {
            Instance = monitor[36].klass;
            if ( Instance )
            {
              *((_QWORD *)Instance + 18) = v8;
              sub_B70630(
                (BattleServantConfConponent_o *)((char *)Instance + 144),
                (System_Int32_array **)v8,
                v12,
                v13,
                v14,
                v15,
                v16,
                v17);
              return;
            }
          }
        }
LABEL_35:
        sub_B7076C(Instance, v4);
      }
    }
  }
}


void __fastcall MaterialEventLogListViewManager__CreateList(
        MaterialEventLogListViewManager_o *this,
        int32_t kind,
        System_Collections_Generic_List_MaterialEventLogListViewItem_Info__o *infos,
        const MethodInfo *method)
{
  void *itemList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  int v10; // w8
  unsigned __int64 v11; // x22
  signed __int64 v12; // x25
  __int64 v13; // x23
  System_Int32_array ***v14; // x24
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  MaterialEventLogListViewItem_Info_o *v34; // x8
  _BOOL4 issortButton; // w21
  UnityEngine_GameObject_o *gameObject; // x20
  MaterialEventLogListViewManager_c *v37; // x8
  struct UIScrollView_o *scrollView; // x8
  __int64 v39; // x8
  __int64 v40; // x11
  __int64 v41; // x20
  struct UIScrollView_o *v42; // x8
  __int64 v43; // x8
  __int64 v44; // x11
  __int64 v45; // x20
  UnityEngine_GameObject_o *v46; // x0
  MaterialEventLogListViewManager_c *v47; // x8
  UnityEngine_GameObject_o *v48; // x21
  struct UIScrollView_o *v49; // x8
  UnityEngine_Object_o *v50; // x20
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  MaterialEventLogListViewManager_c *v57; // x0
  struct ListViewSort_o *EventLogservantSortInfo; // x1
  struct ListViewSort_o **p_sort; // x20
  MaterialEventLogListViewManager_o *v60; // x0
  const MethodInfo *v61; // x1
  MaterialCollectionServantListViewManager_o *MaterialCollectionServantListViewManager; // x21
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x1
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v71; // x1
  const MethodInfo *v72; // x1
  UnityEngine_GameObject_o *v73; // x0
  MaterialEventLogListViewManager_c *v74; // x8
  UnityEngine_GameObject_o *v75; // x21
  struct UIScrollView_o *v76; // x8
  UnityEngine_Object_o *v77; // x20
  const MethodInfo *v78; // x1
  bool v79; // w1

  if ( (byte_4355777 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&MaterialEventLogListViewItem_TypeInfo);
    sub_B70694(&MaterialEventLogListViewManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&UIScrollBar_TypeInfo);
    sub_B70694(&StringLiteral_12047/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/);
    byte_4355777 = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  ListViewManager__CheckSortButton((ListViewManager_o *)this, 0, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !infos )
    goto LABEL_102;
  size = infos->fields._size;
  if ( size > 3 )
    v10 = size + 1;
  else
    v10 = 4;
  if ( v10 > 0 )
  {
    v11 = 0LL;
    v12 = v10;
    do
    {
      v13 = sub_B70764(MaterialEventLogListViewItem_TypeInfo);
      ListViewItem___ctor_23967088((ListViewItem_o *)v13, v11, 0LL);
      *(_DWORD *)(v13 + 112) = kind;
      *(_QWORD *)(v13 + 120) = 0LL;
      v14 = (System_Int32_array ***)(v13 + 120);
      sub_B70630((BattleServantConfConponent_o *)(v13 + 120), 0LL, v15, v16, v17, v18, v19, v20);
      if ( (__int64)v11 < infos->fields._size )
      {
        if ( v11 >= (unsigned int)infos->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        if ( !v13 )
          goto LABEL_102;
        v27 = (System_Int32_array **)infos->fields._items->m_Items[v11];
        *v14 = v27;
        sub_B70630((BattleServantConfConponent_o *)(v13 + 120), v27, v21, v22, v23, v24, v25, v26);
        itemList = *v14;
        if ( !*v14 )
          goto LABEL_102;
        *((_QWORD *)itemList + 11) = v13;
        sub_B70630(
          (BattleServantConfConponent_o *)((char *)itemList + 88),
          (System_Int32_array **)v13,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
        if ( v11 >= (unsigned int)infos->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v34 = infos->fields._items->m_Items[v11];
        if ( !v34 )
          goto LABEL_102;
        this->fields.issortButton = v34->fields.listChange;
      }
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_102;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      ++v11;
    }
    while ( (__int64)v11 < v12 );
  }
  issortButton = this->fields.issortButton;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v37 = MaterialEventLogListViewManager_TypeInfo;
  if ( issortButton )
  {
    if ( (WORD1(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
      v37 = MaterialEventLogListViewManager_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionY(gameObject, v37->static_fields->VL_LIST_POS_Y, 0LL);
    ListViewManager__SetArrangementPitchY(
      (ListViewManager_o *)this,
      MaterialEventLogListViewManager_TypeInfo->static_fields->VL_ARRANGEMENT_PY,
      0LL);
    scrollView = this->fields.scrollView;
    if ( scrollView )
    {
      v39 = *(_QWORD *)&scrollView->fields.showScrollBars;
      if ( v39
        && (v40 = *(&UIScrollBar_TypeInfo->_2.bitflags2 + 1),
            *(unsigned __int8 *)(*(_QWORD *)v39 + 300LL) >= (unsigned int)v40) )
      {
        if ( *(UIScrollBar_c **)(*(_QWORD *)(*(_QWORD *)v39 + 200LL) + 8 * v40 - 8) == UIScrollBar_TypeInfo )
          v41 = v39;
        else
          v41 = 0LL;
      }
      else
      {
        v41 = 0LL;
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      itemList = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v41, 0LL, 0LL);
      if ( ((unsigned __int8)itemList & 1) != 0 )
      {
        if ( !v41 )
          goto LABEL_102;
        v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v41, 0LL);
        v47 = MaterialEventLogListViewManager_TypeInfo;
        v48 = v46;
        if ( (BYTE3(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
          v47 = MaterialEventLogListViewManager_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionY(v48, v47->static_fields->VL_SCROLLBAR_POS_Y, 0LL);
        itemList = *(void **)(v41 + 40);
        if ( !itemList )
          goto LABEL_102;
        UIWidget__set_height(
          (UIWidget_o *)itemList,
          MaterialEventLogListViewManager_TypeInfo->static_fields->VL_SCROLLBAR_HEIGHT,
          0LL);
        itemList = *(void **)(v41 + 48);
        if ( !itemList )
          goto LABEL_102;
        UIWidget__set_height(
          (UIWidget_o *)itemList,
          MaterialEventLogListViewManager_TypeInfo->static_fields->VL_SCROLLBAR_HEIGHT,
          0LL);
      }
      v49 = this->fields.scrollView;
      if ( !v49 )
        goto LABEL_102;
      v50 = *(UnityEngine_Object_o **)&v49->fields.mPlane.fields.m_Normal.fields.x;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v50, 0LL, 0LL) )
      {
        itemList = MaterialEventLogListViewManager_TypeInfo;
        if ( (BYTE3(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
          itemList = MaterialEventLogListViewManager_TypeInfo;
        }
        if ( !v50 )
          goto LABEL_102;
        ((void (__fastcall *)(UnityEngine_Object_o *, _QWORD, float, float, float, float))v50->klass[1]._2.genericContainerHandle)(
          v50,
          *(_QWORD *)&v50->klass[1]._2.instance_size,
          0.0,
          (float)*(int *)(*((_QWORD *)itemList + 23) + 24LL),
          (float)*(int *)(*((_QWORD *)itemList + 23) + 16LL),
          (float)*(int *)(*((_QWORD *)itemList + 23) + 20LL));
      }
      ListViewManager__CheckSortButton((ListViewManager_o *)this, this->fields.issortButton, 0LL);
      v57 = MaterialEventLogListViewManager_TypeInfo;
      if ( (BYTE3(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
        v57 = MaterialEventLogListViewManager_TypeInfo;
      }
      EventLogservantSortInfo = v57->static_fields->EventLogservantSortInfo;
      this->fields.sort = EventLogservantSortInfo;
      p_sort = &this->fields.sort;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.sort,
        (System_Int32_array **)EventLogservantSortInfo,
        v51,
        v52,
        v53,
        v54,
        v55,
        v56);
      if ( this->fields.sort )
      {
        this->fields.sort->fields.listViewKind = 0;
        itemList = *p_sort;
        if ( *p_sort )
        {
          ListViewSort__Load((ListViewSort_o *)itemList, 0LL);
          MaterialCollectionServantListViewManager = MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                                       v60,
                                                       v61);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          itemList = (void *)UnityEngine_Object__op_Inequality(
                               (UnityEngine_Object_o *)MaterialCollectionServantListViewManager,
                               0LL,
                               0LL);
          if ( ((unsigned __int8)itemList & 1) != 0 )
          {
            if ( !MaterialCollectionServantListViewManager )
              goto LABEL_102;
            v69 = (System_Int32_array **)*p_sort;
            MaterialCollectionServantListViewManager->fields.sort = *p_sort;
            sub_B70630(
              (BattleServantConfConponent_o *)&MaterialCollectionServantListViewManager->fields.sort,
              v69,
              v63,
              v64,
              v65,
              v66,
              v67,
              v68);
          }
          emptyMessageLabel = this->fields.emptyMessageLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          itemList = LocalizationManager__Get((System_String_o *)StringLiteral_12047/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/, 0LL);
          if ( emptyMessageLabel )
          {
            UILabel__set_text(emptyMessageLabel, (System_String_o *)itemList, 0LL);
            MaterialEventLogListViewManager__SetFilterButtonImage(this, v71);
            MaterialEventLogListViewManager__SortDummyData(this, v72);
            goto LABEL_99;
          }
        }
      }
    }
LABEL_102:
    sub_B7076C(itemList, v8);
  }
  if ( (WORD1(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
    v37 = MaterialEventLogListViewManager_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(gameObject, v37->static_fields->NORMAL_LIST_POS_Y, 0LL);
  ListViewManager__SetArrangementPitchY(
    (ListViewManager_o *)this,
    MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_ARRANGEMENT_PY,
    0LL);
  v42 = this->fields.scrollView;
  if ( !v42 )
    goto LABEL_102;
  v43 = *(_QWORD *)&v42->fields.showScrollBars;
  if ( v43
    && (v44 = *(&UIScrollBar_TypeInfo->_2.bitflags2 + 1),
        *(unsigned __int8 *)(*(_QWORD *)v43 + 300LL) >= (unsigned int)v44) )
  {
    if ( *(UIScrollBar_c **)(*(_QWORD *)(*(_QWORD *)v43 + 200LL) + 8 * v44 - 8) == UIScrollBar_TypeInfo )
      v45 = v43;
    else
      v45 = 0LL;
  }
  else
  {
    v45 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  itemList = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v45, 0LL, 0LL);
  if ( ((unsigned __int8)itemList & 1) != 0 )
  {
    if ( !v45 )
      goto LABEL_102;
    v73 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v45, 0LL);
    v74 = MaterialEventLogListViewManager_TypeInfo;
    v75 = v73;
    if ( (BYTE3(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
      v74 = MaterialEventLogListViewManager_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionY(v75, v74->static_fields->NORMAL_SCROLLBAR_POS_Y, 0LL);
    itemList = *(void **)(v45 + 40);
    if ( !itemList )
      goto LABEL_102;
    UIWidget__set_height(
      (UIWidget_o *)itemList,
      MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_SCROLLBAR_BACK_HEIGHT,
      0LL);
    itemList = *(void **)(v45 + 48);
    if ( !itemList )
      goto LABEL_102;
    UIWidget__set_height(
      (UIWidget_o *)itemList,
      MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_SCROLLBAR_FORE_HEIGHT,
      0LL);
  }
  v76 = this->fields.scrollView;
  if ( !v76 )
    goto LABEL_102;
  v77 = *(UnityEngine_Object_o **)&v76->fields.mPlane.fields.m_Normal.fields.x;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v77, 0LL, 0LL) )
  {
    itemList = MaterialEventLogListViewManager_TypeInfo;
    if ( (BYTE3(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
      itemList = MaterialEventLogListViewManager_TypeInfo;
    }
    if ( !v77 )
      goto LABEL_102;
    ((void (__fastcall *)(UnityEngine_Object_o *, _QWORD, float, float, float, float))v77->klass[1]._2.genericContainerHandle)(
      v77,
      *(_QWORD *)&v77->klass[1]._2.instance_size,
      0.0,
      (float)*(int *)(*((_QWORD *)itemList + 23) + 56LL),
      (float)*(int *)(*((_QWORD *)itemList + 23) + 48LL),
      (float)*(int *)(*((_QWORD *)itemList + 23) + 52LL));
  }
LABEL_99:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  if ( this->fields.issortButton )
  {
    v79 = MaterialEventLogListViewManager__GetFilterCount(this, v78) < 1;
    ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v79, 0LL);
  }
  MaterialEventLogListViewManager__CreateInfos(this, v78);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
}


void __fastcall MaterialEventLogListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialEventLogListViewManager_c *v2; // x0
  ListViewSort_o *EventLogservantSortInfo; // x0

  if ( (byte_4355772 & 1) == 0 )
  {
    sub_B70694(&MaterialEventLogListViewManager_TypeInfo);
    byte_4355772 = 1;
  }
  v2 = MaterialEventLogListViewManager_TypeInfo;
  if ( (BYTE3(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
    v2 = MaterialEventLogListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v2->static_fields->EventLogservantSortInfo;
  if ( !EventLogservantSortInfo )
    sub_B7076C(0LL, v1);
  ListViewSort__DeleteContinueData(EventLogservantSortInfo, 0LL);
}


void __fastcall MaterialEventLogListViewManager__DestroyList(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  ListViewManager__CheckSortButton((ListViewManager_o *)this, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogListViewManager__EndEventLogSortKind(
        MaterialEventLogListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  MaterialEventLogServantSortSelectMenu_o *eventLogServantSortSelectMenu; // x0
  MaterialEventLogListViewManager_o *v6; // x0
  const MethodInfo *v7; // x1
  MaterialCollectionServantListViewManager_o *MaterialCollectionServantListViewManager; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **sort; // x1
  const MethodInfo *v16; // x1
  bool v17; // w1
  const MethodInfo *v18; // x1

  if ( (byte_4355781 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4355781 = 1;
  }
  eventLogServantSortSelectMenu = this->fields.eventLogServantSortSelectMenu;
  if ( !eventLogServantSortSelectMenu )
    goto LABEL_14;
  MaterialEventLogServantSortSelectMenu__Close_32176716(eventLogServantSortSelectMenu, 0LL, method);
  MaterialCollectionServantListViewManager = MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                               v6,
                                               v7);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  eventLogServantSortSelectMenu = (MaterialEventLogServantSortSelectMenu_o *)UnityEngine_Object__op_Inequality(
                                                                               (UnityEngine_Object_o *)MaterialCollectionServantListViewManager,
                                                                               0LL,
                                                                               0LL);
  if ( ((unsigned __int8)eventLogServantSortSelectMenu & 1) != 0 )
  {
    if ( !MaterialCollectionServantListViewManager )
      goto LABEL_14;
    sort = (System_Int32_array **)this->fields.sort;
    MaterialCollectionServantListViewManager->fields.sort = (struct ListViewSort_o *)sort;
    sub_B70630(
      (BattleServantConfConponent_o *)&MaterialCollectionServantListViewManager->fields.sort,
      sort,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( isDecide )
  {
    MaterialEventLogListViewManager__SortDummyData(this, (const MethodInfo *)isDecide);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    v17 = MaterialEventLogListViewManager__GetFilterCount(this, v16) < 1;
    ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v17, 0LL);
    eventLogServantSortSelectMenu = (MaterialEventLogServantSortSelectMenu_o *)this->fields.sort;
    if ( eventLogServantSortSelectMenu )
    {
      ListViewSort__Save((ListViewSort_o *)eventLogServantSortSelectMenu, 0LL);
      MaterialEventLogListViewManager__CreateInfos(this, v18);
      goto LABEL_13;
    }
LABEL_14:
    sub_B7076C(eventLogServantSortSelectMenu, isDecide);
  }
LABEL_13:
  MaterialEventLogListViewManager__SetFilterButtonImage(this, (const MethodInfo *)isDecide);
}


void __fastcall MaterialEventLogListViewManager__EventLogSortKind(
        MaterialEventLogListViewManager_o *this,
        MaterialEventLogServantSortSelectMenu_o *eventLogServantSortSelectMenu,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x21
  MaterialEventLogServantSortSelectMenu_CallbackFunc_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_435577F & 1) == 0 )
  {
    sub_B70694(&MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_MaterialEventLogListViewManager_EndEventLogSortKind__);
    byte_435577F = 1;
  }
  if ( this->fields.isInput )
  {
    sort = this->fields.sort;
    v6 = (MaterialEventLogServantSortSelectMenu_CallbackFunc_o *)sub_B70764(MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo);
    MaterialEventLogServantSortSelectMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_MaterialEventLogListViewManager_EndEventLogSortKind__,
      0LL);
    if ( !eventLogServantSortSelectMenu )
      sub_B7076C(v7, v8);
    MaterialEventLogServantSortSelectMenu__Open(eventLogServantSortSelectMenu, 0, sort, v6, v9);
  }
}


int32_t __fastcall MaterialEventLogListViewManager__GetFilterCount(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  MaterialEventLogListViewManager_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  signed __int64 size; // x21
  int32_t v5; // w20
  unsigned __int64 v6; // x22
  __int64 v7; // x10

  v2 = this;
  if ( (byte_4355780 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (MaterialEventLogListViewManager_o *)sub_B70694(&MaterialEventLogListViewItem_TypeInfo);
    byte_4355780 = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      this = (MaterialEventLogListViewManager_o *)itemList->fields._items->m_Items[v6];
      if ( !this )
        break;
      v7 = *(&MaterialEventLogListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v7
        || (MaterialEventLogListViewItem_c *)this->klass->_2.typeHierarchy[v7 - 1] != MaterialEventLogListViewItem_TypeInfo )
      {
        break;
      }
      if ( this->fields.dropList )
      {
        this = (MaterialEventLogListViewManager_o *)((__int64 (__fastcall *)(MaterialEventLogListViewManager_o *, struct ListViewSort_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
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
    sub_B7076C(this, method);
  }
  return 0;
}


PartyServantListViewItem_o *__fastcall MaterialEventLogListViewManager__GetItem(
        MaterialEventLogListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_4355778 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B70694(&PartyServantListViewItem_TypeInfo);
    byte_4355778 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (PartyServantListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == PartyServantListViewItem_TypeInfo )
    return (PartyServantListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


MaterialCollectionServantListViewManager_o *__fastcall MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_o *result; // x0
  __int64 v3; // x1
  UnityEngine_Object_o *dropObjectList; // x19
  bool v5; // w8
  __int64 v6; // x10
  bool v7; // w8
  void *monitor; // x19
  bool v9; // w8

  if ( (byte_4355774 & 1) == 0 )
  {
    sub_B70694(&MyRoomRootComponent_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4355774 = 1;
  }
  result = (MaterialCollectionServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
          return (MaterialCollectionServantListViewManager_o *)*((_QWORD *)monitor + 68);
LABEL_25:
        sub_B7076C(result, v3);
      }
    }
  }
  return result;
}


float __fastcall MaterialEventLogListViewManager__GetScrollPosY(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *scrollView; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView )
    sub_B7076C(0LL, method);
  gameObject = UnityEngine_Component__get_gameObject(scrollView, 0LL);
  return GameObjectExtensions__GetLocalPositionY(gameObject, 0LL);
}


UIScrollView_o *__fastcall MaterialEventLogListViewManager__GetScrollView(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.scrollView;
}


void __fastcall MaterialEventLogListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialEventLogListViewManager_c *v2; // x0
  ListViewSort_o *EventLogservantSortInfo; // x0

  if ( (byte_4355773 & 1) == 0 )
  {
    sub_B70694(&MaterialEventLogListViewManager_TypeInfo);
    byte_4355773 = 1;
  }
  v2 = MaterialEventLogListViewManager_TypeInfo;
  if ( (BYTE3(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
    v2 = MaterialEventLogListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v2->static_fields->EventLogservantSortInfo;
  if ( !EventLogservantSortInfo )
    sub_B7076C(0LL, v1);
  ListViewSort__InitLoad(EventLogservantSortInfo, 0LL);
}


void __fastcall MaterialEventLogListViewManager__InitializeObjectPosition(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *seed; // x20
  UnityEngine_GameObject_o *v4; // x0
  const MethodInfo *v5; // x1
  struct ListViewItemSeed_o *v6; // x8
  UnityEngine_Object_o *parent; // x20
  struct ListViewItemSeed_o *v8; // x8
  int klass; // w8
  UnityEngine_GameObject_o *v10; // x19
  unsigned int v11; // w20
  __int64 v12; // x0

  if ( (byte_4355789 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentsInChildren_MaterialEventLogListViewObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4355789 = 1;
  }
  seed = (UnityEngine_Object_o *)this->fields.seed;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(seed, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v6 = this->fields.seed;
    if ( !v6 )
      goto LABEL_21;
    parent = (UnityEngine_Object_o *)v6->fields.parent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v4 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(parent, 0LL, 0LL);
    if ( ((unsigned __int8)v4 & 1) != 0 )
    {
      v8 = this->fields.seed;
      if ( !v8 )
        goto LABEL_21;
      v4 = v8->fields.parent;
      if ( !v4 )
        goto LABEL_21;
      v4 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30716516(
                                         v4,
                                         (const MethodInfo_1D4B264 *)Method_UnityEngine_GameObject_GetComponentsInChildren_MaterialEventLogListViewObject___);
      if ( !v4 )
        goto LABEL_21;
      klass = (int)v4[1].klass;
      v10 = v4;
      if ( klass >= 1 )
      {
        v11 = 0;
        while ( 1 )
        {
          if ( v11 >= klass )
          {
            v12 = sub_B70798(v4);
            sub_B70738(v12, 0LL);
          }
          v4 = (UnityEngine_GameObject_o *)*((_QWORD *)&v10[1].monitor + (int)v11);
          if ( !v4 )
            break;
          MaterialEventLogListViewObject__InitPosition((MaterialEventLogListViewObject_o *)v4, v5);
          klass = (int)v10[1].klass;
          if ( (int)++v11 >= klass )
            return;
        }
LABEL_21:
        sub_B7076C(v4, v5);
      }
    }
  }
}


void __fastcall MaterialEventLogListViewManager__ListUpdate(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  bool v4; // w1

  MaterialEventLogListViewManager__SortDummyData(this, method);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  v4 = MaterialEventLogListViewManager__GetFilterCount(this, v3) < 1;
  ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v4, 0LL);
}


void __fastcall MaterialEventLogListViewManager__OnClickListView(
        MaterialEventLogListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x19
  __int64 v5; // x10
  void *monitor; // x20
  int v7; // w8

  if ( (byte_435577D & 1) == 0 )
  {
    sub_B70694(&Method_ActionExtensions_Call_MaterialEventLogListViewItem___);
    sub_B70694(&MaterialEventLogListViewItem_TypeInfo);
    this = (MaterialEventLogListViewManager_o *)sub_B70694(&SoundManager_TypeInfo);
    byte_435577D = 1;
  }
  if ( !obj
    || (linkItem = obj->fields.linkItem) == 0LL
    || (v5 = *(&MaterialEventLogListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (MaterialEventLogListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1] != MaterialEventLogListViewItem_TypeInfo )
  {
    sub_B7076C(this, obj);
  }
  monitor = linkItem[1].monitor;
  if ( monitor )
  {
    v7 = *((_DWORD *)monitor + 17);
    if ( (v7 & 1) == 0 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v7 = *((_DWORD *)monitor + 17);
    }
    if ( (v7 & 4) != 0 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
    }
    else
    {
      ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
        *((System_Action_T__o **)monitor + 10),
        (BlankEarth_QAARotateEarthResponse_o *)linkItem,
        (const MethodInfo_2BFC288 *)Method_ActionExtensions_Call_MaterialEventLogListViewItem___);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogListViewManager__RequestListObject(
        MaterialEventLogListViewManager_o *this,
        int32_t mode,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v7; // x19
  _DWORD *ObjectList; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x1
  int v23; // w8
  _DWORD *v24; // x22
  unsigned int v25; // w25
  MaterialEventLogListViewObject_o *v26; // x24
  const MethodInfo *v27; // x4
  int32_t initMode; // w8
  UnityEngine_GameObject_o *v29; // x0
  UIWidget_o *v30; // x21
  float v31; // s8
  int mGo; // w9
  System_Action_o *v33; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x20
  float IntpTime_AutoResume; // s8
  System_Action_o *v37; // x21
  System_Action_o *v38; // x20
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_435577B & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_B70694(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    sub_B70694(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__0__);
    sub_B70694(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__1__);
    sub_B70694(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__2__);
    sub_B70694(&MaterialEventLogListViewManager___c__DisplayClass50_0_TypeInfo);
    byte_435577B = 1;
  }
  v7 = sub_B70764(MaterialEventLogListViewManager___c__DisplayClass50_0_TypeInfo);
  MaterialEventLogListViewManager___c__DisplayClass50_0___ctor(
    (MaterialEventLogListViewManager___c__DisplayClass50_0_o *)v7,
    0LL);
  if ( !v7 )
    goto LABEL_29;
  *(_QWORD *)(v7 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = end_act;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)end_act, v16, v17, v18, v19, v20, v21);
  ObjectList = MaterialEventLogListViewManager__get_ObjectList(this, v22);
  if ( !ObjectList )
    goto LABEL_29;
  v23 = ObjectList[6];
  v24 = ObjectList;
  if ( v23 >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( v23 <= v25 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v26 = *(MaterialEventLogListViewObject_o **)(*((_QWORD *)v24 + 2) + 8LL * (int)v25 + 32);
      if ( !v26 )
        break;
      zero = UnityEngine_Vector3__get_zero(0LL);
      MaterialEventLogListViewObject__Init_32169768(
        v26,
        mode,
        0LL,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        -1,
        v27);
      v23 = v24[6];
      if ( (int)++v25 >= v23 )
        goto LABEL_11;
    }
LABEL_29:
    sub_B7076C(ObjectList, v9);
  }
LABEL_11:
  initMode = this->fields.initMode;
  if ( initMode == 4 )
  {
    this->fields.mIsDoing_Slide = 1;
    ObjectList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !ObjectList )
      goto LABEL_29;
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)ObjectList, 0LL);
    Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                           gameObject,
                           (const MethodInfo_1D4BBAC *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
    v37 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v37,
      (Il2CppObject *)v7,
      Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__2__,
      0LL);
    if ( !Component_UIWidget )
      goto LABEL_29;
    SlideFadeObject__SlideOut_23179636(
      (SlideFadeObject_o *)Component_UIWidget,
      580.0,
      IntpTime_AutoResume,
      0.0,
      v37,
      0LL);
  }
  else if ( initMode == 3 )
  {
    this->fields.mIsDoing_Slide = 1;
    this->fields.isScrollRefresh = 1;
    ObjectList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !ObjectList )
      goto LABEL_29;
    v29 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)ObjectList, 0LL);
    v30 = GameObjectExtensions__SafeGetComponent_UIWidget_(
            v29,
            (const MethodInfo_1D4BBAC *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    v31 = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
    if ( this->fields.issortButton )
    {
      if ( !v30 )
        goto LABEL_29;
      mGo = (int)v30->fields.mGo;
      HIDWORD(v30->fields.mGo) = v30->fields.updateAnchors;
      LODWORD(v30->fields.mTrans) = -1027735552;
      HIDWORD(v30->fields.mTrans) = mGo;
      v33 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(
        v33,
        (Il2CppObject *)v7,
        Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__1__,
        0LL);
      SlideFadeObject__SlideSortIn((SlideFadeObject_o *)v30, 580.0, v31, 0.0, v33, 0LL);
    }
    else
    {
      v38 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(
        v38,
        (Il2CppObject *)v7,
        Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__0__,
        0LL);
      if ( !v30 )
        goto LABEL_29;
      SlideFadeObject__SlideIn_23178696((SlideFadeObject_o *)v30, 580.0, v31, 0.0, v38, 0LL);
    }
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogListViewManager__SetAllActiveWidget(
        MaterialEventLogListViewManager_o *this,
        bool isActive,
        const MethodInfo *method)
{
  void *ObjectList; // x0
  __int64 v6; // x1
  int v7; // w8
  void *v8; // x19
  __int64 v9; // x22
  bool v10; // w20
  UnityEngine_Object_o *Component_srcLineSprite; // x21

  if ( (byte_4355784 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_B70694(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4355784 = 1;
  }
  ObjectList = MaterialEventLogListViewManager__get_ObjectList(this, (const MethodInfo *)isActive);
  if ( !ObjectList )
    goto LABEL_18;
  v7 = *((_DWORD *)ObjectList + 6);
  v8 = ObjectList;
  if ( v7 >= 1 )
  {
    v9 = 0LL;
    v10 = isActive;
    while ( 1 )
    {
      if ( v7 <= (unsigned int)v9 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      ObjectList = *(void **)(*((_QWORD *)v8 + 2) + 8 * v9 + 32);
      if ( !ObjectList )
        break;
      ObjectList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ObjectList, 0LL);
      if ( !ObjectList )
        break;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)ObjectList,
                                                          (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      ObjectList = (void *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)ObjectList & 1) != 0 )
      {
        if ( !Component_srcLineSprite )
          break;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, v10, 0LL);
      }
      v7 = *((_DWORD *)v8 + 6);
      if ( (int)++v9 >= v7 )
        return;
    }
LABEL_18:
    sub_B7076C(ObjectList, v6);
  }
}


void __fastcall MaterialEventLogListViewManager__SetFilterButtonImage(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  System_String_o **v4; // x9
  System_String_o **v5; // x20
  UnityEngine_Color_o v6; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_4355782 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_371/*"#FE4545"*/);
    sub_B70694(&StringLiteral_17249/*"btn_filter_on"*/);
    sub_B70694(&StringLiteral_357/*"#000000"*/);
    sub_B70694(&StringLiteral_17248/*"btn_filter"*/);
    byte_4355782 = 1;
  }
  *(_QWORD *)&v6.fields.r = 0LL;
  *(_QWORD *)&v6.fields.b = 0LL;
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_12;
  sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL);
  if ( !this->fields.filterSprite )
    goto LABEL_12;
  v4 = (System_String_o **)&StringLiteral_17248/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v4 = (System_String_o **)&StringLiteral_17249/*"btn_filter_on"*/;
  v5 = ((unsigned __int8)sort & 1) != 0
     ? (System_String_o **)&StringLiteral_357/*"#000000"*/
     : (System_String_o **)&StringLiteral_371/*"#FE4545"*/;
  UISprite__set_spriteName(this->fields.filterSprite, *v4, 0LL);
  *(_QWORD *)&v6.fields.r = 0LL;
  *(_QWORD *)&v6.fields.b = 0LL;
  UnityEngine_ColorUtility__TryParseHtmlString(*v5, &v6, 0LL);
  sort = (ListViewSort_o *)this->fields.sortKindLabel;
  if ( !sort )
LABEL_12:
    sub_B7076C(sort, method);
  UILabel__set_effectColor((UILabel_o *)sort, v6, 0LL);
}


bool __fastcall MaterialEventLogListViewManager__SetMode(
        MaterialEventLogListViewManager_o *this,
        int32_t mode,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  int32_t mIsDoing_Slide; // w8
  __int64 v8; // x1
  UnityEngine_Collider_o *mBoxCollider; // x0
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  bool result; // w0
  MaterialEventLogListViewManager_o *v13; // x0
  System_Action_o *v14; // x21
  System_Delegate_o *v15; // x0
  System_Action_o *v16; // x2
  MaterialEventLogListViewManager_o *v17; // x0
  int32_t v18; // w1
  System_Action_o *v19; // x2
  const MethodInfo *v20; // x3

  if ( (byte_435577A & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_MaterialEventLogListViewManager__SetMode_b__49_0__);
    byte_435577A = 1;
  }
  mIsDoing_Slide = this->fields.mIsDoing_Slide;
  if ( mode == 4 )
  {
    if ( this->fields.mIsDoing_Slide || this->fields.initMode != 2 )
      goto LABEL_14;
  }
  else
  {
    if ( mode == 3 )
    {
      if ( this->fields.mIsDoing_Slide )
      {
LABEL_14:
        ActionExtensions__Call(end_act, 0LL);
        return 0;
      }
      mIsDoing_Slide = this->fields.initMode;
    }
    if ( mIsDoing_Slide )
      goto LABEL_14;
  }
  this->fields.initMode = mode;
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  mBoxCollider = (UnityEngine_Collider_o *)this->fields.mBoxCollider;
  if ( !mBoxCollider )
    sub_B7076C(0LL, v8);
  UnityEngine_Collider__set_enabled(mBoxCollider, this->fields.isInput, 0LL);
  switch ( mode )
  {
    case 1:
    case 3:
      v11 = 2;
      goto LABEL_16;
    case 2:
      v11 = 3;
LABEL_16:
      v13 = this;
      goto LABEL_21;
    case 4:
      v14 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v14, (Il2CppObject *)this, Method_MaterialEventLogListViewManager__SetMode_b__49_0__, 0LL);
      v15 = System_Delegate__Combine((System_Delegate_o *)end_act, (System_Delegate_o *)v14, 0LL);
      v16 = (System_Action_o *)v15;
      if ( v15 && (System_Action_c *)v15->klass != System_Action_TypeInfo )
      {
        sub_B70A60(v15);
        MaterialEventLogListViewManager__RequestListObject(v17, v18, v19, v20);
      }
      else
      {
        v11 = 2;
        v13 = this;
LABEL_22:
        MaterialEventLogListViewManager__RequestListObject(v13, v11, v16, v10);
        result = 1;
      }
      break;
    default:
      v13 = this;
      v11 = 0;
LABEL_21:
      v16 = end_act;
      goto LABEL_22;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogListViewManager__SetObjectItem(
        MaterialEventLogListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  MaterialEventLogListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t selectedLimitCount; // w21
  int32_t initMode; // w20
  const MethodInfo *v9; // x4
  float v10; // s0
  int v11; // s1
  int32_t v14; // w1

  v5 = this;
  if ( (byte_4355779 & 1) == 0 )
  {
    this = (MaterialEventLogListViewManager_o *)sub_B70694(&MaterialEventLogListViewObject_TypeInfo);
    byte_4355779 = 1;
  }
  if ( !obj
    || (v6 = *(&MaterialEventLogListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (MaterialEventLogListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != MaterialEventLogListViewObject_TypeInfo )
  {
    sub_B7076C(this, obj);
  }
  selectedLimitCount = v5->fields.selectedLimitCount;
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v14 = 3;
  else
    v14 = 2;
  MaterialEventLogListViewObject__Init_32169768(
    (MaterialEventLogListViewObject_o *)obj,
    v14,
    0LL,
    v10,
    *(UnityEngine_Vector3_o *)&v11,
    selectedLimitCount,
    v9);
}


void __fastcall MaterialEventLogListViewManager__SetScrollPosY(
        MaterialEventLogListViewManager_o *this,
        float y,
        const MethodInfo *method)
{
  void *scrollView; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector2_o v7; // 0:s0.4,4:s1.4

  if ( (byte_4355775 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    byte_4355775 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL),
        GameObjectExtensions__SetLocalPositionY(gameObject, y, 0LL),
        (scrollView = this->fields.scrollView) == 0LL)
    || (scrollView = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL)) == 0LL
    || (scrollView = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                       (UnityEngine_GameObject_o *)scrollView,
                       (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___)) == 0LL )
  {
    sub_B7076C(scrollView, method);
  }
  v7.fields.x = *((float *)scrollView + 81);
  v7.fields.y = -y;
  UIPanel__set_clipOffset((UIPanel_o *)scrollView, v7, 0LL);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 0, 0, 0LL);
}


void __fastcall MaterialEventLogListViewManager__SetSort(
        MaterialEventLogListViewManager_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x1
  bool v10; // w1
  const MethodInfo *v11; // x1

  this->fields.sort = sort;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)sort,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  v10 = MaterialEventLogListViewManager__GetFilterCount(this, v9) < 1;
  ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v10, 0LL);
  MaterialEventLogListViewManager__CreateInfos(this, v11);
}


void __fastcall MaterialEventLogListViewManager__SetSortButtonImage(
        MaterialEventLogListViewManager_o *this,
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

  if ( (byte_4355785 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_17277/*"btn_sort_up"*/);
    sub_B70694(&StringLiteral_17361/*"btn_txt_up"*/);
    sub_B70694(&StringLiteral_17317/*"btn_txt_new"*/);
    sub_B70694(&StringLiteral_17307/*"btn_txt_down"*/);
    sub_B70694(&StringLiteral_17324/*"btn_txt_old"*/);
    sub_B70694(&StringLiteral_17274/*"btn_sort_down"*/);
    byte_4355785 = 1;
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
          v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17324/*"btn_txt_old"*/ : &StringLiteral_17317/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v10, 0LL);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v11->fields.isAscendingOrder;
              v13 = (System_String_o **)&StringLiteral_17274/*"btn_sort_down"*/;
              v14 = (System_String_o **)&StringLiteral_17277/*"btn_sort_up"*/;
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
          v15 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17361/*"btn_txt_up"*/ : &StringLiteral_17307/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
          v16 = this->fields.sort;
          if ( v16 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v16->fields.isAscendingOrder;
              v13 = (System_String_o **)&StringLiteral_17277/*"btn_sort_up"*/;
              v14 = (System_String_o **)&StringLiteral_17274/*"btn_sort_down"*/;
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_36:
    sub_B7076C(sort, v4);
  }
}


void __fastcall MaterialEventLogListViewManager__SetValentineListDisplay(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v3; // x1
  struct UIPanel_o *basePanel; // x8
  __int64 v5; // x11
  MyRoomControl_o *v6; // x19

  if ( (byte_435577C & 1) == 0 )
  {
    sub_B70694(&MyRoomRootComponent_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_435577C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (basePanel = Instance->fields.basePanel) == 0LL
    || (v5 = *(&MyRoomRootComponent_TypeInfo->_2.bitflags2 + 1),
        *(&basePanel->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (MyRoomRootComponent_c *)basePanel->klass->_2.typeHierarchy[v5 - 1] != MyRoomRootComponent_TypeInfo
    || (v6 = *(MyRoomControl_o **)&basePanel->fields.updateAnchors) == 0LL )
  {
    sub_B7076C(Instance, v3);
  }
  if ( v6->fields.IsMaterialEventBack )
  {
    MyRoomControl__ValentineListChange(v6, 0, 0LL);
    MyRoomControl__EndMaterialEventBack(v6, 0LL);
  }
}


void __fastcall MaterialEventLogListViewManager__SortAscendingOrder(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct ListViewSort_o *v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *sort; // x8
  MaterialCollectionServantListViewManager_o *MaterialCollectionServantListViewManager; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  bool v18; // w1
  const MethodInfo *v19; // x1

  if ( (byte_4355783 & 1) == 0 )
  {
    sub_B70694(&Method_MaterialEventLogListViewManager_SortAscendingOrder__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4355783 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_MaterialEventLogListViewManager_SortAscendingOrder__;
    if ( (*((_BYTE *)Method_MaterialEventLogListViewManager_SortAscendingOrder__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B7069C(Method_MaterialEventLogListViewManager_SortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_B70678(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( sort )
    {
      sort->fields.isAscendingOrder ^= 1u;
      MaterialCollectionServantListViewManager = MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                                   (MaterialEventLogListViewManager_o *)v5,
                                                   v6);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v5 = (struct ListViewSort_o *)UnityEngine_Object__op_Inequality(
                                      (UnityEngine_Object_o *)MaterialCollectionServantListViewManager,
                                      0LL,
                                      0LL);
      if ( ((unsigned __int8)v5 & 1) != 0 )
      {
        if ( !MaterialCollectionServantListViewManager )
          goto LABEL_16;
        v15 = (System_Int32_array **)this->fields.sort;
        MaterialCollectionServantListViewManager->fields.sort = (struct ListViewSort_o *)v15;
        sub_B70630(
          (BattleServantConfConponent_o *)&MaterialCollectionServantListViewManager->fields.sort,
          v15,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14);
      }
      v5 = this->fields.sort;
      if ( v5 )
      {
        ListViewSort__Save(v5, 0LL);
        MaterialEventLogListViewManager__SortDummyData(this, v16);
        ((void (__fastcall *)(MaterialEventLogListViewManager_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
          this,
          this->klass->vtable._6_GetDragRoot.methodPtr);
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
        v18 = MaterialEventLogListViewManager__GetFilterCount(this, v17) < 1;
        ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v18, 0LL);
        MaterialEventLogListViewManager__CreateInfos(this, v19);
        return;
      }
    }
LABEL_16:
    sub_B7076C(v5, v6);
  }
}


void __fastcall MaterialEventLogListViewManager__SortDummyData(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  MaterialEventLogListViewManager_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 size; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  __int64 v7; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v8; // x26
  _QWORD *v9; // x8
  __int64 v10; // x11
  struct System_Collections_Generic_List_ListViewItem__o *v11; // x26
  __int64 v12; // x8
  __int64 v13; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v14; // x0
  const MethodInfo *v15; // x1
  int v16; // w22
  int v17; // w23
  int v18; // w20
  int v19; // w24
  struct ListViewSort_o *sort; // x8
  _BOOL4 isAscendingOrder; // w28
  ListViewItem_o *v22; // x0
  ListViewItem_o *v23; // x21
  int32_t v24; // w1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_4355787 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__Remove__);
    sub_B70694(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B70694(&System_Collections_Generic_List_MaterialEventLogListViewItem__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    this = (MaterialEventLogListViewManager_o *)sub_B70694(&MaterialEventLogListViewItem_TypeInfo);
    byte_4355787 = 1;
  }
  memset(&i, 0, sizeof(i));
  itemList = v2->fields.itemList;
  if ( !itemList )
    goto LABEL_38;
  size = itemList->fields._size;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_MaterialEventLogListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem___ctor__);
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  if ( (int)size >= 1 )
  {
    v7 = 4LL;
    while ( 1 )
    {
      v8 = v2->fields.itemList;
      if ( !v8 )
        break;
      if ( v7 - 4 >= (unsigned __int64)(unsigned int)v8->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v9 = (_QWORD *)*((_QWORD *)&v8->fields._items->obj.klass + v7);
      if ( !v9 )
        break;
      v10 = *(&MaterialEventLogListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*v9 + 300LL) < (unsigned int)v10
        || *(MaterialEventLogListViewItem_c **)(*(_QWORD *)(*v9 + 200LL) + 8 * v10 - 8) != MaterialEventLogListViewItem_TypeInfo )
      {
        break;
      }
      if ( *(MaterialEventLogListViewItem_c **)(*(_QWORD *)(*v9 + 200LL)
                                              + 8LL * *(&MaterialEventLogListViewItem_TypeInfo->_2.bitflags2 + 1)
                                              - 8) != MaterialEventLogListViewItem_TypeInfo )
        v9 = 0LL;
      if ( !v9[15] )
      {
        v11 = v2->fields.itemList;
        if ( !v11 )
          break;
        if ( v7 - 4 >= (unsigned __int64)(unsigned int)v11->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        if ( !v6 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v6,
          *((EventMissionProgressRequest_Argument_ProgressData_o **)&v11->fields._items->obj.klass + v7),
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      v12 = v7 - 3;
      ++v7;
      if ( v12 >= size )
        goto LABEL_21;
    }
LABEL_38:
    sub_B7076C(this, method);
  }
LABEL_21:
  if ( !v6 )
    goto LABEL_38;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v31,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v6,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = v31;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          v14,
          (WarBoardManager_TaskList_o *)i.fields.current,
          (const MethodInfo_3027034 *)Method_System_Collections_Generic_List_ListViewItem__Remove__) )
  {
    v14 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v2->fields.itemList;
    if ( !v14 )
      sub_B7076C(0LL, v13);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  this = (MaterialEventLogListViewManager_o *)MaterialEventLogListViewManager__GetFilterCount(v2, v15);
  if ( (int)this > 3 )
    v16 = 1;
  else
    v16 = 4 - (_DWORD)this;
  if ( v16 >= 1 )
  {
    v17 = 0;
    v18 = -(int)this;
    v19 = (_DWORD)this + 999;
    do
    {
      sort = v2->fields.sort;
      if ( !sort )
        goto LABEL_38;
      isAscendingOrder = sort->fields.isAscendingOrder;
      v22 = (ListViewItem_o *)sub_B70764(MaterialEventLogListViewItem_TypeInfo);
      v23 = v22;
      v24 = isAscendingOrder ? v19 + v17 : v18;
      ListViewItem___ctor_23967088(v22, v24, 0LL);
      v23[1].monitor = 0LL;
      LODWORD(v23[1].klass) = 5;
      sub_B70630((BattleServantConfConponent_o *)&v23[1].monitor, 0LL, v25, v26, v27, v28, v29, v30);
      this = (MaterialEventLogListViewManager_o *)v2->fields.itemList;
      if ( !this )
        goto LABEL_38;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      ++v17;
      --v18;
    }
    while ( v17 < v16 );
  }
  MaterialEventLogListViewManager__InitializeObjectPosition(v2, method);
}


bool __fastcall MaterialEventLogListViewManager__get_IsDoing_Slide(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.mIsDoing_Slide;
}


System_Collections_Generic_List_MaterialEventLogListViewObject__o *__fastcall MaterialEventLogListViewManager__get_ObjectList(
        MaterialEventLogListViewManager_o *this,
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

  if ( (byte_4355776 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___);
    sub_B70694(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_MaterialEventLogListViewObject__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4355776 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_MaterialEventLogListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_MaterialEventLogListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7076C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
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
        sub_B7076C(v7, v8);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___);
      if ( !v3 )
        sub_B7076C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_MaterialEventLogListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MaterialEventLogListViewObject__o *)v3;
}


void __fastcall MaterialEventLogListViewManager___c__DisplayClass50_0___ctor(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MaterialEventLogListViewManager___c__DisplayClass50_0___RequestListObject_b__0(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  struct MaterialEventLogListViewManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (_4__this->fields.mIsDoing_Slide = 0, !this->fields.__4__this) )
    sub_B7076C(this, method);
  MaterialEventLogListViewManager__SetMode(this->fields.__4__this, 2, this->fields.end_act, 0LL);
}


void __fastcall MaterialEventLogListViewManager___c__DisplayClass50_0___RequestListObject_b__1(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  struct MaterialEventLogListViewManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (_4__this->fields.mIsDoing_Slide = 0, !this->fields.__4__this) )
    sub_B7076C(this, method);
  MaterialEventLogListViewManager__SetMode(this->fields.__4__this, 2, this->fields.end_act, 0LL);
}


void __fastcall MaterialEventLogListViewManager___c__DisplayClass50_0___RequestListObject_b__2(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  System_Action_o *v4; // x21
  MaterialEventLogListViewManager_o *v5; // x20

  v2 = (Il2CppObject *)this;
  if ( (byte_434F3E4 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    this = (MaterialEventLogListViewManager___c__DisplayClass50_0_o *)sub_B70694(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__3__);
    byte_434F3E4 = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    goto LABEL_8;
  BYTE4(klass->vtable[1].method) = 0;
  v4 = (System_Action_o *)v2[2].klass;
  v5 = (MaterialEventLogListViewManager_o *)v2[1].klass;
  if ( !v4 )
  {
    v4 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v4,
      v2,
      Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__3__,
      0LL);
    v2[2].klass = (Il2CppClass *)v4;
    sub_B70630(&v2[2]);
  }
  if ( !v5 )
LABEL_8:
    sub_B7076C(this, method);
  MaterialEventLogListViewManager__SetMode(v5, 0, v4, 0LL);
}


void __fastcall MaterialEventLogListViewManager___c__DisplayClass50_0___RequestListObject_b__3(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}