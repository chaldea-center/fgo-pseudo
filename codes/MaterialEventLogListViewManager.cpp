void MaterialEventLogListViewManager___cctor(const MethodInfo *method)
{
  struct MaterialEventLogListViewManager_StaticFields *static_fields; // x8
  ListViewSort_o *v2; // x19
  struct MaterialEventLogListViewManager_StaticFields *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CE9858 & 1) == 0 )
  {
    sub_1C7BAE8(&ListViewSort_TypeInfo);
    sub_1C7BAE8(&MaterialEventLogListViewManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_8986/*"MaterialCollectionServant6"*/);
    byte_4CE9858 = 1;
  }
  static_fields = MaterialEventLogListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->VL_LIST_POS_Y = 0xC2CC0000C1F00000LL;
  static_fields->VL_SCROLLBAR_POS_Y = 70.0;
  *(_OWORD *)&static_fields->VL_SCROLLBAR_HEIGHT = xmmword_CF5390;
  *(_QWORD *)&static_fields->NORMAL_LIST_POS_Y = 0xC2F00000C20C0000LL;
  static_fields->NORMAL_SCROLLBAR_POS_Y = 45.0;
  *(_OWORD *)&static_fields->NORMAL_SCROLLBAR_BACK_HEIGHT = xmmword_CF5CD0;
  static_fields->NORMAL_PANEL_CENTER_Y = 0;
  v2 = (ListViewSort_o *)sub_1C7BD34(ListViewSort_TypeInfo);
  ListViewSort___ctor_44358856(v2, (System_String_o *)StringLiteral_8986/*"MaterialCollectionServant6"*/, 27, 1, 0);
  v3 = MaterialEventLogListViewManager_TypeInfo->static_fields;
  v3->EventLogservantSortInfo = v2;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v3->EventLogservantSortInfo, (int32_t)v2, v4, v5, v6, v7, v8, v9);
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct UIScrollView_o *scrollView; // x8
  ListViewSort_o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4CE983F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C7BAE8(&ListViewSort_TypeInfo);
    byte_4CE983F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             gameObject,
                             (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.mBoxCollider = (struct UnityEngine_BoxCollider_o *)Component_object,
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&this->fields.mBoxCollider,
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
    sub_1C7BD40(gameObject, v4);
  }
  scrollView->fields.disableDragIfFits = 0;
  v13 = (ListViewSort_o *)sub_1C7BD34(ListViewSort_TypeInfo);
  ListViewSort___ctor(v13, 3, 1, 0);
  this->fields.sort = v13;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.sort, (int32_t)v13, v14, v15, v16, v17, v18, v19);
}


void MaterialEventLogListViewManager__Back(MaterialEventLogListViewManager_o *this, const MethodInfo *method)
{
  MaterialEventLogListViewManager_o *v2; // x19
  struct ListViewSort_o *sort; // x8
  ListViewSort_o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  MaterialEventLogListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1
  UnityEngine_Object_o *MaterialCollectionServantListViewManager; // x19
  MaterialEventLogListViewManager_c *v14; // x0
  ListViewSort_o *EventLogservantSortInfo; // x8

  v2 = this;
  if ( (byte_4CE9854 & 1) == 0 )
  {
    sub_1C7BAE8(&ListViewSort_TypeInfo);
    sub_1C7BAE8(&MaterialEventLogListViewManager_TypeInfo);
    this = (MaterialEventLogListViewManager_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE9854 = 1;
  }
  if ( !v2->fields.issortButton )
  {
    sort = v2->fields.sort;
    if ( !sort )
      goto LABEL_18;
    sort->fields.isAscendingOrder = 1;
  }
  v4 = (ListViewSort_o *)sub_1C7BD34(ListViewSort_TypeInfo);
  ListViewSort___ctor(v4, 3, 1, 0);
  v2->fields.sort = v4;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v2->fields.sort, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  MaterialCollectionServantListViewManager = (UnityEngine_Object_o *)MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                                                       v11,
                                                                       v12);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (MaterialEventLogListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                MaterialCollectionServantListViewManager,
                                                0,
                                                0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !MaterialCollectionServantListViewManager )
      goto LABEL_18;
    MaterialCollectionServantListViewManager__EventLogSortListSave(
      (MaterialCollectionServantListViewManager_o *)this,
      method);
  }
  v14 = MaterialEventLogListViewManager_TypeInfo;
  if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
    v14 = MaterialEventLogListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v14->static_fields->EventLogservantSortInfo;
  if ( EventLogservantSortInfo )
  {
    if ( v14->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v14),
          (EventLogservantSortInfo = MaterialEventLogListViewManager_TypeInfo->static_fields->EventLogservantSortInfo) != 0) )
    {
      ListViewSort__Save(EventLogservantSortInfo, 0);
      return;
    }
