void __fastcall MaterialEventLogListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  MaterialEventLogListViewManager_c *v5; // x8
  ListViewSort_o *v6; // x19
  struct MaterialEventLogListViewManager_StaticFields *static_fields; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4214DC6 & 1) == 0 )
  {
    sub_B0D8A4(&ListViewSort_TypeInfo, v1);
    sub_B0D8A4(&MaterialEventLogListViewManager_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_9006/*"MaterialCollectionServant6"*/, v4);
    byte_4214DC6 = 1;
  }
  MaterialEventLogListViewManager_TypeInfo->static_fields->VL_LIST_POS_Y = -30.0;
  MaterialEventLogListViewManager_TypeInfo->static_fields->VL_ARRANGEMENT_PY = -102.0;
  v5 = MaterialEventLogListViewManager_TypeInfo;
  MaterialEventLogListViewManager_TypeInfo->static_fields->VL_SCROLLBAR_POS_Y = 70.0;
  v5->static_fields->VL_SCROLLBAR_HEIGHT = 320;
  v5->static_fields->VL_PANEL_WIDTH = 500;
  v5->static_fields->VL_PANEL_HEIGHT = 440;
  v5->static_fields->VL_PANEL_CENTER_Y = 30;
  v5->static_fields->NORMAL_LIST_POS_Y = -35.0;
  v5->static_fields->NORMAL_ARRANGEMENT_PY = -120.0;
  v5->static_fields->NORMAL_SCROLLBAR_POS_Y = 45.0;
  v5->static_fields->NORMAL_SCROLLBAR_BACK_HEIGHT = 400;
  v5->static_fields->NORMAL_SCROLLBAR_FORE_HEIGHT = 404;
  v5->static_fields->NORMAL_PANEL_WIDTH = 500;
  v5->static_fields->NORMAL_PANEL_HEIGHT = 500;
  v5->static_fields->NORMAL_PANEL_CENTER_Y = 0;
  v6 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, v1, v2);
  ListViewSort___ctor_32823364(v6, (System_String_o *)StringLiteral_9006/*"MaterialCollectionServant6"*/, 27, 1, 0LL);
  static_fields = MaterialEventLogListViewManager_TypeInfo->static_fields;
  static_fields->EventLogservantSortInfo = v6;
  sub_B0D840(
    (BattleServantConfConponent_o *)&static_fields->EventLogservantSortInfo,
    (System_Int32_array **)v6,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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
  __int64 v12; // x1
  __int64 v13; // x2
  struct UIScrollView_o *scrollView; // x8
  ListViewSort_o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4214DAD & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, method);
    sub_B0D8A4(&ListViewSort_TypeInfo, v3);
    byte_4214DAD = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (Component_srcLineSprite = (struct UnityEngine_BoxCollider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        gameObject,
                                                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.mBoxCollider = Component_srcLineSprite,
        sub_B0D840(
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
    sub_B0D97C(gameObject);
  }
  BYTE1(scrollView->fields.scrollWheelFactor) = 0;
  v15 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, v12, v13);
  ListViewSort___ctor(v15, 3, 1, 0LL);
  this->fields.sort = v15;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
}


void __fastcall MaterialEventLogListViewManager__Back(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MaterialEventLogListViewManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  _BOOL4 issortButton; // w8
  BattleServantConfConponent_o *p_sort; // x19
  ListViewSort_o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  MaterialEventLogListViewManager_o *v15; // x0
  const MethodInfo *v16; // x1
  UnityEngine_Object_o *MaterialCollectionServantListViewManager; // x19
  MaterialEventLogListViewManager_c *v18; // x0
  ListViewSort_o *EventLogservantSortInfo; // x8

  v3 = this;
  if ( (byte_4214DC2 & 1) == 0 )
  {
    sub_B0D8A4(&ListViewSort_TypeInfo, method);
    sub_B0D8A4(&MaterialEventLogListViewManager_TypeInfo, v4);
    this = (MaterialEventLogListViewManager_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4214DC2 = 1;
  }
  issortButton = v3->fields.issortButton;
  p_sort = (BattleServantConfConponent_o *)&v3->fields.sort;
  if ( !issortButton )
  {
    if ( !p_sort->klass )
      goto LABEL_21;
    *((_BYTE *)&p_sort->klass->_1.this_arg.bits + 4) = 1;
  }
  v8 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, method, v2);
  ListViewSort___ctor(v8, 3, 1, 0LL);
  p_sort->klass = (BattleServantConfConponent_c *)v8;
  sub_B0D840(p_sort, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
  MaterialCollectionServantListViewManager = (UnityEngine_Object_o *)MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                                                       v15,
                                                                       v16);
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
      (MaterialCollectionServantListViewManager_o *)MaterialCollectionServantListViewManager,
      0LL);
  }
  v18 = MaterialEventLogListViewManager_TypeInfo;
  if ( (BYTE3(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
    v18 = MaterialEventLogListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v18->static_fields->EventLogservantSortInfo;
  if ( EventLogservantSortInfo )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) == 0
      || v18->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v18),
          (EventLogservantSortInfo = MaterialEventLogListViewManager_TypeInfo->static_fields->EventLogservantSortInfo) != 0LL) )
    {
      ListViewSort__Save(EventLogservantSortInfo, 0LL);
      return;
    }
