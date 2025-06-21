void __fastcall MaterialEventLogListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  struct MaterialEventLogListViewManager_StaticFields *static_fields; // x8
  ListViewSort_o *v5; // x19
  struct MaterialEventLogListViewManager_StaticFields *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4B177FA & 1) == 0 )
  {
    sub_1BCAFF8(&ListViewSort_TypeInfo, v1);
    sub_1BCAFF8(&MaterialEventLogListViewManager_TypeInfo, v2);
    sub_1BCAFF8(&StringLiteral_8891/*"MaterialCollectionServant6"*/, v3);
    byte_4B177FA = 1;
  }
  static_fields = MaterialEventLogListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->VL_LIST_POS_Y = 0xC2CC0000C1F00000LL;
  static_fields->VL_SCROLLBAR_POS_Y = 70.0;
  *(_OWORD *)&static_fields->VL_SCROLLBAR_HEIGHT = xmmword_BE1B20;
  *(_QWORD *)&static_fields->NORMAL_LIST_POS_Y = 0xC2F00000C20C0000LL;
  static_fields->NORMAL_SCROLLBAR_POS_Y = 45.0;
  *(_OWORD *)&static_fields->NORMAL_SCROLLBAR_BACK_HEIGHT = xmmword_BE23A0;
  static_fields->NORMAL_PANEL_CENTER_Y = 0;
  v5 = (ListViewSort_o *)sub_1BCB244(ListViewSort_TypeInfo);
  ListViewSort___ctor_42965576(v5, (System_String_o *)StringLiteral_8891/*"MaterialCollectionServant6"*/, 27, 1, 0LL);
  v6 = MaterialEventLogListViewManager_TypeInfo->static_fields;
  v6->EventLogservantSortInfo = v5;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v6->EventLogservantSortInfo, (int32_t)v5, v7, v8);
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
  Il2CppObject *Component_object; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UIScrollView_o *scrollView; // x8
  ListViewSort_o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4B177E1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, method);
    sub_1BCAFF8(&ListViewSort_TypeInfo, v3);
    byte_4B177E1 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             gameObject,
                             (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.mBoxCollider = (struct UnityEngine_BoxCollider_o *)Component_object,
        sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mBoxCollider, (int32_t)Component_object, v7, v8),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.mBoxCollider) == 0LL)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL),
        (scrollView = this->fields.scrollView) == 0LL) )
  {
    sub_1BCB254(gameObject, v5);
  }
  scrollView->fields.disableDragIfFits = 0;
  v10 = (ListViewSort_o *)sub_1BCB244(ListViewSort_TypeInfo);
  ListViewSort___ctor(v10, 3, 1, 0LL);
  this->fields.sort = v10;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)v10, v11, v12);
}


void __fastcall MaterialEventLogListViewManager__Back(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  MaterialEventLogListViewManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct ListViewSort_o *sort; // x8
  ListViewSort_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  MaterialEventLogListViewManager_o *v9; // x0
  const MethodInfo *v10; // x1
  UnityEngine_Object_o *MaterialCollectionServantListViewManager; // x19
  MaterialEventLogListViewManager_c *v12; // x0
  ListViewSort_o *EventLogservantSortInfo; // x8

  v2 = this;
  if ( (byte_4B177F6 & 1) == 0 )
  {
    sub_1BCAFF8(&ListViewSort_TypeInfo, method);
    sub_1BCAFF8(&MaterialEventLogListViewManager_TypeInfo, v3);
    this = (MaterialEventLogListViewManager_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v4);
    byte_4B177F6 = 1;
  }
  if ( !v2->fields.issortButton )
  {
    sort = v2->fields.sort;
    if ( !sort )
      goto LABEL_18;
    sort->fields.isAscendingOrder = 1;
  }
  v6 = (ListViewSort_o *)sub_1BCB244(ListViewSort_TypeInfo);
  ListViewSort___ctor(v6, 3, 1, 0LL);
  v2->fields.sort = v6;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v2->fields.sort, (int32_t)v6, v7, v8);
  MaterialCollectionServantListViewManager = (UnityEngine_Object_o *)MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                                                       v9,
                                                                       v10);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (MaterialEventLogListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                MaterialCollectionServantListViewManager,
                                                0LL,
                                                0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !MaterialCollectionServantListViewManager )
      goto LABEL_18;
    MaterialCollectionServantListViewManager__EventLogSortListSave(
      (MaterialCollectionServantListViewManager_o *)MaterialCollectionServantListViewManager,
      0LL);
  }
  v12 = MaterialEventLogListViewManager_TypeInfo;
  if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
    v12 = MaterialEventLogListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v12->static_fields->EventLogservantSortInfo;
  if ( EventLogservantSortInfo )
  {
    if ( v12->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v12),
          (EventLogservantSortInfo = MaterialEventLogListViewManager_TypeInfo->static_fields->EventLogservantSortInfo) != 0LL) )
    {
      ListViewSort__Save(EventLogservantSortInfo, 0LL);
      return;
    }