LABEL_18:
    sub_1C7BD40(this, method);
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

  if ( (byte_4CE984C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    byte_4CE984C = 1;
  }
  memset(&v24, 0, sizeof(v24));
  objectList = this->fields.objectList;
  this->fields.selectedLimitCount = limitCount;
  if ( !objectList )
    sub_1C7BD40(0, *(_QWORD *)&servantId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v24.fields._current )
      sub_1C7BD40(0, v8);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v24.fields._current,
                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___);
    v11 = (MaterialEventLogListViewObject_o *)Component_object;
    if ( !Component_object )
      sub_1C7BD40(0, v10);
    Item = MaterialEventLogListViewObject__GetItem((MaterialEventLogListViewObject_o *)Component_object, v10);
    v15 = Item;
    if ( !Item )
      sub_1C7BD40(0, v13);
    info_k__BackingField = Item->fields._info_k__BackingField;
    if ( info_k__BackingField && info_k__BackingField->fields.svt_id == servantId )
    {
      v17 = MaterialEventLogListViewItem__CheckPlayableMaterial(Item, limitCount, v14);
      MaterialEventLogListViewObject__SetEnableSelect(v11, v17, v18);
      v21 = v15->fields._info_k__BackingField;
      if ( v17 )
      {
        if ( !v21 )
          sub_1C7BD40(v19, v20);
        v22 = v21->fields.flag & 0xFFFFFFFA;
      }
      else
      {
        if ( !v21 )
          sub_1C7BD40(v19, v20);
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
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void MaterialEventLogListViewManager__CreateInfos(MaterialEventLogListViewManager_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x19
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *m_CachedPtr; // x19
  System_Collections_Generic_List_object__o *v8; // x20
  _BOOL8 v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x11
  Il2CppClass *klass; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4CE9856 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_MaterialEventLogListViewItem_Info__TypeInfo);
    sub_1C7BAE8(&MaterialEventLogListViewItem_TypeInfo);
    sub_1C7BAE8(&MyRoomRootComponent_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CE9856 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  v5 = (UnityEngine_Object_o *)*((_QWORD *)Instance + 4);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v5, 0, 0) )
  {
    if ( v5 )
    {
      naturalAligment = MyRoomRootComponent_TypeInfo->_2.naturalAligment;
      if ( v5->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (MyRoomRootComponent_c *)v5->klass->_2.typeHierarchy[naturalAligment - 1] != MyRoomRootComponent_TypeInfo )
          v5 = 0;
      }
      else
      {
        v5 = 0;
      }
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (void *)UnityEngine_Object__op_Equality(v5, 0, 0);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      if ( !v5 )
        goto LABEL_35;
      m_CachedPtr = (UnityEngine_Object_o *)v5[2].fields.m_CachedPtr;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(m_CachedPtr, 0, 0) )
      {
        v8 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_MaterialEventLogListViewItem_Info__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v8,
          (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info___ctor__);
        Instance = this->fields.itemSortList;
        if ( Instance )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v28,
            (System_Collections_Generic_List_object__o *)Instance,
            (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v29 = v28;
          while ( 1 )
          {
            v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v29,
                   (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v9 )
              break;
            if ( v29.fields._current )
            {
              v16 = MaterialEventLogListViewItem_TypeInfo->_2.naturalAligment;
              if ( v29.fields._current->klass->_2.naturalAligment >= (unsigned int)v16
                && (MaterialEventLogListViewItem_c *)v29.fields._current->klass->_2.typeHierarchy[v16 - 1] == MaterialEventLogListViewItem_TypeInfo )
              {
                klass = v29.fields._current[8].klass;
                if ( klass )
                {
                  if ( !v8 )
                    sub_1C7BD40(v9, klass);
                  items = v8->fields._items;
                  v19 = Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__Add__;
                  ++v8->fields._version;
                  if ( !items )
                    sub_1C7BD40(v9, klass);
                  size = v8->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v8,
                      (Il2CppObject *)klass,
                      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v21 = &items->obj.klass + size;
                    v8->fields._size = size + 1;
                    v21[4] = klass;
                    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)klass, v10, v11, v12, v13, v14, v15);
                  }
                }
              }
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v29,
            (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          if ( m_CachedPtr )
          {
            Instance = m_CachedPtr[38].monitor;
            if ( Instance )
            {
              *((_QWORD *)Instance + 18) = v8;
              sub_1C7BA8C(
                (GrandQuestFolderBoardItem_o *)((char *)Instance + 144),
                (int32_t)v8,
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
        sub_1C7BD40(Instance, v4);
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
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  Il2CppObject *Item; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  __int64 v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  __int64 v42; // x8
  _BOOL4 issortButton; // w24
  UnityEngine_GameObject_o *gameObject; // x0
  MaterialEventLogListViewManager_c *v45; // x8
  UnityEngine_GameObject_o *v46; // x20
  float *p_VL_LIST_POS_Y; // x8
  struct UIScrollView_o *scrollView; // x8
  UnityEngine_Object_o *verticalScrollBar; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Object_o *v51; // x20
  struct UIScrollView_o *v52; // x8
  UnityEngine_Object_o *v53; // x8
  __int64 v54; // x11
  UnityEngine_Object_o *v55; // x20
  UnityEngine_GameObject_o *v56; // x0
  MaterialEventLogListViewManager_c *v57; // x8
  UnityEngine_GameObject_o *v58; // x21
  struct UIScrollView_o *v59; // x8
  UnityEngine_Object_o *mPanel; // x20
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  MaterialEventLogListViewManager_c *v67; // x0
  struct ListViewSort_o *EventLogservantSortInfo; // x1
  struct ListViewSort_o **p_sort; // x20
  MaterialEventLogListViewManager_o *v70; // x0
  const MethodInfo *v71; // x1
  MaterialCollectionServantListViewManager_o *MaterialCollectionServantListViewManager; // x21
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  struct ListViewSort_o *v79; // x1
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v81; // x1
  const MethodInfo *v82; // x1
  UnityEngine_GameObject_o *v83; // x0
  MaterialEventLogListViewManager_c *v84; // x8
  UnityEngine_GameObject_o *v85; // x21
  struct UIScrollView_o *v86; // x8
  UnityEngine_Object_o *v87; // x20
  const MethodInfo *v88; // x1
  bool v89; // w1

  if ( (byte_4CE9845 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&MaterialEventLogListViewItem_TypeInfo);
    sub_1C7BAE8(&MaterialEventLogListViewManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UIScrollBar_TypeInfo);
    sub_1C7BAE8(&StringLiteral_11859/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/);
    byte_4CE9845 = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  ListViewManager__CheckSortButton((ListViewManager_o *)this, 0, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !infos )
    goto LABEL_85;
  size = infos->fields._size;
  if ( size >= 4 )
    v10 = size + 1;
  else
    v10 = 4;
  if ( v10 >= 1 )
  {
    for ( i = 0; i != v10; ++i )
    {
      v12 = sub_1C7BD34(MaterialEventLogListViewItem_TypeInfo);
      ListViewItem___ctor_44325320((ListViewItem_o *)v12, i, 0);
      *(_DWORD *)(v12 + 120) = kind;
      *(_QWORD *)(v12 + 128) = 0;
      v13 = (Il2CppObject **)(v12 + 128);
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v12 + 128), 0, v14, v15, v16, v17, v18, v19);
      if ( i < infos->fields._size )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)infos,
                 i,
                 (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
        *v13 = Item;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v12 + 128), (int32_t)Item, v27, v28, v29, v30, v31, v32);
        itemList = *v13;
        if ( !*v13 )
          goto LABEL_85;
        *((_QWORD *)itemList + 11) = v12;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)((char *)itemList + 88), v12, v33, v34, v35, v36, v37, v38);
        itemList = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)infos,
                     i,
                     (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
        if ( !itemList )
          goto LABEL_85;
        this->fields.issortButton = *((_BYTE *)itemList + 152);
      }
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_85;
      v39 = *((_QWORD *)itemList + 2);
      v40 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*((_DWORD *)itemList + 7);
      if ( !v39 )
        goto LABEL_85;
      v41 = *((int *)itemList + 6);
      if ( (unsigned int)v41 >= *(_DWORD *)(v39 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)itemList,
          (Il2CppObject *)v12,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = v39 + 8 * v41;
        *((_DWORD *)itemList + 6) = v41 + 1;
        *(_QWORD *)(v42 + 32) = v12;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v42 + 32), v12, v20, v21, v22, v23, v24, v25);
      }
    }
  }
  issortButton = this->fields.issortButton;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v45 = MaterialEventLogListViewManager_TypeInfo;
  v46 = gameObject;
  if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
    v45 = MaterialEventLogListViewManager_TypeInfo;
  }
  p_VL_LIST_POS_Y = &v45->static_fields->VL_LIST_POS_Y;
  if ( issortButton )
  {
    GameObjectExtensions__SetLocalPositionY(v46, *p_VL_LIST_POS_Y, 0);
    ListViewManager__SetArrangementPitchY(
      (ListViewManager_o *)this,
      MaterialEventLogListViewManager_TypeInfo->static_fields->VL_ARRANGEMENT_PY,
      0);
    scrollView = this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_85;
    verticalScrollBar = (UnityEngine_Object_o *)scrollView->fields.verticalScrollBar;
    if ( verticalScrollBar
      && (naturalAligment = UIScrollBar_TypeInfo->_2.naturalAligment,
          verticalScrollBar->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (UIScrollBar_c *)verticalScrollBar->klass->_2.typeHierarchy[naturalAligment - 1] == UIScrollBar_TypeInfo )
        v51 = verticalScrollBar;
      else
        v51 = 0;
    }
    else
    {
      v51 = 0;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    itemList = (void *)UnityEngine_Object__op_Inequality(v51, 0, 0);
    if ( ((unsigned __int8)itemList & 1) != 0 )
    {
      if ( !v51 )
        goto LABEL_85;
      v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v51, 0);
      v57 = MaterialEventLogListViewManager_TypeInfo;
      v58 = v56;
      if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
        v57 = MaterialEventLogListViewManager_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v58, v57->static_fields->VL_SCROLLBAR_POS_Y, 0);
      itemList = v51[2].klass;
      if ( !itemList )
        goto LABEL_85;
      UIWidget__set_height(
        (UIWidget_o *)itemList,
        MaterialEventLogListViewManager_TypeInfo->static_fields->VL_SCROLLBAR_HEIGHT,
        0);
      itemList = v51[2].monitor;
      if ( !itemList )
        goto LABEL_85;
      UIWidget__set_height(
        (UIWidget_o *)itemList,
        MaterialEventLogListViewManager_TypeInfo->static_fields->VL_SCROLLBAR_HEIGHT,
        0);
    }
    v59 = this->fields.scrollView;
    if ( !v59 )
      goto LABEL_85;
    mPanel = (UnityEngine_Object_o *)v59->fields.mPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mPanel, 0, 0) )
    {
      itemList = MaterialEventLogListViewManager_TypeInfo;
      if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
        itemList = MaterialEventLogListViewManager_TypeInfo;
      }
      if ( !mPanel )
        goto LABEL_85;
      (*(void (__fastcall **)(UnityEngine_Object_o *, size_t, float, float, float, float))&mPanel->klass[1]._2.cctor_finished)(
        mPanel,
        mPanel->klass[1]._2.cctor_thread,
        0.0,
        (float)*(int *)(*((_QWORD *)itemList + 23) + 24LL),
        (float)*(int *)(*((_QWORD *)itemList + 23) + 16LL),
        (float)*(int *)(*((_QWORD *)itemList + 23) + 20LL));
    }
    ListViewManager__CheckSortButton((ListViewManager_o *)this, this->fields.issortButton, 0);
    v67 = MaterialEventLogListViewManager_TypeInfo;
    if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
      v67 = MaterialEventLogListViewManager_TypeInfo;
    }
    EventLogservantSortInfo = v67->static_fields->EventLogservantSortInfo;
    this->fields.sort = EventLogservantSortInfo;
    p_sort = &this->fields.sort;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.sort,
      (int32_t)EventLogservantSortInfo,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
    itemList = this->fields.sort;
    if ( itemList )
    {
      *((_DWORD *)itemList + 32) = 0;
      ListViewSort__Load((ListViewSort_o *)itemList, 0);
      MaterialCollectionServantListViewManager = MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                                   v70,
                                                   v71);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      itemList = (void *)UnityEngine_Object__op_Inequality(
                           (UnityEngine_Object_o *)MaterialCollectionServantListViewManager,
                           0,
                           0);
      if ( ((unsigned __int8)itemList & 1) != 0 )
      {
        if ( !MaterialCollectionServantListViewManager )
          goto LABEL_85;
        v79 = *p_sort;
        MaterialCollectionServantListViewManager->fields.sort = *p_sort;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&MaterialCollectionServantListViewManager->fields.sort,
          (int32_t)v79,
          v73,
          v74,
          v75,
          v76,
          v77,
          v78);
      }
      emptyMessageLabel = this->fields.emptyMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      itemList = LocalizationManager__Get((System_String_o *)StringLiteral_11859/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/, 0);
      if ( emptyMessageLabel )
      {
        UILabel__set_text(emptyMessageLabel, (System_String_o *)itemList, 0);
        MaterialEventLogListViewManager__SetFilterButtonImage(this, v81);
        MaterialEventLogListViewManager__SortDummyData(this, v82);
        goto LABEL_82;
      }
    }
