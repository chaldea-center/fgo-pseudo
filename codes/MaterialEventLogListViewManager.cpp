void MaterialEventLogListViewManager___cctor(const MethodInfo *method)
{
  struct MaterialEventLogListViewManager_StaticFields *static_fields; // x8
  ListViewSort_c *v2; // x0
  ListViewSort_o *v3; // x19
  struct MaterialEventLogListViewManager_StaticFields *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_593366B & 1) == 0 )
  {
    sub_21FFC50(&ListViewSort_TypeInfo);
    sub_21FFC50(&MaterialEventLogListViewManager_TypeInfo);
    sub_21FFC50(&StringLiteral_9317/*"MaterialCollectionServant6"*/);
    byte_593366B = 1;
  }
  static_fields = MaterialEventLogListViewManager_TypeInfo->static_fields;
  v2 = ListViewSort_TypeInfo;
  *(_QWORD *)&static_fields->VL_LIST_POS_Y = 0xC2CC0000C1F00000LL;
  static_fields->VL_SCROLLBAR_POS_Y = 70.0;
  *(_QWORD *)&static_fields->NORMAL_LIST_POS_Y = 0xC2F00000C20C0000LL;
  *(_OWORD *)&static_fields->VL_SCROLLBAR_HEIGHT = xmmword_E94AA0;
  static_fields->NORMAL_SCROLLBAR_POS_Y = 45.0;
  *(_OWORD *)&static_fields->NORMAL_SCROLLBAR_BACK_HEIGHT = xmmword_E941F0;
  static_fields->NORMAL_PANEL_CENTER_Y = 0;
  v3 = (ListViewSort_o *)sub_21FFEBC(v2);
  ListViewSort___ctor_50784632(v3, (System_String_o *)StringLiteral_9317/*"MaterialCollectionServant6"*/, 27, 1, 0);
  v4 = MaterialEventLogListViewManager_TypeInfo->static_fields;
  v4->EventLogservantSortInfo = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v4->EventLogservantSortInfo, (int32_t)v3, v5, v6, v7, v8, v9, v10);
}


void MaterialEventLogListViewManager___ctor(MaterialEventLogListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void MaterialEventLogListViewManager__Awake(MaterialEventLogListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct UIScrollView_o *scrollView; // x8
  ListViewSort_o *v13; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_5933652 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_21FFC50(&ListViewSort_TypeInfo);
    byte_5933652 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             gameObject,
                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.mBoxCollider = (struct UnityEngine_BoxCollider_o *)Component_object,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.mBoxCollider,
          (int32_t)Component_object,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.mBoxCollider) == 0)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0),
        (scrollView = this->fields.scrollView) == 0) )
  {
    sub_21FFECC(gameObject, v4);
  }
  scrollView->fields.disableDragIfFits = 0;
  v13 = (ListViewSort_o *)sub_21FFEBC(ListViewSort_TypeInfo);
  ListViewSort___ctor(v13, 3, 1, 0);
  this->fields.sort = v13;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.sort, (int32_t)v13, v14, v15, v16, v17, v18, v19);
}