LABEL_18:
    sub_1BCB254(this, method);
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
  __int64 v12; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v14; // x1
  MaterialEventLogListViewObject_o *v15; // x21
  MaterialEventLogListViewItem_o *Item; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  MaterialEventLogListViewItem_o *v19; // x22
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8
  bool v21; // w23
  const MethodInfo *v22; // x2
  __int64 v23; // x0
  __int64 v24; // x1
  struct MaterialEventLogListViewItem_Info_o *v25; // x8
  unsigned int v26; // w9
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B177EE & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, *(_QWORD *)&servantId);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    byte_4B177EE = 1;
  }
  memset(&v28, 0, sizeof(v28));
  objectList = this->fields.objectList;
  this->fields.selectedLimitCount = limitCount;
  if ( !objectList )
    sub_1BCB254(0LL, *(_QWORD *)&servantId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v28.fields._current )
      sub_1BCB254(0LL, v12);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v28.fields._current,
                         (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___);
    v15 = (MaterialEventLogListViewObject_o *)Component_object;
    if ( !Component_object )
      sub_1BCB254(0LL, v14);
    Item = MaterialEventLogListViewObject__GetItem((MaterialEventLogListViewObject_o *)Component_object, v14);
    v19 = Item;
    if ( !Item )
      sub_1BCB254(0LL, v17);
    info_k__BackingField = Item->fields._info_k__BackingField;
    if ( info_k__BackingField && info_k__BackingField->fields.svt_id == servantId )
    {
      v21 = MaterialEventLogListViewItem__CheckPlayableMaterial(Item, limitCount, v18);
      MaterialEventLogListViewObject__SetEnableSelect(v15, v21, v22);
      v25 = v19->fields._info_k__BackingField;
      if ( v21 )
      {
        if ( !v25 )
          sub_1BCB254(v23, v24);
        v26 = v25->fields.flag & 0xFFFFFFFA;
      }
      else
      {
        if ( !v25 )
          sub_1BCB254(v23, v24);
        v26 = v25->fields.flag | 5;
      }
      v25->fields.flag = v26;
    }
    else
    {
      MaterialEventLogListViewObject__SetEnableSelect(v15, 1, v18);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall MaterialEventLogListViewManager__CreateInfos(
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
  __int64 v15; // x19
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *v17; // x19
  System_Collections_Generic_List_object__o *v18; // x20
  _BOOL8 v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x11
  Il2CppObject *monitor; // x1
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B177F8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__Add__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info___ctor__, v7);
    sub_1BCAFF8(&System_Collections_Generic_List_MaterialEventLogListViewItem_Info__TypeInfo, v8);
    sub_1BCAFF8(&MaterialEventLogListViewItem_TypeInfo, v9);
    sub_1BCAFF8(&MyRoomRootComponent_TypeInfo, v10);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v11);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v12);
    byte_4B177F8 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  v15 = *((_QWORD *)Instance + 4);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v15, 0LL, 0LL) )
  {
    if ( v15 )
    {
      methodPtr_low = LOBYTE(MyRoomRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v15 + 304LL) >= (unsigned int)methodPtr_low )
      {
        if ( *(MyRoomRootComponent_c **)(*(_QWORD *)(*(_QWORD *)v15 + 200LL) + 8 * methodPtr_low - 8) != MyRoomRootComponent_TypeInfo )
          v15 = 0LL;
      }
      else
      {
        v15 = 0LL;
      }
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v15, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      if ( !v15 )
        goto LABEL_35;
      v17 = *(UnityEngine_Object_o **)(v15 + 64);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(v17, 0LL, 0LL) )
      {
        v18 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_MaterialEventLogListViewItem_Info__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v18,
          (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info___ctor__);
        Instance = this->fields.itemSortList;
        if ( Instance )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v30,
            (System_Collections_Generic_List_object__o *)Instance,
            (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v31 = v30;
          while ( 1 )
          {
            v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v31,
                    (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v19 )
              break;
            if ( v31.fields._current )
            {
              v22 = LOBYTE(MaterialEventLogListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(v31.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v22
                && (MaterialEventLogListViewItem_c *)v31.fields._current->klass->_2.typeHierarchy[v22 - 1] == MaterialEventLogListViewItem_TypeInfo )
              {
                monitor = (Il2CppObject *)v31.fields._current[7].monitor;
                if ( monitor )
                {
                  if ( !v18 )
                    sub_1BCB254(v19, monitor);
                  items = v18->fields._items;
                  v25 = Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__Add__;
                  ++v18->fields._version;
                  if ( !items )
                    sub_1BCB254(v19, monitor);
                  size = v18->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v18,
                      monitor,
                      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v27 = &items->obj.klass + size;
                    v18->fields._size = size + 1;
                    v27[4] = (Il2CppClass *)monitor;
                    sub_1BCAF9C((CGThumbnailListItem_o *)(v27 + 4), (int32_t)monitor, v20, v21);
                  }
                }
              }
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v31,
            (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          if ( v17 )
          {
            Instance = v17[38].monitor;
            if ( Instance )
            {
              *((_QWORD *)Instance + 18) = v18;
              sub_1BCAF9C((CGThumbnailListItem_o *)((char *)Instance + 144), (int32_t)v18, v28, v29);
              return;
            }
          }
        }
LABEL_35:
        sub_1BCB254(Instance, v14);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogListViewManager__CreateList(
        MaterialEventLogListViewManager_o *this,
        int32_t kind,
        System_Collections_Generic_List_MaterialEventLogListViewItem_Info__o *infos,
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
  int v18; // w25
  int32_t i; // w22
  __int64 v20; // x23
  Il2CppObject **v21; // x24
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *Item; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  __int64 v34; // x8
  _BOOL4 issortButton; // w24
  UnityEngine_GameObject_o *gameObject; // x0
  MaterialEventLogListViewManager_c *v37; // x8
  UnityEngine_GameObject_o *v38; // x20
  float *p_VL_LIST_POS_Y; // x8
  struct UIScrollView_o *scrollView; // x8
  UnityEngine_Object_o *verticalScrollBar; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Object_o *v43; // x20
  struct UIScrollView_o *v44; // x8
  UnityEngine_Object_o *v45; // x8
  __int64 v46; // x11
  UnityEngine_Object_o *v47; // x20
  UnityEngine_GameObject_o *v48; // x0
  MaterialEventLogListViewManager_c *v49; // x8
  UnityEngine_GameObject_o *v50; // x21
  struct UIScrollView_o *v51; // x8
  UnityEngine_Object_o *mPanel; // x20
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  MaterialEventLogListViewManager_c *v55; // x0
  struct ListViewSort_o *EventLogservantSortInfo; // x1
  struct ListViewSort_o **p_sort; // x20
  MaterialEventLogListViewManager_o *v58; // x0
  const MethodInfo *v59; // x1
  MaterialCollectionServantListViewManager_o *MaterialCollectionServantListViewManager; // x21
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  struct ListViewSort_o *v63; // x1
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v65; // x1
  const MethodInfo *v66; // x1
  UnityEngine_GameObject_o *v67; // x0
  MaterialEventLogListViewManager_c *v68; // x8
  UnityEngine_GameObject_o *v69; // x21
  struct UIScrollView_o *v70; // x8
  UnityEngine_Object_o *v71; // x20
  const MethodInfo *v72; // x1
  bool v73; // w1

  if ( (byte_4B177E7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__Add__, *(_QWORD *)&kind);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Count__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__, v8);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v9);
    sub_1BCAFF8(&MaterialEventLogListViewItem_TypeInfo, v10);
    sub_1BCAFF8(&MaterialEventLogListViewManager_TypeInfo, v11);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v12);
    sub_1BCAFF8(&UIScrollBar_TypeInfo, v13);
    sub_1BCAFF8(&StringLiteral_11704/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/, v14);
    byte_4B177E7 = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  ListViewManager__CheckSortButton((ListViewManager_o *)this, 0, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !infos )
    goto LABEL_85;
  size = infos->fields._size;
  if ( size >= 4 )
    v18 = size + 1;
  else
    v18 = 4;
  if ( v18 >= 1 )
  {
    for ( i = 0; i != v18; ++i )
    {
      v20 = sub_1BCB244(MaterialEventLogListViewItem_TypeInfo);
      ListViewItem___ctor_42932312((ListViewItem_o *)v20, i, 0LL);
      *(_DWORD *)(v20 + 112) = kind;
      *(_QWORD *)(v20 + 120) = 0LL;
      v21 = (Il2CppObject **)(v20 + 120);
      sub_1BCAF9C((CGThumbnailListItem_o *)(v20 + 120), 0, v22, v23);
      if ( i < infos->fields._size )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)infos,
                 i,
                 (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
        *v21 = Item;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v20 + 120), (int32_t)Item, v27, v28);
        itemList = *v21;
        if ( !*v21 )
          goto LABEL_85;
        *((_QWORD *)itemList + 11) = v20;
        sub_1BCAF9C((CGThumbnailListItem_o *)((char *)itemList + 88), v20, v29, v30);
        itemList = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)infos,
                     i,
                     (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
        if ( !itemList )
          goto LABEL_85;
        this->fields.issortButton = *((_BYTE *)itemList + 152);
      }
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_85;
      v31 = *((_QWORD *)itemList + 2);
      v32 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*((_DWORD *)itemList + 7);
      if ( !v31 )
        goto LABEL_85;
      v33 = *((int *)itemList + 6);
      if ( (unsigned int)v33 >= *(_DWORD *)(v31 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)itemList,
          (Il2CppObject *)v20,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = v31 + 8 * v33;
        *((_DWORD *)itemList + 6) = v33 + 1;
        *(_QWORD *)(v34 + 32) = v20;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v34 + 32), v20, v24, v25);
      }
    }
  }
  issortButton = this->fields.issortButton;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v37 = MaterialEventLogListViewManager_TypeInfo;
  v38 = gameObject;
  if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
    v37 = MaterialEventLogListViewManager_TypeInfo;
  }
  p_VL_LIST_POS_Y = &v37->static_fields->VL_LIST_POS_Y;
  if ( issortButton )
  {
    GameObjectExtensions__SetLocalPositionY(v38, *p_VL_LIST_POS_Y, 0LL);
    ListViewManager__SetArrangementPitchY(
      (ListViewManager_o *)this,
      MaterialEventLogListViewManager_TypeInfo->static_fields->VL_ARRANGEMENT_PY,
      0LL);
    scrollView = this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_85;
    verticalScrollBar = (UnityEngine_Object_o *)scrollView->fields.verticalScrollBar;
    if ( verticalScrollBar
      && (methodPtr_low = LOBYTE(UIScrollBar_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(verticalScrollBar->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (UIScrollBar_c *)verticalScrollBar->klass->_2.typeHierarchy[methodPtr_low - 1] == UIScrollBar_TypeInfo )
        v43 = verticalScrollBar;
      else
        v43 = 0LL;
    }
    else
    {
      v43 = 0LL;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    itemList = (void *)UnityEngine_Object__op_Inequality(v43, 0LL, 0LL);
    if ( ((unsigned __int8)itemList & 1) != 0 )
    {
      if ( !v43 )
        goto LABEL_85;
      v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v43, 0LL);
      v49 = MaterialEventLogListViewManager_TypeInfo;
      v50 = v48;
      if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
        v49 = MaterialEventLogListViewManager_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v50, v49->static_fields->VL_SCROLLBAR_POS_Y, 0LL);
      itemList = v43[2].klass;
      if ( !itemList )
        goto LABEL_85;
      UIWidget__set_height(
        (UIWidget_o *)itemList,
        MaterialEventLogListViewManager_TypeInfo->static_fields->VL_SCROLLBAR_HEIGHT,
        0LL);
      itemList = v43[2].monitor;
      if ( !itemList )
        goto LABEL_85;
      UIWidget__set_height(
        (UIWidget_o *)itemList,
        MaterialEventLogListViewManager_TypeInfo->static_fields->VL_SCROLLBAR_HEIGHT,
        0LL);
    }
    v51 = this->fields.scrollView;
    if ( !v51 )
      goto LABEL_85;
    mPanel = (UnityEngine_Object_o *)v51->fields.mPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mPanel, 0LL, 0LL) )
    {
      itemList = MaterialEventLogListViewManager_TypeInfo;
      if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
        itemList = MaterialEventLogListViewManager_TypeInfo;
      }
      if ( !mPanel )
        goto LABEL_85;
      ((void (__fastcall *)(UnityEngine_Object_o *, _QWORD, float, float, float, float))mPanel->klass[1]._2.genericContainerHandle)(
        mPanel,
        *(_QWORD *)&mPanel->klass[1]._2.instance_size,
        0.0,
        (float)*(int *)(*((_QWORD *)itemList + 23) + 24LL),
        (float)*(int *)(*((_QWORD *)itemList + 23) + 16LL),
        (float)*(int *)(*((_QWORD *)itemList + 23) + 20LL));
    }
    ListViewManager__CheckSortButton((ListViewManager_o *)this, this->fields.issortButton, 0LL);
    v55 = MaterialEventLogListViewManager_TypeInfo;
    if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
      v55 = MaterialEventLogListViewManager_TypeInfo;
    }
    EventLogservantSortInfo = v55->static_fields->EventLogservantSortInfo;
    this->fields.sort = EventLogservantSortInfo;
    p_sort = &this->fields.sort;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)EventLogservantSortInfo, v53, v54);
    itemList = this->fields.sort;
    if ( itemList )
    {
      *((_DWORD *)itemList + 32) = 0;
      ListViewSort__Load((ListViewSort_o *)itemList, 0LL);
      MaterialCollectionServantListViewManager = MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                                   v58,
                                                   v59);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      itemList = (void *)UnityEngine_Object__op_Inequality(
                           (UnityEngine_Object_o *)MaterialCollectionServantListViewManager,
                           0LL,
                           0LL);
      if ( ((unsigned __int8)itemList & 1) != 0 )
      {
        if ( !MaterialCollectionServantListViewManager )
          goto LABEL_85;
        v63 = *p_sort;
        MaterialCollectionServantListViewManager->fields.sort = *p_sort;
        sub_1BCAF9C(
          (CGThumbnailListItem_o *)&MaterialCollectionServantListViewManager->fields.sort,
          (int32_t)v63,
          v61,
          v62);
      }
      emptyMessageLabel = this->fields.emptyMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      itemList = LocalizationManager__Get((System_String_o *)StringLiteral_11704/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/, 0LL);
      if ( emptyMessageLabel )
      {
        UILabel__set_text(emptyMessageLabel, (System_String_o *)itemList, 0LL);
        MaterialEventLogListViewManager__SetFilterButtonImage(this, v65);
        MaterialEventLogListViewManager__SortDummyData(this, v66);
        goto LABEL_82;
      }
    }
