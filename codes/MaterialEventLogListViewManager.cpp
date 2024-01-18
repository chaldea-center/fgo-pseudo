void __fastcall MaterialEventLogListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  MaterialEventLogListViewManager_c *v4; // x8
  ListViewSort_o *v5; // x19
  struct MaterialEventLogListViewManager_StaticFields *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_418818C & 1) == 0 )
  {
    sub_B2C35C(&ListViewSort_TypeInfo, v1);
    sub_B2C35C(&MaterialEventLogListViewManager_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_8983/*"MaterialCollectionServant6"*/, v3);
    byte_418818C = 1;
  }
  MaterialEventLogListViewManager_TypeInfo->static_fields->VL_LIST_POS_Y = -30.0;
  MaterialEventLogListViewManager_TypeInfo->static_fields->VL_ARRANGEMENT_PY = -102.0;
  v4 = MaterialEventLogListViewManager_TypeInfo;
  MaterialEventLogListViewManager_TypeInfo->static_fields->VL_SCROLLBAR_POS_Y = 70.0;
  v4->static_fields->VL_SCROLLBAR_HEIGHT = 320;
  v4->static_fields->VL_PANEL_WIDTH = 500;
  v4->static_fields->VL_PANEL_HEIGHT = 440;
  v4->static_fields->VL_PANEL_CENTER_Y = 30;
  v4->static_fields->NORMAL_LIST_POS_Y = -35.0;
  v4->static_fields->NORMAL_ARRANGEMENT_PY = -120.0;
  v4->static_fields->NORMAL_SCROLLBAR_POS_Y = 45.0;
  v4->static_fields->NORMAL_SCROLLBAR_BACK_HEIGHT = 400;
  v4->static_fields->NORMAL_SCROLLBAR_FORE_HEIGHT = 404;
  v4->static_fields->NORMAL_PANEL_WIDTH = 500;
  v4->static_fields->NORMAL_PANEL_HEIGHT = 500;
  v4->static_fields->NORMAL_PANEL_CENTER_Y = 0;
  v5 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v5, (System_String_o *)StringLiteral_8983/*"MaterialCollectionServant6"*/, 27, 1, 0LL);
  static_fields = MaterialEventLogListViewManager_TypeInfo->static_fields;
  static_fields->EventLogservantSortInfo = v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&static_fields->EventLogservantSortInfo,
    (System_Int32_array **)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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
  __int64 v5; // x1
  struct UnityEngine_BoxCollider_o *Component_srcLineSprite; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct UIScrollView_o *scrollView; // x8
  ListViewSort_o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_4188173 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, method);
    sub_B2C35C(&ListViewSort_TypeInfo, v3);
    byte_4188173 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (Component_srcLineSprite = (struct UnityEngine_BoxCollider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        gameObject,
                                                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.mBoxCollider = Component_srcLineSprite,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.mBoxCollider,
          (System_Int32_array **)Component_srcLineSprite,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.mBoxCollider) == 0LL)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL),
        (scrollView = this->fields.scrollView) == 0LL) )
  {
    sub_B2C434(gameObject, v5);
  }
  BYTE1(scrollView->fields.scrollWheelFactor) = 0;
  v14 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor(v14, 3, 1, 0LL);
  this->fields.sort = v14;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


