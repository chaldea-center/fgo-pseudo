void __fastcall MaterialEventLogListViewManager___cctor(const MethodInfo *method)
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
  MaterialEventLogListViewManager_c *v10; // x8
  ListViewSort_o *v11; // x19
  struct MaterialEventLogListViewManager_StaticFields *static_fields; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_42EC347 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewSort_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&MaterialEventLogListViewManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_9077/*"MaterialCollectionServant6"*/, v7, v8, v9);
    byte_42EC347 = 1;
  }
  MaterialEventLogListViewManager_TypeInfo->static_fields->VL_LIST_POS_Y = -30.0;
  MaterialEventLogListViewManager_TypeInfo->static_fields->VL_ARRANGEMENT_PY = -102.0;
  v10 = MaterialEventLogListViewManager_TypeInfo;
  MaterialEventLogListViewManager_TypeInfo->static_fields->VL_SCROLLBAR_POS_Y = 70.0;
  v10->static_fields->VL_SCROLLBAR_HEIGHT = 320;
  v10->static_fields->VL_PANEL_WIDTH = 500;
  v10->static_fields->VL_PANEL_HEIGHT = 440;
  v10->static_fields->VL_PANEL_CENTER_Y = 30;
  v10->static_fields->NORMAL_LIST_POS_Y = -35.0;
  v10->static_fields->NORMAL_ARRANGEMENT_PY = -120.0;
  v10->static_fields->NORMAL_SCROLLBAR_POS_Y = 45.0;
  v10->static_fields->NORMAL_SCROLLBAR_BACK_HEIGHT = 400;
  v10->static_fields->NORMAL_SCROLLBAR_FORE_HEIGHT = 404;
  v10->static_fields->NORMAL_PANEL_WIDTH = 500;
  v10->static_fields->NORMAL_PANEL_HEIGHT = 500;
  v10->static_fields->NORMAL_PANEL_CENTER_Y = 0;
  v11 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v11, (System_String_o *)StringLiteral_9077/*"MaterialCollectionServant6"*/, 27, 1, 0LL);
  static_fields = MaterialEventLogListViewManager_TypeInfo->static_fields;
  static_fields->EventLogservantSortInfo = v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&static_fields->EventLogservantSortInfo,
    (System_Int32_array **)v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  struct UnityEngine_BoxCollider_o *Component_srcLineSprite; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct UIScrollView_o *scrollView; // x8
  ListViewSort_o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_42EC32E & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ListViewSort_TypeInfo, v5, v6, v7);
    byte_42EC32E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (Component_srcLineSprite = (struct UnityEngine_BoxCollider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        gameObject,
                                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.mBoxCollider = Component_srcLineSprite,
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.mBoxCollider,
          (System_Int32_array **)Component_srcLineSprite,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.mBoxCollider) == 0LL)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL),
        (scrollView = this->fields.scrollView) == 0LL) )
  {
    sub_B5D69C(gameObject, v9);
  }
  BYTE1(scrollView->fields.scrollWheelFactor) = 0;
  v18 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor(v18, 3, 1, 0LL);
  this->fields.sort = v18;
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  MaterialEventLogListViewManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  _BOOL4 issortButton; // w8
  BattleServantConfConponent_o *p_sort; // x19
  ListViewSort_o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  MaterialEventLogListViewManager_o *v20; // x0
  const MethodInfo *v21; // x1
  UnityEngine_Object_o *MaterialCollectionServantListViewManager; // x19
  MaterialEventLogListViewManager_c *v23; // x0
  ListViewSort_o *EventLogservantSortInfo; // x8

  v4 = this;
  if ( (byte_42EC343 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewSort_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&MaterialEventLogListViewManager_TypeInfo, v5, v6, v7);
    this = (MaterialEventLogListViewManager_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42EC343 = 1;
  }
  issortButton = v4->fields.issortButton;
  p_sort = (BattleServantConfConponent_o *)&v4->fields.sort;
  if ( !issortButton )
  {
    if ( !p_sort->klass )
      goto LABEL_21;
    *((_BYTE *)&p_sort->klass->_1.this_arg.bits + 4) = 1;
  }
  v13 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor(v13, 3, 1, 0LL);
  p_sort->klass = (BattleServantConfConponent_c *)v13;
  sub_B5D560(p_sort, (System_Int32_array **)v13, v14, v15, v16, v17, v18, v19);
  MaterialCollectionServantListViewManager = (UnityEngine_Object_o *)MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                                                       v20,
                                                                       v21);
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
  v23 = MaterialEventLogListViewManager_TypeInfo;
  if ( (BYTE3(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
    v23 = MaterialEventLogListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v23->static_fields->EventLogservantSortInfo;
  if ( EventLogservantSortInfo )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) == 0
      || v23->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v23),
          (EventLogservantSortInfo = MaterialEventLogListViewManager_TypeInfo->static_fields->EventLogservantSortInfo) != 0LL) )
    {
      ListViewSort__Save(EventLogservantSortInfo, 0LL);
      return;
    }