LABEL_85:
    sub_1C7BD40(itemList, v8);
  }
  GameObjectExtensions__SetLocalPositionY(v46, p_VL_LIST_POS_Y[7], 0);
  ListViewManager__SetArrangementPitchY(
    (ListViewManager_o *)this,
    MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_ARRANGEMENT_PY,
    0);
  v52 = this->fields.scrollView;
  if ( !v52 )
    goto LABEL_85;
  v53 = (UnityEngine_Object_o *)v52->fields.verticalScrollBar;
  if ( v53 && (v54 = UIScrollBar_TypeInfo->_2.naturalAligment, v53->klass->_2.naturalAligment >= (unsigned int)v54) )
  {
    if ( (UIScrollBar_c *)v53->klass->_2.typeHierarchy[v54 - 1] == UIScrollBar_TypeInfo )
      v55 = v53;
    else
      v55 = 0;
  }
  else
  {
    v55 = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  itemList = (void *)UnityEngine_Object__op_Inequality(v55, 0, 0);
  if ( ((unsigned __int8)itemList & 1) != 0 )
  {
    if ( !v55 )
      goto LABEL_85;
    v83 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v55, 0);
    v84 = MaterialEventLogListViewManager_TypeInfo;
    v85 = v83;
    if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
      v84 = MaterialEventLogListViewManager_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionY(v85, v84->static_fields->NORMAL_SCROLLBAR_POS_Y, 0);
    itemList = v55[2].klass;
    if ( !itemList )
      goto LABEL_85;
    UIWidget__set_height(
      (UIWidget_o *)itemList,
      MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_SCROLLBAR_BACK_HEIGHT,
      0);
    itemList = v55[2].monitor;
    if ( !itemList )
      goto LABEL_85;
    UIWidget__set_height(
      (UIWidget_o *)itemList,
      MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_SCROLLBAR_FORE_HEIGHT,
      0);
  }
  v86 = this->fields.scrollView;
  if ( !v86 )
    goto LABEL_85;
  v87 = (UnityEngine_Object_o *)v86->fields.mPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v87, 0, 0) )
  {
    itemList = MaterialEventLogListViewManager_TypeInfo;
    if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
      itemList = MaterialEventLogListViewManager_TypeInfo;
    }
    if ( !v87 )
      goto LABEL_85;
    (*(void (__fastcall **)(UnityEngine_Object_o *, size_t, float, float, float, float))&v87->klass[1]._2.cctor_finished)(
      v87,
      v87->klass[1]._2.cctor_thread,
      0.0,
      (float)*(int *)(*((_QWORD *)itemList + 23) + 56LL),
      (float)*(int *)(*((_QWORD *)itemList + 23) + 48LL),
      (float)*(int *)(*((_QWORD *)itemList + 23) + 52LL));
  }