void MaterialEventLogListViewManager__Back(MaterialEventLogListViewManager_o *this, const MethodInfo *method)
{
  MaterialEventLogListViewManager_o *v2; // x19
  struct ListViewSort_o *sort; // x8
  ListViewSort_o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MaterialEventLogListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *MaterialCollectionServantListViewManager; // x19
  __int64 v16; // x2
  MaterialEventLogListViewManager_c *v17; // x0
  ListViewSort_o *EventLogservantSortInfo; // x8

  v2 = this;
  if ( (byte_5933667 & 1) == 0 )
  {
    sub_21FFC50(&ListViewSort_TypeInfo);
    sub_21FFC50(&MaterialEventLogListViewManager_TypeInfo);
    this = (MaterialEventLogListViewManager_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933667 = 1;
  }
  if ( !v2->fields.issortButton )
  {
    sort = v2->fields.sort;
    if ( !sort )
      goto LABEL_18;
    sort->fields.isAscendingOrder = 1;
  }
  v4 = (ListViewSort_o *)sub_21FFEBC(ListViewSort_TypeInfo);
  ListViewSort___ctor(v4, 3, 1, 0);
  v2->fields.sort = v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v2->fields.sort, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  MaterialCollectionServantListViewManager = (UnityEngine_Object_o *)MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                                                       v11,
                                                                       v12);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
  this = (MaterialEventLogListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                MaterialCollectionServantListViewManager,
                                                0,
                                                0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !MaterialCollectionServantListViewManager )
      goto LABEL_18;
    MaterialCollectionServantListViewManager__EventLogSortListSave(
      (MaterialCollectionServantListViewManager_o *)MaterialCollectionServantListViewManager,
      0);
  }
  v17 = MaterialEventLogListViewManager_TypeInfo;
  if ( !*(&MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo, method, v16);
    v17 = MaterialEventLogListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v17->static_fields->EventLogservantSortInfo;
  if ( EventLogservantSortInfo )
  {
    if ( *(&v17->_2.cctor_finished + 1)
      || (j_il2cpp_runtime_class_init_0(v17, method, v16),
          (EventLogservantSortInfo = MaterialEventLogListViewManager_TypeInfo->static_fields->EventLogservantSortInfo) != 0) )
    {
      ListViewSort__Save(EventLogservantSortInfo, 0);
      return;
    }
LABEL_18:
    sub_21FFECC(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void MaterialEventLogListViewManager__CheckPlayableMaterial(
        MaterialEventLogListViewManager_o *this,
        int32_t servantId,
        int32_t limitCount,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v10; // x1
  MaterialEventLogListViewObject_o *v11; // x21
  MaterialEventLogListViewItem_o *Item; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  MaterialEventLogListViewItem_o *v15; // x22
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8
  bool v17; // w23
  const MethodInfo *v18; // x2
  __int64 v19; // x0
  __int64 v20; // x1
  struct MaterialEventLogListViewItem_Info_o *v21; // x8
  unsigned int v22; // w9
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_593365F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    byte_593365F = 1;
  }
  objectList = this->fields.objectList;
  memset(&v24, 0, sizeof(v24));
  this->fields.selectedLimitCount = limitCount;
  if ( !objectList )
    sub_21FFECC(0, *(_QWORD *)&servantId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  v23.fields._list = 0;
  *(_QWORD *)&v23.fields._index = &v24;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v24.fields._current )
      sub_21FFECC(0, v8);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v24.fields._current,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___);
    v11 = (MaterialEventLogListViewObject_o *)Component_object;
    if ( !Component_object )
      sub_21FFECC(0, v10);
    Item = MaterialEventLogListViewObject__GetItem((MaterialEventLogListViewObject_o *)Component_object, v10);
    v15 = Item;
    if ( !Item )
      sub_21FFECC(0, v13);
    info_k__BackingField = Item->fields._info_k__BackingField;
    if ( info_k__BackingField && info_k__BackingField->fields.svt_id == servantId )
    {
      v17 = MaterialEventLogListViewItem__CheckPlayableMaterial(Item, limitCount, v14);
      MaterialEventLogListViewObject__SetEnableSelect(v11, v17, v18);
      v21 = v15->fields._info_k__BackingField;
      if ( v17 )
      {
        if ( !v21 )
          sub_21FFECC(v19, v20);
        v22 = v21->fields.flag & 0xFFFFFFFA;
      }
      else
      {
        if ( !v21 )
          sub_21FFECC(v19, v20);
        v22 = v21->fields.flag | 5;
      }
      v21->fields.flag = v22;
    }
    else
    {
      MaterialEventLogListViewObject__SetEnableSelect(v11, 1, v14);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void MaterialEventLogListViewManager__CreateInfos(MaterialEventLogListViewManager_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 naturalAligment; // x10
  __int64 v10; // x2
  UnityEngine_Object_o *m_CachedPtr; // x19
  System_Collections_Generic_List_object__o *v12; // x20
  _BOOL8 v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x11
  Il2CppClass *klass; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_5933669 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_MaterialEventLogListViewItem_Info__TypeInfo);
    sub_21FFC50(&MaterialEventLogListViewItem_TypeInfo);
    sub_21FFC50(&MyRoomRootComponent_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_5933669 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  v6 = (UnityEngine_Object_o *)*((_QWORD *)Instance + 4);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  if ( !UnityEngine_Object__op_Equality(v6, 0, 0) )
  {
    if ( v6 )
    {
      naturalAligment = MyRoomRootComponent_TypeInfo->_2.naturalAligment;
      if ( v6->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (MyRoomRootComponent_c *)v6->klass->_2.typeHierarchy[naturalAligment - 1] != MyRoomRootComponent_TypeInfo )
          v6 = 0;
      }
      else
      {
        v6 = 0;
      }
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    Instance = (void *)UnityEngine_Object__op_Equality(v6, 0, 0);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      if ( !v6 )
        goto LABEL_35;
      m_CachedPtr = (UnityEngine_Object_o *)v6[2].fields.m_CachedPtr;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v10);
      if ( !UnityEngine_Object__op_Equality(m_CachedPtr, 0, 0) )
      {
        v12 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_MaterialEventLogListViewItem_Info__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v12,
          (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info___ctor__);
        Instance = this->fields.itemSortList;
        if ( Instance )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v32,
            (System_Collections_Generic_List_object__o *)Instance,
            (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v33 = v32;
          v32.fields._list = 0;
          *(_QWORD *)&v32.fields._index = &v33;
          while ( 1 )
          {
            v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v33,
                    (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v13 )
              break;
            if ( v33.fields._current )
            {
              v20 = MaterialEventLogListViewItem_TypeInfo->_2.naturalAligment;
              if ( v33.fields._current->klass->_2.naturalAligment >= (unsigned int)v20
                && (MaterialEventLogListViewItem_c *)v33.fields._current->klass->_2.typeHierarchy[v20 - 1] == MaterialEventLogListViewItem_TypeInfo )
              {
                klass = v33.fields._current[8].klass;
                if ( klass )
                {
                  if ( !v12
                    || (items = v12->fields._items,
                        v23 = Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__Add__,
                        ++v12->fields._version,
                        !items) )
                  {
                    sub_21FFECC(v13, klass);
                  }
                  size = v12->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v12,
                      (Il2CppObject *)klass,
                      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v25 = &items->obj.klass + size;
                    v12->fields._size = size + 1;
                    v25[4] = klass;
                    sub_21FFBF4(
                      (MissionNaviTransitionBoardItem_o *)(v25 + 4),
                      (int32_t)klass,
                      v14,
                      v15,
                      v16,
                      v17,
                      v18,
                      v19);
                  }
                }
              }
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v33,
            (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          if ( m_CachedPtr )
          {
            Instance = m_CachedPtr[39].klass;
            if ( Instance )
            {
              *((_QWORD *)Instance + 18) = v12;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)((char *)Instance + 144),
                (int32_t)v12,
                v26,
                v27,
                v28,
                v29,
                v30,
                v31);
              return;
            }
          }
        }
LABEL_35:
        sub_21FFECC(Instance, v4);
      }
    }
  }
}


void MaterialEventLogListViewManager__CreateList(
        MaterialEventLogListViewManager_o *this,
        int32_t kind,
        System_Collections_Generic_List_MaterialEventLogListViewItem_Info__o *infos,
        const MethodInfo *method)
{
  void *itemList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  int v10; // w25
  int32_t i; // w22
  __int64 v12; // x23
  Il2CppObject **v13; // x24
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  Il2CppObject *Item; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  __int64 v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  __int64 v42; // x8
  _BOOL4 issortButton; // w24
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  MaterialEventLogListViewManager_c *v47; // x8
  UnityEngine_GameObject_o *v48; // x20
  int v49; // w9
  __int64 v50; // x2
  struct UIScrollView_o *scrollView; // x8
  UnityEngine_Object_o *verticalScrollBar; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Object_o *v54; // x20
  __int64 v55; // x2
  struct UIScrollView_o *v56; // x8
  UnityEngine_Object_o *v57; // x8
  __int64 v58; // x11
  UnityEngine_Object_o *v59; // x20
  __int64 v60; // x2
  UnityEngine_GameObject_o *v61; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  MaterialEventLogListViewManager_c *v64; // x8
  UnityEngine_GameObject_o *v65; // x21
  struct UIScrollView_o *v66; // x8
  UnityEngine_Object_o *mPanel; // x20
  __int64 v68; // x2
  __int64 v69; // x1
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  MaterialEventLogListViewManager_c *v76; // x0
  struct ListViewSort_o *EventLogservantSortInfo; // x1
  struct ListViewSort_o **p_sort; // x20
  MaterialEventLogListViewManager_o *v79; // x0
  const MethodInfo *v80; // x1
  __int64 v81; // x1
  __int64 v82; // x2
  MaterialCollectionServantListViewManager_o *MaterialCollectionServantListViewManager; // x21
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  struct ListViewSort_o *v90; // x1
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v92; // x1
  const MethodInfo *v93; // x1
  __int64 v94; // x2
  UnityEngine_GameObject_o *v95; // x0
  __int64 v96; // x1
  __int64 v97; // x2
  MaterialEventLogListViewManager_c *v98; // x8
  UnityEngine_GameObject_o *v99; // x21
  struct UIScrollView_o *v100; // x8
  UnityEngine_Object_o *v101; // x20
  __int64 v102; // x2
  const MethodInfo *v103; // x1
  bool v104; // w1

  if ( (byte_5933658 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&MaterialEventLogListViewItem_TypeInfo);
    sub_21FFC50(&MaterialEventLogListViewManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UIScrollBar_TypeInfo);
    sub_21FFC50(&StringLiteral_12297/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/);
    byte_5933658 = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  ListViewManager__CheckSortButton((ListViewManager_o *)this, 0, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !infos )
    goto LABEL_87;
  size = infos->fields._size;
  if ( size >= 4 )
    v10 = size + 1;
  else
    v10 = 4;
  if ( v10 >= 1 )
  {
    for ( i = 0; i != v10; ++i )
    {
      v12 = sub_21FFEBC(MaterialEventLogListViewItem_TypeInfo);
      ListViewItem___ctor_50749276((ListViewItem_o *)v12, i, 0);
      *(_DWORD *)(v12 + 120) = kind;
      *(_QWORD *)(v12 + 128) = 0;
      v13 = (Il2CppObject **)(v12 + 128);
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v12 + 128), 0, v14, v15, v16, v17, v18, v19);
      if ( i < infos->fields._size )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)infos,
                 i,
                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
        *v13 = Item;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v12 + 128), (int32_t)Item, v27, v28, v29, v30, v31, v32);
        itemList = *v13;
        if ( !*v13 )
          goto LABEL_87;
        *((_QWORD *)itemList + 11) = v12;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)((char *)itemList + 88), v12, v33, v34, v35, v36, v37, v38);
        itemList = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)infos,
                     i,
                     (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
        if ( !itemList )
          goto LABEL_87;
        this->fields.issortButton = *((_BYTE *)itemList + 152);
      }
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_87;
      v39 = *((_QWORD *)itemList + 2);
      v40 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*((_DWORD *)itemList + 7);
      if ( !v39 )
        goto LABEL_87;
      v41 = *((int *)itemList + 6);
      if ( (unsigned int)v41 >= *(_DWORD *)(v39 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)itemList,
          (Il2CppObject *)v12,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = v39 + 8 * v41;
        *((_DWORD *)itemList + 6) = v41 + 1;
        *(_QWORD *)(v42 + 32) = v12;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v42 + 32), v12, v20, v21, v22, v23, v24, v25);
      }
    }
  }
  issortButton = this->fields.issortButton;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v47 = MaterialEventLogListViewManager_TypeInfo;
  v48 = gameObject;
  v49 = *(&MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished + 1);
  if ( issortButton )
  {
    if ( !v49 )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo, v45, v46);
      v47 = MaterialEventLogListViewManager_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionY(v48, v47->static_fields->VL_LIST_POS_Y, 0);
    ListViewManager__SetArrangementPitchY(
      (ListViewManager_o *)this,
      MaterialEventLogListViewManager_TypeInfo->static_fields->VL_ARRANGEMENT_PY,
      0);
    scrollView = this->fields.scrollView;
    if ( scrollView )
    {
      verticalScrollBar = (UnityEngine_Object_o *)scrollView->fields.verticalScrollBar;
      if ( verticalScrollBar
        && (naturalAligment = UIScrollBar_TypeInfo->_2.naturalAligment,
            verticalScrollBar->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        if ( (UIScrollBar_c *)verticalScrollBar->klass->_2.typeHierarchy[naturalAligment - 1] == UIScrollBar_TypeInfo )
          v54 = verticalScrollBar;
        else
          v54 = 0;
      }
      else
      {
        v54 = 0;
      }
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v50);
      itemList = (void *)UnityEngine_Object__op_Inequality(v54, 0, 0);
      if ( ((unsigned __int8)itemList & 1) != 0 )
      {
        if ( !v54 )
          goto LABEL_87;
        v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v54, 0);
        v64 = MaterialEventLogListViewManager_TypeInfo;
        v65 = v61;
        if ( !*(&MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo, v62, v63);
          v64 = MaterialEventLogListViewManager_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionY(v65, v64->static_fields->VL_SCROLLBAR_POS_Y, 0);
        itemList = v54[2].klass;
        if ( !itemList )
          goto LABEL_87;
        UIWidget__set_height(
          (UIWidget_o *)itemList,
          MaterialEventLogListViewManager_TypeInfo->static_fields->VL_SCROLLBAR_HEIGHT,
          0);
        itemList = v54[2].monitor;
        if ( !itemList )
          goto LABEL_87;
        UIWidget__set_height(
          (UIWidget_o *)itemList,
          MaterialEventLogListViewManager_TypeInfo->static_fields->VL_SCROLLBAR_HEIGHT,
          0);
      }
      v66 = this->fields.scrollView;
      if ( !v66 )
        goto LABEL_87;
      mPanel = (UnityEngine_Object_o *)v66->fields.mPanel;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v60);
      if ( UnityEngine_Object__op_Inequality(mPanel, 0, 0) )
      {
        itemList = MaterialEventLogListViewManager_TypeInfo;
        if ( !*(&MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo, v8, v68);
        if ( !mPanel )
          goto LABEL_87;
        (*(void (__fastcall **)(UnityEngine_Object_o *, size_t, double, float, float, float))&mPanel->klass[1]._2.cctor_finished)(
          mPanel,
          mPanel->klass[1]._2.cctor_thread,
          0.0,
          (float)MaterialEventLogListViewManager_TypeInfo->static_fields->VL_PANEL_CENTER_Y,
          (float)MaterialEventLogListViewManager_TypeInfo->static_fields->VL_PANEL_WIDTH,
          (float)MaterialEventLogListViewManager_TypeInfo->static_fields->VL_PANEL_HEIGHT);
      }
      ListViewManager__CheckSortButton((ListViewManager_o *)this, this->fields.issortButton, 0);
      v76 = MaterialEventLogListViewManager_TypeInfo;
      if ( !*(&MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo, v69, v70);
        v76 = MaterialEventLogListViewManager_TypeInfo;
      }
      EventLogservantSortInfo = v76->static_fields->EventLogservantSortInfo;
      this->fields.sort = EventLogservantSortInfo;
      p_sort = &this->fields.sort;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.sort,
        (int32_t)EventLogservantSortInfo,
        v70,
        v71,
        v72,
        v73,
        v74,
        v75);
      itemList = this->fields.sort;
      if ( itemList )
      {
        *((_DWORD *)itemList + 32) = 0;
        ListViewSort__Load((ListViewSort_o *)itemList, 0);
        MaterialCollectionServantListViewManager = MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                                     v79,
                                                     v80);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v81, v82);
        itemList = (void *)UnityEngine_Object__op_Inequality(
                             (UnityEngine_Object_o *)MaterialCollectionServantListViewManager,
                             0,
                             0);
        if ( ((unsigned __int8)itemList & 1) != 0 )
        {
          if ( !MaterialCollectionServantListViewManager )
            goto LABEL_87;
          v90 = *p_sort;
          MaterialCollectionServantListViewManager->fields.sort = *p_sort;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&MaterialCollectionServantListViewManager->fields.sort,
            (int32_t)v90,
            v84,
            v85,
            v86,
            v87,
            v88,
            v89);
        }
        emptyMessageLabel = this->fields.emptyMessageLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v84);
        itemList = LocalizationManager__Get((System_String_o *)StringLiteral_12297/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/, 0);
        if ( emptyMessageLabel )
        {
          UILabel__set_text(emptyMessageLabel, (System_String_o *)itemList, 0);
          MaterialEventLogListViewManager__SetFilterButtonImage(this, v92);
          MaterialEventLogListViewManager__SortDummyData(this, v93);
          goto LABEL_84;
        }
      }
    }