LABEL_85:
    sub_1BCB254(itemList, v16);
  }
  GameObjectExtensions__SetLocalPositionY(v38, p_VL_LIST_POS_Y[7], 0LL);
  ListViewManager__SetArrangementPitchY(
    (ListViewManager_o *)this,
    MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_ARRANGEMENT_PY,
    0LL);
  v44 = this->fields.scrollView;
  if ( !v44 )
    goto LABEL_85;
  v45 = (UnityEngine_Object_o *)v44->fields.verticalScrollBar;
  if ( v45
    && (v46 = LOBYTE(UIScrollBar_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v45->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v46) )
  {
    if ( (UIScrollBar_c *)v45->klass->_2.typeHierarchy[v46 - 1] == UIScrollBar_TypeInfo )
      v47 = v45;
    else
      v47 = 0LL;
  }
  else
  {
    v47 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  itemList = (void *)UnityEngine_Object__op_Inequality(v47, 0LL, 0LL);
  if ( ((unsigned __int8)itemList & 1) != 0 )
  {
    if ( !v47 )
      goto LABEL_85;
    v67 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v47, 0LL);
    v68 = MaterialEventLogListViewManager_TypeInfo;
    v69 = v67;
    if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
      v68 = MaterialEventLogListViewManager_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionY(v69, v68->static_fields->NORMAL_SCROLLBAR_POS_Y, 0LL);
    itemList = v47[2].klass;
    if ( !itemList )
      goto LABEL_85;
    UIWidget__set_height(
      (UIWidget_o *)itemList,
      MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_SCROLLBAR_BACK_HEIGHT,
      0LL);
    itemList = v47[2].monitor;
    if ( !itemList )
      goto LABEL_85;
    UIWidget__set_height(
      (UIWidget_o *)itemList,
      MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_SCROLLBAR_FORE_HEIGHT,
      0LL);
  }
  v70 = this->fields.scrollView;
  if ( !v70 )
    goto LABEL_85;
  v71 = (UnityEngine_Object_o *)v70->fields.mPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v71, 0LL, 0LL) )
  {
    itemList = MaterialEventLogListViewManager_TypeInfo;
    if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
      itemList = MaterialEventLogListViewManager_TypeInfo;
    }
    if ( !v71 )
      goto LABEL_85;
    ((void (__fastcall *)(UnityEngine_Object_o *, _QWORD, float, float, float, float))v71->klass[1]._2.genericContainerHandle)(
      v71,
      *(_QWORD *)&v71->klass[1]._2.instance_size,
      0.0,
      (float)*(int *)(*((_QWORD *)itemList + 23) + 56LL),
      (float)*(int *)(*((_QWORD *)itemList + 23) + 48LL),
      (float)*(int *)(*((_QWORD *)itemList + 23) + 52LL));
  }