LABEL_82:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  if ( this->fields.issortButton )
  {
    v89 = MaterialEventLogListViewManager__GetFilterCount(this, v88) < 1;
    ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v89, 0);
  }
  MaterialEventLogListViewManager__CreateInfos(this, v88);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0);
}


void MaterialEventLogListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialEventLogListViewManager_c *v2; // x0
  ListViewSort_o *EventLogservantSortInfo; // x0

  if ( (byte_4CE9840 & 1) == 0 )
  {
    sub_1C7BAE8(&MaterialEventLogListViewManager_TypeInfo);
    byte_4CE9840 = 1;
  }
  v2 = MaterialEventLogListViewManager_TypeInfo;
  if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
    v2 = MaterialEventLogListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v2->static_fields->EventLogservantSortInfo;
  if ( !EventLogservantSortInfo )
    sub_1C7BD40(0, v1);
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
  MaterialCollectionServantListViewManager_o *MaterialCollectionServantListViewManager; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct ListViewSort_o *sort; // x1
  const MethodInfo *v16; // x1
  bool v17; // w1
  const MethodInfo *v18; // x1

  if ( (byte_4CE984F & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE984F = 1;
  }
  eventLogServantSortSelectMenu = this->fields.eventLogServantSortSelectMenu;
  if ( !eventLogServantSortSelectMenu )
    goto LABEL_13;
  MaterialEventLogServantSortSelectMenu__Close(eventLogServantSortSelectMenu, 0);
  MaterialCollectionServantListViewManager = MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                               v6,
                                               v7);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&MaterialCollectionServantListViewManager->fields.sort,
      (int32_t)sort,
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
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    v17 = MaterialEventLogListViewManager__GetFilterCount(this, v16) < 1;
    ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v17, 0);
    eventLogServantSortSelectMenu = (MaterialEventLogServantSortSelectMenu_o *)this->fields.sort;
    if ( eventLogServantSortSelectMenu )
    {
      ListViewSort__Save((ListViewSort_o *)eventLogServantSortSelectMenu, 0);
      MaterialEventLogListViewManager__CreateInfos(this, v18);
      goto LABEL_12;
    }
LABEL_13:
    sub_1C7BD40(eventLogServantSortSelectMenu, isDecide);
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
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4CE984D & 1) == 0 )
  {
    sub_1C7BAE8(&MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_MaterialEventLogListViewManager_EndEventLogSortKind__);
    byte_4CE984D = 1;
  }
  if ( this->fields.isInput )
  {
    sort = this->fields.sort;
    v6 = (MaterialEventLogServantSortSelectMenu_CallbackFunc_o *)sub_1C7BD34(MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo);
    MaterialEventLogServantSortSelectMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_MaterialEventLogListViewManager_EndEventLogSortKind__,
      0);
    if ( !eventLogServantSortSelectMenu )
      sub_1C7BD40(v7, v8);
    MaterialEventLogServantSortSelectMenu__Open(eventLogServantSortSelectMenu, 0, sort, v6, 0);
  }
}


