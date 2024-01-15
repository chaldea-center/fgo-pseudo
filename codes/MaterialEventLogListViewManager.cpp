void __fastcall MaterialEventLogListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  MaterialEventLogListViewManager_c *v7; // x8
  ListViewSort_o *v8; // x19
  struct MaterialEventLogListViewManager_StaticFields *static_fields; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40FCC35 & 1) == 0 )
  {
    sub_B16FFC(&ListViewSort_TypeInfo, v1);
    sub_B16FFC(&MaterialEventLogListViewManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_8953/*"MaterialCollectionServant6"*/, v6);
    byte_40FCC35 = 1;
  }
  MaterialEventLogListViewManager_TypeInfo->static_fields->VL_LIST_POS_Y = -30.0;
  MaterialEventLogListViewManager_TypeInfo->static_fields->VL_ARRANGEMENT_PY = -102.0;
  v7 = MaterialEventLogListViewManager_TypeInfo;
  MaterialEventLogListViewManager_TypeInfo->static_fields->VL_SCROLLBAR_POS_Y = 70.0;
  v7->static_fields->VL_SCROLLBAR_HEIGHT = 320;
  v7->static_fields->VL_PANEL_WIDTH = 500;
  v7->static_fields->VL_PANEL_HEIGHT = 440;
  v7->static_fields->VL_PANEL_CENTER_Y = 30;
  v7->static_fields->NORMAL_LIST_POS_Y = -35.0;
  v7->static_fields->NORMAL_ARRANGEMENT_PY = -120.0;
  v7->static_fields->NORMAL_SCROLLBAR_POS_Y = 45.0;
  v7->static_fields->NORMAL_SCROLLBAR_BACK_HEIGHT = 400;
  v7->static_fields->NORMAL_SCROLLBAR_FORE_HEIGHT = 404;
  v7->static_fields->NORMAL_PANEL_WIDTH = 500;
  v7->static_fields->NORMAL_PANEL_HEIGHT = 500;
  v7->static_fields->NORMAL_PANEL_CENTER_Y = 0;
  v8 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v1, v2, v3, v4);
  ListViewSort___ctor_30208480(v8, (System_String_o *)StringLiteral_8953/*"MaterialCollectionServant6"*/, 27, 1, 0LL);
  static_fields = MaterialEventLogListViewManager_TypeInfo->static_fields;
  static_fields->EventLogservantSortInfo = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->EventLogservantSortInfo,
    (System_Int32_array **)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
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
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_BoxCollider_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UnityEngine_Collider_o *mBoxCollider; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  struct UIScrollView_o *scrollView; // x8
  ListViewSort_o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_40FCC1C & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, method);
    sub_B16FFC(&ListViewSort_TypeInfo, v3);
    byte_40FCC1C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (Component_srcLineSprite = (struct UnityEngine_BoxCollider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        gameObject,
                                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.mBoxCollider = Component_srcLineSprite,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.mBoxCollider,
          (System_Int32_array **)Component_srcLineSprite,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11),
        (mBoxCollider = (UnityEngine_Collider_o *)this->fields.mBoxCollider) == 0LL)
    || (UnityEngine_Collider__set_enabled(mBoxCollider, 0, 0LL), (scrollView = this->fields.scrollView) == 0LL) )
  {
    sub_B170D4();
  }
  BYTE1(scrollView->fields.scrollWheelFactor) = 0;
  v18 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v13, v14, v15, v16);
  ListViewSort___ctor(v18, 3, 1, 0LL);
  this->fields.sort = v18;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
}


void __fastcall MaterialEventLogListViewManager__Back(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  _BOOL4 issortButton; // w8
  struct ListViewSort_o **p_sort; // x19
  ListViewSort_o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  MaterialEventLogListViewManager_o *v17; // x0
  const MethodInfo *v18; // x1
  UnityEngine_Object_o *MaterialCollectionServantListViewManager; // x19
  _BOOL8 v20; // x0
  const MethodInfo *v21; // x1
  MaterialEventLogListViewManager_c *v22; // x0
  ListViewSort_o *EventLogservantSortInfo; // x8

  if ( (byte_40FCC31 & 1) == 0 )
  {
    sub_B16FFC(&ListViewSort_TypeInfo, method);
    sub_B16FFC(&MaterialEventLogListViewManager_TypeInfo, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40FCC31 = 1;
  }
  issortButton = this->fields.issortButton;
  p_sort = &this->fields.sort;
  if ( !issortButton )
  {
    if ( !*p_sort )
      goto LABEL_21;
    (*p_sort)->fields.isAscendingOrder = 1;
  }
  v10 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, method, v2, v3, v4);
  ListViewSort___ctor(v10, 3, 1, 0LL);
  *p_sort = v10;
  sub_B16F98((BattleServantConfConponent_o *)p_sort, (System_Int32_array **)v10, v11, v12, v13, v14, v15, v16);
  MaterialCollectionServantListViewManager = (UnityEngine_Object_o *)MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                                                       v17,
                                                                       v18);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v20 = UnityEngine_Object__op_Inequality(MaterialCollectionServantListViewManager, 0LL, 0LL);
  if ( v20 )
  {
    if ( !MaterialCollectionServantListViewManager )
      goto LABEL_21;
    MaterialCollectionServantListViewManager__EventLogSortListSave(
      (MaterialCollectionServantListViewManager_o *)v20,
      v21);
  }
  v22 = MaterialEventLogListViewManager_TypeInfo;
  if ( (BYTE3(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
    v22 = MaterialEventLogListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v22->static_fields->EventLogservantSortInfo;
  if ( EventLogservantSortInfo )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) == 0
      || v22->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v22),
          (EventLogservantSortInfo = MaterialEventLogListViewManager_TypeInfo->static_fields->EventLogservantSortInfo) != 0LL) )
    {
      ListViewSort__Save(EventLogservantSortInfo, 0LL);
      return;
    }