void __fastcall MaterialEventLogListViewManager__Back(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  MaterialEventLogListViewManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  _BOOL4 issortButton; // w8
  BattleServantConfConponent_o *p_sort; // x19
  ListViewSort_o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  MaterialEventLogListViewManager_o *v14; // x0
  const MethodInfo *v15; // x1
  UnityEngine_Object_o *MaterialCollectionServantListViewManager; // x19
  MaterialEventLogListViewManager_c *v17; // x0
  ListViewSort_o *EventLogservantSortInfo; // x8

  v2 = this;
  if ( (byte_4188188 & 1) == 0 )
  {
    sub_B2C35C(&ListViewSort_TypeInfo, method);
    sub_B2C35C(&MaterialEventLogListViewManager_TypeInfo, v3);
    this = (MaterialEventLogListViewManager_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_4188188 = 1;
  }
  issortButton = v2->fields.issortButton;
  p_sort = (BattleServantConfConponent_o *)&v2->fields.sort;
  if ( !issortButton )
  {
    if ( !p_sort->klass )
      goto LABEL_21;
    *((_BYTE *)&p_sort->klass->_1.this_arg.bits + 4) = 1;
  }
  v7 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor(v7, 3, 1, 0LL);
  p_sort->klass = (BattleServantConfConponent_c *)v7;
  sub_B2C2F8(p_sort, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
  MaterialCollectionServantListViewManager = (UnityEngine_Object_o *)MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                                                       v14,
                                                                       v15);
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
  v17 = MaterialEventLogListViewManager_TypeInfo;
  if ( (BYTE3(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
    v17 = MaterialEventLogListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v17->static_fields->EventLogservantSortInfo;
  if ( EventLogservantSortInfo )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) == 0
      || v17->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v17),
          (EventLogservantSortInfo = MaterialEventLogListViewManager_TypeInfo->static_fields->EventLogservantSortInfo) != 0LL) )
    {
      ListViewSort__Save(EventLogservantSortInfo, 0LL);
      return;
    }
LABEL_21:
    sub_B2C434(this, method);
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
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  MaterialEventLogListViewItem_o *v18; // x21
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8
  bool v20; // w23
  const MethodInfo *v21; // x2
  __int64 v22; // x0
  __int64 v23; // x1
  struct MaterialEventLogListViewItem_Info_o *v24; // x8
  struct MaterialEventLogListViewItem_Info_o *v25; // x8
  unsigned int v26; // w9
  __int64 v27; // x1
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4188180 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, *(_QWORD *)&servantId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    byte_4188180 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  objectList = this->fields.objectList;
  this->fields.selectedLimitCount = limitCount;
  if ( !objectList )
    sub_B2C434(0LL, *(_QWORD *)&servantId);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v28,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v29,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v29.fields.current )
      sub_B2C434(0LL, v27);
    Component_srcLineSprite = (MaterialEventLogListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    (UnityEngine_GameObject_o *)v29.fields.current,
                                                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___);
    v14 = Component_srcLineSprite;
    if ( !Component_srcLineSprite )
      sub_B2C434(0LL, v13);
    Item = MaterialEventLogListViewObject__GetItem(Component_srcLineSprite, v13);
    v18 = Item;
    if ( !Item )
      sub_B2C434(0LL, v16);
    info_k__BackingField = Item->fields._info_k__BackingField;
    if ( info_k__BackingField && info_k__BackingField->fields.svt_id == servantId )
    {
      v20 = MaterialEventLogListViewItem__CheckPlayableMaterial(Item, limitCount, v17);
      MaterialEventLogListViewObject__SetEnableSelect(v14, v20, v21);
      v24 = v18->fields._info_k__BackingField;
      if ( v20 )
      {
        if ( !v24 )
          sub_B2C434(v22, v23);
        v24->fields.flag &= ~1u;
        v25 = v18->fields._info_k__BackingField;
        if ( !v25 )
          sub_B2C434(v22, v23);
        v26 = v25->fields.flag & 0xFFFFFFFB;
      }
      else
      {
        if ( !v24 )
          sub_B2C434(v22, v23);
        v24->fields.flag |= 1u;
        v25 = v18->fields._info_k__BackingField;
        if ( !v25 )
          sub_B2C434(v22, v23);
        v26 = v25->fields.flag | 4;
      }
      v25->fields.flag = v26;
    }
    else
    {
      MaterialEventLogListViewObject__SetEnableSelect(v14, 1, v17);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v29,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  __int64 v14; // x1
  UnityEngine_Object_o *v15; // x20
  __int64 v16; // x10
  UnityEngine_Object_o *monitor; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x21
  _BOOL8 v19; // x0
  __int64 v20; // x11
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_418818A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_MaterialEventLogListViewItem_Info__TypeInfo, v8);
    sub_B2C35C(&MaterialEventLogListViewItem_TypeInfo, v9);
    sub_B2C35C(&MyRoomRootComponent_TypeInfo, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v12);
    byte_418818A = 1;
  }
  memset(&v28, 0, sizeof(v28));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  v15 = (UnityEngine_Object_o *)*((_QWORD *)Instance + 3);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v15, 0LL, 0LL) )
  {
    if ( v15 )
    {
      v16 = *(&MyRoomRootComponent_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v15->klass->_2.bitflags2 + 1) >= (unsigned int)v16 )
      {
        if ( (MyRoomRootComponent_c *)v15->klass->_2.typeHierarchy[v16 - 1] != MyRoomRootComponent_TypeInfo )
          v15 = 0LL;
      }
      else
      {
        v15 = 0LL;
      }
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = (void *)UnityEngine_Object__op_Equality(v15, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      if ( !v15 )
        goto LABEL_35;
      monitor = (UnityEngine_Object_o *)v15[2].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
      {
        v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MaterialEventLogListViewItem_Info__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v18,
          (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info___ctor__);
        Instance = this->fields.itemSortList;
        if ( Instance )
        {
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            &v28,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
            (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          while ( 1 )
          {
            v19 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v28,
                    (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v19 )
              break;
            if ( v28.fields.current )
            {
              v20 = *(&MaterialEventLogListViewItem_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v28.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v20
                && (MaterialEventLogListViewItem_c *)v28.fields.current->klass->_2.typeHierarchy[v20 - 1] == MaterialEventLogListViewItem_TypeInfo )
              {
                v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)v28.fields.current[7].monitor;
                if ( v21 )
                {
                  if ( !v18 )
                    sub_B2C434(v19, v21);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v18,
                    v21,
                    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__Add__);
                }
              }
            }
          }
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v28,
            (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          if ( monitor )
          {
            Instance = *(void **)&monitor[35].fields.m_CachedPtr;
            if ( Instance )
            {
              *((_QWORD *)Instance + 18) = v18;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)((char *)Instance + 144),
                (System_Int32_array **)v18,
                v22,
                v23,
                v24,
                v25,
                v26,
                v27);
              return;
            }
          }
        }
LABEL_35:
        sub_B2C434(Instance, v14);
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
  int32_t size; // w8
  int v18; // w8
  unsigned __int64 v19; // x22
  signed __int64 v20; // x25
  __int64 v21; // x23
  System_Int32_array ***v22; // x24
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  MaterialEventLogListViewItem_Info_o *v42; // x8
  _BOOL4 issortButton; // w21
  UnityEngine_GameObject_o *gameObject; // x20
  MaterialEventLogListViewManager_c *v45; // x8
  struct UIScrollView_o *scrollView; // x8
  __int64 v47; // x8
  __int64 v48; // x11
  __int64 v49; // x20
  struct UIScrollView_o *v50; // x8
  __int64 v51; // x8
  __int64 v52; // x11
  __int64 v53; // x20
  UnityEngine_GameObject_o *v54; // x0
  MaterialEventLogListViewManager_c *v55; // x8
  UnityEngine_GameObject_o *v56; // x21
  struct UIScrollView_o *v57; // x8
  UnityEngine_Object_o *v58; // x20
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  MaterialEventLogListViewManager_c *v65; // x0
  struct ListViewSort_o *EventLogservantSortInfo; // x1
  struct ListViewSort_o **p_sort; // x20
  MaterialEventLogListViewManager_o *v68; // x0
  const MethodInfo *v69; // x1
  MaterialCollectionServantListViewManager_o *MaterialCollectionServantListViewManager; // x21
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **v77; // x1
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v79; // x1
  const MethodInfo *v80; // x1
  UnityEngine_GameObject_o *v81; // x0
  MaterialEventLogListViewManager_c *v82; // x8
  UnityEngine_GameObject_o *v83; // x21
  struct UIScrollView_o *v84; // x8
  UnityEngine_Object_o *v85; // x20
  const MethodInfo *v86; // x1
  bool v87; // w1

  if ( (byte_4188179 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, *(_QWORD *)&kind);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__, v8);
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    sub_B2C35C(&MaterialEventLogListViewItem_TypeInfo, v10);
    sub_B2C35C(&MaterialEventLogListViewManager_TypeInfo, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&UIScrollBar_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_11893/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/, v14);
    byte_4188179 = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  ListViewManager__CheckSortButton((ListViewManager_o *)this, 0, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !infs )
    goto LABEL_102;
  size = infs->fields._size;
  if ( size > 3 )
    v18 = size + 1;
  else
    v18 = 4;
  if ( v18 > 0 )
  {
    v19 = 0LL;
    v20 = v18;
    do
    {
      v21 = sub_B2C42C(MaterialEventLogListViewItem_TypeInfo);
      ListViewItem___ctor_24128628((ListViewItem_o *)v21, v19, 0LL);
      *(_DWORD *)(v21 + 112) = kind;
      *(_QWORD *)(v21 + 120) = 0LL;
      v22 = (System_Int32_array ***)(v21 + 120);
      sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 120), 0LL, v23, v24, v25, v26, v27, v28);
      if ( (__int64)v19 < infs->fields._size )
      {
        if ( v19 >= (unsigned int)infs->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( !v21 )
          goto LABEL_102;
        v35 = (System_Int32_array **)infs->fields._items->m_Items[v19];
        *v22 = v35;
        sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 120), v35, v29, v30, v31, v32, v33, v34);
        itemList = *v22;
        if ( !*v22 )
          goto LABEL_102;
        *((_QWORD *)itemList + 11) = v21;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)((char *)itemList + 88),
          (System_Int32_array **)v21,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41);
        if ( v19 >= (unsigned int)infs->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v42 = infs->fields._items->m_Items[v19];
        if ( !v42 )
          goto LABEL_102;
        this->fields.issortButton = v42->fields.listChange;
      }
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_102;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      ++v19;
    }
    while ( (__int64)v19 < v20 );
  }
  issortButton = this->fields.issortButton;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v45 = MaterialEventLogListViewManager_TypeInfo;
  if ( issortButton )
  {
    if ( (WORD1(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
      v45 = MaterialEventLogListViewManager_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionY(gameObject, v45->static_fields->VL_LIST_POS_Y, 0LL);
    ListViewManager__SetArrangementPitchY(
      (ListViewManager_o *)this,
      MaterialEventLogListViewManager_TypeInfo->static_fields->VL_ARRANGEMENT_PY,
      0LL);
    scrollView = this->fields.scrollView;
    if ( scrollView )
    {
      v47 = *(_QWORD *)&scrollView->fields.showScrollBars;
      if ( v47
        && (v48 = *(&UIScrollBar_TypeInfo->_2.bitflags2 + 1),
            *(unsigned __int8 *)(*(_QWORD *)v47 + 300LL) >= (unsigned int)v48) )
      {
        if ( *(UIScrollBar_c **)(*(_QWORD *)(*(_QWORD *)v47 + 200LL) + 8 * v48 - 8) == UIScrollBar_TypeInfo )
          v49 = v47;
        else
          v49 = 0LL;
      }
      else
      {
        v49 = 0LL;
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      itemList = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v49, 0LL, 0LL);
      if ( ((unsigned __int8)itemList & 1) != 0 )
      {
        if ( !v49 )
          goto LABEL_102;
        v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v49, 0LL);
        v55 = MaterialEventLogListViewManager_TypeInfo;
        v56 = v54;
        if ( (BYTE3(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
          v55 = MaterialEventLogListViewManager_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionY(v56, v55->static_fields->VL_SCROLLBAR_POS_Y, 0LL);
        itemList = *(void **)(v49 + 40);
        if ( !itemList )
          goto LABEL_102;
        UIWidget__set_height(
          (UIWidget_o *)itemList,
          MaterialEventLogListViewManager_TypeInfo->static_fields->VL_SCROLLBAR_HEIGHT,
          0LL);
        itemList = *(void **)(v49 + 48);
        if ( !itemList )
          goto LABEL_102;
        UIWidget__set_height(
          (UIWidget_o *)itemList,
          MaterialEventLogListViewManager_TypeInfo->static_fields->VL_SCROLLBAR_HEIGHT,
          0LL);
      }
      v57 = this->fields.scrollView;
      if ( !v57 )
        goto LABEL_102;
      v58 = *(UnityEngine_Object_o **)&v57->fields.mPlane.fields.m_Normal.fields.x;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v58, 0LL, 0LL) )
      {
        itemList = MaterialEventLogListViewManager_TypeInfo;
        if ( (BYTE3(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
          itemList = MaterialEventLogListViewManager_TypeInfo;
        }
        if ( !v58 )
          goto LABEL_102;
        ((void (__fastcall *)(UnityEngine_Object_o *, _QWORD, float, float, float, float))v58->klass[1]._2.genericContainerHandle)(
          v58,
          *(_QWORD *)&v58->klass[1]._2.instance_size,
          0.0,
          (float)*(int *)(*((_QWORD *)itemList + 23) + 24LL),
          (float)*(int *)(*((_QWORD *)itemList + 23) + 16LL),
          (float)*(int *)(*((_QWORD *)itemList + 23) + 20LL));
      }
      ListViewManager__CheckSortButton((ListViewManager_o *)this, this->fields.issortButton, 0LL);
      v65 = MaterialEventLogListViewManager_TypeInfo;
      if ( (BYTE3(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
        v65 = MaterialEventLogListViewManager_TypeInfo;
      }
      EventLogservantSortInfo = v65->static_fields->EventLogservantSortInfo;
      this->fields.sort = EventLogservantSortInfo;
      p_sort = &this->fields.sort;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.sort,
        (System_Int32_array **)EventLogservantSortInfo,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64);
      if ( this->fields.sort )
      {
        this->fields.sort->fields.listViewKind = 0;
        itemList = *p_sort;
        if ( *p_sort )
        {
          ListViewSort__Load((ListViewSort_o *)itemList, 0LL);
          MaterialCollectionServantListViewManager = MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                                       v68,
                                                       v69);
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
            v77 = (System_Int32_array **)*p_sort;
            MaterialCollectionServantListViewManager->fields.sort = *p_sort;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&MaterialCollectionServantListViewManager->fields.sort,
              v77,
              v71,
              v72,
              v73,
              v74,
              v75,
              v76);
          }
          emptyMessageLabel = this->fields.emptyMessageLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          itemList = LocalizationManager__Get((System_String_o *)StringLiteral_11893/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/, 0LL);
          if ( emptyMessageLabel )
          {
            UILabel__set_text(emptyMessageLabel, (System_String_o *)itemList, 0LL);
            MaterialEventLogListViewManager__SetFilterButtonImage(this, v79);
            MaterialEventLogListViewManager__SortDummyData(this, v80);
            goto LABEL_99;
          }
        }
      }
    }
LABEL_102:
    sub_B2C434(itemList, v16);
  }
  if ( (WORD1(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
    v45 = MaterialEventLogListViewManager_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(gameObject, v45->static_fields->NORMAL_LIST_POS_Y, 0LL);
  ListViewManager__SetArrangementPitchY(
    (ListViewManager_o *)this,
    MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_ARRANGEMENT_PY,
    0LL);
  v50 = this->fields.scrollView;
  if ( !v50 )
    goto LABEL_102;
  v51 = *(_QWORD *)&v50->fields.showScrollBars;
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
  itemList = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v53, 0LL, 0LL);
  if ( ((unsigned __int8)itemList & 1) != 0 )
  {
    if ( !v53 )
      goto LABEL_102;
    v81 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v53, 0LL);
    v82 = MaterialEventLogListViewManager_TypeInfo;
    v83 = v81;
    if ( (BYTE3(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
      v82 = MaterialEventLogListViewManager_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionY(v83, v82->static_fields->NORMAL_SCROLLBAR_POS_Y, 0LL);
    itemList = *(void **)(v53 + 40);
    if ( !itemList )
      goto LABEL_102;
    UIWidget__set_height(
      (UIWidget_o *)itemList,
      MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_SCROLLBAR_BACK_HEIGHT,
      0LL);
    itemList = *(void **)(v53 + 48);
    if ( !itemList )
      goto LABEL_102;
    UIWidget__set_height(
      (UIWidget_o *)itemList,
      MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_SCROLLBAR_FORE_HEIGHT,
      0LL);
  }
  v84 = this->fields.scrollView;
  if ( !v84 )
    goto LABEL_102;
  v85 = *(UnityEngine_Object_o **)&v84->fields.mPlane.fields.m_Normal.fields.x;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v85, 0LL, 0LL) )
  {
    itemList = MaterialEventLogListViewManager_TypeInfo;
    if ( (BYTE3(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
      itemList = MaterialEventLogListViewManager_TypeInfo;
    }
    if ( !v85 )
      goto LABEL_102;
    ((void (__fastcall *)(UnityEngine_Object_o *, _QWORD, float, float, float, float))v85->klass[1]._2.genericContainerHandle)(
      v85,
      *(_QWORD *)&v85->klass[1]._2.instance_size,
      0.0,
      (float)*(int *)(*((_QWORD *)itemList + 23) + 56LL),
      (float)*(int *)(*((_QWORD *)itemList + 23) + 48LL),
      (float)*(int *)(*((_QWORD *)itemList + 23) + 52LL));
  }
LABEL_99:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  if ( this->fields.issortButton )
  {
    v87 = MaterialEventLogListViewManager__GetFilterCount(this, v86) < 1;
    ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v87, 0LL);
  }
  MaterialEventLogListViewManager__CreateInfs(this, v86);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
}


void __fastcall MaterialEventLogListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialEventLogListViewManager_c *v2; // x0
  ListViewSort_o *EventLogservantSortInfo; // x0

  if ( (byte_4188174 & 1) == 0 )
  {
    sub_B2C35C(&MaterialEventLogListViewManager_TypeInfo, v1);
    byte_4188174 = 1;
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
    sub_B2C434(0LL, v1);
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

  if ( (byte_4188183 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isDecide);
    byte_4188183 = 1;
  }
  eventLogServantSortSelectMenu = this->fields.eventLogServantSortSelectMenu;
  if ( !eventLogServantSortSelectMenu )
    goto LABEL_14;
  MaterialEventLogServantSortSelectMenu__Close_25950136(eventLogServantSortSelectMenu, 0LL, method);
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
    sub_B2C2F8(
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
      MaterialEventLogListViewManager__CreateInfs(this, v18);
      goto LABEL_13;
    }
LABEL_14:
    sub_B2C434(eventLogServantSortSelectMenu, isDecide);
  }
LABEL_13:
  MaterialEventLogListViewManager__SetFilterButtonImage(this, (const MethodInfo *)isDecide);
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
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_4188181 & 1) == 0 )
  {
    sub_B2C35C(&MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo, eventLogServantSortSelectMenu);
    sub_B2C35C(&Method_MaterialEventLogListViewManager_EndEventLogSortKind__, v5);
    byte_4188181 = 1;
  }
  if ( this->fields.isInput )
  {
    sort = this->fields.sort;
    v7 = (MaterialEventLogServantSortSelectMenu_CallbackFunc_o *)sub_B2C42C(MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo);
    MaterialEventLogServantSortSelectMenu_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_MaterialEventLogListViewManager_EndEventLogSortKind__,
      0LL);
    if ( !eventLogServantSortSelectMenu )
      sub_B2C434(v8, v9);
    MaterialEventLogServantSortSelectMenu__Open(eventLogServantSortSelectMenu, 0, sort, v7, v10);
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
  if ( (byte_4188182 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    this = (MaterialEventLogListViewManager_o *)sub_B2C35C(&MaterialEventLogListViewItem_TypeInfo, v4);
    byte_4188182 = 1;
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
    sub_B2C434(this, method);
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

  if ( (byte_418817A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B2C35C(&PartyServantListViewItem_TypeInfo, v5);
    byte_418817A = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  __int64 v5; // x1
  UnityEngine_Object_o *dropObjectList; // x19
  bool v7; // w8
  __int64 v8; // x10
  bool v9; // w8
  void *monitor; // x19
  bool v11; // w8

  if ( (byte_4188176 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomRootComponent_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v2);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_4188176 = 1;
  }
  result = (MaterialCollectionServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
          return (MaterialCollectionServantListViewManager_o *)*((_QWORD *)monitor + 68);
LABEL_25:
        sub_B2C434(result, v5);
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
    sub_B2C434(0LL, method);
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

  if ( (byte_4188175 & 1) == 0 )
  {
    sub_B2C35C(&MaterialEventLogListViewManager_TypeInfo, v1);
    byte_4188175 = 1;
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
    sub_B2C434(0LL, v1);
  ListViewSort__InitLoad(EventLogservantSortInfo, 0LL);
}


void __fastcall MaterialEventLogListViewManager__InitializeObjectPosition(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *seed; // x20
  UnityEngine_GameObject_o *v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewItemSeed_o *v7; // x8
  UnityEngine_Object_o *parent; // x20
  struct ListViewItemSeed_o *v9; // x8
  int klass; // w8
  UnityEngine_GameObject_o *v11; // x19
  unsigned int v12; // w20
  __int64 v13; // x0

  if ( (byte_418818B & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_MaterialEventLogListViewObject___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418818B = 1;
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
    v7 = this->fields.seed;
    if ( !v7 )
      goto LABEL_21;
    parent = (UnityEngine_Object_o *)v7->fields.parent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(parent, 0LL, 0LL);
    if ( ((unsigned __int8)v5 & 1) != 0 )
    {
      v9 = this->fields.seed;
      if ( !v9 )
        goto LABEL_21;
      v5 = v9->fields.parent;
      if ( !v5 )
        goto LABEL_21;
      v5 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                                         v5,
                                         (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_MaterialEventLogListViewObject___);
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
            v13 = sub_B2C460(v5);
            sub_B2C400(v13, 0LL);
          }
          v5 = (UnityEngine_GameObject_o *)*((_QWORD *)&v11[1].monitor + (int)v12);
          if ( !v5 )
            break;
          MaterialEventLogListViewObject__InitPosition((MaterialEventLogListViewObject_o *)v5, v6);
          klass = (int)v11[1].klass;
          if ( (int)++v12 >= klass )
            return;
        }
LABEL_21:
        sub_B2C434(v5, v6);
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

  if ( (byte_418817F & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_MaterialEventLogListViewItem___, obj);
    sub_B2C35C(&MaterialEventLogListViewItem_TypeInfo, v4);
    this = (MaterialEventLogListViewManager_o *)sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_418817F = 1;
  }
  if ( !obj
    || (linkItem = obj->fields.linkItem) == 0LL
    || (v7 = *(&MaterialEventLogListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v7)
    || (MaterialEventLogListViewItem_c *)linkItem->klass->_2.typeHierarchy[v7 - 1] != MaterialEventLogListViewItem_TypeInfo )
  {
    sub_B2C434(this, obj);
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
        (const MethodInfo_2D65B10 *)Method_ActionExtensions_Call_MaterialEventLogListViewItem___);
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
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x1
  int v31; // w8
  _DWORD *v32; // x22
  unsigned int v33; // w25
  MaterialEventLogListViewObject_o *v34; // x24
  const MethodInfo *v35; // x4
  int32_t initMode; // w8
  UnityEngine_GameObject_o *v37; // x0
  UIWidget_o *v38; // x21
  float v39; // s8
  int mGo; // w9
  System_Action_o *v41; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x20
  float IntpTime_AutoResume; // s8
  System_Action_o *v45; // x21
  System_Action_o *v46; // x20
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418817D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__, v9);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v10);
    sub_B2C35C(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__0__, v11);
    sub_B2C35C(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__1__, v12);
    sub_B2C35C(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__2__, v13);
    sub_B2C35C(&MaterialEventLogListViewManager___c__DisplayClass50_0_TypeInfo, v14);
    byte_418817D = 1;
  }
  v15 = sub_B2C42C(MaterialEventLogListViewManager___c__DisplayClass50_0_TypeInfo);
  MaterialEventLogListViewManager___c__DisplayClass50_0___ctor(
    (MaterialEventLogListViewManager___c__DisplayClass50_0_o *)v15,
    0LL);
  if ( !v15 )
    goto LABEL_29;
  *(_QWORD *)(v15 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = end_act;
  sub_B2C2F8((BattleServantConfConponent_o *)(v15 + 24), (System_Int32_array **)end_act, v24, v25, v26, v27, v28, v29);
  ObjectList = MaterialEventLogListViewManager__get_ObjectList(this, v30);
  if ( !ObjectList )
    goto LABEL_29;
  v31 = ObjectList[6];
  v32 = ObjectList;
  if ( v31 >= 1 )
  {
    v33 = 0;
    while ( 1 )
    {
      if ( v31 <= v33 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v34 = *(MaterialEventLogListViewObject_o **)(*((_QWORD *)v32 + 2) + 8LL * (int)v33 + 32);
      if ( !v34 )
        break;
      zero = UnityEngine_Vector3__get_zero(0LL);
      MaterialEventLogListViewObject__Init_25941588(
        v34,
        mode,
        0LL,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        -1,
        v35);
      v31 = v32[6];
      if ( (int)++v33 >= v31 )
        goto LABEL_11;
    }
LABEL_29:
    sub_B2C434(ObjectList, v17);
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
                           (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
    v45 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v45,
      (Il2CppObject *)v15,
      Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__2__,
      0LL);
    if ( !Component_UIWidget )
      goto LABEL_29;
    SlideFadeObject__SlideOut_24783204(
      (SlideFadeObject_o *)Component_UIWidget,
      580.0,
      IntpTime_AutoResume,
      0.0,
      v45,
      0LL);
  }
  else if ( initMode == 3 )
  {
    this->fields.mIsDoing_Slide = 1;
    this->fields.isScrollRefresh = 1;
    ObjectList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !ObjectList )
      goto LABEL_29;
    v37 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)ObjectList, 0LL);
    v38 = GameObjectExtensions__SafeGetComponent_UIWidget_(
            v37,
            (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    v39 = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
    if ( this->fields.issortButton )
    {
      if ( !v38 )
        goto LABEL_29;
      mGo = (int)v38->fields.mGo;
      HIDWORD(v38->fields.mGo) = v38->fields.updateAnchors;
      LODWORD(v38->fields.mTrans) = -1027735552;
      HIDWORD(v38->fields.mTrans) = mGo;
      v41 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v41,
        (Il2CppObject *)v15,
        Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__1__,
        0LL);
      SlideFadeObject__SlideSortIn((SlideFadeObject_o *)v38, 580.0, v39, 0.0, v41, 0LL);
    }
    else
    {
      v46 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v46,
        (Il2CppObject *)v15,
        Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__0__,
        0LL);
      if ( !v38 )
        goto LABEL_29;
      SlideFadeObject__SlideIn_24782264((SlideFadeObject_o *)v38, 580.0, v39, 0.0, v46, 0LL);
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
  __int64 v9; // x1
  int v10; // w8
  void *v11; // x19
  __int64 v12; // x22
  bool v13; // w20
  UnityEngine_Object_o *Component_srcLineSprite; // x21

  if ( (byte_4188186 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, isActive);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_4188186 = 1;
  }
  ObjectList = MaterialEventLogListViewManager__get_ObjectList(this, (const MethodInfo *)isActive);
  if ( !ObjectList )
    goto LABEL_18;
  v10 = *((_DWORD *)ObjectList + 6);
  v11 = ObjectList;
  if ( v10 >= 1 )
  {
    v12 = 0LL;
    v13 = isActive;
    while ( 1 )
    {
      if ( v10 <= (unsigned int)v12 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      ObjectList = *(void **)(*((_QWORD *)v11 + 2) + 8 * v12 + 32);
      if ( !ObjectList )
        break;
      ObjectList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ObjectList, 0LL);
      if ( !ObjectList )
        break;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)ObjectList,
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, v13, 0LL);
      }
      v10 = *((_DWORD *)v11 + 6);
      if ( (int)++v12 >= v10 )
        return;
    }
LABEL_18:
    sub_B2C434(ObjectList, v9);
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

  if ( (byte_4188184 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_361/*"#FE4545"*/, method);
    sub_B2C35C(&StringLiteral_16993/*"btn_filter_on"*/, v3);
    sub_B2C35C(&StringLiteral_347/*"#000000"*/, v4);
    sub_B2C35C(&StringLiteral_16992/*"btn_filter"*/, v5);
    byte_4188184 = 1;
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall MaterialEventLogListViewManager__SetMode(
        MaterialEventLogListViewManager_o *this,
        int32_t mode,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v7; // x1
  int32_t mIsDoing_Slide; // w8
  __int64 v9; // x1
  UnityEngine_Collider_o *mBoxCollider; // x0
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  bool result; // w0
  MaterialEventLogListViewManager_o *v14; // x0
  System_Action_o *v15; // x21
  System_Delegate_o *v16; // x0
  System_Action_o *v17; // x2
  MaterialEventLogListViewManager_o *v18; // x0
  int32_t v19; // w1
  System_Action_o *v20; // x2
  const MethodInfo *v21; // x3

  if ( (byte_418817C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_MaterialEventLogListViewManager__SetMode_b__49_0__, v7);
    byte_418817C = 1;
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
    sub_B2C434(0LL, v9);
  UnityEngine_Collider__set_enabled(mBoxCollider, this->fields.isInput, 0LL);
  switch ( mode )
  {
    case 1:
    case 3:
      v12 = 2;
      goto LABEL_16;
    case 2:
      v12 = 3;
LABEL_16:
      v14 = this;
      goto LABEL_21;
    case 4:
      v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_MaterialEventLogListViewManager__SetMode_b__49_0__, 0LL);
      v16 = System_Delegate__Combine((System_Delegate_o *)end_act, (System_Delegate_o *)v15, 0LL);
      v17 = (System_Action_o *)v16;
      if ( v16 && (System_Action_c *)v16->klass != System_Action_TypeInfo )
      {
        v18 = (MaterialEventLogListViewManager_o *)sub_B2C728(v16);
        MaterialEventLogListViewManager__RequestListObject(v18, v19, v20, v21);
      }
      else
      {
        v12 = 2;
        v14 = this;
LABEL_22:
        MaterialEventLogListViewManager__RequestListObject(v14, v12, v17, v11);
        result = 1;
      }
      break;
    default:
      v14 = this;
      v12 = 0;
LABEL_21:
      v17 = end_act;
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
  if ( (byte_418817B & 1) == 0 )
  {
    this = (MaterialEventLogListViewManager_o *)sub_B2C35C(&MaterialEventLogListViewObject_TypeInfo, obj);
    byte_418817B = 1;
  }
  if ( !obj
    || (v6 = *(&MaterialEventLogListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (MaterialEventLogListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != MaterialEventLogListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
  }
  selectedLimitCount = v5->fields.selectedLimitCount;
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v14 = 3;
  else
    v14 = 2;
  MaterialEventLogListViewObject__Init_25941588(
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

  if ( (byte_4188177 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, method);
    byte_4188177 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL),
        GameObjectExtensions__SetLocalPositionY(gameObject, y, 0LL),
        (scrollView = this->fields.scrollView) == 0LL)
    || (scrollView = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL)) == 0LL
    || (scrollView = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                       (UnityEngine_GameObject_o *)scrollView,
                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIPanel___)) == 0LL )
  {
    sub_B2C434(scrollView, method);
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
  sub_B2C2F8(
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

  if ( (byte_4188187 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17021/*"btn_sort_up"*/, v3);
    sub_B2C35C(&StringLiteral_17104/*"btn_txt_up"*/, v4);
    sub_B2C35C(&StringLiteral_17061/*"btn_txt_new"*/, v5);
    sub_B2C35C(&StringLiteral_17051/*"btn_txt_down"*/, v6);
    sub_B2C35C(&StringLiteral_17068/*"btn_txt_old"*/, v7);
    sub_B2C35C(&StringLiteral_17018/*"btn_sort_down"*/, v8);
    byte_4188187 = 1;
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


void __fastcall MaterialEventLogListViewManager__SetValentineListDisplay(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  struct UIPanel_o *basePanel; // x8
  __int64 v6; // x11
  MyRoomControl_o *v7; // x19

  if ( (byte_418817E & 1) == 0 )
  {
    sub_B2C35C(&MyRoomRootComponent_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_418817E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (basePanel = Instance->fields.basePanel) == 0LL
    || (v6 = *(&MyRoomRootComponent_TypeInfo->_2.bitflags2 + 1),
        *(&basePanel->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (MyRoomRootComponent_c *)basePanel->klass->_2.typeHierarchy[v6 - 1] != MyRoomRootComponent_TypeInfo
    || (v7 = *(MyRoomControl_o **)&basePanel->fields.updateAnchors) == 0LL )
  {
    sub_B2C434(Instance, v4);
  }
  if ( v7->fields.IsMaterialEventBack )
  {
    MyRoomControl__ValentineListChange(v7, 0, 0LL);
    MyRoomControl__EndMaterialEventBack(v7, 0LL);
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

  if ( (byte_4188185 & 1) == 0 )
  {
    sub_B2C35C(&Method_MaterialEventLogListViewManager_SortAscendingOrder__, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4188185 = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_MaterialEventLogListViewManager_SortAscendingOrder__;
    if ( (*((_BYTE *)Method_MaterialEventLogListViewManager_SortAscendingOrder__ + 75) & 2) != 0 )
      v4 = (_QWORD *)sub_B2C364(Method_MaterialEventLogListViewManager_SortAscendingOrder__);
    v5 = (System_Reflection_MethodBase_o *)sub_B2C340(v4, v4[3]);
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
        sub_B2C2F8(
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
    sub_B2C434(v6, v7);
  }
}


void __fastcall MaterialEventLogListViewManager__SortDummyData(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  MaterialEventLogListViewManager_o *v2; // x19
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
  __int64 v13; // x1
  __int64 v14; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 size; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x20
  __int64 v19; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v20; // x26
  _QWORD *v21; // x8
  __int64 v22; // x11
  struct System_Collections_Generic_List_ListViewItem__o *v23; // x26
  __int64 v24; // x8
  __int64 v25; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v26; // x0
  const MethodInfo *v27; // x1
  int v28; // w22
  int v29; // w23
  int v30; // w20
  int v31; // w24
  struct ListViewSort_o *sort; // x8
  _BOOL4 isAscendingOrder; // w28
  ListViewItem_o *v34; // x0
  ListViewItem_o *v35; // x21
  int32_t v36; // w1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_4188189 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Remove__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem___ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B2C35C(&System_Collections_Generic_List_MaterialEventLogListViewItem__TypeInfo, v12);
    sub_B2C35C(&System_Collections_Generic_List_ListViewItem__TypeInfo, v13);
    this = (MaterialEventLogListViewManager_o *)sub_B2C35C(&MaterialEventLogListViewItem_TypeInfo, v14);
    byte_4188189 = 1;
  }
  memset(&i, 0, sizeof(i));
  itemList = v2->fields.itemList;
  if ( !itemList )
    goto LABEL_38;
  size = itemList->fields._size;
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MaterialEventLogListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem___ctor__);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  if ( (int)size >= 1 )
  {
    v19 = 4LL;
    while ( 1 )
    {
      v20 = v2->fields.itemList;
      if ( !v20 )
        break;
      if ( v19 - 4 >= (unsigned __int64)(unsigned int)v20->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v21 = (_QWORD *)*((_QWORD *)&v20->fields._items->obj.klass + v19);
      if ( !v21 )
        break;
      v22 = *(&MaterialEventLogListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*v21 + 300LL) < (unsigned int)v22
        || *(MaterialEventLogListViewItem_c **)(*(_QWORD *)(*v21 + 200LL) + 8 * v22 - 8) != MaterialEventLogListViewItem_TypeInfo )
      {
        break;
      }
      if ( *(MaterialEventLogListViewItem_c **)(*(_QWORD *)(*v21 + 200LL)
                                              + 8LL * *(&MaterialEventLogListViewItem_TypeInfo->_2.bitflags2 + 1)
                                              - 8) != MaterialEventLogListViewItem_TypeInfo )
        v21 = 0LL;
      if ( !v21[15] )
      {
        v23 = v2->fields.itemList;
        if ( !v23 )
          break;
        if ( v19 - 4 >= (unsigned __int64)(unsigned int)v23->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( !v18 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v18,
          *((EventMissionProgressRequest_Argument_ProgressData_o **)&v23->fields._items->obj.klass + v19),
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      v24 = v19 - 3;
      ++v19;
      if ( v24 >= size )
        goto LABEL_21;
    }
LABEL_38:
    sub_B2C434(this, method);
  }
LABEL_21:
  if ( !v18 )
    goto LABEL_38;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v18,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = v43;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          v26,
          (WarBoardManager_TaskList_o *)i.fields.current,
          (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_ListViewItem__Remove__) )
  {
    v26 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v2->fields.itemList;
    if ( !v26 )
      sub_B2C434(0LL, v25);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  this = (MaterialEventLogListViewManager_o *)MaterialEventLogListViewManager__GetFilterCount(v2, v27);
  if ( (int)this > 3 )
    v28 = 1;
  else
    v28 = 4 - (_DWORD)this;
  if ( v28 >= 1 )
  {
    v29 = 0;
    v30 = -(int)this;
    v31 = (_DWORD)this + 999;
    do
    {
      sort = v2->fields.sort;
      if ( !sort )
        goto LABEL_38;
      isAscendingOrder = sort->fields.isAscendingOrder;
      v34 = (ListViewItem_o *)sub_B2C42C(MaterialEventLogListViewItem_TypeInfo);
      v35 = v34;
      v36 = isAscendingOrder ? v31 + v29 : v30;
      ListViewItem___ctor_24128628(v34, v36, 0LL);
      v35[1].monitor = 0LL;
      LODWORD(v35[1].klass) = 5;
      sub_B2C2F8((BattleServantConfConponent_o *)&v35[1].monitor, 0LL, v37, v38, v39, v40, v41, v42);
      this = (MaterialEventLogListViewManager_o *)v2->fields.itemList;
      if ( !this )
        goto LABEL_38;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v35,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      ++v29;
      --v30;
    }
    while ( v29 < v28 );
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

  if ( (byte_4188178 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_MaterialEventLogListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_4188178 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MaterialEventLogListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MaterialEventLogListViewObject___ctor__);
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
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MaterialEventLogListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MaterialEventLogListViewObject__o *)v11;
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
    sub_B2C434(this, method);
  MaterialEventLogListViewManager__SetMode(this->fields.__4__this, 2, this->fields.end_act, 0LL);
}


void __fastcall MaterialEventLogListViewManager___c__DisplayClass50_0___RequestListObject_b__1(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  struct MaterialEventLogListViewManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (_4__this->fields.mIsDoing_Slide = 0, !this->fields.__4__this) )
    sub_B2C434(this, method);
  MaterialEventLogListViewManager__SetMode(this->fields.__4__this, 2, this->fields.end_act, 0LL);
}


void __fastcall MaterialEventLogListViewManager___c__DisplayClass50_0___RequestListObject_b__2(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  MaterialEventLogListViewManager___c__DisplayClass50_0_o *v2; // x19
  __int64 v3; // x1
  struct MaterialEventLogListViewManager_o *_4__this; // x8
  System_Action_o *_9__3; // x21
  MaterialEventLogListViewManager_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  v2 = this;
  if ( (byte_4185D1C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    this = (MaterialEventLogListViewManager___c__DisplayClass50_0_o *)sub_B2C35C(
                                                                        &Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__3__,
                                                                        v3);
    byte_4185D1C = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  _4__this->fields.mIsDoing_Slide = 0;
  _9__3 = v2->fields.__9__3;
  v6 = v2->fields.__4__this;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v2,
      Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__3__,
      0LL);
    v2->fields.__9__3 = _9__3;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v2->fields.__9__3,
      (System_Int32_array **)_9__3,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( !v6 )
LABEL_8:
    sub_B2C434(this, method);
  MaterialEventLogListViewManager__SetMode(v6, 0, _9__3, 0LL);
}


void __fastcall MaterialEventLogListViewManager___c__DisplayClass50_0___RequestListObject_b__3(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}