int32_t MaterialEventLogListViewManager__GetFilterCount(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w22
  int32_t v5; // w21
  int32_t v6; // w20
  __int64 naturalAligment; // x10

  if ( (byte_4CE984E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&MaterialEventLogListViewItem_TypeInfo);
    byte_4CE984E = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_13;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v5,
                                                                (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      naturalAligment = MaterialEventLogListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (MaterialEventLogListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != MaterialEventLogListViewItem_TypeInfo )
      {
        break;
      }
      if ( itemList[3].monitor )
        v6 += ((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, struct ListViewSort_o *, const MethodInfo *))itemList->klass->vtable._5_set_Item.methodPtr)(
                itemList,
                this->fields.sort,
                itemList->klass->vtable._5_set_Item.method)
            & 1;
      if ( size == ++v5 )
        return v6;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_13:
    sub_1C7BD40(itemList, method);
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

  if ( (byte_4CE9846 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&PartyServantListViewItem_TypeInfo);
    byte_4CE9846 = 1;
  }
  result = (PartyServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  UnityEngine_Object_o *dropObjectList; // x19
  bool v5; // w8
  __int64 naturalAligment; // x10
  bool v7; // w8
  intptr_t m_CachedPtr; // x19
  bool v9; // w8

  if ( (byte_4CE9842 & 1) == 0 )
  {
    sub_1C7BAE8(&MyRoomRootComponent_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CE9842 = 1;
  }
  result = (MaterialCollectionServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !result )
    goto LABEL_22;
  dropObjectList = (UnityEngine_Object_o *)result->fields.dropObjectList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality(dropObjectList, 0, 0);
  result = 0;
  if ( !v5 )
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
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Equality(dropObjectList, 0, 0);
    result = 0;
    if ( !v7 )
    {
      if ( !dropObjectList )
        goto LABEL_22;
      m_CachedPtr = dropObjectList[2].fields.m_CachedPtr;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)m_CachedPtr, 0, 0);
      result = 0;
      if ( !v9 )
      {
        if ( m_CachedPtr )
          return *(MaterialCollectionServantListViewManager_o **)(m_CachedPtr + 568);
LABEL_22:
        sub_1C7BD40(result, v3);
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
    sub_1C7BD40(0, method);
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
  MaterialEventLogListViewManager_c *v2; // x0
  ListViewSort_o *EventLogservantSortInfo; // x0

  if ( (byte_4CE9841 & 1) == 0 )
  {
    sub_1C7BAE8(&MaterialEventLogListViewManager_TypeInfo);
    byte_4CE9841 = 1;
  }
  v2 = MaterialEventLogListViewManager_TypeInfo;
  if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
    v2 = MaterialEventLogListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v2->static_fields->EventLogservantSortInfo;
  if ( !EventLogservantSortInfo )
    sub_1C7BD40(0, v1);
  ListViewSort__InitLoad(EventLogservantSortInfo, 0);
}


void MaterialEventLogListViewManager__InitializeObjectPosition(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *seed; // x20
  UnityEngine_GameObject_o *ComponentsInChildren_object__52198636; // x0
  const MethodInfo *v5; // x1
  struct ListViewItemSeed_o *v6; // x8
  UnityEngine_Object_o *parent; // x20
  struct ListViewItemSeed_o *v8; // x8
  int klass; // w8
  UnityEngine_GameObject_o *v10; // x19
  unsigned int v11; // w20

  if ( (byte_4CE9857 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponentsInChildren_MaterialEventLogListViewObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE9857 = 1;
  }
  seed = (UnityEngine_Object_o *)this->fields.seed;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ComponentsInChildren_object__52198636 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(seed, 0, 0);
  if ( ((unsigned __int8)ComponentsInChildren_object__52198636 & 1) != 0 )
  {
    v6 = this->fields.seed;
    if ( !v6 )
      goto LABEL_19;
    parent = (UnityEngine_Object_o *)v6->fields.parent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    ComponentsInChildren_object__52198636 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(parent, 0, 0);
    if ( ((unsigned __int8)ComponentsInChildren_object__52198636 & 1) != 0 )
    {
      v8 = this->fields.seed;
      if ( !v8 )
        goto LABEL_19;
      ComponentsInChildren_object__52198636 = v8->fields.parent;
      if ( !ComponentsInChildren_object__52198636 )
        goto LABEL_19;
      ComponentsInChildren_object__52198636 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__52198636(
                                                                            ComponentsInChildren_object__52198636,
                                                                            (const MethodInfo_31C7CEC *)Method_UnityEngine_GameObject_GetComponentsInChildren_MaterialEventLogListViewObject___);
      if ( !ComponentsInChildren_object__52198636 )
        goto LABEL_19;
      klass = (int)ComponentsInChildren_object__52198636[1].klass;
      v10 = ComponentsInChildren_object__52198636;
      if ( klass >= 1 )
      {
        v11 = 0;
        while ( 1 )
        {
          if ( v11 >= klass )
            sub_1C7BD48(ComponentsInChildren_object__52198636);
          ComponentsInChildren_object__52198636 = (UnityEngine_GameObject_o *)*((_QWORD *)&v10[1].monitor + (int)v11);
          if ( !ComponentsInChildren_object__52198636 )
            break;
          MaterialEventLogListViewObject__InitPosition(
            (MaterialEventLogListViewObject_o *)ComponentsInChildren_object__52198636,
            v5);
          klass = (int)v10[1].klass;
          if ( (int)++v11 >= klass )
            return;
        }
LABEL_19:
        sub_1C7BD40(ComponentsInChildren_object__52198636, v5);
      }
    }
  }
}


void MaterialEventLogListViewManager__ListUpdate(MaterialEventLogListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  bool v4; // w1

  MaterialEventLogListViewManager__SortDummyData(this, method);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  v4 = MaterialEventLogListViewManager__GetFilterCount(this, v3) < 1;
  ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v4, 0);
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

  if ( (byte_4CE984B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ActionExtensions_Call_MaterialEventLogListViewItem___);
    sub_1C7BAE8(&MaterialEventLogListViewItem_TypeInfo);
    this = (MaterialEventLogListViewManager_o *)sub_1C7BAE8(&Method_MaterialEventLogListViewManager_OnClickListView__);
    byte_4CE984B = 1;
  }
  if ( !obj
    || (linkItem = (Il2CppObject *)obj->fields.linkItem) == 0
    || (naturalAligment = MaterialEventLogListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (MaterialEventLogListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != MaterialEventLogListViewItem_TypeInfo )
  {
    sub_1C7BD40(this, obj);
  }
  klass = linkItem[8].klass;
  if ( klass )
  {
    element_class_high = HIDWORD(klass->_1.element_class);
    if ( (element_class_high & 1) == 0 )
    {
      v8 = Method_MaterialEventLogListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_MaterialEventLogListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1C7BB00(Method_MaterialEventLogListViewManager_OnClickListView__);
      v9 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
      element_class_high = HIDWORD(klass->_1.element_class);
    }
    if ( (element_class_high & 4) != 0 )
    {
      v10 = Method_MaterialEventLogListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_MaterialEventLogListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1C7BB00(Method_MaterialEventLogListViewManager_OnClickListView__);
      v11 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 2, 0, 0);
    }
    else
    {
      ActionExtensions__Call_object_(
        (System_Action_T__o *)klass->_1.declaringType,
        linkItem,
        (const MethodInfo_30B9390 *)Method_ActionExtensions_Call_MaterialEventLogListViewItem___);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  const MethodInfo *v22; // x1
  System_Collections_Generic_List_object__o *v23; // x22
  int32_t v24; // w24
  const MethodInfo *v25; // x4
  int32_t initMode; // w8
  UnityEngine_GameObject_o *v27; // x0
  Il2CppObject *v28; // x21
  float v29; // s8
  int klass; // s0
  int monitor; // s1
  System_Action_o *v32; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x20
  float IntpTime_AutoResume; // s8
  System_Action_o *v36; // x21
  System_Action_o *v37; // x20

  if ( (byte_4CE9849 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    sub_1C7BAE8(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__0__);
    sub_1C7BAE8(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__1__);
    sub_1C7BAE8(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__2__);
    sub_1C7BAE8(&MaterialEventLogListViewManager___c__DisplayClass50_0_TypeInfo);
    byte_4CE9849 = 1;
  }
  v7 = sub_1C7BD34(MaterialEventLogListViewManager___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_25;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = end_act;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)end_act, v16, v17, v18, v19, v20, v21);
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
                                                                  (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      MaterialEventLogListViewObject__Init_33837244((MaterialEventLogListViewObject_o *)ObjectList, mode, 0, -1, v25);
      if ( ++v24 >= v23->fields._size )
        goto LABEL_9;
    }
LABEL_25:
    sub_1C7BD40(ObjectList, v9);
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
                         (const MethodInfo_31C8BB0 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0);
    v36 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      v36,
      (Il2CppObject *)v7,
      Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__2__,
      0);
    if ( !Component_object )
      goto LABEL_25;
    SlideFadeObject__SlideOut_36539704((SlideFadeObject_o *)Component_object, 580.0, IntpTime_AutoResume, 0.0, v36, 0);
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
    v28 = GameObjectExtensions__SafeGetComponent_object_(
            v27,
            (const MethodInfo_31C8BB0 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v29 = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0);
    if ( this->fields.issortButton )
    {
      if ( !v28 )
        goto LABEL_25;
      klass = (int)v28[4].klass;
      monitor = (int)v28[4].monitor;
      LODWORD(v28[5].klass) = -1027735552;
      HIDWORD(v28[4].monitor) = klass;
      HIDWORD(v28[5].klass) = monitor;
      v32 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(
        v32,
        (Il2CppObject *)v7,
        Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__1__,
        0);
      SlideFadeObject__SlideSortIn((SlideFadeObject_o *)v28, 580.0, v29, 0.0, v32, 0);
    }
    else
    {
      v37 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(
        v37,
        (Il2CppObject *)v7,
        Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__0__,
        0);
      if ( !v28 )
        goto LABEL_25;
      SlideFadeObject__SlideIn_36538760((SlideFadeObject_o *)v28, 580.0, v29, 0.0, v37, 0);
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
  System_Collections_Generic_List_object__o *v7; // x19
  int32_t v8; // w20
  bool v9; // w21
  Il2CppObject *Component_object; // x22

  if ( (byte_4CE9852 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE9852 = 1;
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
    v9 = isActive;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v7,
                                                                  v8,
                                                                  (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ObjectList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)ObjectList,
                                                                  0);
      if ( !ObjectList )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)ObjectList,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      ObjectList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                  (UnityEngine_Object_o *)Component_object,
                                                                  0,
                                                                  0);
      if ( ((unsigned __int8)ObjectList & 1) != 0 )
      {
        if ( !Component_object )
          break;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, v9, 0);
      }
      if ( ++v8 >= v7->fields._size )
        return;
    }
LABEL_15:
    sub_1C7BD40(ObjectList, v6);
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

  if ( (byte_4CE9850 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_423/*"#FE4545"*/);
    sub_1C7BAE8(&StringLiteral_17575/*"btn_filter_on"*/);
    sub_1C7BAE8(&StringLiteral_404/*"#000000"*/);
    sub_1C7BAE8(&StringLiteral_17574/*"btn_filter"*/);
    byte_4CE9850 = 1;
  }
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_10;
  sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0);
  if ( !this->fields.filterSprite )
    goto LABEL_10;
  v4 = (System_String_o **)&StringLiteral_17574/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v5 = (System_String_o **)&StringLiteral_404/*"#000000"*/;
  }
  else
  {
    v4 = (System_String_o **)&StringLiteral_17575/*"btn_filter_on"*/;
    v5 = (System_String_o **)&StringLiteral_423/*"#FE4545"*/;
  }
  UISprite__set_spriteName(this->fields.filterSprite, *v4, 0);
  *(_QWORD *)&v6.fields.r = 0;
  *(_QWORD *)&v6.fields.b = 0;
  UnityEngine_ColorUtility__TryParseHtmlString(*v5, &v6, 0);
  sort = (ListViewSort_o *)this->fields.sortKindLabel;
  if ( !sort )
LABEL_10:
    sub_1C7BD40(sort, method);
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
  int32_t v11; // w1
  bool result; // w0
  MaterialEventLogListViewManager_o *v13; // x0
  System_Action_o *v14; // x2
  System_Action_o *v15; // x21
  System_Delegate_o *v16; // x0
  MaterialEventLogListViewManager_o *v17; // x0
  int32_t v18; // w1
  System_Action_o *v19; // x2
  const MethodInfo *v20; // x3

  if ( (byte_4CE9848 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_MaterialEventLogListViewManager__SetMode_b__49_0__);
    byte_4CE9848 = 1;
  }
  mIsDoing_Slide = this->fields.mIsDoing_Slide;
  if ( mode == 4 )
  {
    if ( !this->fields.mIsDoing_Slide && this->fields.initMode == 2 )
      goto LABEL_11;
    goto LABEL_14;
  }
  if ( mode != 3 )
    goto LABEL_7;
  if ( this->fields.mIsDoing_Slide )
  {
LABEL_14:
    ActionExtensions__Call(end_act, 0);
    return 0;
  }
  mIsDoing_Slide = this->fields.initMode;
LABEL_7:
  if ( mIsDoing_Slide )
    goto LABEL_14;
LABEL_11:
  this->fields.initMode = mode;
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  mBoxCollider = (UnityEngine_Collider_o *)this->fields.mBoxCollider;
  if ( !mBoxCollider )
    sub_1C7BD40(0, v8);
  UnityEngine_Collider__set_enabled(mBoxCollider, this->fields.isInput, 0);
  switch ( mode )
  {
    case 1:
    case 3:
      v11 = 2;
      goto LABEL_17;
    case 2:
      v11 = 3;
LABEL_17:
      v13 = this;
      goto LABEL_18;
    case 4:
      v15 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_MaterialEventLogListViewManager__SetMode_b__49_0__, 0);
      v16 = System_Delegate__Combine((System_Delegate_o *)end_act, (System_Delegate_o *)v15, 0);
      v14 = (System_Action_o *)v16;
      if ( v16 && (System_Action_c *)v16->klass != System_Action_TypeInfo )
      {
        v17 = (MaterialEventLogListViewManager_o *)sub_1C7C0DC(v16);
        MaterialEventLogListViewManager__RequestListObject(v17, v18, v19, v20);
      }
      else
      {
        v11 = 2;
        v13 = this;
LABEL_19:
        MaterialEventLogListViewManager__RequestListObject(v13, v11, v14, v10);
        result = 1;
      }
      break;
    default:
      v13 = this;
      v11 = 0;
LABEL_18:
      v14 = end_act;
      goto LABEL_19;
  }
  return result;
}


void MaterialEventLogListViewManager__SetObjectItem(
        MaterialEventLogListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  MaterialEventLogListViewManager_o *v6; // x20
  __int64 naturalAligment; // x10
  int32_t v8; // w1

  v6 = this;
  if ( (byte_4CE9847 & 1) == 0 )
  {
    this = (MaterialEventLogListViewManager_o *)sub_1C7BAE8(&MaterialEventLogListViewObject_TypeInfo);
    byte_4CE9847 = 1;
  }
  if ( !obj
    || (naturalAligment = MaterialEventLogListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (MaterialEventLogListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != MaterialEventLogListViewObject_TypeInfo )
  {
    sub_1C7BD40(this, obj);
  }
  if ( v6->fields.initMode == 2 )
    v8 = 3;
  else
    v8 = 2;
  MaterialEventLogListViewObject__Init_33837244(
    (MaterialEventLogListViewObject_o *)obj,
    v8,
    0,
    v6->fields.selectedLimitCount,
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

  if ( (byte_4CE9843 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    byte_4CE9843 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0),
        GameObjectExtensions__SetLocalPositionY(gameObject, y, 0),
        (scrollView = this->fields.scrollView) == 0)
    || (scrollView = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0)) == 0
    || (scrollView = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)scrollView,
                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___)) == 0 )
  {
    sub_1C7BD40(scrollView, method);
  }
  v7.fields.x = *((float *)scrollView + 83);
  v7.fields.y = -y;
  UIPanel__set_clipOffset((UIPanel_o *)scrollView, v7, 0);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 0, 0, 0);
}