LABEL_87:
    sub_21FFECC(itemList, v8);
  }
  if ( !v49 )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo, v45, v46);
    v47 = MaterialEventLogListViewManager_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(v48, v47->static_fields->NORMAL_LIST_POS_Y, 0);
  ListViewManager__SetArrangementPitchY(
    (ListViewManager_o *)this,
    MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_ARRANGEMENT_PY,
    0);
  v56 = this->fields.scrollView;
  if ( !v56 )
    goto LABEL_87;
  v57 = (UnityEngine_Object_o *)v56->fields.verticalScrollBar;
  if ( v57 && (v58 = UIScrollBar_TypeInfo->_2.naturalAligment, v57->klass->_2.naturalAligment >= (unsigned int)v58) )
  {
    if ( (UIScrollBar_c *)v57->klass->_2.typeHierarchy[v58 - 1] == UIScrollBar_TypeInfo )
      v59 = v57;
    else
      v59 = 0;
  }
  else
  {
    v59 = 0;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v55);
  itemList = (void *)UnityEngine_Object__op_Inequality(v59, 0, 0);
  if ( ((unsigned __int8)itemList & 1) != 0 )
  {
    if ( !v59 )
      goto LABEL_87;
    v95 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v59, 0);
    v98 = MaterialEventLogListViewManager_TypeInfo;
    v99 = v95;
    if ( !*(&MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo, v96, v97);
      v98 = MaterialEventLogListViewManager_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionY(v99, v98->static_fields->NORMAL_SCROLLBAR_POS_Y, 0);
    itemList = v59[2].klass;
    if ( !itemList )
      goto LABEL_87;
    UIWidget__set_height(
      (UIWidget_o *)itemList,
      MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_SCROLLBAR_BACK_HEIGHT,
      0);
    itemList = v59[2].monitor;
    if ( !itemList )
      goto LABEL_87;
    UIWidget__set_height(
      (UIWidget_o *)itemList,
      MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_SCROLLBAR_FORE_HEIGHT,
      0);
  }
  v100 = this->fields.scrollView;
  if ( !v100 )
    goto LABEL_87;
  v101 = (UnityEngine_Object_o *)v100->fields.mPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v94);
  if ( UnityEngine_Object__op_Inequality(v101, 0, 0) )
  {
    itemList = MaterialEventLogListViewManager_TypeInfo;
    if ( !*(&MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo, v8, v102);
    if ( !v101 )
      goto LABEL_87;
    (*(void (__fastcall **)(UnityEngine_Object_o *, size_t, double, float, float, float))&v101->klass[1]._2.cctor_finished)(
      v101,
      v101->klass[1]._2.cctor_thread,
      0.0,
      (float)MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_PANEL_CENTER_Y,
      (float)MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_PANEL_WIDTH,
      (float)MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_PANEL_HEIGHT);
  }
LABEL_84:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  if ( this->fields.issortButton )
  {
    v104 = MaterialEventLogListViewManager__GetFilterCount(this, v103) < 1;
    ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v104, 0);
  }
  MaterialEventLogListViewManager__CreateInfos(this, v103);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0);
}


void MaterialEventLogListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MaterialEventLogListViewManager_c *v3; // x0
  ListViewSort_o *EventLogservantSortInfo; // x0

  if ( (byte_5933653 & 1) == 0 )
  {
    sub_21FFC50(&MaterialEventLogListViewManager_TypeInfo);
    byte_5933653 = 1;
  }
  v3 = MaterialEventLogListViewManager_TypeInfo;
  if ( !*(&MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo, v1, v2);
    v3 = MaterialEventLogListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v3->static_fields->EventLogservantSortInfo;
  if ( !EventLogservantSortInfo )
    sub_21FFECC(0, v1);
  ListViewSort__DeleteContinueData(EventLogservantSortInfo, 0);
}


void MaterialEventLogListViewManager__DestroyList(MaterialEventLogListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  ListViewManager__CheckSortButton((ListViewManager_o *)this, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void MaterialEventLogListViewManager__EndEventLogSortKind(
        MaterialEventLogListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  MaterialEventLogServantSortSelectMenu_o *eventLogServantSortSelectMenu; // x0
  MaterialEventLogListViewManager_o *v6; // x0
  const MethodInfo *v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  MaterialCollectionServantListViewManager_o *MaterialCollectionServantListViewManager; // x21
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct ListViewSort_o *sort; // x1
  const MethodInfo *v18; // x1
  bool v19; // w1
  const MethodInfo *v20; // x1

  if ( (byte_5933662 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933662 = 1;
  }
  eventLogServantSortSelectMenu = this->fields.eventLogServantSortSelectMenu;
  if ( !eventLogServantSortSelectMenu )
    goto LABEL_13;
  MaterialEventLogServantSortSelectMenu__Close_40046928(eventLogServantSortSelectMenu, 0, method);
  MaterialCollectionServantListViewManager = MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                               v6,
                                               v7);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  eventLogServantSortSelectMenu = (MaterialEventLogServantSortSelectMenu_o *)UnityEngine_Object__op_Inequality(
                                                                               (UnityEngine_Object_o *)MaterialCollectionServantListViewManager,
                                                                               0,
                                                                               0);
  if ( ((unsigned __int8)eventLogServantSortSelectMenu & 1) != 0 )
  {
    if ( !MaterialCollectionServantListViewManager )
      goto LABEL_13;
    sort = this->fields.sort;
    MaterialCollectionServantListViewManager->fields.sort = sort;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&MaterialCollectionServantListViewManager->fields.sort,
      (int32_t)sort,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( isDecide )
  {
    MaterialEventLogListViewManager__SortDummyData(this, (const MethodInfo *)isDecide);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    v19 = MaterialEventLogListViewManager__GetFilterCount(this, v18) < 1;
    ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v19, 0);
    eventLogServantSortSelectMenu = (MaterialEventLogServantSortSelectMenu_o *)this->fields.sort;
    if ( eventLogServantSortSelectMenu )
    {
      ListViewSort__Save((ListViewSort_o *)eventLogServantSortSelectMenu, 0);
      MaterialEventLogListViewManager__CreateInfos(this, v20);
      goto LABEL_12;
    }
LABEL_13:
    sub_21FFECC(eventLogServantSortSelectMenu, isDecide);
  }
LABEL_12:
  MaterialEventLogListViewManager__SetFilterButtonImage(this, (const MethodInfo *)isDecide);
}


void MaterialEventLogListViewManager__EventLogSortKind(
        MaterialEventLogListViewManager_o *this,
        MaterialEventLogServantSortSelectMenu_o *eventLogServantSortSelectMenu,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x21
  MaterialEventLogServantSortSelectMenu_CallbackFunc_o *v6; // x22
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_5933660 & 1) == 0 )
  {
    sub_21FFC50(&MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_MaterialEventLogListViewManager_EndEventLogSortKind__);
    byte_5933660 = 1;
  }
  if ( this->fields.isInput )
  {
    sort = this->fields.sort;
    v6 = (MaterialEventLogServantSortSelectMenu_CallbackFunc_o *)sub_21FFEBC(MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo);
    MaterialEventLogServantSortSelectMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_MaterialEventLogListViewManager_EndEventLogSortKind__,
      v7);
    if ( !eventLogServantSortSelectMenu )
      sub_21FFECC(v8, v9);
    MaterialEventLogServantSortSelectMenu__Open(eventLogServantSortSelectMenu, 0, sort, v6, v10);
  }
}


int32_t MaterialEventLogListViewManager__GetFilterCount(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  MaterialEventLogListViewManager_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w22
  int32_t v5; // w20
  int32_t v6; // w21
  MaterialEventLogListViewManager_c *klass; // x8
  __int64 naturalAligment; // x10

  v2 = this;
  if ( (byte_5933661 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (MaterialEventLogListViewManager_o *)sub_21FFC50(&MaterialEventLogListViewItem_TypeInfo);
    byte_5933661 = 1;
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
      this = (MaterialEventLogListViewManager_o *)v2->fields.itemList;
      if ( !this )
        break;
      this = (MaterialEventLogListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v6,
                                                    (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        break;
      klass = this->klass;
      naturalAligment = MaterialEventLogListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (MaterialEventLogListViewItem_c *)klass->_2.typeHierarchy[naturalAligment - 1] != MaterialEventLogListViewItem_TypeInfo )
      {
        break;
      }
      if ( this->fields.dropList )
        v5 += ((__int64 (__fastcall *)(MaterialEventLogListViewManager_o *, struct ListViewSort_o *, const MethodInfo *))klass->vtable._5_SetSortButtonImage.methodPtr)(
                this,
                v2->fields.sort,
                klass->vtable._5_SetSortButtonImage.method)
            & 1;
      if ( size == ++v6 )
        return v5;
    }
LABEL_16:
    sub_21FFECC(this, method);
  }
  return 0;
}


PartyServantListViewItem_o *MaterialEventLogListViewManager__GetItem(
        MaterialEventLogListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  PartyServantListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_5933659 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&PartyServantListViewItem_TypeInfo);
    byte_5933659 = 1;
  }
  result = (PartyServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = PartyServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (PartyServantListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != PartyServantListViewItem_TypeInfo )
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


MaterialCollectionServantListViewManager_o *MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_o *result; // x0
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

  if ( (byte_5933655 & 1) == 0 )
  {
    sub_21FFC50(&MyRoomRootComponent_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_5933655 = 1;
  }
  result = (MaterialCollectionServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
          return *(MaterialCollectionServantListViewManager_o **)(m_CachedPtr + 568);
LABEL_22:
        sub_21FFECC(result, v3);
      }
    }
  }
  return result;
}