LABEL_82:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  if ( this->fields.issortButton )
  {
    v73 = MaterialEventLogListViewManager__GetFilterCount(this, v72) < 1;
    ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v73, 0LL);
  }
  MaterialEventLogListViewManager__CreateInfos(this, v72);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
}


void __fastcall MaterialEventLogListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialEventLogListViewManager_c *v2; // x0
  ListViewSort_o *EventLogservantSortInfo; // x0

  if ( (byte_4B177E2 & 1) == 0 )
  {
    sub_1BCAFF8(&MaterialEventLogListViewManager_TypeInfo, v1);
    byte_4B177E2 = 1;
  }
  v2 = MaterialEventLogListViewManager_TypeInfo;
  if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
    v2 = MaterialEventLogListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v2->static_fields->EventLogservantSortInfo;
  if ( !EventLogservantSortInfo )
    sub_1BCB254(0LL, v1);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct ListViewSort_o *sort; // x1
  const MethodInfo *v12; // x1
  bool v13; // w1
  const MethodInfo *v14; // x1

  if ( (byte_4B177F1 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, isDecide);
    byte_4B177F1 = 1;
  }
  eventLogServantSortSelectMenu = this->fields.eventLogServantSortSelectMenu;
  if ( !eventLogServantSortSelectMenu )
    goto LABEL_13;
  MaterialEventLogServantSortSelectMenu__Close_32621312(eventLogServantSortSelectMenu, 0LL, method);
  MaterialCollectionServantListViewManager = MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                               v6,
                                               v7);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  eventLogServantSortSelectMenu = (MaterialEventLogServantSortSelectMenu_o *)UnityEngine_Object__op_Inequality(
                                                                               (UnityEngine_Object_o *)MaterialCollectionServantListViewManager,
                                                                               0LL,
                                                                               0LL);
  if ( ((unsigned __int8)eventLogServantSortSelectMenu & 1) != 0 )
  {
    if ( !MaterialCollectionServantListViewManager )
      goto LABEL_13;
    sort = this->fields.sort;
    MaterialCollectionServantListViewManager->fields.sort = sort;
    sub_1BCAF9C((CGThumbnailListItem_o *)&MaterialCollectionServantListViewManager->fields.sort, (int32_t)sort, v9, v10);
  }
  if ( isDecide )
  {
    MaterialEventLogListViewManager__SortDummyData(this, (const MethodInfo *)isDecide);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    v13 = MaterialEventLogListViewManager__GetFilterCount(this, v12) < 1;
    ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v13, 0LL);
    eventLogServantSortSelectMenu = (MaterialEventLogServantSortSelectMenu_o *)this->fields.sort;
    if ( eventLogServantSortSelectMenu )
    {
      ListViewSort__Save((ListViewSort_o *)eventLogServantSortSelectMenu, 0LL);
      MaterialEventLogListViewManager__CreateInfos(this, v14);
      goto LABEL_12;
    }
LABEL_13:
    sub_1BCB254(eventLogServantSortSelectMenu, isDecide);
  }
LABEL_12:
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
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4

  if ( (byte_4B177EF & 1) == 0 )
  {
    sub_1BCAFF8(&MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo, eventLogServantSortSelectMenu);
    sub_1BCAFF8(&Method_MaterialEventLogListViewManager_EndEventLogSortKind__, v5);
    byte_4B177EF = 1;
  }
  if ( this->fields.isInput )
  {
    sort = this->fields.sort;
    v7 = (MaterialEventLogServantSortSelectMenu_CallbackFunc_o *)sub_1BCB244(MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo);
    MaterialEventLogServantSortSelectMenu_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_MaterialEventLogListViewManager_EndEventLogSortKind__,
      v8);
    if ( !eventLogServantSortSelectMenu )
      sub_1BCB254(v9, v10);
    MaterialEventLogServantSortSelectMenu__Open(eventLogServantSortSelectMenu, 0, sort, v7, v11);
  }
}