LABEL_21:
    sub_B5D69C(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogListViewManager__CheckPlayableMaterial(
        MaterialEventLogListViewManager_o *this,
        int32_t servantId,
        int32_t limitCount,
        const MethodInfo *method)
{
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
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  MaterialEventLogListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v21; // x1
  MaterialEventLogListViewObject_o *v22; // x22
  MaterialEventLogListViewItem_o *Item; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  MaterialEventLogListViewItem_o *v26; // x21
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8
  bool v28; // w23
  const MethodInfo *v29; // x2
  __int64 v30; // x0
  __int64 v31; // x1
  struct MaterialEventLogListViewItem_Info_o *v32; // x8
  struct MaterialEventLogListViewItem_Info_o *v33; // x8
  unsigned int v34; // w9
  __int64 v35; // x1
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42EC33B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, servantId, limitCount, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v10, v11, v12);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v16, v17, v18);
    byte_42EC33B = 1;
  }
  memset(&v37, 0, sizeof(v37));
  objectList = this->fields.objectList;
  this->fields.selectedLimitCount = limitCount;
  if ( !objectList )
    sub_B5D69C(0LL, *(_QWORD *)&servantId);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v36,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v37 = v36;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v37,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v37.fields.current )
      sub_B5D69C(0LL, v35);
    Component_srcLineSprite = (MaterialEventLogListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    (UnityEngine_GameObject_o *)v37.fields.current,
                                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___);
    v22 = Component_srcLineSprite;
    if ( !Component_srcLineSprite )
      sub_B5D69C(0LL, v21);
    Item = MaterialEventLogListViewObject__GetItem(Component_srcLineSprite, v21);
    v26 = Item;
    if ( !Item )
      sub_B5D69C(0LL, v24);
    info_k__BackingField = Item->fields._info_k__BackingField;
    if ( info_k__BackingField && info_k__BackingField->fields.svt_id == servantId )
    {
      v28 = MaterialEventLogListViewItem__CheckPlayableMaterial(Item, limitCount, v25);
      MaterialEventLogListViewObject__SetEnableSelect(v22, v28, v29);
      v32 = v26->fields._info_k__BackingField;
      if ( v28 )
      {
        if ( !v32 )
          sub_B5D69C(v30, v31);
        v32->fields.flag &= ~1u;
        v33 = v26->fields._info_k__BackingField;
        if ( !v33 )
          sub_B5D69C(v30, v31);
        v34 = v33->fields.flag & 0xFFFFFFFB;
      }
      else
      {
        if ( !v32 )
          sub_B5D69C(v30, v31);
        v32->fields.flag |= 1u;
        v33 = v26->fields._info_k__BackingField;
        if ( !v33 )
          sub_B5D69C(v30, v31);
        v34 = v33->fields.flag | 4;
      }
      v33->fields.flag = v34;
    }
    else
    {
      MaterialEventLogListViewObject__SetEnableSelect(v22, 1, v25);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v37,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall MaterialEventLogListViewManager__CreateInfs(
        MaterialEventLogListViewManager_o *this,
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
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  void *Instance; // x0
  __int64 v36; // x1
  UnityEngine_Object_o *v37; // x20
  __int64 v38; // x10
  UnityEngine_Object_o *monitor; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x21
  _BOOL8 v41; // x0
  __int64 v42; // x11
  EventMissionProgressRequest_Argument_ProgressData_o *v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42EC345 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_MaterialEventLogListViewItem_Info__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&MaterialEventLogListViewItem_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&MyRoomRootComponent_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v32, v33, v34);
    byte_42EC345 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  v37 = (UnityEngine_Object_o *)*((_QWORD *)Instance + 3);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v37, 0LL, 0LL) )
  {
    if ( v37 )
    {
      v38 = *(&MyRoomRootComponent_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v37->klass->_2.bitflags2 + 1) >= (unsigned int)v38 )
      {
        if ( (MyRoomRootComponent_c *)v37->klass->_2.typeHierarchy[v38 - 1] != MyRoomRootComponent_TypeInfo )
          v37 = 0LL;
      }
      else
      {
        v37 = 0LL;
      }
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = (void *)UnityEngine_Object__op_Equality(v37, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      if ( !v37 )
        goto LABEL_35;
      monitor = (UnityEngine_Object_o *)v37[2].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
      {
        v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MaterialEventLogListViewItem_Info__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v40,
          (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info___ctor__);
        Instance = this->fields.itemSortList;
        if ( Instance )
        {
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            &v50,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
            (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          while ( 1 )
          {
            v41 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v50,
                    (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v41 )
              break;
            if ( v50.fields.current )
            {
              v42 = *(&MaterialEventLogListViewItem_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v50.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v42
                && (MaterialEventLogListViewItem_c *)v50.fields.current->klass->_2.typeHierarchy[v42 - 1] == MaterialEventLogListViewItem_TypeInfo )
              {
                v43 = (EventMissionProgressRequest_Argument_ProgressData_o *)v50.fields.current[7].monitor;
                if ( v43 )
                {
                  if ( !v40 )
                    sub_B5D69C(v41, v43);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v40,
                    v43,
                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__Add__);
                }
              }
            }
          }
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v50,
            (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          if ( monitor )
          {
            Instance = monitor[36].klass;
            if ( Instance )
            {
              *((_QWORD *)Instance + 18) = v40;
              sub_B5D560(
                (BattleServantConfConponent_o *)((char *)Instance + 144),
                (System_Int32_array **)v40,
                v44,
                v45,
                v46,
                v47,
                v48,
                v49);
              return;
            }
          }
        }
LABEL_35:
        sub_B5D69C(Instance, v36);
      }
    }
  }
}