void MaterialEventLogListViewManager__SetSort(
        MaterialEventLogListViewManager_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v9; // x1
  bool v10; // w1
  const MethodInfo *v11; // x1

  this->fields.sort = sort;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.sort, (int32_t)sort, (int32_t)method, v3, v4, v5, v6, v7);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  v10 = MaterialEventLogListViewManager__GetFilterCount(this, v9) < 1;
  ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v10, 0);
  MaterialEventLogListViewManager__CreateInfos(this, v11);
}


void MaterialEventLogListViewManager__SetSortButtonImage(
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
  System_String_o **v12; // x9
  System_String_o **v13; // x10
  System_String_o **v14; // x8
  System_String_o **v15; // x8

  if ( (byte_4CE9853 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_17611/*"btn_sort_up"*/);
    sub_1C7BAE8(&StringLiteral_17711/*"btn_txt_up"*/);
    sub_1C7BAE8(&StringLiteral_17662/*"btn_txt_new"*/);
    sub_1C7BAE8(&StringLiteral_17652/*"btn_txt_down"*/);
    sub_1C7BAE8(&StringLiteral_17669/*"btn_txt_old"*/);
    sub_1C7BAE8(&StringLiteral_17608/*"btn_sort_down"*/);
    byte_4CE9853 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_34;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v6 )
      goto LABEL_34;
    UILabel__set_text(v6, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
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
          v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17669/*"btn_txt_old"*/ : &StringLiteral_17662/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v10, 0);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_17608/*"btn_sort_down"*/;
              v13 = (System_String_o **)&StringLiteral_17611/*"btn_sort_up"*/;
LABEL_30:
              if ( v11->fields.isAscendingOrder )
                v15 = v12;
              else
                v15 = v13;
              UISprite__set_spriteName((UISprite_o *)sort, *v15, 0);
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
          v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17711/*"btn_txt_up"*/ : &StringLiteral_17652/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_17611/*"btn_sort_up"*/;
              v13 = (System_String_o **)&StringLiteral_17608/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1C7BD40(sort, v4);
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

  if ( (byte_4CE984A & 1) == 0 )
  {
    sub_1C7BAE8(&MyRoomRootComponent_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CE984A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (klass = Instance[2].klass) == 0
    || (naturalAligment = MyRoomRootComponent_TypeInfo->_2.naturalAligment,
        *((unsigned __int8 *)klass->_1.image + 304) < (unsigned int)naturalAligment)
    || *(MyRoomRootComponent_c **)(*((_QWORD *)klass->_1.image + 25) + 8 * naturalAligment - 8) != MyRoomRootComponent_TypeInfo
    || (element_class = (MyRoomControl_o *)klass->_1.element_class) == 0 )
  {
    sub_1C7BD40(Instance, v3);
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
  MaterialCollectionServantListViewManager_o *MaterialCollectionServantListViewManager; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct ListViewSort_o *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  bool v18; // w1
  const MethodInfo *v19; // x1

  if ( (byte_4CE9851 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_MaterialEventLogListViewManager_SortAscendingOrder__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE9851 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_MaterialEventLogListViewManager_SortAscendingOrder__;
    if ( (*((_BYTE *)Method_MaterialEventLogListViewManager_SortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_MaterialEventLogListViewManager_SortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( sort )
    {
      sort->fields.isAscendingOrder ^= 1u;
      MaterialCollectionServantListViewManager = MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                                   (MaterialEventLogListViewManager_o *)v5,
                                                   v6);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v5 = (struct ListViewSort_o *)UnityEngine_Object__op_Inequality(
                                      (UnityEngine_Object_o *)MaterialCollectionServantListViewManager,
                                      0,
                                      0);
      if ( ((unsigned __int8)v5 & 1) != 0 )
      {
        if ( !MaterialCollectionServantListViewManager )
          goto LABEL_15;
        v15 = this->fields.sort;
        MaterialCollectionServantListViewManager->fields.sort = v15;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&MaterialCollectionServantListViewManager->fields.sort,
          (int32_t)v15,
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
        ListViewSort__Save(v5, 0);
        MaterialEventLogListViewManager__SortDummyData(this, v16);
        ((void (__fastcall *)(MaterialEventLogListViewManager_o *, const MethodInfo *))this->klass->vtable._5_SetSortButtonImage.methodPtr)(
          this,
          this->klass->vtable._5_SetSortButtonImage.method);
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
        v18 = MaterialEventLogListViewManager__GetFilterCount(this, v17) < 1;
        ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v18, 0);
        MaterialEventLogListViewManager__CreateInfos(this, v19);
        return;
      }
    }
LABEL_15:
    sub_1C7BD40(v5, v6);
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  MaterialEventLogListViewManager_o *v18; // x1
  Il2CppClass **v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_List_object__o *v21; // x0
  const MethodInfo *v22; // x1
  int v23; // w9
  int v24; // w20
  int v25; // w8
  int v26; // w21
  int v27; // w25
  struct ListViewSort_o *sort; // x8
  _BOOL4 isAscendingOrder; // w27
  ListViewItem_o *v30; // x0
  ListViewItem_o *v31; // x22
  int32_t v32; // w1
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v46; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v48; // x8
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_4CE9855 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__Remove__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_MaterialEventLogListViewItem__TypeInfo);
    this = (MaterialEventLogListViewManager_o *)sub_1C7BAE8(&MaterialEventLogListViewItem_TypeInfo);
    byte_4CE9855 = 1;
  }
  memset(&i, 0, sizeof(i));
  itemList = v2->fields.itemList;
  if ( !itemList )
    goto LABEL_42;
  size = itemList->fields._size;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_MaterialEventLogListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem___ctor__);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
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
                                                    (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
                                                      (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + v17;
          v6->fields._size = v17 + 1;
          v19[4] = (Il2CppClass *)v18;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v18, v9, v10, v11, v12, v13, v14);
        }
      }
      if ( size == ++v7 )
        goto LABEL_18;
    }
LABEL_42:
    sub_1C7BD40(this, method);
  }