int32_t __fastcall MaterialEventLogListViewManager__GetFilterCount(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w22
  int32_t v7; // w21
  int32_t v8; // w20
  __int64 methodPtr_low; // x10

  if ( (byte_4B177F0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    sub_1BCAFF8(&MaterialEventLogListViewItem_TypeInfo, v4);
    byte_4B177F0 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_13;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v7,
                                                                (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(MaterialEventLogListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (MaterialEventLogListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialEventLogListViewItem_TypeInfo )
      {
        break;
      }
      if ( itemList[3].klass )
        v8 += ((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, struct ListViewSort_o *, Il2CppMethodPointer))itemList->klass->vtable._5_set_Item.method)(
                itemList,
                this->fields.sort,
                itemList->klass->vtable._6_IndexOf.methodPtr) & 1;
      if ( size == ++v7 )
        return v8;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_13:
    sub_1BCB254(itemList, method);
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
  PartyServantListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B177E8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1BCAFF8(&PartyServantListViewItem_TypeInfo, v5);
    byte_4B177E8 = 1;
  }
  result = (PartyServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(PartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (PartyServantListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyServantListViewItem_TypeInfo )
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


MaterialCollectionServantListViewManager_o *__fastcall MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  MaterialCollectionServantListViewManager_o *result; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x19
  bool v7; // w8
  __int64 methodPtr_low; // x10
  bool v9; // w8
  __int64 v10; // x19
  bool v11; // w8

  if ( (byte_4B177E4 & 1) == 0 )
  {
    sub_1BCAFF8(&MyRoomRootComponent_TypeInfo, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v2);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_4B177E4 = 1;
  }
  result = (MaterialCollectionServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !result )
    goto LABEL_22;
  dropObjectList = result->fields.dropObjectList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)dropObjectList, 0LL, 0LL);
  result = 0LL;
  if ( !v7 )
  {
    if ( dropObjectList )
    {
      methodPtr_low = LOBYTE(MyRoomRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(dropObjectList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (MyRoomRootComponent_c *)dropObjectList->klass->_2.typeHierarchy[methodPtr_low - 1] != MyRoomRootComponent_TypeInfo )
          dropObjectList = 0LL;
      }
      else
      {
        dropObjectList = 0LL;
      }
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)dropObjectList, 0LL, 0LL);
    result = 0LL;
    if ( !v9 )
    {
      if ( !dropObjectList )
        goto LABEL_22;
      v10 = *(_QWORD *)&dropObjectList[1].fields._size;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v10, 0LL, 0LL);
      result = 0LL;
      if ( !v11 )
      {
        if ( v10 )
          return *(MaterialCollectionServantListViewManager_o **)(v10 + 568);
LABEL_22:
        sub_1BCB254(result, v5);
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
    sub_1BCB254(0LL, method);
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

  if ( (byte_4B177E3 & 1) == 0 )
  {
    sub_1BCAFF8(&MaterialEventLogListViewManager_TypeInfo, v1);
    byte_4B177E3 = 1;
  }
  v2 = MaterialEventLogListViewManager_TypeInfo;
  if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
    v2 = MaterialEventLogListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v2->static_fields->EventLogservantSortInfo;
  if ( !EventLogservantSortInfo )
    sub_1BCB254(0LL, v1);
  ListViewSort__InitLoad(EventLogservantSortInfo, 0LL);
}


void __fastcall MaterialEventLogListViewManager__InitializeObjectPosition(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *seed; // x20
  UnityEngine_GameObject_o *ComponentsInChildren_object__50787124; // x0
  const MethodInfo *v6; // x1
  struct ListViewItemSeed_o *v7; // x8
  UnityEngine_Object_o *parent; // x20
  struct ListViewItemSeed_o *v9; // x8
  __int64 v10; // x2
  int klass; // w8
  UnityEngine_GameObject_o *v12; // x19
  unsigned int v13; // w20

  if ( (byte_4B177F9 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponentsInChildren_MaterialEventLogListViewObject___, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    byte_4B177F9 = 1;
  }
  seed = (UnityEngine_Object_o *)this->fields.seed;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ComponentsInChildren_object__50787124 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(seed, 0LL, 0LL);
  if ( ((unsigned __int8)ComponentsInChildren_object__50787124 & 1) != 0 )
  {
    v7 = this->fields.seed;
    if ( !v7 )
      goto LABEL_19;
    parent = (UnityEngine_Object_o *)v7->fields.parent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    ComponentsInChildren_object__50787124 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                                          parent,
                                                                          0LL,
                                                                          0LL);
    if ( ((unsigned __int8)ComponentsInChildren_object__50787124 & 1) != 0 )
    {
      v9 = this->fields.seed;
      if ( !v9 )
        goto LABEL_19;
      ComponentsInChildren_object__50787124 = v9->fields.parent;
      if ( !ComponentsInChildren_object__50787124 )
        goto LABEL_19;
      ComponentsInChildren_object__50787124 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50787124(
                                                                            ComponentsInChildren_object__50787124,
                                                                            (const MethodInfo_306F334 *)Method_UnityEngine_GameObject_GetComponentsInChildren_MaterialEventLogListViewObject___);
      if ( !ComponentsInChildren_object__50787124 )
        goto LABEL_19;
      klass = (int)ComponentsInChildren_object__50787124[1].klass;
      v12 = ComponentsInChildren_object__50787124;
      if ( klass >= 1 )
      {
        v13 = 0;
        while ( 1 )
        {
          if ( v13 >= klass )
            sub_1BCB25C(ComponentsInChildren_object__50787124, v6, v10);
          ComponentsInChildren_object__50787124 = (UnityEngine_GameObject_o *)*((_QWORD *)&v12[1].monitor + (int)v13);
          if ( !ComponentsInChildren_object__50787124 )
            break;
          MaterialEventLogListViewObject__InitPosition(
            (MaterialEventLogListViewObject_o *)ComponentsInChildren_object__50787124,
            v6);
          klass = (int)v12[1].klass;
          if ( (int)++v13 >= klass )
            return;
        }
LABEL_19:
        sub_1BCB254(ComponentsInChildren_object__50787124, v6);
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
  Il2CppObject *linkItem; // x19
  __int64 methodPtr_low; // x10
  void *monitor; // x20
  int v9; // w8
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0

  if ( (byte_4B177ED & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ActionExtensions_Call_MaterialEventLogListViewItem___, obj);
    sub_1BCAFF8(&MaterialEventLogListViewItem_TypeInfo, v4);
    this = (MaterialEventLogListViewManager_o *)sub_1BCAFF8(
                                                  &Method_MaterialEventLogListViewManager_OnClickListView__,
                                                  v5);
    byte_4B177ED = 1;
  }
  if ( !obj
    || (linkItem = (Il2CppObject *)obj->fields.linkItem) == 0LL
    || (methodPtr_low = LOBYTE(MaterialEventLogListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
    || (MaterialEventLogListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialEventLogListViewItem_TypeInfo )
  {
    sub_1BCB254(this, obj);
  }
  monitor = linkItem[7].monitor;
  if ( monitor )
  {
    v9 = *((_DWORD *)monitor + 17);
    if ( (v9 & 1) == 0 )
    {
      v10 = Method_MaterialEventLogListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_MaterialEventLogListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1BCB010(Method_MaterialEventLogListViewManager_OnClickListView__);
      v11 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0LL);
      v9 = *((_DWORD *)monitor + 17);
    }
    if ( (v9 & 4) != 0 )
    {
      v12 = Method_MaterialEventLogListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_MaterialEventLogListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_1BCB010(Method_MaterialEventLogListViewManager_OnClickListView__);
      v13 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 2, 0, 0LL);
    }
    else
    {
      ActionExtensions__Call_object_(
        *((System_Action_T__o **)monitor + 10),
        linkItem,
        (const MethodInfo_2F6A0EC *)Method_ActionExtensions_Call_MaterialEventLogListViewItem___);
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
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

  if ( (byte_4B177EB & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BCAFF8(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Count__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__, v9);
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v10);
    sub_1BCAFF8(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__0__, v11);
    sub_1BCAFF8(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__1__, v12);
    sub_1BCAFF8(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__2__, v13);
    sub_1BCAFF8(&MaterialEventLogListViewManager___c__DisplayClass50_0_TypeInfo, v14);
    byte_4B177EB = 1;
  }
  v15 = sub_1BCB244(MaterialEventLogListViewManager___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_25;
  *(_QWORD *)(v15 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v15 + 16), (int32_t)this, v18, v19);
  *(_QWORD *)(v15 + 24) = end_act;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v15 + 24), (int32_t)end_act, v20, v21);
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
                                                                  (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      MaterialEventLogListViewObject__Init_32612404((MaterialEventLogListViewObject_o *)ObjectList, mode, 0LL, -1, v25);
      if ( ++v24 >= v23->fields._size )
        goto LABEL_9;
    }
LABEL_25:
    sub_1BCB254(ObjectList, v17);
  }
LABEL_9:
  initMode = this->fields.initMode;
  if ( initMode == 4 )
  {
    this->fields.mIsDoing_Slide = 1;
    ObjectList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
    if ( !ObjectList )
      goto LABEL_25;
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)ObjectList, 0LL);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         gameObject,
                         (const MethodInfo_30701F8 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
    v36 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      v36,
      (Il2CppObject *)v15,
      Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__2__,
      0LL);
    if ( !Component_object )
      goto LABEL_25;
    SlideFadeObject__SlideOut_35373228((SlideFadeObject_o *)Component_object, 580.0, IntpTime_AutoResume, 0.0, v36, 0LL);
  }
  else if ( initMode == 3 )
  {
    this->fields.mIsDoing_Slide = 1;
    this->fields.isScrollRefresh = 1;
    ObjectList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
    if ( !ObjectList )
      goto LABEL_25;
    v27 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)ObjectList, 0LL);
    v28 = GameObjectExtensions__SafeGetComponent_object_(
            v27,
            (const MethodInfo_30701F8 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v29 = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
    if ( this->fields.issortButton )
    {
      if ( !v28 )
        goto LABEL_25;
      klass = (int)v28[4].klass;
      monitor = (int)v28[4].monitor;
      LODWORD(v28[5].klass) = -1027735552;
      HIDWORD(v28[4].monitor) = klass;
      HIDWORD(v28[5].klass) = monitor;
      v32 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(
        v32,
        (Il2CppObject *)v15,
        Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__1__,
        0LL);
      SlideFadeObject__SlideSortIn((SlideFadeObject_o *)v28, 580.0, v29, 0.0, v32, 0LL);
    }
    else
    {
      v37 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(
        v37,
        (Il2CppObject *)v15,
        Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__0__,
        0LL);
      if ( !v28 )
        goto LABEL_25;
      SlideFadeObject__SlideIn_35372284((SlideFadeObject_o *)v28, 580.0, v29, 0.0, v37, 0LL);
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x19
  int32_t v11; // w20
  bool v12; // w21
  Il2CppObject *Component_object; // x22

  if ( (byte_4B177F4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, isActive);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Count__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__, v6);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    byte_4B177F4 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)MaterialEventLogListViewManager__get_ObjectList(
                                                              this,
                                                              (const MethodInfo *)isActive);
  if ( !ObjectList )
    goto LABEL_15;
  v10 = ObjectList;
  if ( ObjectList->fields._size >= 1 )
  {
    v11 = 0;
    v12 = isActive;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v10,
                                                                  v11,
                                                                  (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ObjectList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)ObjectList,
                                                                  0LL);
      if ( !ObjectList )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)ObjectList,
                           (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      ObjectList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                  (UnityEngine_Object_o *)Component_object,
                                                                  0LL,
                                                                  0LL);
      if ( ((unsigned __int8)ObjectList & 1) != 0 )
      {
        if ( !Component_object )
          break;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, v12, 0LL);
      }
      if ( ++v11 >= v10->fields._size )
        return;
    }
LABEL_15:
    sub_1BCB254(ObjectList, v9);
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
  UnityEngine_Color_o v9; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4B177F2 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_421/*"#FE4545"*/, method);
    sub_1BCAFF8(&StringLiteral_17343/*"btn_filter_on"*/, v3);
    sub_1BCAFF8(&StringLiteral_402/*"#000000"*/, v4);
    sub_1BCAFF8(&StringLiteral_17342/*"btn_filter"*/, v5);
    byte_4B177F2 = 1;
  }
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_12;
  sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL);
  if ( !this->fields.filterSprite )
    goto LABEL_12;
  v7 = (System_String_o **)&StringLiteral_17342/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v7 = (System_String_o **)&StringLiteral_17343/*"btn_filter_on"*/;
  v8 = ((unsigned __int8)sort & 1) != 0
     ? (System_String_o **)&StringLiteral_402/*"#000000"*/
     : (System_String_o **)&StringLiteral_421/*"#FE4545"*/;
  UISprite__set_spriteName(this->fields.filterSprite, *v7, 0LL);
  *(_QWORD *)&v9.fields.r = 0LL;
  *(_QWORD *)&v9.fields.b = 0LL;
  UnityEngine_ColorUtility__TryParseHtmlString(*v8, &v9, 0LL);
  sort = (ListViewSort_o *)this->fields.sortKindLabel;
  if ( !sort )