float MaterialEventLogListViewManager__GetScrollPosY(MaterialEventLogListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *scrollView; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView )
    sub_21FFECC(0, method);
  gameObject = UnityEngine_Component__get_gameObject(scrollView, 0);
  return GameObjectExtensions__GetLocalPositionY(gameObject, 0);
}


UIScrollView_o *MaterialEventLogListViewManager__GetScrollView(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.scrollView;
}


void MaterialEventLogListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MaterialEventLogListViewManager_c *v3; // x0
  ListViewSort_o *EventLogservantSortInfo; // x0

  if ( (byte_5933654 & 1) == 0 )
  {
    sub_21FFC50(&MaterialEventLogListViewManager_TypeInfo);
    byte_5933654 = 1;
  }
  v3 = MaterialEventLogListViewManager_TypeInfo;
  if ( !*(&MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo, v1, v2);
    v3 = MaterialEventLogListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v3->static_fields->EventLogservantSortInfo;
  if ( !EventLogservantSortInfo )
    sub_21FFECC(0, v1);
  ListViewSort__InitLoad(EventLogservantSortInfo, 0);
}


void MaterialEventLogListViewManager__InitializeObjectPosition(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *seed; // x20
  UnityEngine_GameObject_o *ComponentsInChildren_object__59262092; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x2
  struct ListViewItemSeed_o *v8; // x8
  UnityEngine_Object_o *parent; // x20
  struct ListViewItemSeed_o *v10; // x8
  int klass; // w8
  UnityEngine_GameObject_o *v12; // x19
  __int64 v13; // x20

  if ( (byte_593366A & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponentsInChildren_MaterialEventLogListViewObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593366A = 1;
  }
  seed = (UnityEngine_Object_o *)this->fields.seed;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  ComponentsInChildren_object__59262092 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(seed, 0, 0);
  if ( ((unsigned __int8)ComponentsInChildren_object__59262092 & 1) != 0 )
  {
    v8 = this->fields.seed;
    if ( !v8 )
      goto LABEL_19;
    parent = (UnityEngine_Object_o *)v8->fields.parent;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    ComponentsInChildren_object__59262092 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(parent, 0, 0);
    if ( ((unsigned __int8)ComponentsInChildren_object__59262092 & 1) != 0 )
    {
      v10 = this->fields.seed;
      if ( !v10 )
        goto LABEL_19;
      ComponentsInChildren_object__59262092 = v10->fields.parent;
      if ( !ComponentsInChildren_object__59262092 )
        goto LABEL_19;
      ComponentsInChildren_object__59262092 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__59262092(
                                                                            ComponentsInChildren_object__59262092,
                                                                            (const MethodInfo_388448C *)Method_UnityEngine_GameObject_GetComponentsInChildren_MaterialEventLogListViewObject___);
      if ( !ComponentsInChildren_object__59262092 )
        goto LABEL_19;
      klass = (int)ComponentsInChildren_object__59262092[1].klass;
      v12 = ComponentsInChildren_object__59262092;
      if ( klass >= 1 )
      {
        v13 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v13 >= klass )
            sub_21FFED4(ComponentsInChildren_object__59262092);
          ComponentsInChildren_object__59262092 = (UnityEngine_GameObject_o *)*((_QWORD *)&v12[1].monitor + v13);
          if ( !ComponentsInChildren_object__59262092 )
            break;
          MaterialEventLogListViewObject__InitPosition(
            (MaterialEventLogListViewObject_o *)ComponentsInChildren_object__59262092,
            v6);
          klass = (int)v12[1].klass;
          if ( (int)++v13 >= klass )
            return;
        }
LABEL_19:
        sub_21FFECC(ComponentsInChildren_object__59262092, v6);
      }
    }
  }
}


void MaterialEventLogListViewManager__ListUpdate(MaterialEventLogListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  int32_t FilterCount; // w8

  MaterialEventLogListViewManager__SortDummyData(this, method);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  FilterCount = MaterialEventLogListViewManager__GetFilterCount(this, v3);
  ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, FilterCount < 1, 0);
}