LABEL_21:
    sub_B0D97C(this);
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
  const MethodInfo *v13; // x1
  MaterialEventLogListViewObject_o *v14; // x22
  MaterialEventLogListViewItem_o *Item; // x0
  const MethodInfo *v16; // x2
  MaterialEventLogListViewItem_o *v17; // x21
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8
  bool v19; // w23
  const MethodInfo *v20; // x2
  __int64 v21; // x0
  struct MaterialEventLogListViewItem_Info_o *v22; // x8
  struct MaterialEventLogListViewItem_Info_o *v23; // x8
  unsigned int v24; // w9
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4214DBA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, *(_QWORD *)&servantId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    byte_4214DBA = 1;
  }
  memset(&v26, 0, sizeof(v26));
  objectList = this->fields.objectList;
  this->fields.selectedLimitCount = limitCount;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v26.fields.current )
      sub_B0D97C(0LL);
    Component_srcLineSprite = (MaterialEventLogListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    (UnityEngine_GameObject_o *)v26.fields.current,
                                                                    (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___);
    v14 = Component_srcLineSprite;
    if ( !Component_srcLineSprite )
      sub_B0D97C(0LL);
    Item = MaterialEventLogListViewObject__GetItem(Component_srcLineSprite, v13);
    v17 = Item;
    if ( !Item )
      sub_B0D97C(0LL);
    info_k__BackingField = Item->fields._info_k__BackingField;
    if ( info_k__BackingField && info_k__BackingField->fields.svt_id == servantId )
    {
      v19 = MaterialEventLogListViewItem__CheckPlayableMaterial(Item, limitCount, v16);
      MaterialEventLogListViewObject__SetEnableSelect(v14, v19, v20);
      v22 = v17->fields._info_k__BackingField;
      if ( v19 )
      {
        if ( !v22 )
          sub_B0D97C(v21);
        v22->fields.flag &= ~1u;
        v23 = v17->fields._info_k__BackingField;
        if ( !v23 )
          sub_B0D97C(v21);
        v24 = v23->fields.flag & 0xFFFFFFFB;
      }
      else
      {
        if ( !v22 )
          sub_B0D97C(v21);
        v22->fields.flag |= 1u;
        v23 = v17->fields._info_k__BackingField;
        if ( !v23 )
          sub_B0D97C(v21);
        v24 = v23->fields.flag | 4;
      }
      v23->fields.flag = v24;
    }
    else
    {
      MaterialEventLogListViewObject__SetEnableSelect(v14, 1, v16);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  void *Instance; // x0
  UnityEngine_Object_o *v14; // x20
  __int64 v15; // x10
  UnityEngine_Object_o *monitor; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x21
  _BOOL8 v20; // x0
  __int64 v21; // x11
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4214DC4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_MaterialEventLogListViewItem_Info__TypeInfo, v8);
    sub_B0D8A4(&MaterialEventLogListViewItem_TypeInfo, v9);
    sub_B0D8A4(&MyRoomRootComponent_TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v12);
    byte_4214DC4 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  v14 = (UnityEngine_Object_o *)*((_QWORD *)Instance + 3);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v14, 0LL, 0LL) )
  {
    if ( v14 )
    {
      v15 = *(&MyRoomRootComponent_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v14->klass->_2.bitflags2 + 1) >= (unsigned int)v15 )
      {
        if ( (MyRoomRootComponent_c *)v14->klass->_2.typeHierarchy[v15 - 1] != MyRoomRootComponent_TypeInfo )
          v14 = 0LL;
      }
      else
      {
        v14 = 0LL;
      }
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = (void *)UnityEngine_Object__op_Equality(v14, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      if ( !v14 )
        goto LABEL_35;
      monitor = (UnityEngine_Object_o *)v14[2].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
      {
        v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_MaterialEventLogListViewItem_Info__TypeInfo, v17, v18);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v19,
          (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info___ctor__);
        Instance = this->fields.itemSortList;
        if ( Instance )
        {
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            &v29,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
            (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          while ( 1 )
          {
            v20 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v29,
                    (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v20 )
              break;
            if ( v29.fields.current )
            {
              v21 = *(&MaterialEventLogListViewItem_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v29.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v21
                && (MaterialEventLogListViewItem_c *)v29.fields.current->klass->_2.typeHierarchy[v21 - 1] == MaterialEventLogListViewItem_TypeInfo )
              {
                v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)v29.fields.current[7].monitor;
                if ( v22 )
                {
                  if ( !v19 )
                    sub_B0D97C(v20);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v19,
                    v22,
                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__Add__);
                }
              }
            }
          }
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v29,
            (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          if ( monitor )
          {
            Instance = *(void **)&monitor[35].fields.m_CachedPtr;
            if ( Instance )
            {
              *((_QWORD *)Instance + 18) = v19;
              sub_B0D840(
                (BattleServantConfConponent_o *)((char *)Instance + 144),
                (System_Int32_array **)v19,
                v23,
                v24,
                v25,
                v26,
                v27,
                v28);
              return;
            }
          }
        }
LABEL_35:
        sub_B0D97C(Instance);
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
  void *itemList; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  int32_t size; // w8
  int v19; // w8
  unsigned __int64 v20; // x22
  signed __int64 v21; // x25
  __int64 v22; // x23
  System_Int32_array ***v23; // x24
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  MaterialEventLogListViewItem_Info_o *v43; // x8
  _BOOL4 issortButton; // w21
  UnityEngine_GameObject_o *gameObject; // x20
  MaterialEventLogListViewManager_c *v46; // x8
  struct UIScrollView_o *scrollView; // x8
  __int64 v48; // x8
  __int64 v49; // x11
  __int64 v50; // x20
  struct UIScrollView_o *v51; // x8
  __int64 v52; // x8
  __int64 v53; // x11
  __int64 v54; // x20
  UnityEngine_GameObject_o *v55; // x0
  MaterialEventLogListViewManager_c *v56; // x8
  UnityEngine_GameObject_o *v57; // x21
  struct UIScrollView_o *v58; // x8
  UnityEngine_Object_o *v59; // x20
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  MaterialEventLogListViewManager_c *v66; // x0
  struct ListViewSort_o *EventLogservantSortInfo; // x1
  struct ListViewSort_o **p_sort; // x20
  MaterialEventLogListViewManager_o *v69; // x0
  const MethodInfo *v70; // x1
  MaterialCollectionServantListViewManager_o *MaterialCollectionServantListViewManager; // x21
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Int32_array **v78; // x1
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v80; // x1
  const MethodInfo *v81; // x1
  UnityEngine_GameObject_o *v82; // x0
  MaterialEventLogListViewManager_c *v83; // x8
  UnityEngine_GameObject_o *v84; // x21
  struct UIScrollView_o *v85; // x8
  UnityEngine_Object_o *v86; // x20
  const MethodInfo *v87; // x1
  bool v88; // w1

  if ( (byte_4214DB3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__, v8);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v9);
    sub_B0D8A4(&MaterialEventLogListViewItem_TypeInfo, v10);
    sub_B0D8A4(&MaterialEventLogListViewManager_TypeInfo, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&UIScrollBar_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_11914/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/, v14);
    byte_4214DB3 = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  ListViewManager__CheckSortButton((ListViewManager_o *)this, 0, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !infs )
    goto LABEL_102;
  size = infs->fields._size;
  if ( size > 3 )
    v19 = size + 1;
  else
    v19 = 4;
  if ( v19 > 0 )
  {
    v20 = 0LL;
    v21 = v19;
    do
    {
      v22 = sub_B0D974(MaterialEventLogListViewItem_TypeInfo, v16, v17);
      ListViewItem___ctor_23700744((ListViewItem_o *)v22, v20, 0LL);
      *(_DWORD *)(v22 + 112) = kind;
      *(_QWORD *)(v22 + 120) = 0LL;
      v23 = (System_Int32_array ***)(v22 + 120);
      sub_B0D840((BattleServantConfConponent_o *)(v22 + 120), 0LL, v24, v25, v26, v27, v28, v29);
      if ( (__int64)v20 < infs->fields._size )
      {
        if ( v20 >= (unsigned int)infs->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        if ( !v22 )
          goto LABEL_102;
        v36 = (System_Int32_array **)infs->fields._items->m_Items[v20];
        *v23 = v36;
        sub_B0D840((BattleServantConfConponent_o *)(v22 + 120), v36, v30, v31, v32, v33, v34, v35);
        itemList = *v23;
        if ( !*v23 )
          goto LABEL_102;
        *((_QWORD *)itemList + 11) = v22;
        sub_B0D840(
          (BattleServantConfConponent_o *)((char *)itemList + 88),
          (System_Int32_array **)v22,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42);
        if ( v20 >= (unsigned int)infs->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v43 = infs->fields._items->m_Items[v20];
        if ( !v43 )
          goto LABEL_102;
        this->fields.issortButton = v43->fields.listChange;
      }
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_102;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      ++v20;
    }
    while ( (__int64)v20 < v21 );
  }
  issortButton = this->fields.issortButton;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v46 = MaterialEventLogListViewManager_TypeInfo;
  if ( issortButton )
  {
    if ( (WORD1(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
      v46 = MaterialEventLogListViewManager_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionY(gameObject, v46->static_fields->VL_LIST_POS_Y, 0LL);
    ListViewManager__SetArrangementPitchY(
      (ListViewManager_o *)this,
      MaterialEventLogListViewManager_TypeInfo->static_fields->VL_ARRANGEMENT_PY,
      0LL);
    scrollView = this->fields.scrollView;
    if ( scrollView )
    {
      v48 = *(_QWORD *)&scrollView->fields.showScrollBars;
      if ( v48
        && (v49 = *(&UIScrollBar_TypeInfo->_2.bitflags2 + 1),
            *(unsigned __int8 *)(*(_QWORD *)v48 + 300LL) >= (unsigned int)v49) )
      {
        if ( *(UIScrollBar_c **)(*(_QWORD *)(*(_QWORD *)v48 + 200LL) + 8 * v49 - 8) == UIScrollBar_TypeInfo )
          v50 = v48;
        else
          v50 = 0LL;
      }
      else
      {
        v50 = 0LL;
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      itemList = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v50, 0LL, 0LL);
      if ( ((unsigned __int8)itemList & 1) != 0 )
      {
        if ( !v50 )
          goto LABEL_102;
        v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v50, 0LL);
        v56 = MaterialEventLogListViewManager_TypeInfo;
        v57 = v55;
        if ( (BYTE3(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
          v56 = MaterialEventLogListViewManager_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionY(v57, v56->static_fields->VL_SCROLLBAR_POS_Y, 0LL);
        itemList = *(void **)(v50 + 40);
        if ( !itemList )
          goto LABEL_102;
        UIWidget__set_height(
          (UIWidget_o *)itemList,
          MaterialEventLogListViewManager_TypeInfo->static_fields->VL_SCROLLBAR_HEIGHT,
          0LL);
        itemList = *(void **)(v50 + 48);
        if ( !itemList )
          goto LABEL_102;
        UIWidget__set_height(
          (UIWidget_o *)itemList,
          MaterialEventLogListViewManager_TypeInfo->static_fields->VL_SCROLLBAR_HEIGHT,
          0LL);
      }
      v58 = this->fields.scrollView;
      if ( !v58 )
        goto LABEL_102;
      v59 = *(UnityEngine_Object_o **)&v58->fields.mPlane.fields.m_Normal.fields.x;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v59, 0LL, 0LL) )
      {
        itemList = MaterialEventLogListViewManager_TypeInfo;
        if ( (BYTE3(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
          itemList = MaterialEventLogListViewManager_TypeInfo;
        }
        if ( !v59 )
          goto LABEL_102;
        ((void (__fastcall *)(UnityEngine_Object_o *, _QWORD, float, float, float, float))v59->klass[1]._2.genericContainerHandle)(
          v59,
          *(_QWORD *)&v59->klass[1]._2.instance_size,
          0.0,
          (float)*(int *)(*((_QWORD *)itemList + 23) + 24LL),
          (float)*(int *)(*((_QWORD *)itemList + 23) + 16LL),
          (float)*(int *)(*((_QWORD *)itemList + 23) + 20LL));
      }
      ListViewManager__CheckSortButton((ListViewManager_o *)this, this->fields.issortButton, 0LL);
      v66 = MaterialEventLogListViewManager_TypeInfo;
      if ( (BYTE3(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
        v66 = MaterialEventLogListViewManager_TypeInfo;
      }
      EventLogservantSortInfo = v66->static_fields->EventLogservantSortInfo;
      this->fields.sort = EventLogservantSortInfo;
      p_sort = &this->fields.sort;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.sort,
        (System_Int32_array **)EventLogservantSortInfo,
        v60,
        v61,
        v62,
        v63,
        v64,
        v65);
      if ( this->fields.sort )
      {
        this->fields.sort->fields.listViewKind = 0;
        itemList = *p_sort;
        if ( *p_sort )
        {
          ListViewSort__Load((ListViewSort_o *)itemList, 0LL);
          MaterialCollectionServantListViewManager = MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                                       v69,
                                                       v70);
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
            v78 = (System_Int32_array **)*p_sort;
            MaterialCollectionServantListViewManager->fields.sort = *p_sort;
            sub_B0D840(
              (BattleServantConfConponent_o *)&MaterialCollectionServantListViewManager->fields.sort,
              v78,
              v72,
              v73,
              v74,
              v75,
              v76,
              v77);
          }
          emptyMessageLabel = this->fields.emptyMessageLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          itemList = LocalizationManager__Get((System_String_o *)StringLiteral_11914/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/, 0LL);
          if ( emptyMessageLabel )
          {
            UILabel__set_text(emptyMessageLabel, (System_String_o *)itemList, 0LL);
            MaterialEventLogListViewManager__SetFilterButtonImage(this, v80);
            MaterialEventLogListViewManager__SortDummyData(this, v81);
            goto LABEL_99;
          }
        }
      }
    }
LABEL_102:
    sub_B0D97C(itemList);
  }
  if ( (WORD1(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
    v46 = MaterialEventLogListViewManager_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(gameObject, v46->static_fields->NORMAL_LIST_POS_Y, 0LL);
  ListViewManager__SetArrangementPitchY(
    (ListViewManager_o *)this,
    MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_ARRANGEMENT_PY,
    0LL);
  v51 = this->fields.scrollView;
  if ( !v51 )
    goto LABEL_102;
  v52 = *(_QWORD *)&v51->fields.showScrollBars;
  if ( v52
    && (v53 = *(&UIScrollBar_TypeInfo->_2.bitflags2 + 1),
        *(unsigned __int8 *)(*(_QWORD *)v52 + 300LL) >= (unsigned int)v53) )
  {
    if ( *(UIScrollBar_c **)(*(_QWORD *)(*(_QWORD *)v52 + 200LL) + 8 * v53 - 8) == UIScrollBar_TypeInfo )
      v54 = v52;
    else
      v54 = 0LL;
  }
  else
  {
    v54 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  itemList = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v54, 0LL, 0LL);
  if ( ((unsigned __int8)itemList & 1) != 0 )
  {
    if ( !v54 )
      goto LABEL_102;
    v82 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v54, 0LL);
    v83 = MaterialEventLogListViewManager_TypeInfo;
    v84 = v82;
    if ( (BYTE3(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
      v83 = MaterialEventLogListViewManager_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionY(v84, v83->static_fields->NORMAL_SCROLLBAR_POS_Y, 0LL);
    itemList = *(void **)(v54 + 40);
    if ( !itemList )
      goto LABEL_102;
    UIWidget__set_height(
      (UIWidget_o *)itemList,
      MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_SCROLLBAR_BACK_HEIGHT,
      0LL);
    itemList = *(void **)(v54 + 48);
    if ( !itemList )
      goto LABEL_102;
    UIWidget__set_height(
      (UIWidget_o *)itemList,
      MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_SCROLLBAR_FORE_HEIGHT,
      0LL);
  }
  v85 = this->fields.scrollView;
  if ( !v85 )
    goto LABEL_102;
  v86 = *(UnityEngine_Object_o **)&v85->fields.mPlane.fields.m_Normal.fields.x;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v86, 0LL, 0LL) )
  {
    itemList = MaterialEventLogListViewManager_TypeInfo;
    if ( (BYTE3(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
      itemList = MaterialEventLogListViewManager_TypeInfo;
    }
    if ( !v86 )
      goto LABEL_102;
    ((void (__fastcall *)(UnityEngine_Object_o *, _QWORD, float, float, float, float))v86->klass[1]._2.genericContainerHandle)(
      v86,
      *(_QWORD *)&v86->klass[1]._2.instance_size,
      0.0,
      (float)*(int *)(*((_QWORD *)itemList + 23) + 56LL),
      (float)*(int *)(*((_QWORD *)itemList + 23) + 48LL),
      (float)*(int *)(*((_QWORD *)itemList + 23) + 52LL));
  }
LABEL_99:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  if ( this->fields.issortButton )
  {
    v88 = MaterialEventLogListViewManager__GetFilterCount(this, v87) < 1;
    ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v88, 0LL);
  }
  MaterialEventLogListViewManager__CreateInfs(this, v87);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
}


void __fastcall MaterialEventLogListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialEventLogListViewManager_c *v2; // x0
  ListViewSort_o *EventLogservantSortInfo; // x0

  if ( (byte_4214DAE & 1) == 0 )
  {
    sub_B0D8A4(&MaterialEventLogListViewManager_TypeInfo, v1);
    byte_4214DAE = 1;
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
    sub_B0D97C(0LL);
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
  const MethodInfo *v19; // x1

  if ( (byte_4214DBD & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, isDecide);
    byte_4214DBD = 1;
  }
  eventLogServantSortSelectMenu = this->fields.eventLogServantSortSelectMenu;
  if ( !eventLogServantSortSelectMenu )
    goto LABEL_14;
  MaterialEventLogServantSortSelectMenu__Close_25297844(eventLogServantSortSelectMenu, 0LL, method);
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
    sub_B0D840(
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
    eventLogServantSortSelectMenu = (MaterialEventLogServantSortSelectMenu_o *)this->fields.sort;
    if ( eventLogServantSortSelectMenu )
    {
      ListViewSort__Save((ListViewSort_o *)eventLogServantSortSelectMenu, 0LL);
      MaterialEventLogListViewManager__CreateInfs(this, v19);
      goto LABEL_13;
    }
LABEL_14:
    sub_B0D97C(eventLogServantSortSelectMenu);
  }
LABEL_13:
  MaterialEventLogListViewManager__SetFilterButtonImage(this, v9);
}


void __fastcall MaterialEventLogListViewManager__EventLogSortKind(
        MaterialEventLogListViewManager_o *this,
        MaterialEventLogServantSortSelectMenu_o *eventLogServantSortSelectMenu,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ListViewSort_o *sort; // x21
  MaterialEventLogServantSortSelectMenu_CallbackFunc_o *v7; // x22
  __int64 v8; // x0
  const MethodInfo *v9; // x4

  if ( (byte_4214DBB & 1) == 0 )
  {
    sub_B0D8A4(&MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo, eventLogServantSortSelectMenu);
    sub_B0D8A4(&Method_MaterialEventLogListViewManager_EndEventLogSortKind__, v5);
    byte_4214DBB = 1;
  }
  if ( this->fields.isInput )
  {
    sort = this->fields.sort;
    v7 = (MaterialEventLogServantSortSelectMenu_CallbackFunc_o *)sub_B0D974(
                                                                   MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                                   eventLogServantSortSelectMenu,
                                                                   method);
    MaterialEventLogServantSortSelectMenu_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_MaterialEventLogListViewManager_EndEventLogSortKind__,
      0LL);
    if ( !eventLogServantSortSelectMenu )
      sub_B0D97C(v8);
    MaterialEventLogServantSortSelectMenu__Open(eventLogServantSortSelectMenu, 0, sort, v7, v9);
  }
}


int32_t __fastcall MaterialEventLogListViewManager__GetFilterCount(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  MaterialEventLogListViewManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  signed __int64 size; // x21
  int32_t v7; // w20
  unsigned __int64 v8; // x22
  __int64 v9; // x10

  v2 = this;
  if ( (byte_4214DBC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    this = (MaterialEventLogListViewManager_o *)sub_B0D8A4(&MaterialEventLogListViewItem_TypeInfo, v4);
    byte_4214DBC = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      this = (MaterialEventLogListViewManager_o *)itemList->fields._items->m_Items[v8];
      if ( !this )
        break;
      v9 = *(&MaterialEventLogListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v9
        || (MaterialEventLogListViewItem_c *)this->klass->_2.typeHierarchy[v9 - 1] != MaterialEventLogListViewItem_TypeInfo )
      {
        break;
      }
      if ( this->fields.dropList )
      {
        this = (MaterialEventLogListViewManager_o *)((__int64 (__fastcall *)(MaterialEventLogListViewManager_o *, struct ListViewSort_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
                                                      this,
                                                      v2->fields.sort,
                                                      this->klass->vtable._6_GetDragRoot.methodPtr);
        v7 += (unsigned __int8)this & 1;
      }
      if ( (__int64)++v8 >= size )
        return v7;
      itemList = v2->fields.itemList;
    }
    while ( itemList );
LABEL_15:
    sub_B0D97C(this);
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

  if ( (byte_4214DB4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B0D8A4(&PartyServantListViewItem_TypeInfo, v5);
    byte_4214DB4 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
  MaterialCollectionServantListViewManager_o *result; // x0
  UnityEngine_Object_o *dropObjectList; // x19
  bool v6; // w8
  __int64 v7; // x10
  bool v8; // w8
  void *monitor; // x19
  bool v10; // w8

  if ( (byte_4214DB0 & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomRootComponent_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v2);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_4214DB0 = 1;
  }
  result = (MaterialCollectionServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !result )
    goto LABEL_25;
  dropObjectList = (UnityEngine_Object_o *)result->fields.dropObjectList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(dropObjectList, 0LL, 0LL);
  result = 0LL;
  if ( !v6 )
  {
    if ( dropObjectList )
    {
      v7 = *(&MyRoomRootComponent_TypeInfo->_2.bitflags2 + 1);
      if ( *(&dropObjectList->klass->_2.bitflags2 + 1) >= (unsigned int)v7 )
      {
        if ( (MyRoomRootComponent_c *)dropObjectList->klass->_2.typeHierarchy[v7 - 1] != MyRoomRootComponent_TypeInfo )
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
    v8 = UnityEngine_Object__op_Equality(dropObjectList, 0LL, 0LL);
    result = 0LL;
    if ( !v8 )
    {
      if ( !dropObjectList )
        goto LABEL_25;
      monitor = dropObjectList[2].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)monitor, 0LL, 0LL);
      result = 0LL;
      if ( !v10 )
      {
        if ( monitor )
          return (MaterialCollectionServantListViewManager_o *)*((_QWORD *)monitor + 68);
LABEL_25:
        sub_B0D97C(result);
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
    sub_B0D97C(0LL);
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

  if ( (byte_4214DAF & 1) == 0 )
  {
    sub_B0D8A4(&MaterialEventLogListViewManager_TypeInfo, v1);
    byte_4214DAF = 1;
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
    sub_B0D97C(0LL);
  ListViewSort__InitLoad(EventLogservantSortInfo, 0LL);
}


void __fastcall MaterialEventLogListViewManager__InitializeObjectPosition(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *seed; // x20
  UnityEngine_GameObject_o *v5; // x0
  struct ListViewItemSeed_o *v6; // x8
  UnityEngine_Object_o *parent; // x20
  struct ListViewItemSeed_o *v8; // x8
  const MethodInfo *v9; // x1
  int klass; // w8
  UnityEngine_GameObject_o *v11; // x19
  unsigned int v12; // w20
  __int64 v13; // x0

  if ( (byte_4214DC5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentsInChildren_MaterialEventLogListViewObject___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4214DC5 = 1;
  }
  seed = (UnityEngine_Object_o *)this->fields.seed;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(seed, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
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
    v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(parent, 0LL, 0LL);
    if ( ((unsigned __int8)v5 & 1) != 0 )
    {
      v8 = this->fields.seed;
      if ( !v8 )
        goto LABEL_21;
      v5 = v8->fields.parent;
      if ( !v5 )
        goto LABEL_21;
      v5 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28717028(
                                         v5,
                                         (const MethodInfo_1B62FE4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_MaterialEventLogListViewObject___);
      if ( !v5 )
        goto LABEL_21;
      klass = (int)v5[1].klass;
      v11 = v5;
      if ( klass >= 1 )
      {
        v12 = 0;
        while ( 1 )
        {
          if ( v12 >= klass )
          {
            v13 = sub_B0D9A8(v5);
            sub_B0D948(v13, 0LL);
          }
          v5 = (UnityEngine_GameObject_o *)*((_QWORD *)&v11[1].monitor + (int)v12);
          if ( !v5 )
            break;
          MaterialEventLogListViewObject__InitPosition((MaterialEventLogListViewObject_o *)v5, v9);
          klass = (int)v11[1].klass;
          if ( (int)++v12 >= klass )
            return;
        }
LABEL_21:
        sub_B0D97C(v5);
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

  if ( (byte_4214DB9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_ActionExtensions_Call_MaterialEventLogListViewItem___, obj);
    sub_B0D8A4(&MaterialEventLogListViewItem_TypeInfo, v4);
    this = (MaterialEventLogListViewManager_o *)sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_4214DB9 = 1;
  }
  if ( !obj
    || (linkItem = obj->fields.linkItem) == 0LL
    || (v7 = *(&MaterialEventLogListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v7)
    || (MaterialEventLogListViewItem_c *)linkItem->klass->_2.typeHierarchy[v7 - 1] != MaterialEventLogListViewItem_TypeInfo )
  {
    sub_B0D97C(this);
  }
  monitor = linkItem[1].monitor;
  if ( monitor )
  {
    v9 = *((_DWORD *)monitor + 17);
    if ( (v9 & 1) == 0 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v9 = *((_DWORD *)monitor + 17);
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
        *((System_Action_T__o **)monitor + 10),
        (BlankEarth_QAARotateEarthResponse_o *)linkItem,
        (const MethodInfo_2D96698 *)Method_ActionExtensions_Call_MaterialEventLogListViewItem___);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x19
  _DWORD *ObjectList; // x0
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
  int v30; // w8
  _DWORD *v31; // x22
  unsigned int v32; // w25
  MaterialEventLogListViewObject_o *v33; // x24
  const MethodInfo *v34; // x4
  int32_t initMode; // w8
  UnityEngine_GameObject_o *v36; // x0
  UIWidget_o *v37; // x21
  __int64 v38; // x1
  __int64 v39; // x2
  float v40; // s8
  int mGo; // w9
  System_Action_o *v42; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x20
  float IntpTime_AutoResume; // s8
  __int64 v46; // x1
  __int64 v47; // x2
  System_Action_o *v48; // x21
  System_Action_o *v49; // x20
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4214DB7 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Count__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__, v9);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v10);
    sub_B0D8A4(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__0__, v11);
    sub_B0D8A4(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__1__, v12);
    sub_B0D8A4(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__2__, v13);
    sub_B0D8A4(&MaterialEventLogListViewManager___c__DisplayClass50_0_TypeInfo, v14);
    byte_4214DB7 = 1;
  }
  v15 = sub_B0D974(MaterialEventLogListViewManager___c__DisplayClass50_0_TypeInfo, *(_QWORD *)&mode, end_act);
  MaterialEventLogListViewManager___c__DisplayClass50_0___ctor(
    (MaterialEventLogListViewManager___c__DisplayClass50_0_o *)v15,
    0LL);
  if ( !v15 )
    goto LABEL_29;
  *(_QWORD *)(v15 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v15 + 24) = end_act;
  sub_B0D840((BattleServantConfConponent_o *)(v15 + 24), (System_Int32_array **)end_act, v23, v24, v25, v26, v27, v28);
  ObjectList = MaterialEventLogListViewManager__get_ObjectList(this, v29);
  if ( !ObjectList )
    goto LABEL_29;
  v30 = ObjectList[6];
  v31 = ObjectList;
  if ( v30 >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      if ( v30 <= v32 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v33 = *(MaterialEventLogListViewObject_o **)(*((_QWORD *)v31 + 2) + 8LL * (int)v32 + 32);
      if ( !v33 )
        break;
      zero = UnityEngine_Vector3__get_zero(0LL);
      MaterialEventLogListViewObject__Init_25289296(
        v33,
        mode,
        0LL,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        -1,
        v34);
      v30 = v31[6];
      if ( (int)++v32 >= v30 )
        goto LABEL_11;
    }
LABEL_29:
    sub_B0D97C(ObjectList);
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
                           (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
    v48 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v46, v47);
    System_Action___ctor(
      v48,
      (Il2CppObject *)v15,
      Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__2__,
      0LL);
    if ( !Component_UIWidget )
      goto LABEL_29;
    SlideFadeObject__SlideOut_24973932(
      (SlideFadeObject_o *)Component_UIWidget,
      580.0,
      IntpTime_AutoResume,
      0.0,
      v48,
      0LL);
  }
  else if ( initMode == 3 )
  {
    this->fields.mIsDoing_Slide = 1;
    this->fields.isScrollRefresh = 1;
    ObjectList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !ObjectList )
      goto LABEL_29;
    v36 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)ObjectList, 0LL);
    v37 = GameObjectExtensions__SafeGetComponent_UIWidget_(
            v36,
            (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    v40 = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
    if ( this->fields.issortButton )
    {
      if ( !v37 )
        goto LABEL_29;
      mGo = (int)v37->fields.mGo;
      HIDWORD(v37->fields.mGo) = v37->fields.updateAnchors;
      LODWORD(v37->fields.mTrans) = -1027735552;
      HIDWORD(v37->fields.mTrans) = mGo;
      v42 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v38, v39);
      System_Action___ctor(
        v42,
        (Il2CppObject *)v15,
        Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__1__,
        0LL);
      SlideFadeObject__SlideSortIn((SlideFadeObject_o *)v37, 580.0, v40, 0.0, v42, 0LL);
    }
    else
    {
      v49 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v38, v39);
      System_Action___ctor(
        v49,
        (Il2CppObject *)v15,
        Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__0__,
        0LL);
      if ( !v37 )
        goto LABEL_29;
      SlideFadeObject__SlideIn_24972992((SlideFadeObject_o *)v37, 580.0, v40, 0.0, v49, 0LL);
    }
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v15 + 24), 0LL);
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
  void *ObjectList; // x0
  int v9; // w8
  void *v10; // x19
  __int64 v11; // x22
  bool v12; // w20
  UnityEngine_Object_o *Component_srcLineSprite; // x21

  if ( (byte_4214DC0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, isActive);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_4214DC0 = 1;
  }
  ObjectList = MaterialEventLogListViewManager__get_ObjectList(this, (const MethodInfo *)isActive);
  if ( !ObjectList )
    goto LABEL_18;
  v9 = *((_DWORD *)ObjectList + 6);
  v10 = ObjectList;
  if ( v9 >= 1 )
  {
    v11 = 0LL;
    v12 = isActive;
    while ( 1 )
    {
      if ( v9 <= (unsigned int)v11 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      ObjectList = *(void **)(*((_QWORD *)v10 + 2) + 8 * v11 + 32);
      if ( !ObjectList )
        break;
      ObjectList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ObjectList, 0LL);
      if ( !ObjectList )
        break;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)ObjectList,
                                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, v12, 0LL);
      }
      v9 = *((_DWORD *)v10 + 6);
      if ( (int)++v11 >= v9 )
        return;
    }
LABEL_18:
    sub_B0D97C(ObjectList);
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
  System_String_o **v7; // x9
  System_String_o **v8; // x20
  UnityEngine_Color_o v9; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_4214DBE & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_366/*"#FE4545"*/, method);
    sub_B0D8A4(&StringLiteral_17044/*"btn_filter_on"*/, v3);
    sub_B0D8A4(&StringLiteral_352/*"#000000"*/, v4);
    sub_B0D8A4(&StringLiteral_17043/*"btn_filter"*/, v5);
    byte_4214DBE = 1;
  }
  *(_QWORD *)&v9.fields.r = 0LL;
  *(_QWORD *)&v9.fields.b = 0LL;
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_12;
  sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL);
  if ( !this->fields.filterSprite )
    goto LABEL_12;
  v7 = (System_String_o **)&StringLiteral_17043/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v7 = (System_String_o **)&StringLiteral_17044/*"btn_filter_on"*/;
  v8 = ((unsigned __int8)sort & 1) != 0
     ? (System_String_o **)&StringLiteral_352/*"#000000"*/
     : (System_String_o **)&StringLiteral_366/*"#FE4545"*/;
  UISprite__set_spriteName(this->fields.filterSprite, *v7, 0LL);
  *(_QWORD *)&v9.fields.r = 0LL;
  *(_QWORD *)&v9.fields.b = 0LL;
  UnityEngine_ColorUtility__TryParseHtmlString(*v8, &v9, 0LL);
  sort = (ListViewSort_o *)this->fields.sortKindLabel;
  if ( !sort )
LABEL_12:
    sub_B0D97C(sort);
  UILabel__set_effectColor((UILabel_o *)sort, v9, 0LL);
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
  int32_t v13; // w1
  bool result; // w0
  MaterialEventLogListViewManager_o *v15; // x0
  System_Action_o *v16; // x21
  System_Delegate_o *v17; // x0
  System_Action_o *v18; // x2
  MaterialEventLogListViewManager_o *v19; // x0
  int32_t v20; // w1
  System_Action_o *v21; // x2
  const MethodInfo *v22; // x3

  if ( (byte_4214DB6 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_MaterialEventLogListViewManager__SetMode_b__49_0__, v7);
    byte_4214DB6 = 1;
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
    sub_B0D97C(0LL);
  UnityEngine_Collider__set_enabled(mBoxCollider, this->fields.isInput, 0LL);
  switch ( mode )
  {
    case 1:
    case 3:
      v13 = 2;
      goto LABEL_16;
    case 2:
      v13 = 3;
LABEL_16:
      v15 = this;
      goto LABEL_21;
    case 4:
      v16 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_MaterialEventLogListViewManager__SetMode_b__49_0__, 0LL);
      v17 = System_Delegate__Combine((System_Delegate_o *)end_act, (System_Delegate_o *)v16, 0LL);
      v18 = (System_Action_o *)v17;
      if ( v17 && (System_Action_c *)v17->klass != System_Action_TypeInfo )
      {
        v19 = (MaterialEventLogListViewManager_o *)sub_B0DC70(v17);
        MaterialEventLogListViewManager__RequestListObject(v19, v20, v21, v22);
      }
      else
      {
        v13 = 2;
        v15 = this;
LABEL_22:
        MaterialEventLogListViewManager__RequestListObject(v15, v13, v18, v12);
        result = 1;
      }
      break;
    default:
      v15 = this;
      v13 = 0;
LABEL_21:
      v18 = end_act;
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
  if ( (byte_4214DB5 & 1) == 0 )
  {
    this = (MaterialEventLogListViewManager_o *)sub_B0D8A4(&MaterialEventLogListViewObject_TypeInfo, obj);
    byte_4214DB5 = 1;
  }
  if ( !obj
    || (v6 = *(&MaterialEventLogListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (MaterialEventLogListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != MaterialEventLogListViewObject_TypeInfo )
  {
    sub_B0D97C(this);
  }
  selectedLimitCount = v5->fields.selectedLimitCount;
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v14 = 3;
  else
    v14 = 2;
  MaterialEventLogListViewObject__Init_25289296(
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

  if ( (byte_4214DB1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, method);
    byte_4214DB1 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL),
        GameObjectExtensions__SetLocalPositionY(gameObject, y, 0LL),
        (scrollView = this->fields.scrollView) == 0LL)
    || (scrollView = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL)) == 0LL
    || (scrollView = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                       (UnityEngine_GameObject_o *)scrollView,
                       (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___)) == 0LL )
  {
    sub_B0D97C(scrollView);
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
  sub_B0D840(
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
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v13; // x8
  int32_t sortKind; // w9
  System_String_o **v15; // x8
  struct ListViewSort_o *v16; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v18; // x9
  System_String_o **v19; // x10
  System_String_o **v20; // x8
  struct ListViewSort_o *v21; // x8
  System_String_o **v22; // x8

  if ( (byte_4214DC1 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_17072/*"btn_sort_up"*/, v3);
    sub_B0D8A4(&StringLiteral_17156/*"btn_txt_up"*/, v4);
    sub_B0D8A4(&StringLiteral_17112/*"btn_txt_new"*/, v5);
    sub_B0D8A4(&StringLiteral_17102/*"btn_txt_down"*/, v6);
    sub_B0D8A4(&StringLiteral_17119/*"btn_txt_old"*/, v7);
    sub_B0D8A4(&StringLiteral_17069/*"btn_sort_down"*/, v8);
    byte_4214DC1 = 1;
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
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v11 )
      goto LABEL_36;
    UILabel__set_text(v11, (System_String_o *)sort, 0LL);
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
    v13 = this->fields.sort;
    if ( v13 )
    {
      sortKind = v13->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v15 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17119/*"btn_txt_old"*/ : &StringLiteral_17112/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
          v16 = this->fields.sort;
          if ( v16 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v16->fields.isAscendingOrder;
              v18 = (System_String_o **)&StringLiteral_17069/*"btn_sort_down"*/;
              v19 = (System_String_o **)&StringLiteral_17072/*"btn_sort_up"*/;
LABEL_32:
              if ( isAscendingOrder )
                v22 = v18;
              else
                v22 = v19;
              UISprite__set_spriteName((UISprite_o *)sort, *v22, 0LL);
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
          v20 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17156/*"btn_txt_up"*/ : &StringLiteral_17102/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
          v21 = this->fields.sort;
          if ( v21 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v21->fields.isAscendingOrder;
              v18 = (System_String_o **)&StringLiteral_17072/*"btn_sort_up"*/;
              v19 = (System_String_o **)&StringLiteral_17069/*"btn_sort_down"*/;
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_36:
    sub_B0D97C(sort);
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

  if ( (byte_4214DB8 & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomRootComponent_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4214DB8 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (basePanel = Instance->fields.basePanel) == 0LL
    || (v5 = *(&MyRoomRootComponent_TypeInfo->_2.bitflags2 + 1),
        *(&basePanel->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (MyRoomRootComponent_c *)basePanel->klass->_2.typeHierarchy[v5 - 1] != MyRoomRootComponent_TypeInfo
    || (v6 = *(MyRoomControl_o **)&basePanel->fields.updateAnchors) == 0LL )
  {
    sub_B0D97C(Instance);
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
  struct ListViewSort_o *v6; // x0
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
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  bool v19; // w1
  const MethodInfo *v20; // x1

  if ( (byte_4214DBF & 1) == 0 )
  {
    sub_B0D8A4(&Method_MaterialEventLogListViewManager_SortAscendingOrder__, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4214DBF = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_MaterialEventLogListViewManager_SortAscendingOrder__;
    if ( (*((_BYTE *)Method_MaterialEventLogListViewManager_SortAscendingOrder__ + 75) & 2) != 0 )
      v4 = (_QWORD *)sub_B0D8AC(Method_MaterialEventLogListViewManager_SortAscendingOrder__);
    v5 = (System_Reflection_MethodBase_o *)sub_B0D888(v4, v4[3]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    sort = this->fields.sort;
    if ( sort )
    {
      sort->fields.isAscendingOrder ^= 1u;
      MaterialCollectionServantListViewManager = MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                                   (MaterialEventLogListViewManager_o *)v6,
                                                   v7);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v6 = (struct ListViewSort_o *)UnityEngine_Object__op_Inequality(
                                      (UnityEngine_Object_o *)MaterialCollectionServantListViewManager,
                                      0LL,
                                      0LL);
      if ( ((unsigned __int8)v6 & 1) != 0 )
      {
        if ( !MaterialCollectionServantListViewManager )
          goto LABEL_16;
        v16 = (System_Int32_array **)this->fields.sort;
        MaterialCollectionServantListViewManager->fields.sort = (struct ListViewSort_o *)v16;
        sub_B0D840(
          (BattleServantConfConponent_o *)&MaterialCollectionServantListViewManager->fields.sort,
          v16,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15);
      }
      v6 = this->fields.sort;
      if ( v6 )
      {
        ListViewSort__Save(v6, 0LL);
        MaterialEventLogListViewManager__SortDummyData(this, v17);
        ((void (__fastcall *)(MaterialEventLogListViewManager_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
          this,
          this->klass->vtable._6_GetDragRoot.methodPtr);
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
        v19 = MaterialEventLogListViewManager__GetFilterCount(this, v18) < 1;
        ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v19, 0LL);
        MaterialEventLogListViewManager__CreateInfs(this, v20);
        return;
      }
    }
LABEL_16:
    sub_B0D97C(v6);
  }
}


void __fastcall MaterialEventLogListViewManager__SortDummyData(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MaterialEventLogListViewManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 size; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x20
  __int64 v22; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v23; // x26
  _QWORD *v24; // x8
  __int64 v25; // x11
  struct System_Collections_Generic_List_ListViewItem__o *v26; // x26
  __int64 v27; // x8
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v28; // x0
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1
  __int64 v31; // x2
  int v32; // w22
  int v33; // w23
  int v34; // w20
  int v35; // w24
  struct ListViewSort_o *sort; // x8
  _BOOL4 isAscendingOrder; // w28
  ListViewItem_o *v38; // x0
  ListViewItem_o *v39; // x21
  int32_t v40; // w1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-70h] BYREF

  v3 = this;
  if ( (byte_4214DC3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Remove__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem___ctor__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_MaterialEventLogListViewItem__TypeInfo, v13);
    sub_B0D8A4(&System_Collections_Generic_List_ListViewItem__TypeInfo, v14);
    this = (MaterialEventLogListViewManager_o *)sub_B0D8A4(&MaterialEventLogListViewItem_TypeInfo, v15);
    byte_4214DC3 = 1;
  }
  memset(&i, 0, sizeof(i));
  itemList = v3->fields.itemList;
  if ( !itemList )
    goto LABEL_38;
  size = itemList->fields._size;
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_MaterialEventLogListViewItem__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem___ctor__);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                                                                  v19,
                                                                                                  v20);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  if ( (int)size >= 1 )
  {
    v22 = 4LL;
    while ( 1 )
    {
      v23 = v3->fields.itemList;
      if ( !v23 )
        break;
      if ( v22 - 4 >= (unsigned __int64)(unsigned int)v23->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v24 = (_QWORD *)*((_QWORD *)&v23->fields._items->obj.klass + v22);
      if ( !v24 )
        break;
      v25 = *(&MaterialEventLogListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*v24 + 300LL) < (unsigned int)v25
        || *(MaterialEventLogListViewItem_c **)(*(_QWORD *)(*v24 + 200LL) + 8 * v25 - 8) != MaterialEventLogListViewItem_TypeInfo )
      {
        break;
      }
      if ( *(MaterialEventLogListViewItem_c **)(*(_QWORD *)(*v24 + 200LL)
                                              + 8LL * *(&MaterialEventLogListViewItem_TypeInfo->_2.bitflags2 + 1)
                                              - 8) != MaterialEventLogListViewItem_TypeInfo )
        v24 = 0LL;
      if ( !v24[15] )
      {
        v26 = v3->fields.itemList;
        if ( !v26 )
          break;
        if ( v22 - 4 >= (unsigned __int64)(unsigned int)v26->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        if ( !v21 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v21,
          *((EventMissionProgressRequest_Argument_ProgressData_o **)&v26->fields._items->obj.klass + v22),
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      v27 = v22 - 3;
      ++v22;
      if ( v27 >= size )
        goto LABEL_21;
    }
LABEL_38:
    sub_B0D97C(this);
  }
LABEL_21:
  if ( !v21 )
    goto LABEL_38;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v47,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v21,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = v47;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          v28,
          (WarBoardManager_TaskList_o *)i.fields.current,
          (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_ListViewItem__Remove__) )
  {
    v28 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v3->fields.itemList;
    if ( !v28 )
      sub_B0D97C(0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  this = (MaterialEventLogListViewManager_o *)MaterialEventLogListViewManager__GetFilterCount(v3, v29);
  if ( (int)this > 3 )
    v32 = 1;
  else
    v32 = 4 - (_DWORD)this;
  if ( v32 >= 1 )
  {
    v33 = 0;
    v34 = -(int)this;
    v35 = (_DWORD)this + 999;
    do
    {
      sort = v3->fields.sort;
      if ( !sort )
        goto LABEL_38;
      isAscendingOrder = sort->fields.isAscendingOrder;
      v38 = (ListViewItem_o *)sub_B0D974(MaterialEventLogListViewItem_TypeInfo, v30, v31);
      v39 = v38;
      v40 = isAscendingOrder ? v35 + v33 : v34;
      ListViewItem___ctor_23700744(v38, v40, 0LL);
      v39[1].monitor = 0LL;
      LODWORD(v39[1].klass) = 5;
      sub_B0D840((BattleServantConfConponent_o *)&v39[1].monitor, 0LL, v41, v42, v43, v44, v45, v46);
      this = (MaterialEventLogListViewManager_o *)v3->fields.itemList;
      if ( !this )
        goto LABEL_38;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      ++v33;
      --v34;
    }
    while ( v33 < v32 );
  }
  MaterialEventLogListViewManager__InitializeObjectPosition(v3, v30);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4214DB2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_MaterialEventLogListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4214DB2 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_MaterialEventLogListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_MaterialEventLogListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___);
      if ( !v12 )
        sub_B0D97C(Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        Component_srcLineSprite,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MaterialEventLogListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MaterialEventLogListViewObject__o *)v12;
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
    sub_B0D97C(this);
  MaterialEventLogListViewManager__SetMode(this->fields.__4__this, 2, this->fields.end_act, 0LL);
}


void __fastcall MaterialEventLogListViewManager___c__DisplayClass50_0___RequestListObject_b__1(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  struct MaterialEventLogListViewManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (_4__this->fields.mIsDoing_Slide = 0, !this->fields.__4__this) )
    sub_B0D97C(this);
  MaterialEventLogListViewManager__SetMode(this->fields.__4__this, 2, this->fields.end_act, 0LL);
}


void __fastcall MaterialEventLogListViewManager___c__DisplayClass50_0___RequestListObject_b__2(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  Il2CppClass *klass; // x8
  System_Action_o *v6; // x21
  MaterialEventLogListViewManager_o *v7; // x20

  v3 = (Il2CppObject *)this;
  if ( (byte_421271D & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    this = (MaterialEventLogListViewManager___c__DisplayClass50_0_o *)sub_B0D8A4(
                                                                        &Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__3__,
                                                                        v4);
    byte_421271D = 1;
  }
  klass = v3[1].klass;
  if ( !klass )
    goto LABEL_8;
  BYTE4(klass->vtable[1].method) = 0;
  v6 = (System_Action_o *)v3[2].klass;
  v7 = (MaterialEventLogListViewManager_o *)v3[1].klass;
  if ( !v6 )
  {
    v6 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      v6,
      v3,
      Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__3__,
      0LL);
    v3[2].klass = (Il2CppClass *)v6;
    sub_B0D840(&v3[2], v6);
  }
  if ( !v7 )
LABEL_8:
    sub_B0D97C(this);
  MaterialEventLogListViewManager__SetMode(v7, 0, v6, 0LL);
}


void __fastcall MaterialEventLogListViewManager___c__DisplayClass50_0___RequestListObject_b__3(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}