LABEL_12:
    sub_1BCB254(sort, method);
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
  System_Action_o *v15; // x2
  System_Action_o *v16; // x21
  System_Delegate_o *v17; // x0
  MaterialEventLogListViewManager_o *v18; // x0
  int32_t v19; // w1
  System_Action_o *v20; // x2
  const MethodInfo *v21; // x3

  if ( (byte_4B177EA & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BCAFF8(&Method_MaterialEventLogListViewManager__SetMode_b__49_0__, v7);
    byte_4B177EA = 1;
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
    ActionExtensions__Call(end_act, 0LL);
    return 0;
  }
  mIsDoing_Slide = this->fields.initMode;
LABEL_7:
  if ( mIsDoing_Slide )
    goto LABEL_14;
LABEL_11:
  this->fields.initMode = mode;
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  mBoxCollider = (UnityEngine_Collider_o *)this->fields.mBoxCollider;
  if ( !mBoxCollider )
    sub_1BCB254(0LL, v9);
  UnityEngine_Collider__set_enabled(mBoxCollider, this->fields.isInput, 0LL);
  switch ( mode )
  {
    case 1:
    case 3:
      v12 = 2;
      goto LABEL_17;
    case 2:
      v12 = 3;
LABEL_17:
      v14 = this;
      goto LABEL_18;
    case 4:
      v16 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_MaterialEventLogListViewManager__SetMode_b__49_0__, 0LL);
      v17 = System_Delegate__Combine((System_Delegate_o *)end_act, (System_Delegate_o *)v16, 0LL);
      v15 = (System_Action_o *)v17;
      if ( v17 && (System_Action_c *)v17->klass != System_Action_TypeInfo )
      {
        v18 = (MaterialEventLogListViewManager_o *)sub_1BCB514(v17);
        MaterialEventLogListViewManager__RequestListObject(v18, v19, v20, v21);
      }
      else
      {
        v12 = 2;
        v14 = this;
LABEL_19:
        MaterialEventLogListViewManager__RequestListObject(v14, v12, v15, v11);
        result = 1;
      }
      break;
    default:
      v14 = this;
      v12 = 0;
LABEL_18:
      v15 = end_act;
      goto LABEL_19;
  }
  return result;
}