LABEL_18:
  if ( !v6 )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v49,
    v6,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = v49;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        System_Collections_Generic_List_object___Remove(
          v21,
          i.fields._current,
          (const MethodInfo_3840324 *)Method_System_Collections_Generic_List_ListViewItem__Remove__) )
  {
    v21 = (System_Collections_Generic_List_object__o *)v2->fields.itemList;
    if ( !v21 )
      sub_1C7BD40(0, v20);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  this = (MaterialEventLogListViewManager_o *)MaterialEventLogListViewManager__GetFilterCount(v2, v22);
  if ( (int)this > 3 )
    v23 = 1;
  else
    v23 = 4 - (_DWORD)this;
  if ( v23 >= 1 )
  {
    v24 = -(int)this;
    if ( (int)this <= 3 )
      v25 = 3;
    else
      v25 = (int)this;
    v26 = (_DWORD)this + 999;
    v27 = ~v25;
    do
    {
      sort = v2->fields.sort;
      if ( !sort )
        goto LABEL_42;
      isAscendingOrder = sort->fields.isAscendingOrder;
      v30 = (ListViewItem_o *)sub_1C7BD34(MaterialEventLogListViewItem_TypeInfo);
      v31 = v30;
      v32 = isAscendingOrder ? v26 : v24;
      ListViewItem___ctor_44325320(v30, v32, 0);
      v31[1].monitor = 0;
      LODWORD(v31[1].klass) = 5;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v31[1].monitor, 0, v33, v34, v35, v36, v37, v38);
      this = (MaterialEventLogListViewManager_o *)v2->fields.itemList;
      if ( !this )
        goto LABEL_42;
      m_CachedPtr = this->fields.m_CachedPtr;
      v46 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_42;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v31,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v48 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v48 + 32) = v31;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v48 + 32), (int32_t)v31, v39, v40, v41, v42, v43, v44);
      }
      --v24;
      ++v26;
    }
    while ( v27 != v24 );
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
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject *v16; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CE9844 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_MaterialEventLogListViewObject__TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE9844 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_MaterialEventLogListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_MaterialEventLogListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C7BD40(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C7BD40(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C7BD40(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_MaterialEventLogListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C7BD40(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C7BD40(0, method);
  _4__this->fields.mIsDoing_Slide = 0;
  MaterialEventLogListViewManager__SetMode(_4__this, 2, this->fields.end_act, v2);
}


void MaterialEventLogListViewManager___c__DisplayClass50_0___RequestListObject_b__1(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct MaterialEventLogListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C7BD40(0, method);
  _4__this->fields.mIsDoing_Slide = 0;
  MaterialEventLogListViewManager__SetMode(_4__this, 2, this->fields.end_act, v2);
}


void MaterialEventLogListViewManager___c__DisplayClass50_0___RequestListObject_b__2(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  MaterialEventLogListViewManager___c__DisplayClass50_0_o *v3; // x19
  MaterialEventLogListViewManager_o *_4__this; // x20
  System_Action_o *_9__3; // x22
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  v3 = this;
  if ( (byte_4CE9859 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    this = (MaterialEventLogListViewManager___c__DisplayClass50_0_o *)sub_1C7BAE8(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__3__);
    byte_4CE9859 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    sub_1C7BD40(this, method);
  _4__this->fields.mIsDoing_Slide = 0;
  _9__3 = v3->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v3,
      Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__3__,
      0);
    v3->fields.__9__3 = _9__3;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v3->fields.__9__3, (int32_t)_9__3, v6, v7, v8, v9, v10, v11);
  }
  MaterialEventLogListViewManager__SetMode(_4__this, 0, _9__3, v2);
}


void MaterialEventLogListViewManager___c__DisplayClass50_0___RequestListObject_b__3(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0);
}