void MaterialEventLogListViewManager__OnClickListView(
        MaterialEventLogListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  Il2CppObject *linkItem; // x19
  __int64 naturalAligment; // x10
  Il2CppClass *klass; // x20
  int element_class_high; // w8
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0

  if ( (byte_593365E & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_MaterialEventLogListViewItem___);
    sub_21FFC50(&MaterialEventLogListViewItem_TypeInfo);
    this = (MaterialEventLogListViewManager_o *)sub_21FFC50(&Method_MaterialEventLogListViewManager_OnClickListView__);
    byte_593365E = 1;
  }
  if ( !obj
    || (linkItem = (Il2CppObject *)obj->fields.linkItem) == 0
    || (naturalAligment = MaterialEventLogListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (MaterialEventLogListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != MaterialEventLogListViewItem_TypeInfo )
  {
    sub_21FFECC(this, obj);
  }
  klass = linkItem[8].klass;
  if ( klass )
  {
    element_class_high = HIDWORD(klass->_1.element_class);
    if ( (element_class_high & 1) == 0 )
    {
      v8 = Method_MaterialEventLogListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_MaterialEventLogListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_21FFC68(Method_MaterialEventLogListViewManager_OnClickListView__);
      v9 = (System_Reflection_MethodBase_o *)sub_21FFC34(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
      element_class_high = HIDWORD(klass->_1.element_class);
    }
    if ( (element_class_high & 4) != 0 )
    {
      v10 = Method_MaterialEventLogListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_MaterialEventLogListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_21FFC68(Method_MaterialEventLogListViewManager_OnClickListView__);
      v11 = (System_Reflection_MethodBase_o *)sub_21FFC34(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 2, 0, 0);
    }
    else
    {
      ActionExtensions__Call_object_(
        (System_Action_T__o *)klass->_1.declaringType,
        linkItem,
        (const MethodInfo_36CDF5C *)Method_ActionExtensions_Call_MaterialEventLogListViewItem___);
    }
  }
}


void MaterialEventLogListViewManager__RequestListObject(
        MaterialEventLogListViewManager_o *this,
        int32_t mode,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v7; // x19
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x1
  System_Collections_Generic_List_object__o *v23; // x22
  int32_t v24; // w24
  const MethodInfo *v25; // x4
  int32_t initMode; // w8
  UnityEngine_GameObject_o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  Il2CppObject *v30; // x21
  float v31; // s8
  int klass; // s0
  int monitor; // s1
  System_Action_c *v34; // x0
  System_Action_o *v35; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  Il2CppObject *Component_object; // x20
  float IntpTime_AutoResume; // s8
  System_Action_o *v41; // x21
  System_Action_o *v42; // x20

  if ( (byte_593365C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__0__);
    sub_21FFC50(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__1__);
    sub_21FFC50(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__2__);
    sub_21FFC50(&MaterialEventLogListViewManager___c__DisplayClass50_0_TypeInfo);
    byte_593365C = 1;
  }
  v7 = sub_21FFEBC(MaterialEventLogListViewManager___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_25;
  *(_QWORD *)(v7 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = end_act;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)end_act, v16, v17, v18, v19, v20, v21);
  ObjectList = (System_Collections_Generic_List_object__o *)MaterialEventLogListViewManager__get_ObjectList(this, v22);
  if ( !ObjectList )
    goto LABEL_25;
  v23 = ObjectList;
  if ( ObjectList->fields._size >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v23,
                                                                  v24,
                                                                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      MaterialEventLogListViewObject__Init_40038064((MaterialEventLogListViewObject_o *)ObjectList, mode, 0, -1, v25);
      if ( ++v24 >= v23->fields._size )
        goto LABEL_9;
    }
LABEL_25:
    sub_21FFECC(ObjectList, v9);
  }
LABEL_9:
  initMode = this->fields.initMode;
  if ( initMode == 4 )
  {
    this->fields.mIsDoing_Slide = 1;
    ObjectList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
    if ( !ObjectList )
      goto LABEL_25;
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)ObjectList, 0);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         gameObject,
                         (const MethodInfo_38852A8 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v37, v38);
    IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0);
    v41 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v41,
      (Il2CppObject *)v7,
      Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__2__,
      0);
    if ( !Component_object )
      goto LABEL_25;
    SlideFadeObject__SlideOut_42892500((SlideFadeObject_o *)Component_object, 580.0, IntpTime_AutoResume, 0.0, v41, 0);
  }
  else if ( initMode == 3 )
  {
    this->fields.mIsDoing_Slide = 1;
    this->fields.isScrollRefresh = 1;
    ObjectList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
    if ( !ObjectList )
      goto LABEL_25;
    v27 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)ObjectList, 0);
    v30 = GameObjectExtensions__SafeGetComponent_object_(
            v27,
            (const MethodInfo_38852A8 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v28, v29);
    v31 = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0);
    if ( this->fields.issortButton )
    {
      if ( !v30 )
        goto LABEL_25;
      klass = (int)v30[4].klass;
      monitor = (int)v30[4].monitor;
      LODWORD(v30[5].klass) = -1027735552;
      HIDWORD(v30[4].monitor) = klass;
      v34 = System_Action_TypeInfo;
      HIDWORD(v30[5].klass) = monitor;
      v35 = (System_Action_o *)sub_21FFEBC(v34);
      System_Action___ctor(
        v35,
        (Il2CppObject *)v7,
        Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__1__,
        0);
      SlideFadeObject__SlideSortIn((SlideFadeObject_o *)v30, 580.0, v31, 0.0, v35, 0);
    }
    else
    {
      v42 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        v42,
        (Il2CppObject *)v7,
        Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__0__,
        0);
      if ( !v30 )
        goto LABEL_25;
      SlideFadeObject__SlideIn_42891556((SlideFadeObject_o *)v30, 580.0, v31, 0.0, v42, 0);
    }
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void MaterialEventLogListViewManager__SetAllActiveWidget(
        MaterialEventLogListViewManager_o *this,
        bool isActive,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w21
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Component_object; // x22

  if ( (byte_5933665 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_21FFC50(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933665 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)MaterialEventLogListViewManager__get_ObjectList(
                                                              this,
                                                              (const MethodInfo *)isActive);
  if ( !ObjectList )
    goto LABEL_15;
  v7 = ObjectList;
  if ( ObjectList->fields._size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v7,
                                                                  v8,
                                                                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ObjectList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)ObjectList,
                                                                  0);
      if ( !ObjectList )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)ObjectList,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
      ObjectList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                  (UnityEngine_Object_o *)Component_object,
                                                                  0,
                                                                  0);
      if ( ((unsigned __int8)ObjectList & 1) != 0 )
      {
        if ( !Component_object )
          break;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, isActive, 0);
      }
      if ( ++v8 >= v7->fields._size )
        return;
    }
LABEL_15:
    sub_21FFECC(ObjectList, v6);
  }
}


void MaterialEventLogListViewManager__SetFilterButtonImage(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  System_String_o **v4; // x9
  System_String_o **v5; // x20
  UnityEngine_Color_o v6; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_5933663 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_449/*"#FE4545"*/);
    sub_21FFC50(&StringLiteral_18217/*"btn_filter_on"*/);
    sub_21FFC50(&StringLiteral_429/*"#000000"*/);
    sub_21FFC50(&StringLiteral_18216/*"btn_filter"*/);
    byte_5933663 = 1;
  }
  sort = this->fields.sort;
  *(_QWORD *)&v6.fields.r = 0;
  *(_QWORD *)&v6.fields.b = 0;
  if ( !sort )
    goto LABEL_10;
  sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0);
  if ( !this->fields.filterSprite )
    goto LABEL_10;
  v4 = (System_String_o **)&StringLiteral_18216/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v5 = (System_String_o **)&StringLiteral_429/*"#000000"*/;
  }
  else
  {
    v4 = (System_String_o **)&StringLiteral_18217/*"btn_filter_on"*/;
    v5 = (System_String_o **)&StringLiteral_449/*"#FE4545"*/;
  }
  UISprite__set_spriteName(this->fields.filterSprite, *v4, 0);
  *(_QWORD *)&v6.fields.r = 0;
  *(_QWORD *)&v6.fields.b = 0;
  UnityEngine_ColorUtility__TryParseHtmlString(*v5, &v6, 0);
  sort = (ListViewSort_o *)this->fields.sortKindLabel;
  if ( !sort )
LABEL_10:
    sub_21FFECC(sort, method);
  UILabel__set_effectColor((UILabel_o *)sort, v6, 0);
}


bool MaterialEventLogListViewManager__SetMode(
        MaterialEventLogListViewManager_o *this,
        int32_t mode,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  int32_t mIsDoing_Slide; // w8
  __int64 v8; // x1
  UnityEngine_Collider_o *mBoxCollider; // x0
  const MethodInfo *v10; // x3
  MaterialEventLogListViewManager_o *v11; // x0
  int32_t v12; // w1
  bool result; // w0
  System_Action_o *v14; // x2
  System_Action_o *v15; // x21
  System_Delegate_o *v16; // x0
  MaterialEventLogListViewManager_o *v17; // x0
  int32_t v18; // w1
  System_Action_o *v19; // x2
  const MethodInfo *v20; // x3

  if ( (byte_593365B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_MaterialEventLogListViewManager__SetMode_b__49_0__);
    byte_593365B = 1;
  }
  mIsDoing_Slide = this->fields.mIsDoing_Slide;
  if ( mode == 4 )
  {
    if ( this->fields.mIsDoing_Slide || this->fields.initMode != 2 )
      goto LABEL_16;
  }
  else
  {
    if ( mode == 3 )
    {
      if ( this->fields.mIsDoing_Slide )
      {
LABEL_16:
        ActionExtensions__Call(end_act, 0);
        return 0;
      }
      mIsDoing_Slide = this->fields.initMode;
    }
    if ( mIsDoing_Slide )
      goto LABEL_16;
  }
  this->fields.initMode = mode;
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  mBoxCollider = (UnityEngine_Collider_o *)this->fields.mBoxCollider;
  if ( !mBoxCollider )
    sub_21FFECC(0, v8);
  UnityEngine_Collider__set_enabled(mBoxCollider, this->fields.isInput, 0);
  if ( mode <= 2 )
  {
    if ( mode != 1 )
    {
      if ( mode == 2 )
      {
        v11 = this;
        v12 = 3;
LABEL_21:
        v14 = end_act;
LABEL_22:
        MaterialEventLogListViewManager__RequestListObject(v11, v12, v14, v10);
        return 1;
      }
LABEL_20:
      v11 = this;
      v12 = 0;
      goto LABEL_21;
    }
LABEL_19:
    v11 = this;
    v12 = 2;
    goto LABEL_21;
  }
  if ( mode != 4 )
  {
    if ( mode != 3 )
      goto LABEL_20;
    goto LABEL_19;
  }
  v15 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_MaterialEventLogListViewManager__SetMode_b__49_0__, 0);
  v16 = System_Delegate__Combine((System_Delegate_o *)end_act, (System_Delegate_o *)v15, 0);
  v14 = (System_Action_o *)v16;
  if ( !v16 || (System_Action_c *)v16->klass == System_Action_TypeInfo )
  {
    v11 = this;
    v12 = 2;
    goto LABEL_22;
  }
  v17 = (MaterialEventLogListViewManager_o *)sub_220024C(v16, System_Action_TypeInfo, v16, v10);
  MaterialEventLogListViewManager__RequestListObject(v17, v18, v19, v20);
  return result;
}