void __fastcall MaterialEventLogListViewManager__SetObjectItem(
        MaterialEventLogListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  MaterialEventLogListViewManager_o *v6; // x20
  __int64 methodPtr_low; // x10
  int32_t v8; // w1

  v6 = this;
  if ( (byte_4B177E9 & 1) == 0 )
  {
    this = (MaterialEventLogListViewManager_o *)sub_1BCAFF8(&MaterialEventLogListViewObject_TypeInfo, obj);
    byte_4B177E9 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(MaterialEventLogListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MaterialEventLogListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialEventLogListViewObject_TypeInfo )
  {
    sub_1BCB254(this, obj);
  }
  if ( v6->fields.initMode == 2 )
    v8 = 3;
  else
    v8 = 2;
  MaterialEventLogListViewObject__Init_32612404(
    (MaterialEventLogListViewObject_o *)obj,
    v8,
    0LL,
    v6->fields.selectedLimitCount,
    v4);
}


void __fastcall MaterialEventLogListViewManager__SetScrollPosY(
        MaterialEventLogListViewManager_o *this,
        float y,
        const MethodInfo *method)
{
  void *scrollView; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector2_o v7; // 0:s0.4,4:s1.4

  if ( (byte_4B177E5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, method);
    byte_4B177E5 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL),
        GameObjectExtensions__SetLocalPositionY(gameObject, y, 0LL),
        (scrollView = this->fields.scrollView) == 0LL)
    || (scrollView = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL)) == 0LL
    || (scrollView = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)scrollView,
                       (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___)) == 0LL )
  {
    sub_1BCB254(scrollView, method);
  }
  v7.fields.x = *((float *)scrollView + 83);
  v7.fields.y = -y;
  UIPanel__set_clipOffset((UIPanel_o *)scrollView, v7, 0LL);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 0, 0, 0LL);
}


void __fastcall MaterialEventLogListViewManager__SetSort(
        MaterialEventLogListViewManager_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1
  bool v6; // w1
  const MethodInfo *v7; // x1

  this->fields.sort = sort;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)sort, (int32_t)method, v3);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  v6 = MaterialEventLogListViewManager__GetFilterCount(this, v5) < 1;
  ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v6, 0LL);
  MaterialEventLogListViewManager__CreateInfos(this, v7);
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
  System_String_o **v18; // x9
  System_String_o **v19; // x10
  System_String_o **v20; // x8
  System_String_o **v21; // x8

  if ( (byte_4B177F5 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_17379/*"btn_sort_up"*/, v3);
    sub_1BCAFF8(&StringLiteral_17474/*"btn_txt_up"*/, v4);
    sub_1BCAFF8(&StringLiteral_17427/*"btn_txt_new"*/, v5);
    sub_1BCAFF8(&StringLiteral_17417/*"btn_txt_down"*/, v6);
    sub_1BCAFF8(&StringLiteral_17434/*"btn_txt_old"*/, v7);
    sub_1BCAFF8(&StringLiteral_17376/*"btn_sort_down"*/, v8);
    byte_4B177F5 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_34;
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v12 )
      goto LABEL_34;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17434/*"btn_txt_old"*/ : &StringLiteral_17427/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v18 = (System_String_o **)&StringLiteral_17376/*"btn_sort_down"*/;
              v19 = (System_String_o **)&StringLiteral_17379/*"btn_sort_up"*/;
LABEL_30:
              if ( v17->fields.isAscendingOrder )
                v21 = v18;
              else
                v21 = v19;
              UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
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
          v20 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17474/*"btn_txt_up"*/ : &StringLiteral_17417/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v18 = (System_String_o **)&StringLiteral_17379/*"btn_sort_up"*/;
              v19 = (System_String_o **)&StringLiteral_17376/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1BCB254(sort, v10);
  }
}