LABEL_21:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogListViewManager__CheckPlayableMaterial(
        MaterialEventLogListViewManager_o *this,
        int32_t servantId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  MaterialEventLogListViewObject_o *Component_srcLineSprite; // x0
  MaterialEventLogListViewObject_o *v13; // x22
  MaterialEventLogListViewItem_o *Item; // x0
  const MethodInfo *v15; // x2
  MaterialEventLogListViewItem_o *v16; // x21
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8
  bool v18; // w23
  struct MaterialEventLogListViewItem_Info_o *v19; // x8
  struct MaterialEventLogListViewItem_Info_o *v20; // x8
  unsigned int v21; // w9
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40FCC29 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, *(_QWORD *)&servantId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    byte_40FCC29 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  objectList = this->fields.objectList;
  this->fields.selectedLimitCount = limitCount;
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
    if ( !v23.fields.current )
      sub_B170D4();
    Component_srcLineSprite = (MaterialEventLogListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    (UnityEngine_GameObject_o *)v23.fields.current,
                                                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___);
    v13 = Component_srcLineSprite;
    if ( !Component_srcLineSprite )
      sub_B170D4();
    Item = MaterialEventLogListViewObject__GetItem(Component_srcLineSprite, 0LL);
    v16 = Item;
    if ( !Item )
      sub_B170D4();
    info_k__BackingField = Item->fields._info_k__BackingField;
    if ( info_k__BackingField && info_k__BackingField->fields.svt_id == servantId )
    {
      v18 = MaterialEventLogListViewItem__CheckPlayableMaterial(Item, limitCount, v15);
      MaterialEventLogListViewObject__SetEnableSelect(v13, v18, 0LL);
      v19 = v16->fields._info_k__BackingField;
      if ( v18 )
      {
        if ( !v19 )
          sub_B170D4();
        v19->fields.flag &= ~1u;
        v20 = v16->fields._info_k__BackingField;
        if ( !v20 )
          sub_B170D4();
        v21 = v20->fields.flag & 0xFFFFFFFB;
      }
      else
      {
        if ( !v19 )
          sub_B170D4();
        v19->fields.flag |= 1u;
        v20 = v16->fields._info_k__BackingField;
        if ( !v20 )
          sub_B170D4();
        v21 = v20->fields.flag | 4;
      }
      v20->fields.flag = v21;
    }
    else
    {
      MaterialEventLogListViewObject__SetEnableSelect(v13, 1, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall MaterialEventLogListViewManager__CreateInfs(
        MaterialEventLogListViewManager_o *this,
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
  __int64 v12; // x1
  WebViewManager_o *Instance; // x0
  UnityEngine_Object_o *basePanel; // x20
  __int64 v15; // x10
  UnityEngine_Object_o *monitor; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x21
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  __int64 v23; // x11
  EventMissionProgressRequest_Argument_ProgressData_o *v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x0
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FCC33 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_MaterialEventLogListViewItem_Info__TypeInfo, v8);
    sub_B16FFC(&MaterialEventLogListViewItem_TypeInfo, v9);
    sub_B16FFC(&MyRoomRootComponent_TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v12);
    byte_40FCC33 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  basePanel = (UnityEngine_Object_o *)Instance->fields.basePanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(basePanel, 0LL, 0LL) )
  {
    if ( basePanel )
    {
      v15 = *(&MyRoomRootComponent_TypeInfo->_2.bitflags2 + 1);
      if ( *(&basePanel->klass->_2.bitflags2 + 1) >= (unsigned int)v15 )
      {
        if ( (MyRoomRootComponent_c *)basePanel->klass->_2.typeHierarchy[v15 - 1] != MyRoomRootComponent_TypeInfo )
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
    if ( !UnityEngine_Object__op_Equality(basePanel, 0LL, 0LL) )
    {
      if ( !basePanel )
        goto LABEL_35;
      monitor = (UnityEngine_Object_o *)basePanel[2].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
      {
        v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_MaterialEventLogListViewItem_Info__TypeInfo, v17, v18, v19, v20);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v21,
          (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info___ctor__);
        itemSortList = this->fields.itemSortList;
        if ( itemSortList )
        {
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            &v32,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemSortList,
            (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v32,
                    (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
          {
            if ( v32.fields.current )
            {
              v23 = *(&MaterialEventLogListViewItem_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v32.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v23
                && (MaterialEventLogListViewItem_c *)v32.fields.current->klass->_2.typeHierarchy[v23 - 1] == MaterialEventLogListViewItem_TypeInfo )
              {
                v24 = (EventMissionProgressRequest_Argument_ProgressData_o *)v32.fields.current[7].monitor;
                if ( v24 )
                {
                  if ( !v21 )
                    sub_B170D4();
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v21,
                    v24,
                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__Add__);
                }
              }
            }
          }
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v32,
            (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          if ( monitor )
          {
            v31 = *(_QWORD *)&monitor[35].fields.m_CachedPtr;
            if ( v31 )
            {
              *(_QWORD *)(v31 + 144) = v21;
              sub_B16F98(
                (BattleServantConfConponent_o *)(v31 + 144),
                (System_Int32_array **)v21,
                v25,
                v26,
                v27,
                v28,
                v29,
                v30);
              return;
            }
          }
        }
LABEL_35:
        sub_B170D4();
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogListViewManager__CreateList(
        MaterialEventLogListViewManager_o *this,
        int32_t kind,
        System_Collections_Generic_List_MaterialEventLogListViewItem_Info__o *infs,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  int32_t size; // w8
  int v20; // w8
  unsigned __int64 v21; // x22
  signed __int64 v22; // x25
  __int64 v23; // x23
  System_Int32_array ***v24; // x24
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x0
  MaterialEventLogListViewItem_Info_o *v45; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL4 issortButton; // w21
  UnityEngine_GameObject_o *gameObject; // x20
  MaterialEventLogListViewManager_c *v49; // x8
  struct UIScrollView_o *scrollView; // x8
  __int64 v51; // x8
  __int64 v52; // x11
  __int64 v53; // x20
  struct UIScrollView_o *v54; // x8
  __int64 v55; // x8
  __int64 v56; // x11
  __int64 v57; // x20
  UnityEngine_GameObject_o *v58; // x0
  MaterialEventLogListViewManager_c *v59; // x8
  UnityEngine_GameObject_o *v60; // x21
  UIWidget_o *v61; // x0
  UIWidget_o *v62; // x0
  struct UIScrollView_o *v63; // x8
  UnityEngine_Object_o *v64; // x20
  MaterialEventLogListViewManager_c *v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  MaterialEventLogListViewManager_c *v72; // x0
  struct ListViewSort_o *EventLogservantSortInfo; // x1
  ListViewSort_o **p_sort; // x20
  MaterialEventLogListViewManager_o *v75; // x0
  const MethodInfo *v76; // x1
  MaterialCollectionServantListViewManager_o *MaterialCollectionServantListViewManager; // x21
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  ListViewSort_o *v84; // x1
  UILabel_o *emptyMessageLabel; // x20
  System_String_o *v86; // x0
  const MethodInfo *v87; // x1
  const MethodInfo *v88; // x1
  UnityEngine_GameObject_o *v89; // x0
  MaterialEventLogListViewManager_c *v90; // x8
  UnityEngine_GameObject_o *v91; // x21
  UIWidget_o *v92; // x0
  UIWidget_o *v93; // x0
  struct UIScrollView_o *v94; // x8
  UnityEngine_Object_o *v95; // x20
  MaterialEventLogListViewManager_c *v96; // x0
  const MethodInfo *v97; // x1
  bool v98; // w1

  if ( (byte_40FCC22 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, *(_QWORD *)&kind);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__, v8);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&MaterialEventLogListViewItem_TypeInfo, v10);
    sub_B16FFC(&MaterialEventLogListViewManager_TypeInfo, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&UIScrollBar_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_11843/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/, v14);
    byte_40FCC22 = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  ListViewManager__CheckSortButton((ListViewManager_o *)this, 0, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !infs )
    goto LABEL_102;
  size = infs->fields._size;
  if ( size > 3 )
    v20 = size + 1;
  else
    v20 = 4;
  if ( v20 > 0 )
  {
    v21 = 0LL;
    v22 = v20;
    do
    {
      v23 = sub_B170CC(MaterialEventLogListViewItem_TypeInfo, v15, v16, v17, v18);
      ListViewItem___ctor_30173668((ListViewItem_o *)v23, v21, 0LL);
      *(_DWORD *)(v23 + 112) = kind;
      *(_QWORD *)(v23 + 120) = 0LL;
      v24 = (System_Int32_array ***)(v23 + 120);
      sub_B16F98((BattleServantConfConponent_o *)(v23 + 120), 0LL, v25, v26, v27, v28, v29, v30);
      if ( (__int64)v21 < infs->fields._size )
      {
        if ( v21 >= (unsigned int)infs->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( !v23 )
          goto LABEL_102;
        v37 = (System_Int32_array **)infs->fields._items->m_Items[v21];
        *v24 = v37;
        sub_B16F98((BattleServantConfConponent_o *)(v23 + 120), v37, v31, v32, v33, v34, v35, v36);
        v44 = *v24;
        if ( !*v24 )
          goto LABEL_102;
        v44[10] = (System_Int32_array *)v23;
        sub_B16F98((BattleServantConfConponent_o *)(v44 + 10), (System_Int32_array **)v23, v38, v39, v40, v41, v42, v43);
        if ( v21 >= (unsigned int)infs->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v45 = infs->fields._items->m_Items[v21];
        if ( !v45 )
          goto LABEL_102;
        this->fields.issortButton = v45->fields.listChange;
      }
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_102;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      ++v21;
    }
    while ( (__int64)v21 < v22 );
  }
  issortButton = this->fields.issortButton;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v49 = MaterialEventLogListViewManager_TypeInfo;
  if ( issortButton )
  {
    if ( (WORD1(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
      v49 = MaterialEventLogListViewManager_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionY(gameObject, v49->static_fields->VL_LIST_POS_Y, 0LL);
    ListViewManager__SetArrangementPitchY(
      (ListViewManager_o *)this,
      MaterialEventLogListViewManager_TypeInfo->static_fields->VL_ARRANGEMENT_PY,
      0LL);
    scrollView = this->fields.scrollView;
    if ( scrollView )
    {
      v51 = *(_QWORD *)&scrollView->fields.showScrollBars;
      if ( v51
        && (v52 = *(&UIScrollBar_TypeInfo->_2.bitflags2 + 1),
            *(unsigned __int8 *)(*(_QWORD *)v51 + 300LL) >= (unsigned int)v52) )
      {
        if ( *(UIScrollBar_c **)(*(_QWORD *)(*(_QWORD *)v51 + 200LL) + 8 * v52 - 8) == UIScrollBar_TypeInfo )
          v53 = v51;
        else
          v53 = 0LL;
      }
      else
      {
        v53 = 0LL;
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v53, 0LL, 0LL) )
      {
        if ( !v53 )
          goto LABEL_102;
        v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v53, 0LL);
        v59 = MaterialEventLogListViewManager_TypeInfo;
        v60 = v58;
        if ( (BYTE3(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
          v59 = MaterialEventLogListViewManager_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionY(v60, v59->static_fields->VL_SCROLLBAR_POS_Y, 0LL);
        v61 = *(UIWidget_o **)(v53 + 40);
        if ( !v61 )
          goto LABEL_102;
        UIWidget__set_height(v61, MaterialEventLogListViewManager_TypeInfo->static_fields->VL_SCROLLBAR_HEIGHT, 0LL);
        v62 = *(UIWidget_o **)(v53 + 48);
        if ( !v62 )
          goto LABEL_102;
        UIWidget__set_height(v62, MaterialEventLogListViewManager_TypeInfo->static_fields->VL_SCROLLBAR_HEIGHT, 0LL);
      }
      v63 = this->fields.scrollView;
      if ( !v63 )
        goto LABEL_102;
      v64 = *(UnityEngine_Object_o **)&v63->fields.mPlane.fields.m_Normal.fields.x;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v64, 0LL, 0LL) )
      {
        v65 = MaterialEventLogListViewManager_TypeInfo;
        if ( (BYTE3(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
          v65 = MaterialEventLogListViewManager_TypeInfo;
        }
        if ( !v64 )
          goto LABEL_102;
        ((void (__fastcall *)(UnityEngine_Object_o *, _QWORD, float, float, float, float))v64->klass[1]._2.genericContainerHandle)(
          v64,
          *(_QWORD *)&v64->klass[1]._2.instance_size,
          0.0,
          (float)v65->static_fields->VL_PANEL_CENTER_Y,
          (float)v65->static_fields->VL_PANEL_WIDTH,
          (float)v65->static_fields->VL_PANEL_HEIGHT);
      }
      ListViewManager__CheckSortButton((ListViewManager_o *)this, this->fields.issortButton, 0LL);
      v72 = MaterialEventLogListViewManager_TypeInfo;
      if ( (BYTE3(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
        v72 = MaterialEventLogListViewManager_TypeInfo;
      }
      EventLogservantSortInfo = v72->static_fields->EventLogservantSortInfo;
      this->fields.sort = EventLogservantSortInfo;
      p_sort = &this->fields.sort;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.sort,
        (System_Int32_array **)EventLogservantSortInfo,
        v66,
        v67,
        v68,
        v69,
        v70,
        v71);
      if ( this->fields.sort )
      {
        this->fields.sort->fields.listViewKind = 0;
        if ( *p_sort )
        {
          ListViewSort__Load(*p_sort, 0LL);
          MaterialCollectionServantListViewManager = MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                                       v75,
                                                       v76);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(
                 (UnityEngine_Object_o *)MaterialCollectionServantListViewManager,
                 0LL,
                 0LL) )
          {
            if ( !MaterialCollectionServantListViewManager )
              goto LABEL_102;
            v84 = *p_sort;
            MaterialCollectionServantListViewManager->fields.sort = *p_sort;
            sub_B16F98(
              (BattleServantConfConponent_o *)&MaterialCollectionServantListViewManager->fields.sort,
              (System_Int32_array **)v84,
              v78,
              v79,
              v80,
              v81,
              v82,
              v83);
          }
          emptyMessageLabel = this->fields.emptyMessageLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v86 = LocalizationManager__Get((System_String_o *)StringLiteral_11843/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/, 0LL);
          if ( emptyMessageLabel )
          {
            UILabel__set_text(emptyMessageLabel, v86, 0LL);
            MaterialEventLogListViewManager__SetFilterButtonImage(this, v87);
            MaterialEventLogListViewManager__SortDummyData(this, v88);
            goto LABEL_99;
          }
        }
      }
    }
LABEL_102:
    sub_B170D4();
  }
  if ( (WORD1(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
    v49 = MaterialEventLogListViewManager_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(gameObject, v49->static_fields->NORMAL_LIST_POS_Y, 0LL);
  ListViewManager__SetArrangementPitchY(
    (ListViewManager_o *)this,
    MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_ARRANGEMENT_PY,
    0LL);
  v54 = this->fields.scrollView;
  if ( !v54 )
    goto LABEL_102;
  v55 = *(_QWORD *)&v54->fields.showScrollBars;
  if ( v55
    && (v56 = *(&UIScrollBar_TypeInfo->_2.bitflags2 + 1),
        *(unsigned __int8 *)(*(_QWORD *)v55 + 300LL) >= (unsigned int)v56) )
  {
    if ( *(UIScrollBar_c **)(*(_QWORD *)(*(_QWORD *)v55 + 200LL) + 8 * v56 - 8) == UIScrollBar_TypeInfo )
      v57 = v55;
    else
      v57 = 0LL;
  }
  else
  {
    v57 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v57, 0LL, 0LL) )
  {
    if ( !v57 )
      goto LABEL_102;
    v89 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v57, 0LL);
    v90 = MaterialEventLogListViewManager_TypeInfo;
    v91 = v89;
    if ( (BYTE3(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
      v90 = MaterialEventLogListViewManager_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionY(v91, v90->static_fields->NORMAL_SCROLLBAR_POS_Y, 0LL);
    v92 = *(UIWidget_o **)(v57 + 40);
    if ( !v92 )
      goto LABEL_102;
    UIWidget__set_height(
      v92,
      MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_SCROLLBAR_BACK_HEIGHT,
      0LL);
    v93 = *(UIWidget_o **)(v57 + 48);
    if ( !v93 )
      goto LABEL_102;
    UIWidget__set_height(
      v93,
      MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_SCROLLBAR_FORE_HEIGHT,
      0LL);
  }
  v94 = this->fields.scrollView;
  if ( !v94 )
    goto LABEL_102;
  v95 = *(UnityEngine_Object_o **)&v94->fields.mPlane.fields.m_Normal.fields.x;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v95, 0LL, 0LL) )
  {
    v96 = MaterialEventLogListViewManager_TypeInfo;
    if ( (BYTE3(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
      v96 = MaterialEventLogListViewManager_TypeInfo;
    }
    if ( !v95 )
      goto LABEL_102;
    ((void (__fastcall *)(UnityEngine_Object_o *, _QWORD, float, float, float, float))v95->klass[1]._2.genericContainerHandle)(
      v95,
      *(_QWORD *)&v95->klass[1]._2.instance_size,
      0.0,
      (float)v96->static_fields->NORMAL_PANEL_CENTER_Y,
      (float)v96->static_fields->NORMAL_PANEL_WIDTH,
      (float)v96->static_fields->NORMAL_PANEL_HEIGHT);
  }
LABEL_99:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  if ( this->fields.issortButton )
  {
    v98 = MaterialEventLogListViewManager__GetFilterCount(this, v97) < 1;
    ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v98, 0LL);
  }
  MaterialEventLogListViewManager__CreateInfs(this, v97);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
}


void __fastcall MaterialEventLogListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialEventLogListViewManager_c *v2; // x0
  ListViewSort_o *EventLogservantSortInfo; // x0

  if ( (byte_40FCC1D & 1) == 0 )
  {
    sub_B16FFC(&MaterialEventLogListViewManager_TypeInfo, v1);
    byte_40FCC1D = 1;
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
    sub_B170D4();
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
  const MethodInfo *v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **sort; // x1
  const MethodInfo *v17; // x1
  bool v18; // w1
  ListViewSort_o *v19; // x0
  const MethodInfo *v20; // x1

  if ( (byte_40FCC2C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isDecide);
    byte_40FCC2C = 1;
  }
  eventLogServantSortSelectMenu = this->fields.eventLogServantSortSelectMenu;
  if ( !eventLogServantSortSelectMenu )
    goto LABEL_14;
  MaterialEventLogServantSortSelectMenu__Close(eventLogServantSortSelectMenu, 0LL);
  MaterialCollectionServantListViewManager = MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                               v6,
                                               v7);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)MaterialCollectionServantListViewManager, 0LL, 0LL) )
  {
    if ( !MaterialCollectionServantListViewManager )
      goto LABEL_14;
    sort = (System_Int32_array **)this->fields.sort;
    MaterialCollectionServantListViewManager->fields.sort = (struct ListViewSort_o *)sort;
    sub_B16F98(
      (BattleServantConfConponent_o *)&MaterialCollectionServantListViewManager->fields.sort,
      sort,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( isDecide )
  {
    MaterialEventLogListViewManager__SortDummyData(this, v9);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    v18 = MaterialEventLogListViewManager__GetFilterCount(this, v17) < 1;
    ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v18, 0LL);
    v19 = this->fields.sort;
    if ( v19 )
    {
      ListViewSort__Save(v19, 0LL);
      MaterialEventLogListViewManager__CreateInfs(this, v20);
      goto LABEL_13;
    }
LABEL_14:
    sub_B170D4();
  }
LABEL_13:
  MaterialEventLogListViewManager__SetFilterButtonImage(this, v9);
}


void __fastcall MaterialEventLogListViewManager__EventLogSortKind(
        MaterialEventLogListViewManager_o *this,
        MaterialEventLogServantSortSelectMenu_o *eventLogServantSortSelectMenu,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  ListViewSort_o *sort; // x21
  MaterialEventLogServantSortSelectMenu_CallbackFunc_o *v9; // x22

  if ( (byte_40FCC2A & 1) == 0 )
  {
    sub_B16FFC(&MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo, eventLogServantSortSelectMenu);
    sub_B16FFC(&Method_MaterialEventLogListViewManager_EndEventLogSortKind__, v7);
    byte_40FCC2A = 1;
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
      Method_MaterialEventLogListViewManager_EndEventLogSortKind__,
      0LL);
    if ( !eventLogServantSortSelectMenu )
      sub_B170D4();
    MaterialEventLogServantSortSelectMenu__Open(eventLogServantSortSelectMenu, 0, sort, v9, 0LL);
  }
}


int32_t __fastcall MaterialEventLogListViewManager__GetFilterCount(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  signed __int64 size; // x21
  int32_t v7; // w20
  unsigned __int64 v8; // x22
  ListViewItem_o *v9; // x0
  __int64 v10; // x10

  if ( (byte_40FCC2B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    sub_B16FFC(&MaterialEventLogListViewItem_TypeInfo, v4);
    byte_40FCC2B = 1;
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
      v9 = itemList->fields._items->m_Items[v8];
      if ( !v9 )
        break;
      v10 = *(&MaterialEventLogListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v9->klass->_2.bitflags2 + 1) < (unsigned int)v10
        || (MaterialEventLogListViewItem_c *)v9->klass->_2.typeHierarchy[v10 - 1] != MaterialEventLogListViewItem_TypeInfo )
      {
        break;
      }
      if ( v9[1].monitor )
        v7 += ((__int64 (__fastcall *)(ListViewItem_o *, struct ListViewSort_o *, void *))v9->klass->vtable._5_IsMatchFilter.method)(
                v9,
                this->fields.sort,
                v9->klass[1]._1.image) & 1;
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
PartyServantListViewItem_o *__fastcall MaterialEventLogListViewManager__GetItem(
        MaterialEventLogListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_40FCC23 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B16FFC(&PartyServantListViewItem_TypeInfo, v5);
    byte_40FCC23 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (PartyServantListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == PartyServantListViewItem_TypeInfo )
    return (PartyServantListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


MaterialCollectionServantListViewManager_o *__fastcall MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  UnityEngine_Object_o *basePanel; // x19
  bool v6; // w8
  MaterialCollectionServantListViewManager_o *result; // x0
  __int64 v8; // x10
  bool v9; // w8
  void *monitor; // x19
  bool v11; // w8

  if ( (byte_40FCC1F & 1) == 0 )
  {
    sub_B16FFC(&MyRoomRootComponent_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v2);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_40FCC1F = 1;
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
          return (MaterialCollectionServantListViewManager_o *)*((_QWORD *)monitor + 68);
LABEL_25:
        sub_B170D4();
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
    sub_B170D4();
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

  if ( (byte_40FCC1E & 1) == 0 )
  {
    sub_B16FFC(&MaterialEventLogListViewManager_TypeInfo, v1);
    byte_40FCC1E = 1;
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
    sub_B170D4();
  ListViewSort__InitLoad(EventLogservantSortInfo, 0LL);
}


void __fastcall MaterialEventLogListViewManager__InitializeObjectPosition(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *seed; // x20
  struct ListViewItemSeed_o *v5; // x8
  UnityEngine_Object_o *parent; // x20
  struct ListViewItemSeed_o *v7; // x8
  UnityEngine_GameObject_o *v8; // x0
  changeVColor_array *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  int max_length; // w8
  changeVColor_array *v13; // x19
  unsigned int v14; // w20
  MaterialEventLogListViewObject_o *v15; // x0

  if ( (byte_40FCC34 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_MaterialEventLogListViewObject___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FCC34 = 1;
  }
  seed = (UnityEngine_Object_o *)this->fields.seed;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(seed, 0LL, 0LL) )
  {
    v5 = this->fields.seed;
    if ( !v5 )
      goto LABEL_21;
    parent = (UnityEngine_Object_o *)v5->fields.parent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(parent, 0LL, 0LL) )
    {
      v7 = this->fields.seed;
      if ( !v7 )
        goto LABEL_21;
      v8 = v7->fields.parent;
      if ( !v8 )
        goto LABEL_21;
      v9 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
             v8,
             (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_MaterialEventLogListViewObject___);
      if ( !v9 )
        goto LABEL_21;
      max_length = v9->max_length;
      v13 = v9;
      if ( max_length >= 1 )
      {
        v14 = 0;
        while ( 1 )
        {
          if ( v14 >= max_length )
          {
            sub_B17100(v9, v10, v11);
            sub_B170A0();
          }
          v15 = (MaterialEventLogListViewObject_o *)v13->m_Items[v14];
          if ( !v15 )
            break;
          MaterialEventLogListViewObject__InitPosition(v15, 0LL);
          max_length = v13->max_length;
          if ( (int)++v14 >= max_length )
            return;
        }
LABEL_21:
        sub_B170D4();
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
  __int64 v4; // x1
  __int64 v5; // x1
  struct ListViewItem_o *linkItem; // x19
  __int64 v7; // x10
  void *monitor; // x20
  int v9; // w8

  if ( (byte_40FCC28 & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_MaterialEventLogListViewItem___, obj);
    sub_B16FFC(&MaterialEventLogListViewItem_TypeInfo, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FCC28 = 1;
  }
  if ( !obj
    || (linkItem = obj->fields.linkItem) == 0LL
    || (v7 = *(&MaterialEventLogListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v7)
    || (MaterialEventLogListViewItem_c *)linkItem->klass->_2.typeHierarchy[v7 - 1] != MaterialEventLogListViewItem_TypeInfo )
  {
    sub_B170D4();
  }
  monitor = linkItem[1].monitor;
  if ( monitor )
  {
    v9 = *((_DWORD *)monitor + 16);
    if ( (v9 & 1) == 0 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v9 = *((_DWORD *)monitor + 16);
    }
    if ( (v9 & 4) != 0 )
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
        *((System_Action_T__o **)monitor + 9),
        (BlankEarth_QAARotateEarthResponse_o *)linkItem,
        (const MethodInfo_2D39F2C *)Method_ActionExtensions_Call_MaterialEventLogListViewItem___);
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x19
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x1
  System_Collections_Generic_List_MaterialEventLogListViewObject__o *ObjectList; // x0
  int size; // w8
  System_Collections_Generic_List_MaterialEventLogListViewObject__o *v32; // x22
  unsigned int v33; // w24
  MaterialEventLogListViewObject_o *v34; // x0
  int32_t initMode; // w8
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  UIWidget_o *v38; // x21
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  float v43; // s8
  int mGo; // w9
  System_Action_o *v45; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v47; // x0
  UIWidget_o *Component_UIWidget; // x20
  float IntpTime_AutoResume; // s8
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  System_Action_o *v54; // x21
  System_Action_o *v55; // x20

  if ( (byte_40FCC26 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__, v10);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v11);
    sub_B16FFC(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__0__, v12);
    sub_B16FFC(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__1__, v13);
    sub_B16FFC(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__2__, v14);
    sub_B16FFC(&MaterialEventLogListViewManager___c__DisplayClass50_0_TypeInfo, v15);
    byte_40FCC26 = 1;
  }
  v16 = sub_B170CC(
          MaterialEventLogListViewManager___c__DisplayClass50_0_TypeInfo,
          *(_QWORD *)&mode,
          end_act,
          method,
          v4);
  MaterialEventLogListViewManager___c__DisplayClass50_0___ctor(
    (MaterialEventLogListViewManager___c__DisplayClass50_0_o *)v16,
    0LL);
  if ( !v16 )
    goto LABEL_29;
  *(_QWORD *)(v16 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v16 + 24) = end_act;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 24), (System_Int32_array **)end_act, v23, v24, v25, v26, v27, v28);
  ObjectList = MaterialEventLogListViewManager__get_ObjectList(this, v29);
  if ( !ObjectList )
    goto LABEL_29;
  size = ObjectList->fields._size;
  v32 = ObjectList;
  if ( size >= 1 )
  {
    v33 = 0;
    while ( 1 )
    {
      if ( size <= v33 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v34 = v32->fields._items->m_Items[v33];
      if ( !v34 )
        break;
      MaterialEventLogListViewObject__Init(v34, mode, -1, 0LL);
      size = v32->fields._size;
      if ( (int)++v33 >= size )
        goto LABEL_11;
    }
LABEL_29:
    sub_B170D4();
  }
LABEL_11:
  initMode = this->fields.initMode;
  if ( initMode == 4 )
  {
    this->fields.mIsDoing_Slide = 1;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_29;
    v47 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
    Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                           v47,
                           (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
    v54 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v50, v51, v52, v53);
    System_Action___ctor(
      v54,
      (Il2CppObject *)v16,
      Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__2__,
      0LL);
    if ( !Component_UIWidget )
      goto LABEL_29;
    SlideFadeObject__SlideOut_24820408(
      (SlideFadeObject_o *)Component_UIWidget,
      580.0,
      IntpTime_AutoResume,
      0.0,
      v54,
      0LL);
  }
  else if ( initMode == 3 )
  {
    this->fields.mIsDoing_Slide = 1;
    this->fields.isScrollRefresh = 1;
    v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v36 )
      goto LABEL_29;
    v37 = UnityEngine_GameObject__get_gameObject(v36, 0LL);
    v38 = GameObjectExtensions__SafeGetComponent_UIWidget_(
            v37,
            (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    v43 = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
    if ( this->fields.issortButton )
    {
      if ( !v38 )
        goto LABEL_29;
      mGo = (int)v38->fields.mGo;
      HIDWORD(v38->fields.mGo) = v38->fields.updateAnchors;
      LODWORD(v38->fields.mTrans) = -1027735552;
      HIDWORD(v38->fields.mTrans) = mGo;
      v45 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v39, v40, v41, v42);
      System_Action___ctor(
        v45,
        (Il2CppObject *)v16,
        Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__1__,
        0LL);
      SlideFadeObject__SlideSortIn((SlideFadeObject_o *)v38, 580.0, v43, 0.0, v45, 0LL);
    }
    else
    {
      v55 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v39, v40, v41, v42);
      System_Action___ctor(
        v55,
        (Il2CppObject *)v16,
        Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__0__,
        0LL);
      if ( !v38 )
        goto LABEL_29;
      SlideFadeObject__SlideIn_24819468((SlideFadeObject_o *)v38, 580.0, v43, 0.0, v55, 0LL);
    }
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v16 + 24), 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogListViewManager__SetAllActiveWidget(
        MaterialEventLogListViewManager_o *this,
        bool isActive,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_MaterialEventLogListViewObject__o *ObjectList; // x0
  int size; // w8
  System_Collections_Generic_List_MaterialEventLogListViewObject__o *v10; // x19
  __int64 v11; // x22
  bool v12; // w20
  UnityEngine_Component_o *v13; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Behaviour_o *Component_srcLineSprite; // x21

  if ( (byte_40FCC2F & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, isActive);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40FCC2F = 1;
  }
  ObjectList = MaterialEventLogListViewManager__get_ObjectList(this, (const MethodInfo *)isActive);
  if ( !ObjectList )
    goto LABEL_18;
  size = ObjectList->fields._size;
  v10 = ObjectList;
  if ( size >= 1 )
  {
    v11 = 0LL;
    v12 = isActive;
    while ( 1 )
    {
      if ( size <= (unsigned int)v11 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v13 = (UnityEngine_Component_o *)v10->fields._items->m_Items[v11];
      if ( !v13 )
        break;
      gameObject = UnityEngine_Component__get_gameObject(v13, 0LL);
      if ( !gameObject )
        break;
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
          break;
        UnityEngine_Behaviour__set_enabled(Component_srcLineSprite, v12, 0LL);
      }
      size = v10->fields._size;
      if ( (int)++v11 >= size )
        return;
    }
LABEL_18:
    sub_B170D4();
  }
}


void __fastcall MaterialEventLogListViewManager__SetFilterButtonImage(
        MaterialEventLogListViewManager_o *this,
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

  if ( (byte_40FCC2D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_360/*"#FE4545"*/, method);
    sub_B16FFC(&StringLiteral_16927/*"btn_filter_on"*/, v3);
    sub_B16FFC(&StringLiteral_347/*"#000000"*/, v4);
    sub_B16FFC(&StringLiteral_16926/*"btn_filter"*/, v5);
    byte_40FCC2D = 1;
  }
  *(_QWORD *)&v11.fields.r = 0LL;
  *(_QWORD *)&v11.fields.b = 0LL;
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_12;
  v7 = ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL);
  if ( !this->fields.filterSprite )
    goto LABEL_12;
  v8 = (System_String_o **)&StringLiteral_16926/*"btn_filter"*/;
  if ( !v7 )
    v8 = (System_String_o **)&StringLiteral_16927/*"btn_filter_on"*/;
  v9 = v7 ? (System_String_o **)&StringLiteral_347/*"#000000"*/ : (System_String_o **)&StringLiteral_360/*"#FE4545"*/;
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall MaterialEventLogListViewManager__SetMode(
        MaterialEventLogListViewManager_o *this,
        int32_t mode,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v7; // x1
  int32_t mIsDoing_Slide; // w8
  UnityEngine_Collider_o *mBoxCollider; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x3
  __int64 v13; // x4
  int32_t v14; // w1
  bool result; // w0
  MaterialEventLogListViewManager_o *v16; // x0
  System_Action_o *v17; // x21
  System_Delegate_o *v18; // x0
  System_Action_o *v19; // x2
  MaterialEventLogListViewManager_o *v20; // x0
  int32_t v21; // w1
  System_Action_o *v22; // x2
  const MethodInfo *v23; // x3

  if ( (byte_40FCC25 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_MaterialEventLogListViewManager__SetMode_b__49_0__, v7);
    byte_40FCC25 = 1;
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
    sub_B170D4();
  UnityEngine_Collider__set_enabled(mBoxCollider, this->fields.isInput, 0LL);
  switch ( mode )
  {
    case 1:
    case 3:
      v14 = 2;
      goto LABEL_16;
    case 2:
      v14 = 3;
LABEL_16:
      v16 = this;
      goto LABEL_21;
    case 4:
      v17 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_MaterialEventLogListViewManager__SetMode_b__49_0__, 0LL);
      v18 = System_Delegate__Combine((System_Delegate_o *)end_act, (System_Delegate_o *)v17, 0LL);
      v19 = (System_Action_o *)v18;
      if ( v18 && (System_Action_c *)v18->klass != System_Action_TypeInfo )
      {
        sub_B173C8(v18);
        MaterialEventLogListViewManager__RequestListObject(v20, v21, v22, v23);
      }
      else
      {
        v14 = 2;
        v16 = this;
LABEL_22:
        MaterialEventLogListViewManager__RequestListObject(v16, v14, v19, v12);
        result = 1;
      }
      break;
    default:
      v16 = this;
      v14 = 0;
LABEL_21:
      v19 = end_act;
      goto LABEL_22;
  }
  return result;
}


void __fastcall MaterialEventLogListViewManager__SetObjectItem(
        MaterialEventLogListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x10
  int32_t v7; // w1

  if ( (byte_40FCC24 & 1) == 0 )
  {
    sub_B16FFC(&MaterialEventLogListViewObject_TypeInfo, obj);
    byte_40FCC24 = 1;
  }
  if ( !obj
    || (v6 = *(&MaterialEventLogListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (MaterialEventLogListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != MaterialEventLogListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  if ( this->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  MaterialEventLogListViewObject__Init(
    (MaterialEventLogListViewObject_o *)obj,
    v7,
    this->fields.selectedLimitCount,
    0LL);
}


void __fastcall MaterialEventLogListViewManager__SetScrollPosY(
        MaterialEventLogListViewManager_o *this,
        float y,
        const MethodInfo *method)
{
  UnityEngine_Component_o *scrollView; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *v8; // x0
  UIPanel_o *Component_srcLineSprite; // x0
  UnityEngine_Vector2_o v10; // 0:s0.4,4:s1.4

  if ( (byte_40FCC20 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, method);
    byte_40FCC20 = 1;
  }
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (gameObject = UnityEngine_Component__get_gameObject(scrollView, 0LL),
        GameObjectExtensions__SetLocalPositionY(gameObject, y, 0LL),
        (v7 = (UnityEngine_Component_o *)this->fields.scrollView) == 0LL)
    || (v8 = UnityEngine_Component__get_gameObject(v7, 0LL)) == 0LL
    || (Component_srcLineSprite = (UIPanel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 v8,
                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___)) == 0LL )
  {
    sub_B170D4();
  }
  v10.fields.x = Component_srcLineSprite->fields.mClipOffset.fields.x;
  v10.fields.y = -y;
  UIPanel__set_clipOffset(Component_srcLineSprite, v10, 0LL);
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
  sub_B16F98(
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
  MaterialEventLogListViewManager__CreateInfs(this, v11);
}


void __fastcall MaterialEventLogListViewManager__SetSortButtonImage(
        MaterialEventLogListViewManager_o *this,
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

  if ( (byte_40FCC30 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16955/*"btn_sort_up"*/, v3);
    sub_B16FFC(&StringLiteral_17038/*"btn_txt_up"*/, v4);
    sub_B16FFC(&StringLiteral_16995/*"btn_txt_new"*/, v5);
    sub_B16FFC(&StringLiteral_16985/*"btn_txt_down"*/, v6);
    sub_B16FFC(&StringLiteral_17002/*"btn_txt_old"*/, v7);
    sub_B16FFC(&StringLiteral_16952/*"btn_sort_down"*/, v8);
    byte_40FCC30 = 1;
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
          v17 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17002/*"btn_txt_old"*/ : &StringLiteral_16995/*"btn_txt_new"*/);
          UISprite__set_spriteName(sortExplanationSprite, *v17, 0LL);
          v18 = this->fields.sort;
          if ( v18 )
          {
            v19 = this->fields.sortOrderSprite;
            if ( v19 )
            {
              isAscendingOrder = v18->fields.isAscendingOrder;
              v21 = (System_String_o **)&StringLiteral_16952/*"btn_sort_down"*/;
              v22 = (System_String_o **)&StringLiteral_16955/*"btn_sort_up"*/;
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
          v24 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17038/*"btn_txt_up"*/ : &StringLiteral_16985/*"btn_txt_down"*/);
          UISprite__set_spriteName(v23, *v24, 0LL);
          v25 = this->fields.sort;
          if ( v25 )
          {
            v19 = this->fields.sortOrderSprite;
            if ( v19 )
            {
              isAscendingOrder = v25->fields.isAscendingOrder;
              v21 = (System_String_o **)&StringLiteral_16955/*"btn_sort_up"*/;
              v22 = (System_String_o **)&StringLiteral_16952/*"btn_sort_down"*/;
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


void __fastcall MaterialEventLogListViewManager__SetValentineListDisplay(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  struct UIPanel_o *basePanel; // x8
  __int64 v5; // x11
  MyRoomControl_o *v6; // x19

  if ( (byte_40FCC27 & 1) == 0 )
  {
    sub_B16FFC(&MyRoomRootComponent_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_40FCC27 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (basePanel = Instance->fields.basePanel) == 0LL
    || (v5 = *(&MyRoomRootComponent_TypeInfo->_2.bitflags2 + 1),
        *(&basePanel->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (MyRoomRootComponent_c *)basePanel->klass->_2.typeHierarchy[v5 - 1] != MyRoomRootComponent_TypeInfo
    || (v6 = *(MyRoomControl_o **)&basePanel->fields.updateAnchors) == 0LL )
  {
    sub_B170D4();
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
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  MaterialEventLogListViewManager_o *v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *sort; // x8
  MaterialCollectionServantListViewManager_o *MaterialCollectionServantListViewManager; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **v16; // x1
  ListViewSort_o *v17; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  bool v20; // w1
  const MethodInfo *v21; // x1

  if ( (byte_40FCC2E & 1) == 0 )
  {
    sub_B16FFC(&Method_MaterialEventLogListViewManager_SortAscendingOrder__, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FCC2E = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_MaterialEventLogListViewManager_SortAscendingOrder__;
    if ( (*((_BYTE *)Method_MaterialEventLogListViewManager_SortAscendingOrder__ + 75) & 2) != 0 )
      v4 = (_QWORD *)sub_B17004(Method_MaterialEventLogListViewManager_SortAscendingOrder__);
    v5 = (System_Reflection_MethodBase_o *)sub_B16FE0(v4, v4[3]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    sort = this->fields.sort;
    if ( sort )
    {
      sort->fields.isAscendingOrder ^= 1u;
      MaterialCollectionServantListViewManager = MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                                   v6,
                                                   v7);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)MaterialCollectionServantListViewManager, 0LL, 0LL) )
      {
        if ( !MaterialCollectionServantListViewManager )
          goto LABEL_16;
        v16 = (System_Int32_array **)this->fields.sort;
        MaterialCollectionServantListViewManager->fields.sort = (struct ListViewSort_o *)v16;
        sub_B16F98(
          (BattleServantConfConponent_o *)&MaterialCollectionServantListViewManager->fields.sort,
          v16,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15);
      }
      v17 = this->fields.sort;
      if ( v17 )
      {
        ListViewSort__Save(v17, 0LL);
        MaterialEventLogListViewManager__SortDummyData(this, v18);
        ((void (__fastcall *)(MaterialEventLogListViewManager_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
          this,
          this->klass->vtable._6_GetDragRoot.methodPtr);
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
        v20 = MaterialEventLogListViewManager__GetFilterCount(this, v19) < 1;
        ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v20, 0LL);
        MaterialEventLogListViewManager__CreateInfs(this, v21);
        return;
      }
    }
LABEL_16:
    sub_B170D4();
  }
}


void __fastcall MaterialEventLogListViewManager__SortDummyData(
        MaterialEventLogListViewManager_o *this,
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 size; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x20
  __int64 v26; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v27; // x26
  _QWORD *v28; // x8
  __int64 v29; // x11
  struct System_Collections_Generic_List_ListViewItem__o *v30; // x26
  __int64 v31; // x8
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v32; // x0
  const MethodInfo *v33; // x1
  int32_t FilterCount; // w0
  const MethodInfo *v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  int v39; // w22
  int v40; // w23
  int v41; // w20
  int v42; // w24
  struct ListViewSort_o *sort; // x8
  _BOOL4 isAscendingOrder; // w28
  ListViewItem_o *v45; // x0
  ListViewItem_o *v46; // x21
  int32_t v47; // w1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct System_Collections_Generic_List_ListViewItem__o *v54; // x0
  System_Collections_Generic_List_Enumerator_T__o v55; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40FCC32 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Remove__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem___ctor__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v14);
    sub_B16FFC(&System_Collections_Generic_List_MaterialEventLogListViewItem__TypeInfo, v15);
    sub_B16FFC(&System_Collections_Generic_List_ListViewItem__TypeInfo, v16);
    sub_B16FFC(&MaterialEventLogListViewItem_TypeInfo, v17);
    byte_40FCC32 = 1;
  }
  memset(&i, 0, sizeof(i));
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_38;
  size = itemList->fields._size;
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_MaterialEventLogListViewItem__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem___ctor__);
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23,
                                                                                                  v24);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  if ( (int)size >= 1 )
  {
    v26 = 4LL;
    while ( 1 )
    {
      v27 = this->fields.itemList;
      if ( !v27 )
        break;
      if ( v26 - 4 >= (unsigned __int64)(unsigned int)v27->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v28 = (_QWORD *)*((_QWORD *)&v27->fields._items->obj.klass + v26);
      if ( !v28 )
        break;
      v29 = *(&MaterialEventLogListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*v28 + 300LL) < (unsigned int)v29
        || *(MaterialEventLogListViewItem_c **)(*(_QWORD *)(*v28 + 200LL) + 8 * v29 - 8) != MaterialEventLogListViewItem_TypeInfo )
      {
        break;
      }
      if ( *(MaterialEventLogListViewItem_c **)(*(_QWORD *)(*v28 + 200LL)
                                              + 8LL * *(&MaterialEventLogListViewItem_TypeInfo->_2.bitflags2 + 1)
                                              - 8) != MaterialEventLogListViewItem_TypeInfo )
        v28 = 0LL;
      if ( !v28[15] )
      {
        v30 = this->fields.itemList;
        if ( !v30 )
          break;
        if ( v26 - 4 >= (unsigned __int64)(unsigned int)v30->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( !v25 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v25,
          *((EventMissionProgressRequest_Argument_ProgressData_o **)&v30->fields._items->obj.klass + v26),
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      v31 = v26 - 3;
      ++v26;
      if ( v31 >= size )
        goto LABEL_21;
    }
LABEL_38:
    sub_B170D4();
  }
LABEL_21:
  if ( !v25 )
    goto LABEL_38;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v55,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v25,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = v55;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          v32,
          (WarBoardManager_TaskList_o *)i.fields.current,
          (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_ListViewItem__Remove__) )
  {
    v32 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.itemList;
    if ( !v32 )
      sub_B170D4();
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  FilterCount = MaterialEventLogListViewManager__GetFilterCount(this, v33);
  if ( FilterCount > 3 )
    v39 = 1;
  else
    v39 = 4 - FilterCount;
  if ( v39 >= 1 )
  {
    v40 = 0;
    v41 = -FilterCount;
    v42 = FilterCount + 999;
    do
    {
      sort = this->fields.sort;
      if ( !sort )
        goto LABEL_38;
      isAscendingOrder = sort->fields.isAscendingOrder;
      v45 = (ListViewItem_o *)sub_B170CC(MaterialEventLogListViewItem_TypeInfo, v35, v36, v37, v38);
      v46 = v45;
      v47 = isAscendingOrder ? v42 + v40 : v41;
      ListViewItem___ctor_30173668(v45, v47, 0LL);
      v46[1].monitor = 0LL;
      LODWORD(v46[1].klass) = 5;
      sub_B16F98((BattleServantConfConponent_o *)&v46[1].monitor, 0LL, v48, v49, v50, v51, v52, v53);
      v54 = this->fields.itemList;
      if ( !v54 )
        goto LABEL_38;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v54,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v46,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      ++v40;
      --v41;
    }
    while ( v40 < v39 );
  }
  MaterialEventLogListViewManager__InitializeObjectPosition(this, v35);
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

  if ( (byte_40FCC21 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_MaterialEventLogListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FCC21 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_MaterialEventLogListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MaterialEventLogListViewObject___ctor__);
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
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___);
      if ( !v14 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MaterialEventLogListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MaterialEventLogListViewObject__o *)v14;
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
    sub_B170D4();
  MaterialEventLogListViewManager__SetMode(this->fields.__4__this, 2, this->fields.end_act, 0LL);
}


void __fastcall MaterialEventLogListViewManager___c__DisplayClass50_0___RequestListObject_b__1(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  struct MaterialEventLogListViewManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (_4__this->fields.mIsDoing_Slide = 0, !this->fields.__4__this) )
    sub_B170D4();
  MaterialEventLogListViewManager__SetMode(this->fields.__4__this, 2, this->fields.end_act, 0LL);
}


void __fastcall MaterialEventLogListViewManager___c__DisplayClass50_0___RequestListObject_b__2(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct MaterialEventLogListViewManager_o *_4__this; // x8
  System_Action_o *_9__3; // x21
  MaterialEventLogListViewManager_o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40F6969 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__3__, v6);
    byte_40F6969 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  _4__this->fields.mIsDoing_Slide = 0;
  _9__3 = this->fields.__9__3;
  v9 = this->fields.__4__this;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__3,
      (System_Int32_array **)_9__3,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !v9 )
LABEL_8:
    sub_B170D4();
  MaterialEventLogListViewManager__SetMode(v9, 0, _9__3, 0LL);
}


void __fastcall MaterialEventLogListViewManager___c__DisplayClass50_0___RequestListObject_b__3(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}