void MaterialEventLogListViewManager__SetObjectItem(
        MaterialEventLogListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 naturalAligment; // x10
  ListViewObject_o *v8; // x0
  int32_t v9; // w1

  if ( (byte_593365A & 1) == 0 )
  {
    sub_21FFC50(&MaterialEventLogListViewObject_TypeInfo);
    byte_593365A = 1;
  }
  if ( obj
    && (naturalAligment = MaterialEventLogListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (MaterialEventLogListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == MaterialEventLogListViewObject_TypeInfo )
      v8 = obj;
    else
      v8 = 0;
  }
  else
  {
    v8 = 0;
  }
  if ( this->fields.initMode != 2 )
  {
    if ( v8 )
    {
      v9 = 2;
      goto LABEL_14;
    }
LABEL_15:
    sub_21FFECC(v8, obj);
  }
  if ( !v8 )
    goto LABEL_15;
  v9 = 3;
LABEL_14:
  MaterialEventLogListViewObject__Init_40038064(
    (MaterialEventLogListViewObject_o *)v8,
    v9,
    0,
    this->fields.selectedLimitCount,
    v4);
}


void MaterialEventLogListViewManager__SetScrollPosY(
        MaterialEventLogListViewManager_o *this,
        float y,
        const MethodInfo *method)
{
  void *scrollView; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector2_o v7; // 0:s0.4,4:s1.4

  if ( (byte_5933656 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    byte_5933656 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0),
        GameObjectExtensions__SetLocalPositionY(gameObject, y, 0),
        (scrollView = this->fields.scrollView) == 0)
    || (scrollView = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0)) == 0
    || (scrollView = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)scrollView,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___)) == 0 )
  {
    sub_21FFECC(scrollView, method);
  }
  v7.fields.y = -y;
  v7.fields.x = *((float *)scrollView + 83);
  UIPanel__set_clipOffset((UIPanel_o *)scrollView, v7, 0);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 0, 0, 0);
}


void MaterialEventLogListViewManager__SetSort(
        MaterialEventLogListViewManager_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v9; // x1
  bool v10; // w1
  const MethodInfo *v11; // x1

  this->fields.sort = sort;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.sort,
    (int32_t)sort,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  v10 = MaterialEventLogListViewManager__GetFilterCount(this, v9) < 1;
  ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v10, 0);
  MaterialEventLogListViewManager__CreateInfos(this, v11);
}