void __fastcall MaterialEventLogListViewManager__CreateList(
        MaterialEventLogListViewManager_o *this,
        int32_t kind,
        System_Collections_Generic_List_MaterialEventLogListViewItem_Info__o *infs,
        const MethodInfo *method)
{
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
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  void *itemList; // x0
  __int64 v32; // x1
  int32_t size; // w8
  int v34; // w8
  unsigned __int64 v35; // x22
  signed __int64 v36; // x25
  __int64 v37; // x23
  System_Int32_array ***v38; // x24
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  MaterialEventLogListViewItem_Info_o *v58; // x8
  _BOOL4 issortButton; // w21
  UnityEngine_GameObject_o *gameObject; // x20
  MaterialEventLogListViewManager_c *v61; // x8
  struct UIScrollView_o *scrollView; // x8
  __int64 v63; // x8
  __int64 v64; // x11
  __int64 v65; // x20
  struct UIScrollView_o *v66; // x8
  __int64 v67; // x8
  __int64 v68; // x11
  __int64 v69; // x20
  UnityEngine_GameObject_o *v70; // x0
  MaterialEventLogListViewManager_c *v71; // x8
  UnityEngine_GameObject_o *v72; // x21
  struct UIScrollView_o *v73; // x8
  UnityEngine_Object_o *v74; // x20
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  MaterialEventLogListViewManager_c *v81; // x0
  struct ListViewSort_o *EventLogservantSortInfo; // x1
  struct ListViewSort_o **p_sort; // x20
  MaterialEventLogListViewManager_o *v84; // x0
  const MethodInfo *v85; // x1
  MaterialCollectionServantListViewManager_o *MaterialCollectionServantListViewManager; // x21
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_Int32_array **v93; // x1
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v95; // x1
  const MethodInfo *v96; // x1
  UnityEngine_GameObject_o *v97; // x0
  MaterialEventLogListViewManager_c *v98; // x8
  UnityEngine_GameObject_o *v99; // x21
  struct UIScrollView_o *v100; // x8
  UnityEngine_Object_o *v101; // x20
  const MethodInfo *v102; // x1
  bool v103; // w1

  if ( (byte_42EC334 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, kind, (_DWORD)infs, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Count__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__, v10, v11, v12);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&MaterialEventLogListViewItem_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&MaterialEventLogListViewManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&UIScrollBar_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_12026/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/, v28, v29, v30);
    byte_42EC334 = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  ListViewManager__CheckSortButton((ListViewManager_o *)this, 0, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !infs )
    goto LABEL_102;
  size = infs->fields._size;
  if ( size > 3 )
    v34 = size + 1;
  else
    v34 = 4;
  if ( v34 > 0 )
  {
    v35 = 0LL;
    v36 = v34;
    do
    {
      v37 = sub_B5D694(MaterialEventLogListViewItem_TypeInfo);
      ListViewItem___ctor_23901828((ListViewItem_o *)v37, v35, 0LL);
      *(_DWORD *)(v37 + 112) = kind;
      *(_QWORD *)(v37 + 120) = 0LL;
      v38 = (System_Int32_array ***)(v37 + 120);
      sub_B5D560((BattleServantConfConponent_o *)(v37 + 120), 0LL, v39, v40, v41, v42, v43, v44);
      if ( (__int64)v35 < infs->fields._size )
      {
        if ( v35 >= (unsigned int)infs->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( !v37 )
          goto LABEL_102;
        v51 = (System_Int32_array **)infs->fields._items->m_Items[v35];
        *v38 = v51;
        sub_B5D560((BattleServantConfConponent_o *)(v37 + 120), v51, v45, v46, v47, v48, v49, v50);
        itemList = *v38;
        if ( !*v38 )
          goto LABEL_102;
        *((_QWORD *)itemList + 11) = v37;
        sub_B5D560(
          (BattleServantConfConponent_o *)((char *)itemList + 88),
          (System_Int32_array **)v37,
          v52,
          v53,
          v54,
          v55,
          v56,
          v57);
        if ( v35 >= (unsigned int)infs->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v58 = infs->fields._items->m_Items[v35];
        if ( !v58 )
          goto LABEL_102;
        this->fields.issortButton = v58->fields.listChange;
      }
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_102;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      ++v35;
    }
    while ( (__int64)v35 < v36 );
  }
  issortButton = this->fields.issortButton;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v61 = MaterialEventLogListViewManager_TypeInfo;
  if ( issortButton )
  {
    if ( (WORD1(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
      v61 = MaterialEventLogListViewManager_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionY(gameObject, v61->static_fields->VL_LIST_POS_Y, 0LL);
    ListViewManager__SetArrangementPitchY(
      (ListViewManager_o *)this,
      MaterialEventLogListViewManager_TypeInfo->static_fields->VL_ARRANGEMENT_PY,
      0LL);
    scrollView = this->fields.scrollView;
    if ( scrollView )
    {
      v63 = *(_QWORD *)&scrollView->fields.showScrollBars;
      if ( v63
        && (v64 = *(&UIScrollBar_TypeInfo->_2.bitflags2 + 1),
            *(unsigned __int8 *)(*(_QWORD *)v63 + 300LL) >= (unsigned int)v64) )
      {
        if ( *(UIScrollBar_c **)(*(_QWORD *)(*(_QWORD *)v63 + 200LL) + 8 * v64 - 8) == UIScrollBar_TypeInfo )
          v65 = v63;
        else
          v65 = 0LL;
      }
      else
      {
        v65 = 0LL;
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      itemList = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v65, 0LL, 0LL);
      if ( ((unsigned __int8)itemList & 1) != 0 )
      {
        if ( !v65 )
          goto LABEL_102;
        v70 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v65, 0LL);
        v71 = MaterialEventLogListViewManager_TypeInfo;
        v72 = v70;
        if ( (BYTE3(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
          v71 = MaterialEventLogListViewManager_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionY(v72, v71->static_fields->VL_SCROLLBAR_POS_Y, 0LL);
        itemList = *(void **)(v65 + 40);
        if ( !itemList )
          goto LABEL_102;
        UIWidget__set_height(
          (UIWidget_o *)itemList,
          MaterialEventLogListViewManager_TypeInfo->static_fields->VL_SCROLLBAR_HEIGHT,
          0LL);
        itemList = *(void **)(v65 + 48);
        if ( !itemList )
          goto LABEL_102;
        UIWidget__set_height(
          (UIWidget_o *)itemList,
          MaterialEventLogListViewManager_TypeInfo->static_fields->VL_SCROLLBAR_HEIGHT,
          0LL);
      }
      v73 = this->fields.scrollView;
      if ( !v73 )
        goto LABEL_102;
      v74 = *(UnityEngine_Object_o **)&v73->fields.mPlane.fields.m_Normal.fields.x;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v74, 0LL, 0LL) )
      {
        itemList = MaterialEventLogListViewManager_TypeInfo;
        if ( (BYTE3(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
          itemList = MaterialEventLogListViewManager_TypeInfo;
        }
        if ( !v74 )
          goto LABEL_102;
        ((void (__fastcall *)(UnityEngine_Object_o *, _QWORD, float, float, float, float))v74->klass[1]._2.genericContainerHandle)(
          v74,
          *(_QWORD *)&v74->klass[1]._2.instance_size,
          0.0,
          (float)*(int *)(*((_QWORD *)itemList + 23) + 24LL),
          (float)*(int *)(*((_QWORD *)itemList + 23) + 16LL),
          (float)*(int *)(*((_QWORD *)itemList + 23) + 20LL));
      }
      ListViewManager__CheckSortButton((ListViewManager_o *)this, this->fields.issortButton, 0LL);
      v81 = MaterialEventLogListViewManager_TypeInfo;
      if ( (BYTE3(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
        v81 = MaterialEventLogListViewManager_TypeInfo;
      }
      EventLogservantSortInfo = v81->static_fields->EventLogservantSortInfo;
      this->fields.sort = EventLogservantSortInfo;
      p_sort = &this->fields.sort;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.sort,
        (System_Int32_array **)EventLogservantSortInfo,
        v75,
        v76,
        v77,
        v78,
        v79,
        v80);
      if ( this->fields.sort )
      {
        this->fields.sort->fields.listViewKind = 0;
        itemList = *p_sort;
        if ( *p_sort )
        {
          ListViewSort__Load((ListViewSort_o *)itemList, 0LL);
          MaterialCollectionServantListViewManager = MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                                       v84,
                                                       v85);
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
            v93 = (System_Int32_array **)*p_sort;
            MaterialCollectionServantListViewManager->fields.sort = *p_sort;
            sub_B5D560(
              (BattleServantConfConponent_o *)&MaterialCollectionServantListViewManager->fields.sort,
              v93,
              v87,
              v88,
              v89,
              v90,
              v91,
              v92);
          }
          emptyMessageLabel = this->fields.emptyMessageLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          itemList = LocalizationManager__Get((System_String_o *)StringLiteral_12026/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/, 0LL);
          if ( emptyMessageLabel )
          {
            UILabel__set_text(emptyMessageLabel, (System_String_o *)itemList, 0LL);
            MaterialEventLogListViewManager__SetFilterButtonImage(this, v95);
            MaterialEventLogListViewManager__SortDummyData(this, v96);
            goto LABEL_99;
          }
        }
      }
    }
LABEL_102:
    sub_B5D69C(itemList, v32);
  }
  if ( (WORD1(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
    v61 = MaterialEventLogListViewManager_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(gameObject, v61->static_fields->NORMAL_LIST_POS_Y, 0LL);
  ListViewManager__SetArrangementPitchY(
    (ListViewManager_o *)this,
    MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_ARRANGEMENT_PY,
    0LL);
  v66 = this->fields.scrollView;
  if ( !v66 )
    goto LABEL_102;
  v67 = *(_QWORD *)&v66->fields.showScrollBars;
  if ( v67
    && (v68 = *(&UIScrollBar_TypeInfo->_2.bitflags2 + 1),
        *(unsigned __int8 *)(*(_QWORD *)v67 + 300LL) >= (unsigned int)v68) )
  {
    if ( *(UIScrollBar_c **)(*(_QWORD *)(*(_QWORD *)v67 + 200LL) + 8 * v68 - 8) == UIScrollBar_TypeInfo )
      v69 = v67;
    else
      v69 = 0LL;
  }
  else
  {
    v69 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  itemList = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v69, 0LL, 0LL);
  if ( ((unsigned __int8)itemList & 1) != 0 )
  {
    if ( !v69 )
      goto LABEL_102;
    v97 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v69, 0LL);
    v98 = MaterialEventLogListViewManager_TypeInfo;
    v99 = v97;
    if ( (BYTE3(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
      v98 = MaterialEventLogListViewManager_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionY(v99, v98->static_fields->NORMAL_SCROLLBAR_POS_Y, 0LL);
    itemList = *(void **)(v69 + 40);
    if ( !itemList )
      goto LABEL_102;
    UIWidget__set_height(
      (UIWidget_o *)itemList,
      MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_SCROLLBAR_BACK_HEIGHT,
      0LL);
    itemList = *(void **)(v69 + 48);
    if ( !itemList )
      goto LABEL_102;
    UIWidget__set_height(
      (UIWidget_o *)itemList,
      MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_SCROLLBAR_FORE_HEIGHT,
      0LL);
  }
  v100 = this->fields.scrollView;
  if ( !v100 )
    goto LABEL_102;
  v101 = *(UnityEngine_Object_o **)&v100->fields.mPlane.fields.m_Normal.fields.x;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v101, 0LL, 0LL) )
  {
    itemList = MaterialEventLogListViewManager_TypeInfo;
    if ( (BYTE3(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
      itemList = MaterialEventLogListViewManager_TypeInfo;
    }
    if ( !v101 )
      goto LABEL_102;
    ((void (__fastcall *)(UnityEngine_Object_o *, _QWORD, float, float, float, float))v101->klass[1]._2.genericContainerHandle)(
      v101,
      *(_QWORD *)&v101->klass[1]._2.instance_size,
      0.0,
      (float)*(int *)(*((_QWORD *)itemList + 23) + 56LL),
      (float)*(int *)(*((_QWORD *)itemList + 23) + 48LL),
      (float)*(int *)(*((_QWORD *)itemList + 23) + 52LL));
  }
LABEL_99:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  if ( this->fields.issortButton )
  {
    v103 = MaterialEventLogListViewManager__GetFilterCount(this, v102) < 1;
    ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v103, 0LL);
  }
  MaterialEventLogListViewManager__CreateInfs(this, v102);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
}


void __fastcall MaterialEventLogListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  MaterialEventLogListViewManager_c *v4; // x0
  ListViewSort_o *EventLogservantSortInfo; // x0

  if ( (byte_42EC32F & 1) == 0 )
  {
    sub_B5D5C4(&MaterialEventLogListViewManager_TypeInfo, v1, v2, v3);
    byte_42EC32F = 1;
  }
  v4 = MaterialEventLogListViewManager_TypeInfo;
  if ( (BYTE3(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
    v4 = MaterialEventLogListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v4->static_fields->EventLogservantSortInfo;
  if ( !EventLogservantSortInfo )
    sub_B5D69C(0LL, v1);
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
  __int64 v3; // x3
  MaterialEventLogServantSortSelectMenu_o *eventLogServantSortSelectMenu; // x0
  MaterialEventLogListViewManager_o *v7; // x0
  const MethodInfo *v8; // x1
  MaterialCollectionServantListViewManager_o *MaterialCollectionServantListViewManager; // x21
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

  if ( (byte_42EC33E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isDecide, (_DWORD)method, v3);
    byte_42EC33E = 1;
  }
  eventLogServantSortSelectMenu = this->fields.eventLogServantSortSelectMenu;
  if ( !eventLogServantSortSelectMenu )
    goto LABEL_14;
  MaterialEventLogServantSortSelectMenu__Close_32028560(eventLogServantSortSelectMenu, 0LL, method);
  MaterialCollectionServantListViewManager = MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                               v7,
                                               v8);
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
    sub_B5D560(
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
    MaterialEventLogListViewManager__SortDummyData(this, (const MethodInfo *)isDecide);
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
    sub_B5D69C(eventLogServantSortSelectMenu, isDecide);
  }
LABEL_13:
  MaterialEventLogListViewManager__SetFilterButtonImage(this, (const MethodInfo *)isDecide);
}


void __fastcall MaterialEventLogListViewManager__EventLogSortKind(
        MaterialEventLogListViewManager_o *this,
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

  if ( (byte_42EC33C & 1) == 0 )
  {
    sub_B5D5C4(
      &MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo,
      (_DWORD)eventLogServantSortSelectMenu,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_MaterialEventLogListViewManager_EndEventLogSortKind__, v6, v7, v8);
    byte_42EC33C = 1;
  }
  if ( this->fields.isInput )
  {
    sort = this->fields.sort;
    v10 = (MaterialEventLogServantSortSelectMenu_CallbackFunc_o *)sub_B5D694(MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo);
    MaterialEventLogServantSortSelectMenu_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_MaterialEventLogListViewManager_EndEventLogSortKind__,
      0LL);
    if ( !eventLogServantSortSelectMenu )
      sub_B5D69C(v11, v12);
    MaterialEventLogServantSortSelectMenu__Open(eventLogServantSortSelectMenu, 0, sort, v10, v13);
  }
}


int32_t __fastcall MaterialEventLogListViewManager__GetFilterCount(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MaterialEventLogListViewManager_o *v4; // x19
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
  if ( (byte_42EC33D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6, v7);
    this = (MaterialEventLogListViewManager_o *)sub_B5D5C4(&MaterialEventLogListViewItem_TypeInfo, v8, v9, v10);
    byte_42EC33D = 1;
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
      this = (MaterialEventLogListViewManager_o *)itemList->fields._items->m_Items[v14];
      if ( !this )
        break;
      v15 = *(&MaterialEventLogListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v15
        || (MaterialEventLogListViewItem_c *)this->klass->_2.typeHierarchy[v15 - 1] != MaterialEventLogListViewItem_TypeInfo )
      {
        break;
      }
      if ( this->fields.dropList )
      {
        this = (MaterialEventLogListViewManager_o *)((__int64 (__fastcall *)(MaterialEventLogListViewManager_o *, struct ListViewSort_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
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


PartyServantListViewItem_o *__fastcall MaterialEventLogListViewManager__GetItem(
        MaterialEventLogListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  if ( (byte_42EC335 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index, (_DWORD)method, v3);
    sub_B5D5C4(&PartyServantListViewItem_TypeInfo, v6, v7, v8);
    byte_42EC335 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = itemList->fields._items->m_Items[index];
  if ( !v10 )
    return 0LL;
  v11 = *(&PartyServantListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
    return 0LL;
  if ( (PartyServantListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == PartyServantListViewItem_TypeInfo )
    return (PartyServantListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


MaterialCollectionServantListViewManager_o *__fastcall MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
        MaterialEventLogListViewManager_o *this,
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
  MaterialCollectionServantListViewManager_o *result; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *dropObjectList; // x19
  bool v13; // w8
  __int64 v14; // x10
  bool v15; // w8
  void *monitor; // x19
  bool v17; // w8

  if ( (byte_42EC331 & 1) == 0 )
  {
    sub_B5D5C4(&MyRoomRootComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7, v8, v9);
    byte_42EC331 = 1;
  }
  result = (MaterialCollectionServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
          return (MaterialCollectionServantListViewManager_o *)*((_QWORD *)monitor + 68);
LABEL_25:
        sub_B5D69C(result, v11);
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
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  MaterialEventLogListViewManager_c *v4; // x0
  ListViewSort_o *EventLogservantSortInfo; // x0

  if ( (byte_42EC330 & 1) == 0 )
  {
    sub_B5D5C4(&MaterialEventLogListViewManager_TypeInfo, v1, v2, v3);
    byte_42EC330 = 1;
  }
  v4 = MaterialEventLogListViewManager_TypeInfo;
  if ( (BYTE3(MaterialEventLogListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
    v4 = MaterialEventLogListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v4->static_fields->EventLogservantSortInfo;
  if ( !EventLogservantSortInfo )
    sub_B5D69C(0LL, v1);
  ListViewSort__InitLoad(EventLogservantSortInfo, 0LL);
}


void __fastcall MaterialEventLogListViewManager__InitializeObjectPosition(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *seed; // x20
  UnityEngine_GameObject_o *v9; // x0
  const MethodInfo *v10; // x1
  struct ListViewItemSeed_o *v11; // x8
  UnityEngine_Object_o *parent; // x20
  struct ListViewItemSeed_o *v13; // x8
  int klass; // w8
  UnityEngine_GameObject_o *v15; // x19
  unsigned int v16; // w20
  __int64 v17; // x0

  if ( (byte_42EC346 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponentsInChildren_MaterialEventLogListViewObject___,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EC346 = 1;
  }
  seed = (UnityEngine_Object_o *)this->fields.seed;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(seed, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    v11 = this->fields.seed;
    if ( !v11 )
      goto LABEL_21;
    parent = (UnityEngine_Object_o *)v11->fields.parent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(parent, 0LL, 0LL);
    if ( ((unsigned __int8)v9 & 1) != 0 )
    {
      v13 = this->fields.seed;
      if ( !v13 )
        goto LABEL_21;
      v9 = v13->fields.parent;
      if ( !v9 )
        goto LABEL_21;
      v9 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                                         v9,
                                         (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_MaterialEventLogListViewObject___);
      if ( !v9 )
        goto LABEL_21;
      klass = (int)v9[1].klass;
      v15 = v9;
      if ( klass >= 1 )
      {
        v16 = 0;
        while ( 1 )
        {
          if ( v16 >= klass )
          {
            v17 = sub_B5D6C8(v9);
            sub_B5D668(v17, 0LL);
          }
          v9 = (UnityEngine_GameObject_o *)*((_QWORD *)&v15[1].monitor + (int)v16);
          if ( !v9 )
            break;
          MaterialEventLogListViewObject__InitPosition((MaterialEventLogListViewObject_o *)v9, v10);
          klass = (int)v15[1].klass;
          if ( (int)++v16 >= klass )
            return;
        }
LABEL_21:
        sub_B5D69C(v9, v10);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct ListViewItem_o *linkItem; // x19
  __int64 v12; // x10
  void *monitor; // x20
  int v14; // w8

  if ( (byte_42EC33A & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_MaterialEventLogListViewItem___, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&MaterialEventLogListViewItem_TypeInfo, v5, v6, v7);
    this = (MaterialEventLogListViewManager_o *)sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42EC33A = 1;
  }
  if ( !obj
    || (linkItem = obj->fields.linkItem) == 0LL
    || (v12 = *(&MaterialEventLogListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v12)
    || (MaterialEventLogListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] != MaterialEventLogListViewItem_TypeInfo )
  {
    sub_B5D69C(this, obj);
  }
  monitor = linkItem[1].monitor;
  if ( monitor )
  {
    v14 = *((_DWORD *)monitor + 17);
    if ( (v14 & 1) == 0 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v14 = *((_DWORD *)monitor + 17);
    }
    if ( (v14 & 4) != 0 )
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
        (const MethodInfo_2CECD58 *)Method_ActionExtensions_Call_MaterialEventLogListViewItem___);
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
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  __int64 v31; // x19
  _DWORD *ObjectList; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  const MethodInfo *v46; // x1
  int v47; // w8
  _DWORD *v48; // x22
  unsigned int v49; // w25
  MaterialEventLogListViewObject_o *v50; // x24
  const MethodInfo *v51; // x4
  int32_t initMode; // w8
  UnityEngine_GameObject_o *v53; // x0
  UIWidget_o *v54; // x21
  float v55; // s8
  int mGo; // w9
  System_Action_o *v57; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x20
  float IntpTime_AutoResume; // s8
  System_Action_o *v61; // x21
  System_Action_o *v62; // x20
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EC338 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)end_act, method);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Count__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__, v13, v14, v15);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__0__, v19, v20, v21);
    sub_B5D5C4(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__1__, v22, v23, v24);
    sub_B5D5C4(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__2__, v25, v26, v27);
    sub_B5D5C4(&MaterialEventLogListViewManager___c__DisplayClass50_0_TypeInfo, v28, v29, v30);
    byte_42EC338 = 1;
  }
  v31 = sub_B5D694(MaterialEventLogListViewManager___c__DisplayClass50_0_TypeInfo);
  MaterialEventLogListViewManager___c__DisplayClass50_0___ctor(
    (MaterialEventLogListViewManager___c__DisplayClass50_0_o *)v31,
    0LL);
  if ( !v31 )
    goto LABEL_29;
  *(_QWORD *)(v31 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v31 + 16), (System_Int32_array **)this, v34, v35, v36, v37, v38, v39);
  *(_QWORD *)(v31 + 24) = end_act;
  sub_B5D560((BattleServantConfConponent_o *)(v31 + 24), (System_Int32_array **)end_act, v40, v41, v42, v43, v44, v45);
  ObjectList = MaterialEventLogListViewManager__get_ObjectList(this, v46);
  if ( !ObjectList )
    goto LABEL_29;
  v47 = ObjectList[6];
  v48 = ObjectList;
  if ( v47 >= 1 )
  {
    v49 = 0;
    while ( 1 )
    {
      if ( v47 <= v49 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v50 = *(MaterialEventLogListViewObject_o **)(*((_QWORD *)v48 + 2) + 8LL * (int)v49 + 32);
      if ( !v50 )
        break;
      zero = UnityEngine_Vector3__get_zero(0LL);
      MaterialEventLogListViewObject__Init_32021612(
        v50,
        mode,
        0LL,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        -1,
        v51);
      v47 = v48[6];
      if ( (int)++v49 >= v47 )
        goto LABEL_11;
    }
LABEL_29:
    sub_B5D69C(ObjectList, v33);
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
                           (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
    v61 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v61,
      (Il2CppObject *)v31,
      Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__2__,
      0LL);
    if ( !Component_UIWidget )
      goto LABEL_29;
    SlideFadeObject__SlideOut_23387732(
      (SlideFadeObject_o *)Component_UIWidget,
      580.0,
      IntpTime_AutoResume,
      0.0,
      v61,
      0LL);
  }
  else if ( initMode == 3 )
  {
    this->fields.mIsDoing_Slide = 1;
    this->fields.isScrollRefresh = 1;
    ObjectList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !ObjectList )
      goto LABEL_29;
    v53 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)ObjectList, 0LL);
    v54 = GameObjectExtensions__SafeGetComponent_UIWidget_(
            v53,
            (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    v55 = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
    if ( this->fields.issortButton )
    {
      if ( !v54 )
        goto LABEL_29;
      mGo = (int)v54->fields.mGo;
      HIDWORD(v54->fields.mGo) = v54->fields.updateAnchors;
      LODWORD(v54->fields.mTrans) = -1027735552;
      HIDWORD(v54->fields.mTrans) = mGo;
      v57 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v57,
        (Il2CppObject *)v31,
        Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__1__,
        0LL);
      SlideFadeObject__SlideSortIn((SlideFadeObject_o *)v54, 580.0, v55, 0.0, v57, 0LL);
    }
    else
    {
      v62 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v62,
        (Il2CppObject *)v31,
        Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__0__,
        0LL);
      if ( !v54 )
        goto LABEL_29;
      SlideFadeObject__SlideIn_23386792((SlideFadeObject_o *)v54, 580.0, v55, 0.0, v62, 0LL);
    }
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v31 + 24), 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogListViewManager__SetAllActiveWidget(
        MaterialEventLogListViewManager_o *this,
        bool isActive,
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
  void *ObjectList; // x0
  __int64 v16; // x1
  int v17; // w8
  void *v18; // x19
  __int64 v19; // x22
  bool v20; // w20
  UnityEngine_Object_o *Component_srcLineSprite; // x21

  if ( (byte_42EC341 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, isActive, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    byte_42EC341 = 1;
  }
  ObjectList = MaterialEventLogListViewManager__get_ObjectList(this, (const MethodInfo *)isActive);
  if ( !ObjectList )
    goto LABEL_18;
  v17 = *((_DWORD *)ObjectList + 6);
  v18 = ObjectList;
  if ( v17 >= 1 )
  {
    v19 = 0LL;
    v20 = isActive;
    while ( 1 )
    {
      if ( v17 <= (unsigned int)v19 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      ObjectList = *(void **)(*((_QWORD *)v18 + 2) + 8 * v19 + 32);
      if ( !ObjectList )
        break;
      ObjectList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ObjectList, 0LL);
      if ( !ObjectList )
        break;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)ObjectList,
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, v20, 0LL);
      }
      v17 = *((_DWORD *)v18 + 6);
      if ( (int)++v19 >= v17 )
        return;
    }
LABEL_18:
    sub_B5D69C(ObjectList, v16);
  }
}


void __fastcall MaterialEventLogListViewManager__SetFilterButtonImage(
        MaterialEventLogListViewManager_o *this,
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

  if ( (byte_42EC33F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_367/*"#FE4545"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17202/*"btn_filter_on"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_353/*"#000000"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17201/*"btn_filter"*/, v11, v12, v13);
    byte_42EC33F = 1;
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


bool __fastcall MaterialEventLogListViewManager__SetMode(
        MaterialEventLogListViewManager_o *this,
        int32_t mode,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int32_t mIsDoing_Slide; // w8
  __int64 v11; // x1
  UnityEngine_Collider_o *mBoxCollider; // x0
  const MethodInfo *v13; // x3
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

  if ( (byte_42EC337 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)end_act, method);
    sub_B5D5C4(&Method_MaterialEventLogListViewManager__SetMode_b__49_0__, v7, v8, v9);
    byte_42EC337 = 1;
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
    sub_B5D69C(0LL, v11);
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
      v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_MaterialEventLogListViewManager__SetMode_b__49_0__, 0LL);
      v18 = System_Delegate__Combine((System_Delegate_o *)end_act, (System_Delegate_o *)v17, 0LL);
      v19 = (System_Action_o *)v18;
      if ( v18 && (System_Action_c *)v18->klass != System_Action_TypeInfo )
      {
        sub_B5D990(v18);
        MaterialEventLogListViewManager__RequestListObject(v20, v21, v22, v23);
      }
      else
      {
        v14 = 2;
        v16 = this;
LABEL_22:
        MaterialEventLogListViewManager__RequestListObject(v16, v14, v19, v13);
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
  if ( (byte_42EC336 & 1) == 0 )
  {
    this = (MaterialEventLogListViewManager_o *)sub_B5D5C4(
                                                  &MaterialEventLogListViewObject_TypeInfo,
                                                  (_DWORD)obj,
                                                  (_DWORD)item,
                                                  method);
    byte_42EC336 = 1;
  }
  if ( !obj
    || (v6 = *(&MaterialEventLogListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (MaterialEventLogListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != MaterialEventLogListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
  }
  selectedLimitCount = v5->fields.selectedLimitCount;
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v14 = 3;
  else
    v14 = 2;
  MaterialEventLogListViewObject__Init_32021612(
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
  int v3; // w2
  __int64 v4; // x3
  void *scrollView; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector2_o v9; // 0:s0.4,4:s1.4

  if ( (byte_42EC332 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, (_DWORD)method, v3, v4);
    byte_42EC332 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL),
        GameObjectExtensions__SetLocalPositionY(gameObject, y, 0LL),
        (scrollView = this->fields.scrollView) == 0LL)
    || (scrollView = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL)) == 0LL
    || (scrollView = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                       (UnityEngine_GameObject_o *)scrollView,
                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIPanel___)) == 0LL )
  {
    sub_B5D69C(scrollView, method);
  }
  v9.fields.x = *((float *)scrollView + 81);
  v9.fields.y = -y;
  UIPanel__set_clipOffset((UIPanel_o *)scrollView, v9, 0LL);
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
  sub_B5D560(
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

  if ( (byte_42EC342 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17230/*"btn_sort_up"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17314/*"btn_txt_up"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17270/*"btn_txt_new"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17260/*"btn_txt_down"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17277/*"btn_txt_old"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_17227/*"btn_sort_down"*/, v20, v21, v22);
    byte_42EC342 = 1;
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


void __fastcall MaterialEventLogListViewManager__SetValentineListDisplay(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1
  struct UIPanel_o *basePanel; // x8
  __int64 v10; // x11
  MyRoomControl_o *v11; // x19

  if ( (byte_42EC339 & 1) == 0 )
  {
    sub_B5D5C4(&MyRoomRootComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5, v6);
    byte_42EC339 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (basePanel = Instance->fields.basePanel) == 0LL
    || (v10 = *(&MyRoomRootComponent_TypeInfo->_2.bitflags2 + 1),
        *(&basePanel->klass->_2.bitflags2 + 1) < (unsigned int)v10)
    || (MyRoomRootComponent_c *)basePanel->klass->_2.typeHierarchy[v10 - 1] != MyRoomRootComponent_TypeInfo
    || (v11 = *(MyRoomControl_o **)&basePanel->fields.updateAnchors) == 0LL )
  {
    sub_B5D69C(Instance, v8);
  }
  if ( v11->fields.IsMaterialEventBack )
  {
    MyRoomControl__ValentineListChange(v11, 0, 0LL);
    MyRoomControl__EndMaterialEventBack(v11, 0LL);
  }
}


void __fastcall MaterialEventLogListViewManager__SortAscendingOrder(
        MaterialEventLogListViewManager_o *this,
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
  MaterialCollectionServantListViewManager_o *MaterialCollectionServantListViewManager; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x1
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  bool v23; // w1
  const MethodInfo *v24; // x1

  if ( (byte_42EC340 & 1) == 0 )
  {
    sub_B5D5C4(&Method_MaterialEventLogListViewManager_SortAscendingOrder__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EC340 = 1;
  }
  if ( this->fields.isInput )
  {
    v8 = Method_MaterialEventLogListViewManager_SortAscendingOrder__;
    if ( (*((_BYTE *)Method_MaterialEventLogListViewManager_SortAscendingOrder__ + 75) & 2) != 0 )
      v8 = (_QWORD *)sub_B5D5CC(Method_MaterialEventLogListViewManager_SortAscendingOrder__);
    v9 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v8, v8[3]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    sort = this->fields.sort;
    if ( sort )
    {
      sort->fields.isAscendingOrder ^= 1u;
      MaterialCollectionServantListViewManager = MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                                   (MaterialEventLogListViewManager_o *)v10,
                                                   v11);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v10 = (struct ListViewSort_o *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)MaterialCollectionServantListViewManager,
                                       0LL,
                                       0LL);
      if ( ((unsigned __int8)v10 & 1) != 0 )
      {
        if ( !MaterialCollectionServantListViewManager )
          goto LABEL_16;
        v20 = (System_Int32_array **)this->fields.sort;
        MaterialCollectionServantListViewManager->fields.sort = (struct ListViewSort_o *)v20;
        sub_B5D560(
          (BattleServantConfConponent_o *)&MaterialCollectionServantListViewManager->fields.sort,
          v20,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
      }
      v10 = this->fields.sort;
      if ( v10 )
      {
        ListViewSort__Save(v10, 0LL);
        MaterialEventLogListViewManager__SortDummyData(this, v21);
        ((void (__fastcall *)(MaterialEventLogListViewManager_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
          this,
          this->klass->vtable._6_GetDragRoot.methodPtr);
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
        v23 = MaterialEventLogListViewManager__GetFilterCount(this, v22) < 1;
        ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v23, 0LL);
        MaterialEventLogListViewManager__CreateInfs(this, v24);
        return;
      }
    }
LABEL_16:
    sub_B5D69C(v10, v11);
  }
}


void __fastcall MaterialEventLogListViewManager__SortDummyData(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MaterialEventLogListViewManager_o *v4; // x19
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
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 size; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v43; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x20
  __int64 v45; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v46; // x26
  _QWORD *v47; // x8
  __int64 v48; // x11
  struct System_Collections_Generic_List_ListViewItem__o *v49; // x26
  __int64 v50; // x8
  __int64 v51; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v52; // x0
  const MethodInfo *v53; // x1
  int v54; // w22
  int v55; // w23
  int v56; // w20
  int v57; // w24
  struct ListViewSort_o *sort; // x8
  _BOOL4 isAscendingOrder; // w28
  ListViewItem_o *v60; // x0
  ListViewItem_o *v61; // x21
  int32_t v62; // w1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Collections_Generic_List_Enumerator_T__o v69; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_42EC344 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Remove__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem___ctor__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_List_MaterialEventLogListViewItem__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&System_Collections_Generic_List_ListViewItem__TypeInfo, v35, v36, v37);
    this = (MaterialEventLogListViewManager_o *)sub_B5D5C4(&MaterialEventLogListViewItem_TypeInfo, v38, v39, v40);
    byte_42EC344 = 1;
  }
  memset(&i, 0, sizeof(i));
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_38;
  size = itemList->fields._size;
  v43 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MaterialEventLogListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v43,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem___ctor__);
  v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v44,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  if ( (int)size >= 1 )
  {
    v45 = 4LL;
    while ( 1 )
    {
      v46 = v4->fields.itemList;
      if ( !v46 )
        break;
      if ( v45 - 4 >= (unsigned __int64)(unsigned int)v46->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v47 = (_QWORD *)*((_QWORD *)&v46->fields._items->obj.klass + v45);
      if ( !v47 )
        break;
      v48 = *(&MaterialEventLogListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*v47 + 300LL) < (unsigned int)v48
        || *(MaterialEventLogListViewItem_c **)(*(_QWORD *)(*v47 + 200LL) + 8 * v48 - 8) != MaterialEventLogListViewItem_TypeInfo )
      {
        break;
      }
      if ( *(MaterialEventLogListViewItem_c **)(*(_QWORD *)(*v47 + 200LL)
                                              + 8LL * *(&MaterialEventLogListViewItem_TypeInfo->_2.bitflags2 + 1)
                                              - 8) != MaterialEventLogListViewItem_TypeInfo )
        v47 = 0LL;
      if ( !v47[15] )
      {
        v49 = v4->fields.itemList;
        if ( !v49 )
          break;
        if ( v45 - 4 >= (unsigned __int64)(unsigned int)v49->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( !v44 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v44,
          *((EventMissionProgressRequest_Argument_ProgressData_o **)&v49->fields._items->obj.klass + v45),
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      v50 = v45 - 3;
      ++v45;
      if ( v50 >= size )
        goto LABEL_21;
    }
LABEL_38:
    sub_B5D69C(this, method);
  }
LABEL_21:
  if ( !v44 )
    goto LABEL_38;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v69,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v44,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = v69;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          v52,
          (WarBoardManager_TaskList_o *)i.fields.current,
          (const MethodInfo_305896C *)Method_System_Collections_Generic_List_ListViewItem__Remove__) )
  {
    v52 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v4->fields.itemList;
    if ( !v52 )
      sub_B5D69C(0LL, v51);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  this = (MaterialEventLogListViewManager_o *)MaterialEventLogListViewManager__GetFilterCount(v4, v53);
  if ( (int)this > 3 )
    v54 = 1;
  else
    v54 = 4 - (_DWORD)this;
  if ( v54 >= 1 )
  {
    v55 = 0;
    v56 = -(int)this;
    v57 = (_DWORD)this + 999;
    do
    {
      sort = v4->fields.sort;
      if ( !sort )
        goto LABEL_38;
      isAscendingOrder = sort->fields.isAscendingOrder;
      v60 = (ListViewItem_o *)sub_B5D694(MaterialEventLogListViewItem_TypeInfo);
      v61 = v60;
      v62 = isAscendingOrder ? v57 + v55 : v56;
      ListViewItem___ctor_23901828(v60, v62, 0LL);
      v61[1].monitor = 0LL;
      LODWORD(v61[1].klass) = 5;
      sub_B5D560((BattleServantConfConponent_o *)&v61[1].monitor, 0LL, v63, v64, v65, v66, v67, v68);
      this = (MaterialEventLogListViewManager_o *)v4->fields.itemList;
      if ( !this )
        goto LABEL_38;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v61,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      ++v55;
      --v56;
    }
    while ( v55 < v54 );
  }
  MaterialEventLogListViewManager__InitializeObjectPosition(v4, method);
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

  if ( (byte_42EC333 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_MaterialEventLogListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42EC333 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MaterialEventLogListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MaterialEventLogListViewObject___ctor__);
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
                                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___);
      if ( !v29 )
        sub_B5D69C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MaterialEventLogListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MaterialEventLogListViewObject__o *)v29;
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
    sub_B5D69C(this, method);
  MaterialEventLogListViewManager__SetMode(this->fields.__4__this, 2, this->fields.end_act, 0LL);
}


void __fastcall MaterialEventLogListViewManager___c__DisplayClass50_0___RequestListObject_b__1(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  struct MaterialEventLogListViewManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (_4__this->fields.mIsDoing_Slide = 0, !this->fields.__4__this) )
    sub_B5D69C(this, method);
  MaterialEventLogListViewManager__SetMode(this->fields.__4__this, 2, this->fields.end_act, 0LL);
}


void __fastcall MaterialEventLogListViewManager___c__DisplayClass50_0___RequestListObject_b__2(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppClass *klass; // x8
  System_Action_o *v9; // x21
  MaterialEventLogListViewManager_o *v10; // x20

  v4 = (Il2CppObject *)this;
  if ( (byte_42E5F46 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    this = (MaterialEventLogListViewManager___c__DisplayClass50_0_o *)sub_B5D5C4(
                                                                        &Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__3__,
                                                                        v5,
                                                                        v6,
                                                                        v7);
    byte_42E5F46 = 1;
  }
  klass = v4[1].klass;
  if ( !klass )
    goto LABEL_8;
  BYTE4(klass->vtable[1].method) = 0;
  v9 = (System_Action_o *)v4[2].klass;
  v10 = (MaterialEventLogListViewManager_o *)v4[1].klass;
  if ( !v9 )
  {
    v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v9,
      v4,
      Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__3__,
      0LL);
    v4[2].klass = (Il2CppClass *)v9;
    sub_B5D560(&v4[2]);
  }
  if ( !v10 )
LABEL_8:
    sub_B5D69C(this, method);
  MaterialEventLogListViewManager__SetMode(v10, 0, v9, 0LL);
}


void __fastcall MaterialEventLogListViewManager___c__DisplayClass50_0___RequestListObject_b__3(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}