void __fastcall MaterialEventLogListViewManager__SetValentineListDisplay(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppClass *klass; // x8
  __int64 methodPtr_low; // x11
  MyRoomControl_o *element_class; // x19

  if ( (byte_4B177EC & 1) == 0 )
  {
    sub_1BCAFF8(&MyRoomRootComponent_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4B177EC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (klass = Instance[2].klass) == 0LL
    || (methodPtr_low = LOBYTE(MyRoomRootComponent_TypeInfo->vtable._0_Equals.methodPtr),
        *((unsigned __int8 *)klass->_1.image + 304) < (unsigned int)methodPtr_low)
    || *(MyRoomRootComponent_c **)(*((_QWORD *)klass->_1.image + 25) + 8 * methodPtr_low - 8) != MyRoomRootComponent_TypeInfo
    || (element_class = (MyRoomControl_o *)klass->_1.element_class) == 0LL )
  {
    sub_1BCB254(Instance, v4);
  }
  if ( element_class->fields.IsMaterialEventBack )
  {
    MyRoomControl__ValentineListChange(element_class, 0, 0LL);
    MyRoomControl__EndMaterialEventBack(element_class, 0LL);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct ListViewSort_o *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  bool v15; // w1
  const MethodInfo *v16; // x1

  if ( (byte_4B177F3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_MaterialEventLogListViewManager_SortAscendingOrder__, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    byte_4B177F3 = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_MaterialEventLogListViewManager_SortAscendingOrder__;
    if ( (*((_BYTE *)Method_MaterialEventLogListViewManager_SortAscendingOrder__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCB010(Method_MaterialEventLogListViewManager_SortAscendingOrder__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( sort )
    {
      sort->fields.isAscendingOrder ^= 1u;
      MaterialCollectionServantListViewManager = MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                                   (MaterialEventLogListViewManager_o *)v6,
                                                   v7);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v6 = (struct ListViewSort_o *)UnityEngine_Object__op_Inequality(
                                      (UnityEngine_Object_o *)MaterialCollectionServantListViewManager,
                                      0LL,
                                      0LL);
      if ( ((unsigned __int8)v6 & 1) != 0 )
      {
        if ( !MaterialCollectionServantListViewManager )
          goto LABEL_15;
        v12 = this->fields.sort;
        MaterialCollectionServantListViewManager->fields.sort = v12;
        sub_1BCAF9C(
          (CGThumbnailListItem_o *)&MaterialCollectionServantListViewManager->fields.sort,
          (int32_t)v12,
          v10,
          v11);
      }
      v6 = this->fields.sort;
      if ( v6 )
      {
        ListViewSort__Save(v6, 0LL);
        MaterialEventLogListViewManager__SortDummyData(this, v13);
        ((void (__fastcall *)(MaterialEventLogListViewManager_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
          this,
          this->klass->vtable._6_GetFocusItemIndex.methodPtr);
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
        v15 = MaterialEventLogListViewManager__GetFilterCount(this, v14) < 1;
        ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v15, 0LL);
        MaterialEventLogListViewManager__CreateInfos(this, v16);
        return;
      }
    }
LABEL_15:
    sub_1BCB254(v6, v7);
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
  int size; // w22
  System_Collections_Generic_List_object__o *v17; // x0
  System_Collections_Generic_List_object__o *v18; // x20
  int32_t v19; // w21
  __int64 methodPtr_low; // x10
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  MaterialEventLogListViewManager_o *v26; // x1
  Il2CppClass **v27; // x0
  __int64 v28; // x1
  System_Collections_Generic_List_object__o *v29; // x0
  const MethodInfo *v30; // x1
  int v31; // w9
  int v32; // w20
  int v33; // w8
  int v34; // w21
  int v35; // w25
  struct ListViewSort_o *sort; // x8
  _BOOL4 isAscendingOrder; // w27
  ListViewItem_o *v38; // x0
  ListViewItem_o *v39; // x22
  int32_t v40; // w1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  __int64 v45; // x8
  _QWORD *v46; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v48; // x8
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_4B177F7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__Remove__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem___ctor__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1BCAFF8(&System_Collections_Generic_List_ListViewItem__TypeInfo, v12);
    sub_1BCAFF8(&System_Collections_Generic_List_MaterialEventLogListViewItem__TypeInfo, v13);
    this = (MaterialEventLogListViewManager_o *)sub_1BCAFF8(&MaterialEventLogListViewItem_TypeInfo, v14);
    byte_4B177F7 = 1;
  }
  memset(&i, 0, sizeof(i));
  itemList = v2->fields.itemList;
  if ( !itemList )
    goto LABEL_42;
  size = itemList->fields._size;
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_MaterialEventLogListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem___ctor__);
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  if ( size >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      this = (MaterialEventLogListViewManager_o *)v2->fields.itemList;
      if ( !this )
        break;
      this = (MaterialEventLogListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v19,
                                                    (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        break;
      methodPtr_low = LOBYTE(MaterialEventLogListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (MaterialEventLogListViewItem_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialEventLogListViewItem_TypeInfo )
      {
        break;
      }
      if ( !this->fields.dragParentObject )
      {
        this = (MaterialEventLogListViewManager_o *)v2->fields.itemList;
        if ( !this )
          break;
        this = (MaterialEventLogListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)this,
                                                      v19,
                                                      (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !v18 )
          break;
        items = v18->fields._items;
        v24 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v18->fields._version;
        if ( !items )
          break;
        v25 = v18->fields._size;
        v26 = this;
        if ( (unsigned int)v25 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            (Il2CppObject *)this,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + v25;
          v18->fields._size = v25 + 1;
          v27[4] = (Il2CppClass *)v26;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v26, v21, v22);
        }
      }
      if ( size == ++v19 )
        goto LABEL_18;
    }
LABEL_42:
    sub_1BCB254(this, method);
  }
LABEL_18:
  if ( !v18 )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v49,
    v18,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = v49;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        System_Collections_Generic_List_object___Remove(
          v29,
          i.fields._current,
          (const MethodInfo_36BB0F8 *)Method_System_Collections_Generic_List_ListViewItem__Remove__) )
  {
    v29 = (System_Collections_Generic_List_object__o *)v2->fields.itemList;
    if ( !v29 )
      sub_1BCB254(0LL, v28);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  this = (MaterialEventLogListViewManager_o *)MaterialEventLogListViewManager__GetFilterCount(v2, v30);
  if ( (int)this > 3 )
    v31 = 1;
  else
    v31 = 4 - (_DWORD)this;
  if ( v31 >= 1 )
  {
    v32 = -(int)this;
    if ( (int)this <= 3 )
      v33 = 3;
    else
      v33 = (int)this;
    v34 = (_DWORD)this + 999;
    v35 = ~v33;
    do
    {
      sort = v2->fields.sort;
      if ( !sort )
        goto LABEL_42;
      isAscendingOrder = sort->fields.isAscendingOrder;
      v38 = (ListViewItem_o *)sub_1BCB244(MaterialEventLogListViewItem_TypeInfo);
      v39 = v38;
      v40 = isAscendingOrder ? v34 : v32;
      ListViewItem___ctor_42932312(v38, v40, 0LL);
      v39[1].monitor = 0LL;
      LODWORD(v39[1].klass) = 5;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v39[1].monitor, 0, v41, v42);
      this = (MaterialEventLogListViewManager_o *)v2->fields.itemList;
      if ( !this )
        goto LABEL_42;
      v45 = *(_QWORD *)&this->fields.m_CachedPtr;
      v46 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v45 )
        goto LABEL_42;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v45 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v39,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v48 = v45 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v48 + 32) = v39;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v48 + 32), (int32_t)v39, v43, v44);
      }
      --v32;
      ++v34;
    }
    while ( v35 != v32 );
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B177E6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_MaterialEventLogListViewObject__TypeInfo, v9);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v10);
    byte_4B177E6 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_MaterialEventLogListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_MaterialEventLogListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCB254(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BCB254(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1BCB254(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_MaterialEventLogListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BCB254(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  const MethodInfo *v2; // x3
  struct MaterialEventLogListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, method);
  _4__this->fields.mIsDoing_Slide = 0;
  MaterialEventLogListViewManager__SetMode(_4__this, 2, this->fields.end_act, v2);
}


void __fastcall MaterialEventLogListViewManager___c__DisplayClass50_0___RequestListObject_b__1(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct MaterialEventLogListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, method);
  _4__this->fields.mIsDoing_Slide = 0;
  MaterialEventLogListViewManager__SetMode(_4__this, 2, this->fields.end_act, v2);
}


void __fastcall MaterialEventLogListViewManager___c__DisplayClass50_0___RequestListObject_b__2(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  MaterialEventLogListViewManager___c__DisplayClass50_0_o *v3; // x19
  __int64 v4; // x1
  MaterialEventLogListViewManager_o *_4__this; // x20
  System_Action_o *_9__3; // x22
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v3 = this;
  if ( (byte_4B177FB & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    this = (MaterialEventLogListViewManager___c__DisplayClass50_0_o *)sub_1BCAFF8(
                                                                        &Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__3__,
                                                                        v4);
    byte_4B177FB = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(this, method);
  _4__this->fields.mIsDoing_Slide = 0;
  _9__3 = v3->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v3,
      Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__3__,
      0LL);
    v3->fields.__9__3 = _9__3;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v3->fields.__9__3, (int32_t)_9__3, v7, v8);
  }
  MaterialEventLogListViewManager__SetMode(_4__this, 0, _9__3, v2);
}


void __fastcall MaterialEventLogListViewManager___c__DisplayClass50_0___RequestListObject_b__3(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}