void MaterialEventLogListViewManager__SetSortButtonImage(
        MaterialEventLogListViewManager_o *this,
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

  if ( (byte_5933666 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_18253/*"btn_sort_up"*/);
    sub_21FFC50(&StringLiteral_18357/*"btn_txt_up"*/);
    sub_21FFC50(&StringLiteral_18306/*"btn_txt_new"*/);
    sub_21FFC50(&StringLiteral_18296/*"btn_txt_down"*/);
    sub_21FFC50(&StringLiteral_18314/*"btn_txt_old"*/);
    sub_21FFC50(&StringLiteral_18250/*"btn_sort_down"*/);
    byte_5933666 = 1;
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
          v12 = (System_String_o **)(v10->fields.isAscendingOrder ? &StringLiteral_18314/*"btn_txt_old"*/ : &StringLiteral_18306/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v12, 0);
          v13 = this->fields.sort;
          if ( v13 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v14 = (System_String_o **)&StringLiteral_18250/*"btn_sort_down"*/;
              v15 = (System_String_o **)&StringLiteral_18253/*"btn_sort_up"*/;
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
          v16 = (System_String_o **)(v10->fields.isAscendingOrder ? &StringLiteral_18357/*"btn_txt_up"*/ : &StringLiteral_18296/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v16, 0);
          v13 = this->fields.sort;
          if ( v13 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v14 = (System_String_o **)&StringLiteral_18253/*"btn_sort_up"*/;
              v15 = (System_String_o **)&StringLiteral_18250/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_21FFECC(sort, v5);
  }
}


void MaterialEventLogListViewManager__SetValentineListDisplay(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  Il2CppClass *klass; // x8
  __int64 naturalAligment; // x11
  MyRoomControl_o *element_class; // x19

  if ( (byte_593365D & 1) == 0 )
  {
    sub_21FFC50(&MyRoomRootComponent_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_593365D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (klass = Instance[2].klass) == 0
    || (naturalAligment = MyRoomRootComponent_TypeInfo->_2.naturalAligment,
        *((unsigned __int8 *)klass->_1.image + 304) < (unsigned int)naturalAligment)
    || *(MyRoomRootComponent_c **)(*((_QWORD *)klass->_1.image + 25) + 8 * naturalAligment - 8) != MyRoomRootComponent_TypeInfo
    || (element_class = (MyRoomControl_o *)klass->_1.element_class) == 0 )
  {
    sub_21FFECC(Instance, v3);
  }
  if ( element_class->fields.IsMaterialEventBack )
  {
    MyRoomControl__ValentineListChange(element_class, 0, 0);
    MyRoomControl__EndMaterialEventBack(element_class, 0);
  }
}


void MaterialEventLogListViewManager__SortAscendingOrder(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct ListViewSort_o *v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *sort; // x8
  __int64 v8; // x1
  __int64 v9; // x2
  MaterialCollectionServantListViewManager_o *MaterialCollectionServantListViewManager; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct ListViewSort_o *v17; // x1
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  bool v20; // w1
  const MethodInfo *v21; // x1

  if ( (byte_5933664 & 1) == 0 )
  {
    sub_21FFC50(&Method_MaterialEventLogListViewManager_SortAscendingOrder__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933664 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_MaterialEventLogListViewManager_SortAscendingOrder__;
    if ( (*((_BYTE *)Method_MaterialEventLogListViewManager_SortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_MaterialEventLogListViewManager_SortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( sort )
    {
      sort->fields.isAscendingOrder ^= 1u;
      MaterialCollectionServantListViewManager = MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                                   (MaterialEventLogListViewManager_o *)v5,
                                                   v6);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
      v5 = (struct ListViewSort_o *)UnityEngine_Object__op_Inequality(
                                      (UnityEngine_Object_o *)MaterialCollectionServantListViewManager,
                                      0,
                                      0);
      if ( ((unsigned __int8)v5 & 1) != 0 )
      {
        if ( !MaterialCollectionServantListViewManager )
          goto LABEL_15;
        v17 = this->fields.sort;
        MaterialCollectionServantListViewManager->fields.sort = v17;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&MaterialCollectionServantListViewManager->fields.sort,
          (int32_t)v17,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
      }
      v5 = this->fields.sort;
      if ( v5 )
      {
        ListViewSort__Save(v5, 0);
        MaterialEventLogListViewManager__SortDummyData(this, v18);
        ((void (__fastcall *)(MaterialEventLogListViewManager_o *, const MethodInfo *))this->klass->vtable._5_SetSortButtonImage.methodPtr)(
          this,
          this->klass->vtable._5_SetSortButtonImage.method);
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
        v20 = MaterialEventLogListViewManager__GetFilterCount(this, v19) < 1;
        ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v20, 0);
        MaterialEventLogListViewManager__CreateInfos(this, v21);
        return;
      }
    }
LABEL_15:
    sub_21FFECC(v5, v6);
  }
}


void MaterialEventLogListViewManager__SortDummyData(MaterialEventLogListViewManager_o *this, const MethodInfo *method)
{
  MaterialEventLogListViewManager_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w22
  System_Collections_Generic_List_object__o *v5; // x0
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w21
  __int64 naturalAligment; // x10
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  MaterialEventLogListViewManager_o *v18; // x1
  Il2CppClass **v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_List_object__o *v21; // x0
  const MethodInfo *v22; // x1
  int v23; // w8
  int v24; // w20
  int v25; // w8
  int v26; // w21
  int v27; // w25
  struct ListViewSort_o *sort; // x8
  _BOOL4 isAscendingOrder; // w27
  ListViewItem_o *v30; // x0
  ListViewItem_o *v31; // x22
  int32_t v32; // w1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v46; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v48; // x8
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_5933668 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Remove__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_MaterialEventLogListViewItem__TypeInfo);
    this = (MaterialEventLogListViewManager_o *)sub_21FFC50(&MaterialEventLogListViewItem_TypeInfo);
    byte_5933668 = 1;
  }
  itemList = v2->fields.itemList;
  memset(&v50, 0, sizeof(v50));
  if ( !itemList )
    goto LABEL_41;
  size = itemList->fields._size;
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_MaterialEventLogListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem___ctor__);
  v6 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  if ( size >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      this = (MaterialEventLogListViewManager_o *)v2->fields.itemList;
      if ( !this )
        break;
      this = (MaterialEventLogListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v7,
                                                    (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        break;
      naturalAligment = MaterialEventLogListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (MaterialEventLogListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != MaterialEventLogListViewItem_TypeInfo )
      {
        break;
      }
      if ( !this->fields.dropList )
      {
        this = (MaterialEventLogListViewManager_o *)v2->fields.itemList;
        if ( !this )
          break;
        this = (MaterialEventLogListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)this,
                                                      v7,
                                                      (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !v6 )
          break;
        items = v6->fields._items;
        v16 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v6->fields._version;
        if ( !items )
          break;
        v17 = v6->fields._size;
        v18 = this;
        if ( (unsigned int)v17 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            (Il2CppObject *)this,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + v17;
          v6->fields._size = v17 + 1;
          v19[4] = (Il2CppClass *)v18;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v18, v9, v10, v11, v12, v13, v14);
        }
      }
      if ( size == ++v7 )
        goto LABEL_18;
    }
LABEL_41:
    sub_21FFECC(this, method);
  }
LABEL_18:
  if ( !v6 )
    goto LABEL_41;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v49,
    v6,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v50 = v49;
  v49.fields._list = 0;
  *(_QWORD *)&v49.fields._index = &v50;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v50,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    v21 = (System_Collections_Generic_List_object__o *)v2->fields.itemList;
    if ( !v21 )
      sub_21FFECC(0, v20);
    System_Collections_Generic_List_object___Remove(
      v21,
      v50.fields._current,
      (const MethodInfo_445101C *)Method_System_Collections_Generic_List_ListViewItem__Remove__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v50,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  this = (MaterialEventLogListViewManager_o *)MaterialEventLogListViewManager__GetFilterCount(v2, v22);
  v23 = 4 - (_DWORD)this;
  if ( (int)this > 3 )
    v23 = 1;
  if ( v23 >= 1 )
  {
    v24 = (_DWORD)this + 999;
    if ( (int)this <= 3 )
      v25 = 3;
    else
      v25 = (int)this;
    v26 = -(int)this;
    v27 = ~v25;
    do
    {
      sort = v2->fields.sort;
      if ( !sort )
        goto LABEL_41;
      isAscendingOrder = sort->fields.isAscendingOrder;
      v30 = (ListViewItem_o *)sub_21FFEBC(MaterialEventLogListViewItem_TypeInfo);
      v31 = v30;
      v32 = isAscendingOrder ? v24 : v26;
      ListViewItem___ctor_50749276(v30, v32, 0);
      v31[1].monitor = 0;
      LODWORD(v31[1].klass) = 5;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v31[1].monitor, 0, v33, v34, v35, v36, v37, v38);
      this = (MaterialEventLogListViewManager_o *)v2->fields.itemList;
      if ( !this )
        goto LABEL_41;
      m_CachedPtr = this->fields.m_CachedPtr;
      v46 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_41;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v31,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v48 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v48 + 32) = v31;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v48 + 32), (int32_t)v31, v39, v40, v41, v42, v43, v44);
      }
      --v26;
      ++v24;
    }
    while ( v27 != v26 );
  }
  MaterialEventLogListViewManager__InitializeObjectPosition(v2, method);
}


bool MaterialEventLogListViewManager__get_IsDoing_Slide(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.mIsDoing_Slide;
}


System_Collections_Generic_List_MaterialEventLogListViewObject__o *MaterialEventLogListViewManager__get_ObjectList(
        MaterialEventLogListViewManager_o *this,
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

  if ( (byte_5933657 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_MaterialEventLogListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933657 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_MaterialEventLogListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_MaterialEventLogListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_21FFECC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_21FFECC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_MaterialEventLogListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_21FFECC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MaterialEventLogListViewObject__o *)v3;
}


void MaterialEventLogListViewManager___c__DisplayClass50_0___ctor(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MaterialEventLogListViewManager___c__DisplayClass50_0___RequestListObject_b__0(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct MaterialEventLogListViewManager_o *_4__this; // x0
  System_Action_o *end_act; // x2

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(0, method);
  end_act = this->fields.end_act;
  _4__this->fields.mIsDoing_Slide = 0;
  MaterialEventLogListViewManager__SetMode(_4__this, 2, end_act, v2);
}


void MaterialEventLogListViewManager___c__DisplayClass50_0___RequestListObject_b__1(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct MaterialEventLogListViewManager_o *_4__this; // x0
  System_Action_o *end_act; // x2

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(0, method);
  end_act = this->fields.end_act;
  _4__this->fields.mIsDoing_Slide = 0;
  MaterialEventLogListViewManager__SetMode(_4__this, 2, end_act, v2);
}


void MaterialEventLogListViewManager___c__DisplayClass50_0___RequestListObject_b__2(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  MaterialEventLogListViewManager___c__DisplayClass50_0_o *v3; // x19
  MaterialEventLogListViewManager_o *_4__this; // x20
  System_Action_o *_9__3; // x22
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  v3 = this;
  if ( (byte_593366C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    this = (MaterialEventLogListViewManager___c__DisplayClass50_0_o *)sub_21FFC50(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__3__);
    byte_593366C = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(this, method);
  _4__this->fields.mIsDoing_Slide = 0;
  _9__3 = v3->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v3,
      Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__3__,
      0);
    v3->fields.__9__3 = _9__3;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__3, (int32_t)_9__3, v6, v7, v8, v9, v10, v11);
  }
  MaterialEventLogListViewManager__SetMode(_4__this, 0, _9__3, v2);
}


void MaterialEventLogListViewManager___c__DisplayClass50_0___RequestListObject_b__3(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0);
}