void GalleryFullScreenListViewManager___ctor(GalleryFullScreenListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C51D3A & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_AssetData__TypeInfo);
    byte_4C51D3A = 1;
  }
  *(_QWORD *)&this->fields.currentCenterIndex = -1;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.nowLoadingAssetNameList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.nowLoadingAssetNameList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_AssetData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.cacheAssetDataList = (struct System_Collections_Generic_List_AssetData__o *)v6;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.cacheAssetDataList, (int32_t)v6, v7, v8);
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void GalleryFullScreenListViewManager__AfterScrollCallback(
        GalleryFullScreenListViewManager_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C51D26 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_GalleryFullScreenListViewManager_AfterScrollCallback__);
    byte_4C51D26 = 1;
  }
  GalleryFullScreenListViewManager__Change(this, method);
  v3 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_GalleryFullScreenListViewManager_AfterScrollCallback__, 0);
  this->fields.callbackAfterScroll = v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackAfterScroll, (int32_t)v3, v4, v5);
}


void GalleryFullScreenListViewManager__Awake(GalleryFullScreenListViewManager_o *this, const MethodInfo *method)
{
  ;
}


bool GalleryFullScreenListViewManager__CenterItemIsMovie(
        GalleryFullScreenListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t *centerItem; // x8
  __int64 naturalAligment; // x11
  bool result; // w0

  if ( (byte_4C51D38 & 1) == 0 )
  {
    sub_1C3E564(&GalleryFullScreenListViewItem_TypeInfo);
    byte_4C51D38 = 1;
  }
  centerItem = (int32_t *)this->fields.centerItem;
  result = centerItem
        && (naturalAligment = GalleryFullScreenListViewItem_TypeInfo->_2.naturalAligment,
            *(unsigned __int8 *)(*(_QWORD *)centerItem + 304LL) >= (unsigned int)naturalAligment)
        && *(GalleryFullScreenListViewItem_c **)(*(_QWORD *)(*(_QWORD *)centerItem + 200LL) + 8 * naturalAligment - 8) == GalleryFullScreenListViewItem_TypeInfo
        && GalleryType__IsMovie(centerItem[30], 0);
  return result;
}


void GalleryFullScreenListViewManager__Change(GalleryFullScreenListViewManager_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *centerItem; // x23
  ListViewItem_o *Item; // x0
  UnityEngine_Object_o *viewObject; // x20
  struct ListViewObject_o *v6; // x24
  __int64 naturalAligment; // x10
  System_Action_bool__o *v8; // x20
  Il2CppObject *galleryFullScreenPanel; // x22
  System_Action_o *v10; // x21
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  GalleryFullScreenListViewItemDraw_o *m_CachedPtr; // x0

  if ( (byte_4C51D27 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_bool__TypeInfo);
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_GalleryFullScreenListViewManager__Change_b__16_0__);
    sub_1C3E564(&GalleryFullScreenListViewObject_TypeInfo);
    sub_1C3E564(&Method_GalleryFullScreenPanel_Close__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C51D27 = 1;
  }
  centerItem = this->fields.centerItem;
  Item = ListViewManager__GetItem((ListViewManager_o *)this, this->fields.oldCenterIndex, 0);
  if ( centerItem && Item && this->fields.oldCenterIndex != centerItem->fields.index )
  {
    viewObject = (UnityEngine_Object_o *)centerItem->fields.viewObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
    {
      v6 = centerItem->fields.viewObject;
      if ( v6 )
      {
        naturalAligment = GalleryFullScreenListViewObject_TypeInfo->_2.naturalAligment;
        if ( v6->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (GalleryFullScreenListViewObject_c *)v6->klass->_2.typeHierarchy[naturalAligment - 1] == GalleryFullScreenListViewObject_TypeInfo )
        {
          v8 = (System_Action_bool__o *)sub_1C3E7B0(System_Action_bool__TypeInfo);
          System_Action_bool____ctor(
            v8,
            (Il2CppObject *)this,
            Method_GalleryFullScreenListViewManager__Change_b__16_0__,
            0);
          galleryFullScreenPanel = (Il2CppObject *)this->fields.galleryFullScreenPanel;
          v10 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
          System_Action___ctor(v10, galleryFullScreenPanel, (intptr_t)Method_GalleryFullScreenPanel_Close__, 0);
          m_CachedPtr = (GalleryFullScreenListViewItemDraw_o *)v6[1].fields.m_CachedPtr;
          if ( !m_CachedPtr )
            sub_1C3E7C0(0, v11);
          GalleryFullScreenListViewItemDraw__StartPlayMovieCoroutine(m_CachedPtr, v8, v10, v12);
        }
      }
    }
    this->fields.oldCenterIndex = centerItem->fields.index;
  }
}


void GalleryFullScreenListViewManager__CreateList(
        GalleryFullScreenListViewManager_o *this,
        System_Collections_Generic_List_int__o *galleryIdList,
        int32_t selectGalleryId,
        System_Action_int__o *changeListItem,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x24
  System_Collections_Generic_List_object__o *v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v14; // x1
  _BOOL8 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_GalleryResourceEntity__o *EnableGalleryResourceEntityListByGalleryId; // x0
  GalleryFullScreenListViewManager___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x23
  System_Func_object__int__o *_9__13_0; // x25
  Il2CppObject *v21; // x26
  struct GalleryFullScreenListViewManager___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Collections_Generic_IEnumerable_T__o *v26; // x0
  int32_t v27; // w24
  int32_t v28; // w23
  GalleryResourceEntity_o *Item; // x25
  GalleryFullScreenListViewItem_o *v30; // x26
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x8
  Il2CppObject *Component_object; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  UIDragDropListViewBackMask_o *backMask; // x21
  EventDelegate_Callback_o *v43; // x22
  EventDelegate_Callback_o *v44; // x24
  const MethodInfo *v45; // x4
  System_Action_o *v46; // x21
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  Il2CppObject *ComponentInChildren_object__51315876; // x21
  SpringPanel_OnFinished_o *v50; // x22
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  System_Collections_Generic_List_Enumerator_int__o v55; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v56; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4C51D25 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&EventDelegate_Callback_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponentInChildren_UICenterOnChild___);
    sub_1C3E564(&Method_DataManager_GetMaster_GalleryResourceMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_OrderBy_GalleryResourceEntity__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C3E564(&System_Func_GalleryResourceEntity__int__TypeInfo);
    sub_1C3E564(&GalleryFullScreenListViewItem_TypeInfo);
    sub_1C3E564(&Method_GalleryFullScreenListViewManager_AfterScrollCallback__);
    sub_1C3E564(&Method_GalleryFullScreenListViewManager_OnClickMaxim__);
    sub_1C3E564(&Method_GalleryFullScreenListViewManager_OnDragUpdate__);
    sub_1C3E564(&Method_GalleryFullScreenListViewManager_OnFinishedChange__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
    sub_1C3E564(&Method_System_Collections_Generic_List_GalleryResourceEntity__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GalleryResourceEntity___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GalleryResourceEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GalleryResourceEntity__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_GalleryResourceEntity__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&SpringPanel_OnFinished_TypeInfo);
    sub_1C3E564(&Method_GalleryFullScreenListViewManager___c__CreateList_b__13_0__);
    sub_1C3E564(&GalleryFullScreenListViewManager___c_TypeInfo);
    byte_4C51D25 = 1;
  }
  memset(&v56, 0, sizeof(v56));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_GalleryResourceMaster___);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_GalleryResourceEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_GalleryResourceEntity___ctor__);
  this->fields.changeListItemAction = changeListItem;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.changeListItemAction, (int32_t)changeListItem, v11, v12);
  if ( !galleryIdList )
    goto LABEL_44;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v55,
    galleryIdList,
    (const MethodInfo_3798F10 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v56 = v55;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v56,
            (const MethodInfo_353BE34 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v15 )
      break;
    if ( !Master_object )
      sub_1C3E7C0(v15, v16);
    EnableGalleryResourceEntityListByGalleryId = GalleryResourceMaster__GetEnableGalleryResourceEntityListByGalleryId(
                                                   (GalleryResourceMaster_o *)Master_object,
                                                   v56.fields._current,
                                                   0);
    v18 = GalleryFullScreenListViewManager___c_TypeInfo;
    v19 = (System_Collections_Generic_IEnumerable_TSource__o *)EnableGalleryResourceEntityListByGalleryId;
    if ( !GalleryFullScreenListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GalleryFullScreenListViewManager___c_TypeInfo);
      v18 = GalleryFullScreenListViewManager___c_TypeInfo;
    }
    _9__13_0 = (System_Func_object__int__o *)v18->static_fields->__9__13_0;
    if ( !_9__13_0 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = GalleryFullScreenListViewManager___c_TypeInfo;
      }
      v21 = (Il2CppObject *)v18->static_fields->__9;
      _9__13_0 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_GalleryResourceEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__13_0,
        v21,
        Method_GalleryFullScreenListViewManager___c__CreateList_b__13_0__,
        0);
      static_fields = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__13_0 = (struct System_Func_GalleryResourceEntity__int__o *)_9__13_0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v23, v24);
    }
    v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 v19,
                                                                 (System_Func_TSource__TKey__o *)_9__13_0,
                                                                 (const MethodInfo_31292A0 *)Method_System_Linq_Enumerable_OrderBy_GalleryResourceEntity__int___);
    v26 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToList_object_(
                                                           v25,
                                                           (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
    if ( !v10 )
      sub_1C3E7C0(v26, v26);
    System_Collections_Generic_List_object___AddRange(
      v10,
      v26,
      (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_GalleryResourceEntity__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v56,
    (const MethodInfo_353BE30 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( !v10 )
    goto LABEL_44;
  if ( v10->fields._size >= 1 )
  {
    v27 = 0;
    v28 = -1;
    while ( 1 )
    {
      Item = (GalleryResourceEntity_o *)System_Collections_Generic_List_object___get_Item(
                                          v10,
                                          v27,
                                          (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_GalleryResourceEntity__get_Item__);
      v30 = (GalleryFullScreenListViewItem_o *)sub_1C3E7B0(GalleryFullScreenListViewItem_TypeInfo);
      GalleryFullScreenListViewItem___ctor(v30, v27, Item, v31);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_44;
      items = itemList->fields._items;
      v35 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        goto LABEL_44;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v30,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v37[4] = (Il2CppClass *)v30;
        sub_1C3E508((CGThumbnailListItem_o *)(v37 + 4), (int32_t)v30, v32, v33);
      }
      if ( !Item )
        goto LABEL_44;
      if ( Item->fields.galleryId == selectGalleryId && v28 <= -1 )
        v28 = v27;
      if ( ++v27 >= v10->fields._size )
        goto LABEL_35;
    }
  }
  v28 = -1;
LABEL_35:
  itemList = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(GalleryFullScreenListViewManager_o *, const MethodInfo *))this->klass->vtable._7_GetDragRoot.methodPtr)(
                                                            this,
                                                            this->klass->vtable._7_GetDragRoot.method);
  if ( !itemList )
    goto LABEL_44;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)itemList,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
  this->fields.backMask = (struct UIDragDropListViewBackMask_o *)Component_object;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.backMask, (int32_t)Component_object, v40, v41);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
  backMask = this->fields.backMask;
  v43 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v43, (Il2CppObject *)this, Method_GalleryFullScreenListViewManager_OnClickMaxim__, 0);
  v44 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v44, (Il2CppObject *)this, Method_GalleryFullScreenListViewManager_OnDragUpdate__, 0);
  if ( !backMask )
    goto LABEL_44;
  UIDragDropListViewBackMask__DragStartMultiTouch(backMask, v43, v44, 0);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  GalleryFullScreenListViewManager__SetEnableScroll(this, 1, 0, 0, v45);
  v46 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v46, (Il2CppObject *)this, Method_GalleryFullScreenListViewManager_AfterScrollCallback__, 0);
  this->fields.callbackAfterScroll = v46;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackAfterScroll, (int32_t)v46, v47, v48);
  ListViewManager__JumpItem((ListViewManager_o *)this, v28, 0);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
  this->fields.currentCenterIndex = v28;
  if ( !itemList )
LABEL_44:
    sub_1C3E7C0(itemList, v14);
  ComponentInChildren_object__51315876 = UnityEngine_Component__GetComponentInChildren_object__51315876(
                                           (UnityEngine_Component_o *)itemList,
                                           (const MethodInfo_30F04A4 *)Method_UnityEngine_Component_GetComponentInChildren_UICenterOnChild___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object__51315876, 0, 0) )
  {
    v50 = (SpringPanel_OnFinished_o *)sub_1C3E7B0(SpringPanel_OnFinished_TypeInfo);
    SpringPanel_OnFinished___ctor(
      v50,
      (Il2CppObject *)this,
      Method_GalleryFullScreenListViewManager_OnFinishedChange__,
      0);
    if ( !ComponentInChildren_object__51315876 )
      goto LABEL_44;
    ComponentInChildren_object__51315876[2].monitor = v50;
    sub_1C3E508((CGThumbnailListItem_o *)&ComponentInChildren_object__51315876[2].monitor, (int32_t)v50, v51, v52);
  }
  ActionExtensions__Call(action, 0);
}


void GalleryFullScreenListViewManager__CreateViewerObj(
        GalleryFullScreenListViewManager_o *this,
        GalleryFullScreenListViewObject_o *galleryFullScreenListViewObject,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  GalleryFullScreenPanel_o *galleryFullScreenPanel; // x0
  GalleryFullScreenListViewObject_o *actionObject; // x20
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x4

  if ( (byte_4C51D32 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_GalleryFullScreenListViewManager__CreateViewerObj_b__29_0__);
    byte_4C51D32 = 1;
  }
  this->fields.actionObject = galleryFullScreenListViewObject;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.actionObject,
    (int32_t)galleryFullScreenListViewObject,
    (int32_t)method,
    v3);
  galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
  if ( !galleryFullScreenPanel
    || (GalleryFullScreenPanel__SetDispType(galleryFullScreenPanel, 2, 0),
        actionObject = this->fields.actionObject,
        v9 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo),
        System_Action___ctor(
          v9,
          (Il2CppObject *)this,
          Method_GalleryFullScreenListViewManager__CreateViewerObj_b__29_0__,
          0),
        !actionObject) )
  {
    sub_1C3E7C0(galleryFullScreenPanel, v6);
  }
  GalleryFullScreenListViewObject__Init(actionObject, 4, 0, v9, v10);
}


void GalleryFullScreenListViewManager__DragEnd(GalleryFullScreenListViewManager_o *this, const MethodInfo *method)
{
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v4; // x21
  EventDelegate_Callback_o *v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C51D39 & 1) == 0 )
  {
    sub_1C3E564(&EventDelegate_Callback_TypeInfo);
    sub_1C3E564(&Method_GalleryFullScreenListViewManager_OnClickMaxim__);
    sub_1C3E564(&Method_GalleryFullScreenListViewManager_OnDragUpdate__);
    byte_4C51D39 = 1;
  }
  ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0);
  backMask = this->fields.backMask;
  v4 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v4, (Il2CppObject *)this, Method_GalleryFullScreenListViewManager_OnClickMaxim__, 0);
  v5 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v5, (Il2CppObject *)this, Method_GalleryFullScreenListViewManager_OnDragUpdate__, 0);
  if ( !backMask )
    sub_1C3E7C0(v6, v7);
  UIDragDropListViewBackMask__DragEndMultiTouch(backMask, v4, v5, 0);
}


void GalleryFullScreenListViewManager__GetDiffResourcePageInfo(
        GalleryFullScreenListViewManager_o *this,
        int32_t *diffCount,
        int32_t *index,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t CenterIndex; // w0
  System_Collections_Generic_List_object__o *Item; // x0
  GalleryFullScreenListViewItem_c *v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  __int64 naturalAligment; // x9
  _DWORD *monitor; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v14; // x0
  GalleryFullScreenListViewManager___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x23
  System_Func_object__object__o *_9__35_0; // x24
  Il2CppObject *v18; // x25
  struct GalleryFullScreenListViewManager___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x23
  System_Func_object__bool__o *v23; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x22
  GalleryFullScreenListViewManager___c_c *v26; // x0
  System_Func_object__int__o *_9__35_2; // x20
  Il2CppObject *v28; // x23
  struct GalleryFullScreenListViewManager___c_StaticFields *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  GalleryFullScreenListViewManager_o *v33; // x0
  const MethodInfo *v34; // x1

  if ( (byte_4C51D36 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Cast_GalleryFullScreenListViewItem___);
    sub_1C3E564(&Method_System_Linq_Enumerable_OrderBy_GalleryResourceEntity__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_GalleryFullScreenListViewItem__GalleryResourceEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_GalleryResourceEntity___);
    sub_1C3E564(&System_Func_GalleryResourceEntity__int__TypeInfo);
    sub_1C3E564(&System_Func_GalleryResourceEntity__bool__TypeInfo);
    sub_1C3E564(&System_Func_GalleryFullScreenListViewItem__GalleryResourceEntity__TypeInfo);
    sub_1C3E564(&GalleryFullScreenListViewItem_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_GalleryResourceEntity__IndexOf__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GalleryResourceEntity__get_Count__);
    sub_1C3E564(&Method_GalleryFullScreenListViewManager___c__GetDiffResourcePageInfo_b__35_0__);
    sub_1C3E564(&Method_GalleryFullScreenListViewManager___c__GetDiffResourcePageInfo_b__35_2__);
    sub_1C3E564(&Method_GalleryFullScreenListViewManager___c__DisplayClass35_0__GetDiffResourcePageInfo_b__1__);
    sub_1C3E564(&GalleryFullScreenListViewManager___c__DisplayClass35_0_TypeInfo);
    sub_1C3E564(&GalleryFullScreenListViewManager___c_TypeInfo);
    byte_4C51D36 = 1;
  }
  v7 = sub_1C3E7B0(GalleryFullScreenListViewManager___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *diffCount = 0;
  *index = 0;
  CenterIndex = ListViewManager__GetCenterIndex((ListViewManager_o *)this, 0);
  if ( (CenterIndex & 0x80000000) == 0 )
  {
    Item = (System_Collections_Generic_List_object__o *)ListViewManager__GetItem(
                                                          (ListViewManager_o *)this,
                                                          CenterIndex,
                                                          0);
    if ( !Item )
      goto LABEL_25;
    v11 = Item;
    v10 = GalleryFullScreenListViewItem_TypeInfo;
    naturalAligment = GalleryFullScreenListViewItem_TypeInfo->_2.naturalAligment;
    if ( Item->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (GalleryFullScreenListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] != GalleryFullScreenListViewItem_TypeInfo )
    {
      v33 = (GalleryFullScreenListViewManager_o *)sub_1C3EA80(Item);
      GalleryFullScreenListViewManager__get_CenterPosition(v33, v34);
      return;
    }
    monitor = Item[3].monitor;
    if ( !monitor || !v7 )
      goto LABEL_25;
    *(_DWORD *)(v7 + 16) = monitor[4];
    v14 = System_Linq_Enumerable__Cast_object_(
            (System_Collections_IEnumerable_o *)this->fields.itemList,
            (const MethodInfo_3108224 *)Method_System_Linq_Enumerable_Cast_GalleryFullScreenListViewItem___);
    v15 = GalleryFullScreenListViewManager___c_TypeInfo;
    v16 = (System_Collections_Generic_IEnumerable_TSource__o *)v14;
    if ( !GalleryFullScreenListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GalleryFullScreenListViewManager___c_TypeInfo);
      v15 = GalleryFullScreenListViewManager___c_TypeInfo;
    }
    _9__35_0 = (System_Func_object__object__o *)v15->static_fields->__9__35_0;
    if ( !_9__35_0 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = GalleryFullScreenListViewManager___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v15->static_fields->__9;
      _9__35_0 = (System_Func_object__object__o *)sub_1C3E7B0(System_Func_GalleryFullScreenListViewItem__GalleryResourceEntity__TypeInfo);
      System_Func_object__object____ctor(
        _9__35_0,
        v18,
        Method_GalleryFullScreenListViewManager___c__GetDiffResourcePageInfo_b__35_0__,
        0);
      static_fields = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__35_0 = (struct System_Func_GalleryFullScreenListViewItem__GalleryResourceEntity__o *)_9__35_0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__35_0, (int32_t)_9__35_0, v20, v21);
    }
    v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v16,
                                                                 (System_Func_TSource__TResult__o *)_9__35_0,
                                                                 (const MethodInfo_3130218 *)Method_System_Linq_Enumerable_Select_GalleryFullScreenListViewItem__GalleryResourceEntity___);
    v23 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_GalleryResourceEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v23,
      (Il2CppObject *)v7,
      Method_GalleryFullScreenListViewManager___c__DisplayClass35_0__GetDiffResourcePageInfo_b__1__,
      0);
    v24 = System_Linq_Enumerable__Where_object_(
            v22,
            (System_Func_TSource__bool__o *)v23,
            (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_GalleryResourceEntity___);
    Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                          v24,
                                                          (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
    if ( !Item )
      goto LABEL_25;
    v25 = (System_Collections_Generic_IEnumerable_TSource__o *)Item;
    *diffCount = Item->fields._size;
    v26 = GalleryFullScreenListViewManager___c_TypeInfo;
    if ( !GalleryFullScreenListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GalleryFullScreenListViewManager___c_TypeInfo);
      v26 = GalleryFullScreenListViewManager___c_TypeInfo;
    }
    _9__35_2 = (System_Func_object__int__o *)v26->static_fields->__9__35_2;
    if ( !_9__35_2 )
    {
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = GalleryFullScreenListViewManager___c_TypeInfo;
      }
      v28 = (Il2CppObject *)v26->static_fields->__9;
      _9__35_2 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_GalleryResourceEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__35_2,
        v28,
        Method_GalleryFullScreenListViewManager___c__GetDiffResourcePageInfo_b__35_2__,
        0);
      v29 = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
      v29->__9__35_2 = (struct System_Func_GalleryResourceEntity__int__o *)_9__35_2;
      sub_1C3E508((CGThumbnailListItem_o *)&v29->__9__35_2, (int32_t)_9__35_2, v30, v31);
    }
    v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 v25,
                                                                 (System_Func_TSource__TKey__o *)_9__35_2,
                                                                 (const MethodInfo_31292A0 *)Method_System_Linq_Enumerable_OrderBy_GalleryResourceEntity__int___);
    Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                          v32,
                                                          (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
    if ( !Item )
LABEL_25:
      sub_1C3E7C0(Item, v10);
    *index = System_Collections_Generic_List_object___IndexOf(
               Item,
               (Il2CppObject *)v11[3].monitor,
               (const MethodInfo_37B6100 *)Method_System_Collections_Generic_List_GalleryResourceEntity__IndexOf__);
  }
}


System_Collections_Generic_List_GalleryResourceEntity__o *GalleryFullScreenListViewManager__GetInRangeGalleryResourceList(
        GalleryFullScreenListViewManager_o *this,
        int32_t loadRange,
        const MethodInfo *method)
{
  System_Collections_IEnumerable_o *itemList; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v6; // x0
  GalleryFullScreenListViewManager___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x21
  System_Func_object__int__o *_9__18_0; // x22
  Il2CppObject *v10; // x23
  struct GalleryFullScreenListViewManager___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v14; // x0
  GalleryFullScreenListViewManager___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x21
  System_Func_object__object__o *_9__18_1; // x22
  Il2CppObject *v18; // x23
  struct GalleryFullScreenListViewManager___c_StaticFields *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Collections_Generic_List_object__o *v23; // x21
  int32_t CenterIndex; // w20
  __int64 v25; // x0
  __int64 v26; // x1
  int32_t v27; // w22
  int32_t v28; // w0
  System_Collections_Generic_List_T__o *Range; // x0
  GalleryFullScreenListViewManager___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x19
  System_Func_object__bool__o *_9__18_2; // x20
  Il2CppObject *v33; // x21
  struct GalleryFullScreenListViewManager___c_StaticFields *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Collections_Generic_List_object__o *v39; // x19

  if ( (byte_4C51D29 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Cast_GalleryFullScreenListViewItem___);
    sub_1C3E564(&Method_System_Linq_Enumerable_OrderBy_GalleryFullScreenListViewItem__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_GalleryFullScreenListViewItem__GalleryResourceEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_GalleryResourceEntity___);
    sub_1C3E564(&System_Func_GalleryResourceEntity__bool__TypeInfo);
    sub_1C3E564(&System_Func_GalleryFullScreenListViewItem__GalleryResourceEntity__TypeInfo);
    sub_1C3E564(&System_Func_GalleryFullScreenListViewItem__int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_GalleryResourceEntity__GetRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GalleryResourceEntity___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GalleryResourceEntity__get_Count__);
    sub_1C3E564(&System_Collections_Generic_List_GalleryResourceEntity__TypeInfo);
    sub_1C3E564(&System_Math_TypeInfo);
    sub_1C3E564(&Method_GalleryFullScreenListViewManager___c__GetInRangeGalleryResourceList_b__18_0__);
    sub_1C3E564(&Method_GalleryFullScreenListViewManager___c__GetInRangeGalleryResourceList_b__18_1__);
    sub_1C3E564(&Method_GalleryFullScreenListViewManager___c__GetInRangeGalleryResourceList_b__18_2__);
    sub_1C3E564(&GalleryFullScreenListViewManager___c_TypeInfo);
    byte_4C51D29 = 1;
  }
  itemList = (System_Collections_IEnumerable_o *)this->fields.itemList;
  if ( itemList )
  {
    v6 = System_Linq_Enumerable__Cast_object_(
           itemList,
           (const MethodInfo_3108224 *)Method_System_Linq_Enumerable_Cast_GalleryFullScreenListViewItem___);
    v7 = GalleryFullScreenListViewManager___c_TypeInfo;
    v8 = (System_Collections_Generic_IEnumerable_TSource__o *)v6;
    if ( !GalleryFullScreenListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GalleryFullScreenListViewManager___c_TypeInfo);
      v7 = GalleryFullScreenListViewManager___c_TypeInfo;
    }
    _9__18_0 = (System_Func_object__int__o *)v7->static_fields->__9__18_0;
    if ( !_9__18_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = GalleryFullScreenListViewManager___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v7->static_fields->__9;
      _9__18_0 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_GalleryFullScreenListViewItem__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__18_0,
        v10,
        Method_GalleryFullScreenListViewManager___c__GetInRangeGalleryResourceList_b__18_0__,
        0);
      static_fields = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__18_0 = (struct System_Func_GalleryFullScreenListViewItem__int__o *)_9__18_0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__18_0, (int32_t)_9__18_0, v12, v13);
    }
    v14 = System_Linq_Enumerable__OrderBy_object__int_(
            v8,
            (System_Func_TSource__TKey__o *)_9__18_0,
            (const MethodInfo_31292A0 *)Method_System_Linq_Enumerable_OrderBy_GalleryFullScreenListViewItem__int___);
    v15 = GalleryFullScreenListViewManager___c_TypeInfo;
    v16 = (System_Collections_Generic_IEnumerable_TSource__o *)v14;
    if ( !GalleryFullScreenListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GalleryFullScreenListViewManager___c_TypeInfo);
      v15 = GalleryFullScreenListViewManager___c_TypeInfo;
    }
    _9__18_1 = (System_Func_object__object__o *)v15->static_fields->__9__18_1;
    if ( !_9__18_1 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = GalleryFullScreenListViewManager___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v15->static_fields->__9;
      _9__18_1 = (System_Func_object__object__o *)sub_1C3E7B0(System_Func_GalleryFullScreenListViewItem__GalleryResourceEntity__TypeInfo);
      System_Func_object__object____ctor(
        _9__18_1,
        v18,
        Method_GalleryFullScreenListViewManager___c__GetInRangeGalleryResourceList_b__18_1__,
        0);
      v19 = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
      v19->__9__18_1 = (struct System_Func_GalleryFullScreenListViewItem__GalleryResourceEntity__o *)_9__18_1;
      sub_1C3E508((CGThumbnailListItem_o *)&v19->__9__18_1, (int32_t)_9__18_1, v20, v21);
    }
    v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v16,
                                                                 (System_Func_TSource__TResult__o *)_9__18_1,
                                                                 (const MethodInfo_3130218 *)Method_System_Linq_Enumerable_Select_GalleryFullScreenListViewItem__GalleryResourceEntity___);
    v23 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                         v22,
                                                         (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
    CenterIndex = ListViewManager__GetCenterIndex((ListViewManager_o *)this, 0);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v25 = System_Math__Max_65159900(CenterIndex - loadRange, 0, 0);
    if ( !v23 )
      sub_1C3E7C0(v25, v26);
    v27 = v25;
    v28 = System_Math__Min_65160228(CenterIndex + loadRange, v23->fields._size - 1, 0);
    Range = System_Collections_Generic_List_object___GetRange(
              v23,
              v27,
              v28 - v27 + 1,
              (const MethodInfo_37B6030 *)Method_System_Collections_Generic_List_GalleryResourceEntity__GetRange__);
    v30 = GalleryFullScreenListViewManager___c_TypeInfo;
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)Range;
    if ( !GalleryFullScreenListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GalleryFullScreenListViewManager___c_TypeInfo);
      v30 = GalleryFullScreenListViewManager___c_TypeInfo;
    }
    _9__18_2 = (System_Func_object__bool__o *)v30->static_fields->__9__18_2;
    if ( !_9__18_2 )
    {
      if ( !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        v30 = GalleryFullScreenListViewManager___c_TypeInfo;
      }
      v33 = (Il2CppObject *)v30->static_fields->__9;
      _9__18_2 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_GalleryResourceEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__18_2,
        v33,
        Method_GalleryFullScreenListViewManager___c__GetInRangeGalleryResourceList_b__18_2__,
        0);
      v34 = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
      v34->__9__18_2 = (struct System_Func_GalleryResourceEntity__bool__o *)_9__18_2;
      sub_1C3E508((CGThumbnailListItem_o *)&v34->__9__18_2, (int32_t)_9__18_2, v35, v36);
    }
    v37 = System_Linq_Enumerable__Where_object_(
            v31,
            (System_Func_TSource__bool__o *)_9__18_2,
            (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_GalleryResourceEntity___);
    return (System_Collections_Generic_List_GalleryResourceEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                         v37,
                                                                         (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
  }
  else
  {
    v39 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_GalleryResourceEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v39,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_GalleryResourceEntity___ctor__);
    return (System_Collections_Generic_List_GalleryResourceEntity__o *)v39;
  }
}


void GalleryFullScreenListViewManager__InitCenterIndex(
        GalleryFullScreenListViewManager_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.currentCenterIndex = -1;
}


void GalleryFullScreenListViewManager__InitObjInLoadRange(
        GalleryFullScreenListViewManager_o *this,
        bool isCenterNoTarget,
        const MethodInfo *method)
{
  int32_t CenterIndex; // w0
  int32_t loadRangeFromCenter; // w22
  int32_t v7; // w21
  Il2CppObject *Item; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int32_t v11; // w22
  System_Collections_Generic_List_object__o *v12; // x8
  int32_t v13; // w23
  int32_t v14; // w24
  const MethodInfo *v15; // x4
  __int64 naturalAligment; // x10

  if ( (byte_4C51D30 & 1) == 0 )
  {
    sub_1C3E564(&GalleryFullScreenListViewObject_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C3E564(&System_Math_TypeInfo);
    byte_4C51D30 = 1;
  }
  CenterIndex = ListViewManager__GetCenterIndex((ListViewManager_o *)this, 0);
  loadRangeFromCenter = this->fields.loadRangeFromCenter;
  v7 = CenterIndex;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  Item = (Il2CppObject *)System_Math__Max_65159900(v7 - loadRangeFromCenter, 0, 0);
  itemList = this->fields.itemList;
  if ( !itemList
    || (v11 = (int)Item,
        Item = (Il2CppObject *)System_Math__Min_65160228(
                                 this->fields.loadRangeFromCenter + v7,
                                 itemList->fields._size - 1,
                                 0),
        (v12 = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0) )
  {
LABEL_20:
    sub_1C3E7C0(Item, v9);
  }
  v13 = (int)Item;
  v14 = 0;
  while ( v14 < v12->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v12,
             v14,
             (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      Item = (Il2CppObject *)Item[7].klass;
      if ( Item )
      {
        naturalAligment = GalleryFullScreenListViewObject_TypeInfo->_2.naturalAligment;
        if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (GalleryFullScreenListViewObject_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == GalleryFullScreenListViewObject_TypeInfo )
        {
          if ( v11 > v14 || v14 > v13 )
          {
            LOBYTE(Item[7].klass) = 0;
          }
          else if ( v7 != v14 || !isCenterNoTarget )
          {
            GalleryFullScreenListViewObject__Init((GalleryFullScreenListViewObject_o *)Item, 2, 0, 0, v15);
          }
        }
      }
      v12 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v14;
      if ( v12 )
        continue;
    }
    goto LABEL_20;
  }
}


bool GalleryFullScreenListViewManager__IsNonDisp(
        GalleryFullScreenListViewManager_o *this,
        bool isLoadFromThumbnail,
        const MethodInfo *method)
{
  UnityEngine_Object_o *galleryFullScreenPanel; // x21
  __int64 v6; // x1
  GalleryFullScreenPanel_o *v7; // x0
  bool v8; // w0
  bool v9; // w8

  if ( (byte_4C51D2E & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C51D2E = 1;
  }
  galleryFullScreenPanel = (UnityEngine_Object_o *)this->fields.galleryFullScreenPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(galleryFullScreenPanel, 0, 0) )
    return !isLoadFromThumbnail;
  v7 = this->fields.galleryFullScreenPanel;
  if ( !v7 )
    sub_1C3E7C0(0, v6);
  v8 = GalleryFullScreenPanel__CheckSameDispType(v7, 0, 0);
  v9 = 0;
  if ( v8 )
    return !isLoadFromThumbnail;
  return v9;
}


void GalleryFullScreenListViewManager__LoadAssetCache(
        GalleryFullScreenListViewManager_o *this,
        int32_t loadRange,
        System_Action_o *endCallback,
        bool isLoadFromThumbnail,
        const MethodInfo *method)
{
  __int64 v9; // x20
  System_Collections_Generic_List_object__o *IsNullOrEmpty; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  System_Collections_Generic_HashSet_T__o *v17; // x22
  const MethodInfo *v18; // x2
  System_Collections_ICollection_o *v19; // x23
  __int64 v20; // x1
  System_String_o *AssetPath; // x23
  _BOOL8 isExistAssetStorage; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_object__o *v24; // x22
  System_Collections_Generic_List_object__o *v25; // x23
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *current; // x24
  _BOOL8 v29; // x0
  __int64 v30; // x1
  Il2CppObject *v31; // x26
  _BOOL8 v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  Il2CppObject *monitor; // x1
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  const MethodInfo *v40; // x2
  System_Object_array *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_String_array *v44; // x19
  System_Action_o *v45; // x21
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4C51D2A & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GalleryResourceEntity__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GalleryResourceEntity__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GalleryResourceEntity__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_string__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_1C3E564(&System_Collections_Generic_HashSet_string__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GalleryResourceEntity__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C3E564(&Method_GalleryFullScreenListViewManager___c__DisplayClass19_0__LoadAssetCache_b__0__);
    sub_1C3E564(&GalleryFullScreenListViewManager___c__DisplayClass19_0_TypeInfo);
    byte_4C51D2A = 1;
  }
  memset(&v49, 0, sizeof(v49));
  memset(&i, 0, sizeof(i));
  memset(&v47, 0, sizeof(v47));
  v9 = sub_1C3E7B0(GalleryFullScreenListViewManager___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_51;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 40) = endCallback;
  *(_BYTE *)(v9 + 32) = isLoadFromThumbnail;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 40), (int32_t)endCallback, v14, v15);
  if ( GalleryFullScreenListViewManager__IsNonDisp(this, *(_BYTE *)(v9 + 32), v16) )
    goto LABEL_43;
  if ( loadRange < 0 )
    loadRange = this->fields.loadRangeFromCenter;
  v17 = (System_Collections_Generic_HashSet_T__o *)sub_1C3E7B0(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v17,
    (const MethodInfo_366C4CC *)Method_System_Collections_Generic_HashSet_string___ctor__);
  v19 = (System_Collections_ICollection_o *)GalleryFullScreenListViewManager__GetInRangeGalleryResourceList(
                                              this,
                                              loadRange,
                                              v18);
  IsNullOrEmpty = (System_Collections_Generic_List_object__o *)BasicHelper__IsNullOrEmpty(v19, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    goto LABEL_43;
  if ( !v19 )
    goto LABEL_51;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    (System_Collections_Generic_List_object__o *)v19,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_GalleryResourceEntity__GetEnumerator__);
  v49 = v46;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v49,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_GalleryResourceEntity__MoveNext__) )
  {
    if ( !v49.fields._current )
      sub_1C3E7C0(0, v20);
    AssetPath = GalleryResourceEntity__GetAssetPath((GalleryResourceEntity_o *)v49.fields._current, 0);
    if ( !System_String__IsNullOrEmpty(AssetPath, 0) )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      isExistAssetStorage = AssetManager__isExistAssetStorage(AssetPath, 0);
      if ( isExistAssetStorage )
      {
        if ( !v17 )
          sub_1C3E7C0(isExistAssetStorage, v23);
        System_Collections_Generic_HashSet_object___Add(
          v17,
          (Il2CppObject *)AssetPath,
          (const MethodInfo_366D6B0 *)Method_System_Collections_Generic_HashSet_string__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v49,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_GalleryResourceEntity__Dispose__);
  v24 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)v17,
                                                       (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_string___);
  v25 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_string___ctor__);
  IsNullOrEmpty = (System_Collections_Generic_List_object__o *)this->fields.nowLoadingAssetNameList;
  if ( !IsNullOrEmpty )
    goto LABEL_51;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    IsNullOrEmpty,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  i = v46;
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v26 )
      break;
    if ( !v24 )
      sub_1C3E7C0(v26, v27);
    current = i.fields._current;
    if ( System_Collections_Generic_List_object___Contains(
           v24,
           i.fields._current,
           (const MethodInfo_37B57F0 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      System_Collections_Generic_List_object___Remove(
        v24,
        current,
        (const MethodInfo_37B6988 *)Method_System_Collections_Generic_List_string__Remove__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  IsNullOrEmpty = (System_Collections_Generic_List_object__o *)this->fields.cacheAssetDataList;
  if ( !IsNullOrEmpty )
    goto LABEL_51;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    IsNullOrEmpty,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
  v47 = v46;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    if ( !v29 )
      break;
    v31 = v47.fields._current;
    if ( v47.fields._current )
    {
      if ( !v24 )
        sub_1C3E7C0(v29, v30);
      v32 = System_Collections_Generic_List_object___Contains(
              v24,
              (Il2CppObject *)v47.fields._current[1].monitor,
              (const MethodInfo_37B57F0 *)Method_System_Collections_Generic_List_string__Contains__);
      monitor = (Il2CppObject *)v31[1].monitor;
      if ( v32 )
      {
        System_Collections_Generic_List_object___Remove(
          v24,
          monitor,
          (const MethodInfo_37B6988 *)Method_System_Collections_Generic_List_string__Remove__);
      }
      else
      {
        if ( !v25 )
          sub_1C3E7C0(v32, monitor);
        items = v25->fields._items;
        v37 = Method_System_Collections_Generic_List_string__Add__;
        ++v25->fields._version;
        if ( !items )
          sub_1C3E7C0(v32, monitor);
        size = v25->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v25,
            monitor,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &items->obj.klass + size;
          v25->fields._size = size + 1;
          v39[4] = (Il2CppClass *)monitor;
          sub_1C3E508((CGThumbnailListItem_o *)(v39 + 4), (int32_t)monitor, v33, v34);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
  if ( !v25 )
    goto LABEL_51;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    v25,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  for ( i = v46;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
        GalleryFullScreenListViewManager__ReleaseResourceCache_33194476(this, (System_String_o *)i.fields._current, v40) )
  {
    ;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  IsNullOrEmpty = (System_Collections_Generic_List_object__o *)this->fields.nowLoadingAssetNameList;
  if ( !IsNullOrEmpty
    || (System_Collections_Generic_List_object___AddRange(
          IsNullOrEmpty,
          (System_Collections_Generic_IEnumerable_T__o *)v24,
          (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_string__AddRange__),
        !v24) )
  {
LABEL_51:
    sub_1C3E7C0(IsNullOrEmpty, v11);
  }
  v41 = System_Collections_Generic_List_object___ToArray(
          v24,
          (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_string__ToArray__);
  *(_QWORD *)(v9 + 24) = v41;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 24), (int32_t)v41, v42, v43);
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v9 + 24), 0) )
  {
LABEL_43:
    ActionExtensions__Call(*(System_Action_o **)(v9 + 40), 0);
    return;
  }
  v44 = *(System_String_array **)(v9 + 24);
  v45 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(
    v45,
    (Il2CppObject *)v9,
    Method_GalleryFullScreenListViewManager___c__DisplayClass19_0__LoadAssetCache_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_40587784(v44, v45, 5, 0);
}


void GalleryFullScreenListViewManager__LoadEnd(
        GalleryFullScreenListViewManager_o *this,
        System_String_array *assetLoadNames,
        bool isLoadFromThumbnail,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *nowLoadingAssetNameList; // x0
  Il2CppObject *current; // x23
  _BOOL8 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  __int64 v19; // x1
  struct System_Collections_Generic_List_string__o *v20; // x0
  struct System_Collections_Generic_List_AssetData__o *cacheAssetDataList; // x22
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x1
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C51D2B & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Contains_string___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_AssetData__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_string__TypeInfo);
    byte_4C51D2B = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.nowLoadingAssetNameList, 0) )
  {
    v7 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_string___ctor__);
    nowLoadingAssetNameList = (System_Collections_Generic_List_object__o *)this->fields.nowLoadingAssetNameList;
    if ( !nowLoadingAssetNameList )
      goto LABEL_28;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v24,
      nowLoadingAssetNameList,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    i = v24;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = i.fields._current;
      v11 = System_Linq_Enumerable__Contains_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)assetLoadNames,
              i.fields._current,
              (const MethodInfo_3116DF0 *)Method_System_Linq_Enumerable_Contains_string___);
      if ( v11 )
      {
        if ( !v7 )
          sub_1C3E7C0(v11, v12);
        items = v7->fields._items;
        v16 = Method_System_Collections_Generic_List_string__Add__;
        ++v7->fields._version;
        if ( !items )
          sub_1C3E7C0(v11, v12);
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            current,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v18[4] = (Il2CppClass *)current;
          sub_1C3E508((CGThumbnailListItem_o *)(v18 + 4), (int32_t)current, v13, v14);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    if ( !v7 )
      goto LABEL_28;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v24,
      v7,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    for ( i = v24;
          System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
          System_Collections_Generic_List_object___Remove(
            (System_Collections_Generic_List_object__o *)v20,
            i.fields._current,
            (const MethodInfo_37B6988 *)Method_System_Collections_Generic_List_string__Remove__) )
    {
      v20 = this->fields.nowLoadingAssetNameList;
      if ( !v20 )
        sub_1C3E7C0(0, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  }
  cacheAssetDataList = this->fields.cacheAssetDataList;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  nowLoadingAssetNameList = (System_Collections_Generic_List_object__o *)AssetManager__getAssetStorage_40589144(
                                                                           assetLoadNames,
                                                                           0);
  if ( !cacheAssetDataList )
LABEL_28:
    sub_1C3E7C0(nowLoadingAssetNameList, v8);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)cacheAssetDataList,
    (System_Collections_Generic_IEnumerable_T__o *)nowLoadingAssetNameList,
    (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_AssetData__AddRange__);
  if ( GalleryFullScreenListViewManager__IsNonDisp(this, isLoadFromThumbnail, v22) )
  {
    *(_QWORD *)&this->fields.currentCenterIndex = -1;
    GalleryFullScreenListViewManager__ReleaseResourceCache(this, v23);
  }
}


void GalleryFullScreenListViewManager__OnClickBack(GalleryFullScreenListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  struct ListViewIndicator_o *indicator; // x8
  __int64 naturalAligment; // x11
  int klass; // w8
  bool v7; // w1
  GalleryFullScreenListViewManager_o *v8; // x0

  if ( (byte_4C51D31 & 1) == 0 )
  {
    sub_1C3E564(&GalleryFullScreenListViewIndicator_TypeInfo);
    byte_4C51D31 = 1;
  }
  indicator = this->fields.indicator;
  if ( indicator )
  {
    naturalAligment = GalleryFullScreenListViewIndicator_TypeInfo->_2.naturalAligment;
    if ( indicator->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (GalleryFullScreenListViewIndicator_c *)indicator->klass->_2.typeHierarchy[naturalAligment - 1] == GalleryFullScreenListViewIndicator_TypeInfo )
    {
      klass = (int)indicator[3].klass;
      if ( (unsigned int)(klass - 1) < 2 )
      {
        v8 = this;
        v7 = 0;
      }
      else
      {
        if ( klass && klass != 3 )
          return;
        v7 = 1;
        v8 = this;
      }
      GalleryFullScreenListViewManager__SetEnableScroll(v8, v7, 0, 0, v2);
    }
  }
}


void GalleryFullScreenListViewManager__OnClickListView(
        GalleryFullScreenListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void GalleryFullScreenListViewManager__OnClickMaxim(GalleryFullScreenListViewManager_o *this, const MethodInfo *method)
{
  GalleryFullScreenPanel_o *galleryFullScreenPanel; // x0
  struct ListViewItem_o *centerItem; // x20
  UnityEngine_Object_o *viewObject; // x19
  struct ListViewObject_o *v6; // x8
  __int64 naturalAligment; // x11
  GalleryFullScreenListViewObject_o *v8; // x20
  UnityEngine_GameObject_o *dragObject; // x19
  const MethodInfo *v10; // x1
  UnityEngine_Vector3_o DispObjScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C51D33 & 1) == 0 )
  {
    sub_1C3E564(&GalleryFullScreenListViewObject_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C51D33 = 1;
  }
  galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
  if ( !galleryFullScreenPanel )
    sub_1C3E7C0(0, method);
  GalleryFullScreenPanel__SetDispType(galleryFullScreenPanel, 2, 0);
  centerItem = this->fields.centerItem;
  if ( centerItem )
  {
    viewObject = (UnityEngine_Object_o *)centerItem->fields.viewObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
    {
      v6 = centerItem->fields.viewObject;
      if ( v6 )
      {
        naturalAligment = GalleryFullScreenListViewObject_TypeInfo->_2.naturalAligment;
        if ( v6->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        {
          v8 = (GalleryFullScreenListViewObject_c *)v6->klass->_2.typeHierarchy[naturalAligment - 1] == GalleryFullScreenListViewObject_TypeInfo
             ? (GalleryFullScreenListViewObject_o *)centerItem->fields.viewObject
             : 0LL;
          if ( v8 )
          {
            dragObject = v8->fields.dragObject;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)dragObject, 0, 0) )
            {
              DispObjScale = GalleryFullScreenListViewObject__GetDispObjScale(v8, v10);
              GameObjectExtensions__SetLocalScale(dragObject, DispObjScale, 0);
              if ( !byte_4C506A1 )
              {
                sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
                byte_4C506A1 = 1;
              }
              GameObjectExtensions__SetLocalPosition(
                dragObject,
                UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                0);
            }
          }
        }
      }
    }
  }
}


void GalleryFullScreenListViewManager__OnDragUpdate(GalleryFullScreenListViewManager_o *this, const MethodInfo *method)
{
  GalleryFullScreenPanel_o *galleryFullScreenPanel; // x0
  bool IsAbleToPinch; // w20
  System_Action_o *v5; // x21
  System_Action_o *v6; // x22
  const MethodInfo *v7; // x3

  if ( (byte_4C51D34 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_GalleryFullScreenListViewManager__OnDragUpdate_b__31_0__);
    sub_1C3E564(&Method_GalleryFullScreenListViewManager__OnDragUpdate_b__31_1__);
    byte_4C51D34 = 1;
  }
  galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
  if ( !galleryFullScreenPanel )
    goto LABEL_8;
  if ( GalleryFullScreenPanel__IsAbleToPinch(galleryFullScreenPanel, 0) )
  {
    galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
    if ( galleryFullScreenPanel )
    {
      IsAbleToPinch = GalleryFullScreenPanel__IsAbleToPinch(galleryFullScreenPanel, 0);
      v5 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(v5, (Il2CppObject *)this, Method_GalleryFullScreenListViewManager__OnDragUpdate_b__31_0__, 0);
      v6 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(v6, (Il2CppObject *)this, Method_GalleryFullScreenListViewManager__OnDragUpdate_b__31_1__, 0);
      GalleryFullScreenDragProcess__OnDragUpdate(IsAbleToPinch, v5, v6, v7);
      return;
    }
LABEL_8:
    sub_1C3E7C0(galleryFullScreenPanel, method);
  }
}


void GalleryFullScreenListViewManager__OnModifyViewerCenter(
        GalleryFullScreenListViewManager_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *centerItem; // x23
  int32_t currentCenterIndex; // w1
  ListViewItem_o *Item; // x0
  ListViewItem_o *v6; // x20
  UnityEngine_Object_o *viewObject; // x21
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x3
  GalleryFullScreenListViewObject_o *v10; // x21
  __int64 naturalAligment; // x10
  void *itemDraw; // x0
  const MethodInfo *v13; // x1
  System_Collections_Generic_IEnumerable_T__o *v14; // x20
  GalleryFullScreenListViewManager___c_c *v15; // x8
  System_Action_object__o *_9__25_0; // x21
  Il2CppObject *v17; // x22
  struct GalleryFullScreenListViewManager___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_Object_o *v21; // x20
  GalleryFullScreenListViewObject_o *v22; // x20
  __int64 v23; // x10
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x2
  System_Action_T__o *changeListItemAction; // x21
  __int64 v27; // x8
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x4
  Il2CppObject *Instance; // x21
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x4
  bool IsCG; // w21
  int32_t oldCenterIndex; // w9
  int32_t index; // w8
  System_Action_bool__o *v39; // x22
  Il2CppObject *galleryFullScreenPanel; // x24
  System_Action_o *v41; // x23
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x4

  if ( (byte_4C51D2F & 1) == 0 )
  {
    sub_1C3E564(&Method_ActionExtensions_Call_int___);
    sub_1C3E564(&System_Action_bool__TypeInfo);
    sub_1C3E564(&System_Action_GalleryFullScreenListViewItem__TypeInfo);
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_BasicHelper_ForEach_GalleryFullScreenListViewItem___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Cast_GalleryFullScreenListViewItem___);
    sub_1C3E564(&Method_GalleryFullScreenListViewManager__OnModifyViewerCenter_b__25_1__);
    sub_1C3E564(&GalleryFullScreenListViewObject_TypeInfo);
    sub_1C3E564(&Method_GalleryFullScreenPanel_Close__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C3E564(&Method_GalleryFullScreenListViewManager___c__OnModifyViewerCenter_b__25_0__);
    sub_1C3E564(&GalleryFullScreenListViewManager___c_TypeInfo);
    byte_4C51D2F = 1;
  }
  centerItem = this->fields.centerItem;
  if ( centerItem )
  {
    currentCenterIndex = this->fields.currentCenterIndex;
    if ( currentCenterIndex != centerItem->fields.index )
    {
      Item = ListViewManager__GetItem((ListViewManager_o *)this, currentCenterIndex, 0);
      if ( Item )
      {
        v6 = Item;
        viewObject = (UnityEngine_Object_o *)Item->fields.viewObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
        {
          v10 = (GalleryFullScreenListViewObject_o *)v6->fields.viewObject;
          if ( v10 )
          {
            naturalAligment = GalleryFullScreenListViewObject_TypeInfo->_2.naturalAligment;
            if ( v10->klass->_2.naturalAligment >= (unsigned int)naturalAligment
              && (GalleryFullScreenListViewObject_c *)v10->klass->_2.typeHierarchy[naturalAligment - 1] == GalleryFullScreenListViewObject_TypeInfo )
            {
              itemDraw = v10->fields.itemDraw;
              if ( !itemDraw )
                goto LABEL_54;
              GalleryFullScreenListViewItemDraw__SetMovieCallBack(
                (GalleryFullScreenListViewItemDraw_o *)itemDraw,
                0,
                0,
                v9);
              GalleryFullScreenListViewObject__DeleteDragObject(v10, v13);
              this->fields.oldCenterIndex = v6->fields.index;
              itemDraw = v10->fields.itemDraw;
              if ( !itemDraw )
                goto LABEL_54;
              GalleryFullScreenListViewItemDraw__StopMovie((GalleryFullScreenListViewItemDraw_o *)itemDraw, v8);
            }
          }
        }
      }
      if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.itemList, 0) )
      {
        v14 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Cast_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.itemList,
                                                               (const MethodInfo_3108224 *)Method_System_Linq_Enumerable_Cast_GalleryFullScreenListViewItem___);
        v15 = GalleryFullScreenListViewManager___c_TypeInfo;
        if ( !GalleryFullScreenListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(GalleryFullScreenListViewManager___c_TypeInfo);
          v15 = GalleryFullScreenListViewManager___c_TypeInfo;
        }
        _9__25_0 = (System_Action_object__o *)v15->static_fields->__9__25_0;
        if ( !_9__25_0 )
        {
          if ( !v15->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v15);
            v15 = GalleryFullScreenListViewManager___c_TypeInfo;
          }
          v17 = (Il2CppObject *)v15->static_fields->__9;
          _9__25_0 = (System_Action_object__o *)sub_1C3E7B0(System_Action_GalleryFullScreenListViewItem__TypeInfo);
          System_Action_object____ctor(
            _9__25_0,
            v17,
            Method_GalleryFullScreenListViewManager___c__OnModifyViewerCenter_b__25_0__,
            0);
          static_fields = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
          static_fields->__9__25_0 = (struct System_Action_GalleryFullScreenListViewItem__o *)_9__25_0;
          sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__25_0, (int32_t)_9__25_0, v19, v20);
        }
        BasicHelper__ForEach_object_(
          v14,
          (System_Action_T__o *)_9__25_0,
          (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_GalleryFullScreenListViewItem___);
      }
      v21 = (UnityEngine_Object_o *)centerItem->fields.viewObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v21, 0, 0) )
        goto LABEL_52;
      v22 = (GalleryFullScreenListViewObject_o *)centerItem->fields.viewObject;
      if ( !v22 )
        goto LABEL_52;
      v23 = GalleryFullScreenListViewObject_TypeInfo->_2.naturalAligment;
      if ( v22->klass->_2.naturalAligment < (unsigned int)v23
        || (GalleryFullScreenListViewObject_c *)v22->klass->_2.typeHierarchy[v23 - 1] != GalleryFullScreenListViewObject_TypeInfo )
      {
        goto LABEL_52;
      }
      itemDraw = GalleryFullScreenListViewObject__GetItem(
                   (GalleryFullScreenListViewObject_o *)centerItem->fields.viewObject,
                   v8);
      if ( !itemDraw )
        goto LABEL_54;
      *((_BYTE *)itemDraw + 136) = 1;
      itemDraw = this->fields.galleryFullScreenPanel;
      if ( !itemDraw )
        goto LABEL_54;
      if ( !GalleryFullScreenPanel__CheckSameDispType((GalleryFullScreenPanel_o *)itemDraw, 0, 0) )
      {
        changeListItemAction = (System_Action_T__o *)this->fields.changeListItemAction;
        itemDraw = GalleryFullScreenListViewObject__GetItem(v22, v24);
        if ( !itemDraw )
          goto LABEL_54;
        v27 = *((_QWORD *)itemDraw + 16);
        if ( !v27 )
          goto LABEL_54;
        ActionExtensions__Call_int_(
          changeListItemAction,
          *(_DWORD *)(v27 + 16),
          (const MethodInfo_30462C0 *)Method_ActionExtensions_Call_int___);
      }
      if ( GalleryFullScreenListViewManager__IsNonDisp(this, 0, v25) )
        GalleryFullScreenListViewObject__Init(v22, 2, 0, 0, v29);
      else
        GalleryFullScreenListViewManager__InitObjInLoadRange(this, 0, v28);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      itemDraw = GalleryFullScreenListViewObject__GetItem(v22, v31);
      if ( !itemDraw
        || (itemDraw = (void *)*((_QWORD *)itemDraw + 16)) == 0
        || (itemDraw = GalleryResourceEntity__GetAssetPath((GalleryResourceEntity_o *)itemDraw, 0), !Instance)
        || (AssetManager__InterruptDownloadAssetStorage((AssetManager_o *)Instance, (System_String_o *)itemDraw, 0),
            GalleryFullScreenListViewObject__DeleteDragObject(v22, v32),
            (itemDraw = GalleryFullScreenListViewObject__GetItem(v22, v33)) == 0) )
      {
LABEL_54:
        sub_1C3E7C0(itemDraw, v8);
      }
      IsCG = GalleryType__IsCG(*((_DWORD *)itemDraw + 30), 0);
      if ( IsCG )
        GalleryFullScreenListViewManager__CreateViewerObj(this, v22, v34);
      oldCenterIndex = this->fields.oldCenterIndex;
      index = centerItem->fields.index;
      if ( oldCenterIndex < 0 )
      {
        this->fields.oldCenterIndex = index;
        this->fields.currentCenterIndex = index;
      }
      else
      {
        this->fields.currentCenterIndex = index;
        if ( oldCenterIndex != index )
        {
LABEL_51:
          GalleryFullScreenListViewManager__SetEnableScroll(this, this->fields.isInput, 0, !IsCG, v35);
LABEL_52:
          itemDraw = this->fields.galleryFullScreenPanel;
          if ( itemDraw )
          {
            GalleryFullScreenPanel__SetDispType((GalleryFullScreenPanel_o *)itemDraw, 2, 0);
            GalleryFullScreenListViewManager__LoadAssetCache(this, this->fields.loadRangeFromCenter, 0, 0, v43);
            return;
          }
          goto LABEL_54;
        }
      }
      v39 = (System_Action_bool__o *)sub_1C3E7B0(System_Action_bool__TypeInfo);
      System_Action_bool____ctor(
        v39,
        (Il2CppObject *)this,
        Method_GalleryFullScreenListViewManager__OnModifyViewerCenter_b__25_1__,
        0);
      galleryFullScreenPanel = (Il2CppObject *)this->fields.galleryFullScreenPanel;
      v41 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(v41, galleryFullScreenPanel, (intptr_t)Method_GalleryFullScreenPanel_Close__, 0);
      itemDraw = v22->fields.itemDraw;
      if ( !itemDraw )
        goto LABEL_54;
      GalleryFullScreenListViewItemDraw__StartPlayMovieCoroutine(
        (GalleryFullScreenListViewItemDraw_o *)itemDraw,
        v39,
        v41,
        v42);
      goto LABEL_51;
    }
  }
}


void GalleryFullScreenListViewManager__ReleaseResourceCache(
        GalleryFullScreenListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_AssetData__o *cacheAssetDataList; // x0
  System_String_o *v5; // x20
  struct System_Collections_Generic_List_AssetData__o *v6; // x8
  int32_t size; // w2
  int v8; // w9
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C51D2C & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_AssetData__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    byte_4C51D2C = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.cacheAssetDataList, 0) )
  {
    cacheAssetDataList = this->fields.cacheAssetDataList;
    if ( !cacheAssetDataList )
      goto LABEL_15;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v9,
      (System_Collections_Generic_List_object__o *)cacheAssetDataList,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v9,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
    {
      if ( v9.fields._current )
      {
        v5 = *(System_String_o **)((char *)&v9.fields._current->klass + (unsigned __int64)&off_18);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__releaseAssetStorage(v5, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v9,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    v6 = this->fields.cacheAssetDataList;
    if ( !v6 )
LABEL_15:
      sub_1C3E7C0(cacheAssetDataList, v3);
    size = v6->fields._size;
    v8 = v6->fields._version + 1;
    v6->fields._size = 0;
    v6->fields._version = v8;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v6->fields._items, 0, size, 0);
  }
}


void GalleryFullScreenListViewManager__ReleaseResourceCache_33194476(
        GalleryFullScreenListViewManager_o *this,
        System_String_o *targetName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x1
  struct System_Collections_Generic_List_AssetData__o *cacheAssetDataList; // x0
  Il2CppObject *current; // x22
  System_String_o *monitor; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  __int64 v18; // x1
  struct System_Collections_Generic_List_AssetData__o *v19; // x0
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C51D2D & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_AssetData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_AssetData__Remove__);
    sub_1C3E564(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_AssetData__TypeInfo);
    byte_4C51D2D = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.cacheAssetDataList, 0) )
  {
    v5 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_AssetData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_AssetData___ctor__);
    cacheAssetDataList = this->fields.cacheAssetDataList;
    if ( !cacheAssetDataList )
      goto LABEL_26;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      (System_Collections_Generic_List_object__o *)cacheAssetDataList,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    i = v20;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
    {
      current = i.fields._current;
      if ( i.fields._current
        && System_String__op_Equality((System_String_o *)i.fields._current[1].monitor, targetName, 0) )
      {
        monitor = (System_String_o *)current[1].monitor;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__releaseAssetStorage(monitor, 0);
        if ( !v5 )
          sub_1C3E7C0(v10, v11);
        items = v5->fields._items;
        v15 = Method_System_Collections_Generic_List_AssetData__Add__;
        ++v5->fields._version;
        if ( !items )
          sub_1C3E7C0(v10, v11);
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            current,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v17[4] = (Il2CppClass *)current;
          sub_1C3E508((CGThumbnailListItem_o *)(v17 + 4), (int32_t)current, v12, v13);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    if ( !v5 )
LABEL_26:
      sub_1C3E7C0(cacheAssetDataList, v6);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      v5,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    for ( i = v20;
          System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
          System_Collections_Generic_List_object___Remove(
            (System_Collections_Generic_List_object__o *)v19,
            i.fields._current,
            (const MethodInfo_37B6988 *)Method_System_Collections_Generic_List_AssetData__Remove__) )
    {
      v19 = this->fields.cacheAssetDataList;
      if ( !v19 )
        sub_1C3E7C0(0, v18);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void GalleryFullScreenListViewManager__SetEnableScroll(
        GalleryFullScreenListViewManager_o *this,
        bool isEnable,
        bool isActiveScrollView,
        bool isDisableUi,
        const MethodInfo *method)
{
  GalleryFullScreenPanel_o *galleryFullScreenPanel; // x0
  GalleryFullScreenListViewIndicator_o *indicator; // x23
  char v11; // w24
  __int64 naturalAligment; // x10
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2
  UnityEngine_Transform_o *v15; // x0
  const MethodInfo *v16; // x2
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v18; // x2
  UIScrollView_o *scrollView; // x21
  char v20; // w8
  int32_t index[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C51D35 & 1) == 0 )
  {
    sub_1C3E564(&GalleryFullScreenListViewIndicator_TypeInfo);
    sub_1C3E564(&StringLiteral_8935/*"MaskRoot/BackMask"*/);
    byte_4C51D35 = 1;
  }
  *(_QWORD *)index = 0;
  galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
  if ( !galleryFullScreenPanel )
    goto LABEL_25;
  galleryFullScreenPanel = (GalleryFullScreenPanel_o *)GalleryFullScreenPanel__CheckSameDispType(
                                                         galleryFullScreenPanel,
                                                         1,
                                                         0);
  indicator = (GalleryFullScreenListViewIndicator_o *)this->fields.indicator;
  v11 = (unsigned __int8)galleryFullScreenPanel ^ 1;
  if ( !indicator )
    goto LABEL_17;
  naturalAligment = GalleryFullScreenListViewIndicator_TypeInfo->_2.naturalAligment;
  if ( indicator->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (GalleryFullScreenListViewIndicator_c *)indicator->klass->_2.typeHierarchy[naturalAligment - 1] != GalleryFullScreenListViewIndicator_TypeInfo )
  {
    goto LABEL_17;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.itemList, 0) )
    return;
  GalleryFullScreenListViewManager__GetDiffResourcePageInfo(this, &index[1], index, v13);
  if ( isDisableUi )
  {
    GalleryFullScreenListViewIndicator__Closed(indicator, (const MethodInfo *)isEnable);
  }
  else
  {
    if ( isEnable )
    {
      indicator->fields.status = 1;
      GalleryFullScreenListViewIndicator__SetActiveObject(indicator, 1, v14);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      AndroidBackKeyManager__RemoveBackBtn_45016416(transform, (System_String_o *)StringLiteral_8935/*"MaskRoot/BackMask"*/, 0);
      goto LABEL_16;
    }
    galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
    if ( !galleryFullScreenPanel )
      goto LABEL_25;
    if ( !GalleryFullScreenPanel__IsAbleToPinch(galleryFullScreenPanel, 0) )
      goto LABEL_16;
    indicator->fields.status = 3;
  }
  v15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45015816(v15, (System_String_o *)StringLiteral_8935/*"MaskRoot/BackMask"*/, 0);
LABEL_16:
  GalleryFullScreenListViewIndicator__SetPageMax(indicator, index[1], v16);
  GalleryFullScreenListViewIndicator__SetPageIndex(indicator, index[0], v18);
  v11 &= (unsigned int)(indicator->fields.status - 1) < 2 || isDisableUi;
LABEL_17:
  scrollView = this->fields.scrollView;
  if ( isEnable || isActiveScrollView )
  {
    if ( scrollView )
    {
      v20 = 1;
      goto LABEL_23;
    }
LABEL_25:
    sub_1C3E7C0(galleryFullScreenPanel, isEnable);
  }
  if ( !scrollView )
    goto LABEL_25;
  v20 = v11 & UIScrollView__get_isDragging(scrollView, 0);
LABEL_23:
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scrollView, v20 & 1, 0);
}


void GalleryFullScreenListViewManager__SetMode(
        GalleryFullScreenListViewManager_o *this,
        int32_t mode,
        bool isDisableUi,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x4

  this->fields.initMode = mode;
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  GalleryFullScreenListViewManager__SetEnableScroll(this, this->fields.isInput, 0, isDisableUi, v6);
}


void GalleryFullScreenListViewManager__SetObjectItem(
        GalleryFullScreenListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x11
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4
  int32_t initMode; // w8
  int32_t v11; // w1

  if ( (byte_4C51D28 & 1) == 0 )
  {
    sub_1C3E564(&GalleryFullScreenListViewObject_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C51D28 = 1;
  }
  if ( obj )
  {
    naturalAligment = GalleryFullScreenListViewObject_TypeInfo->_2.naturalAligment;
    if ( obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (GalleryFullScreenListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != GalleryFullScreenListViewObject_TypeInfo )
        obj = 0;
    }
    else
    {
      obj = 0;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0, 0);
  if ( !v7 )
  {
    initMode = this->fields.initMode;
    if ( initMode )
    {
      if ( !obj )
        sub_1C3E7C0(v7, v8);
      if ( initMode == 2 )
        v11 = 3;
      else
        v11 = 2;
      GalleryFullScreenListViewObject__Init((GalleryFullScreenListViewObject_o *)obj, v11, 0, 0, v9);
    }
  }
}


System_Collections_IEnumerator_o *GalleryFullScreenListViewManager__WaitSetDataSelectGallery(
        GalleryFullScreenListViewManager_o *this,
        int32_t selectGalleryId,
        System_Action_o *endCallBack,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C51D37 & 1) == 0 )
  {
    sub_1C3E564(&GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36_TypeInfo);
    byte_4C51D37 = 1;
  }
  v7 = sub_1C3E7B0(GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 40), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 32) = selectGalleryId;
  *(_QWORD *)(v7 + 48) = endCallBack;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 48), (int32_t)endCallBack, v10, v11);
  return (System_Collections_IEnumerator_o *)v7;
}


void GalleryFullScreenListViewManager___Change_b__16_0(
        GalleryFullScreenListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  GalleryFullScreenListViewManager__SetEnableScroll(this, isEnable, 1, 0, v3);
}


void GalleryFullScreenListViewManager___CreateViewerObj_b__29_0(
        GalleryFullScreenListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Camera_o *main; // x0
  const MethodInfo *v4; // x2

  main = UnityEngine_Camera__get_main(0);
  GalleryFullScreenDragProcess__Init(main, this->fields.actionObject, v4);
}


void GalleryFullScreenListViewManager___OnDragUpdate_b__31_0(
        GalleryFullScreenListViewManager_o *this,
        const MethodInfo *method)
{
  GalleryFullScreenPanel_o *galleryFullScreenPanel; // x0
  const MethodInfo *v4; // x4

  galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
  if ( !galleryFullScreenPanel )
    goto LABEL_6;
  if ( GalleryFullScreenPanel__CheckSameDispType(galleryFullScreenPanel, 1, 0) )
  {
    galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
    if ( galleryFullScreenPanel )
    {
      GalleryFullScreenPanel__SetDispType(galleryFullScreenPanel, 2, 0);
      GalleryFullScreenListViewManager__SetEnableScroll(this, 0, 0, 0, v4);
      return;
    }
LABEL_6:
    sub_1C3E7C0(galleryFullScreenPanel, method);
  }
}


void GalleryFullScreenListViewManager___OnDragUpdate_b__31_1(
        GalleryFullScreenListViewManager_o *this,
        const MethodInfo *method)
{
  GalleryFullScreenPanel_o *galleryFullScreenPanel; // x0
  const MethodInfo *v4; // x4

  galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
  if ( !galleryFullScreenPanel )
    goto LABEL_6;
  if ( GalleryFullScreenPanel__CheckSameDispType(galleryFullScreenPanel, 2, 0) )
  {
    galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
    if ( galleryFullScreenPanel )
    {
      GalleryFullScreenPanel__SetDispType(galleryFullScreenPanel, 1, 0);
      GalleryFullScreenListViewManager__SetEnableScroll(this, 0, 0, 0, v4);
      return;
    }
LABEL_6:
    sub_1C3E7C0(galleryFullScreenPanel, method);
  }
}


void GalleryFullScreenListViewManager___OnModifyViewerCenter_b__25_1(
        GalleryFullScreenListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  GalleryFullScreenListViewManager__SetEnableScroll(this, isEnable, 1, 0, v3);
}


UnityEngine_Vector2_o GalleryFullScreenListViewManager__get_CenterPosition(
        GalleryFullScreenListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *scrollView; // x0
  float v4; // s0
  float v5; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(scrollView, 0)) == 0 )
    sub_1C3E7C0(scrollView, method);
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0);
  v4 = this->fields.clipOffset.fields.x - localPosition.fields.x;
  v5 = this->fields.clipOffset.fields.y - localPosition.fields.y;
  result.fields.y = v5;
  result.fields.x = v4;
  return result;
}


void GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36___ctor(
        GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36__MoveNext(
        GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct GalleryFullScreenListViewManager_o *_4__this; // x21
  __int64 v5; // x20
  Il2CppObject *object; // x0
  __int64 v7; // x1
  System_Action_o *endCallBack; // x0
  bool result; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x21
  System_Func_object__bool__o *v11; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x21
  GalleryFullScreenListViewManager___c_c *v13; // x8
  System_Func_object__int__o *_9__36_1; // x22
  Il2CppObject *v15; // x23
  struct GalleryFullScreenListViewManager___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppClass *klass; // x1
  GalleryFullScreenListViewObject_c *v23; // x8
  __int64 naturalAligment; // x9
  CGThumbnailListItem_o *v25; // x0
  System_Func_bool__o *v26; // x21
  UnityEngine_WaitWhile_o *v27; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  if ( (byte_4C51D3C & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Cast_GalleryFullScreenListViewItem___);
    sub_1C3E564(&Method_System_Linq_Enumerable_First_GalleryFullScreenListViewItem___);
    sub_1C3E564(&Method_System_Linq_Enumerable_OrderBy_GalleryFullScreenListViewItem__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_GalleryFullScreenListViewItem___);
    sub_1C3E564(&System_Func_bool__TypeInfo);
    sub_1C3E564(&System_Func_GalleryFullScreenListViewItem__bool__TypeInfo);
    sub_1C3E564(&System_Func_GalleryFullScreenListViewItem__int__TypeInfo);
    sub_1C3E564(&GalleryFullScreenListViewObject_TypeInfo);
    sub_1C3E564(&Method_GalleryFullScreenListViewManager___c__WaitSetDataSelectGallery_b__36_1__);
    sub_1C3E564(&Method_GalleryFullScreenListViewManager___c__DisplayClass36_0__WaitSetDataSelectGallery_b__0__);
    sub_1C3E564(&Method_GalleryFullScreenListViewManager___c__DisplayClass36_0__WaitSetDataSelectGallery_b__2__);
    sub_1C3E564(&GalleryFullScreenListViewManager___c__DisplayClass36_0_TypeInfo);
    sub_1C3E564(&GalleryFullScreenListViewManager___c_TypeInfo);
    sub_1C3E564(&UnityEngine_WaitWhile_TypeInfo);
    byte_4C51D3C = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    endCallBack = this->fields.endCallBack;
    this->fields.__1__state = -1;
    goto LABEL_10;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  _4__this = this->fields.__4__this;
  v5 = sub_1C3E7B0(GalleryFullScreenListViewManager___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_27;
  *(_DWORD *)(v5 + 16) = this->fields.selectGalleryId;
  if ( !_4__this )
    goto LABEL_27;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)_4__this->fields.itemList, 0) )
  {
    endCallBack = this->fields.endCallBack;
LABEL_10:
    ActionExtensions__Call(endCallBack, 0);
    return 0;
  }
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_object_(
                                                               (System_Collections_IEnumerable_o *)_4__this->fields.itemList,
                                                               (const MethodInfo_3108224 *)Method_System_Linq_Enumerable_Cast_GalleryFullScreenListViewItem___);
  v11 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_GalleryFullScreenListViewItem__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_GalleryFullScreenListViewManager___c__DisplayClass36_0__WaitSetDataSelectGallery_b__0__,
    0);
  v12 = System_Linq_Enumerable__Where_object_(
          v10,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_GalleryFullScreenListViewItem___);
  v13 = GalleryFullScreenListViewManager___c_TypeInfo;
  if ( !GalleryFullScreenListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GalleryFullScreenListViewManager___c_TypeInfo);
    v13 = GalleryFullScreenListViewManager___c_TypeInfo;
  }
  _9__36_1 = (System_Func_object__int__o *)v13->static_fields->__9__36_1;
  if ( !_9__36_1 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = GalleryFullScreenListViewManager___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__36_1 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_GalleryFullScreenListViewItem__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__36_1,
      v15,
      Method_GalleryFullScreenListViewManager___c__WaitSetDataSelectGallery_b__36_1__,
      0);
    static_fields = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__36_1 = (struct System_Func_GalleryFullScreenListViewItem__int__o *)_9__36_1;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__36_1, (int32_t)_9__36_1, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v12,
                                                               (System_Func_TSource__TKey__o *)_9__36_1,
                                                               (const MethodInfo_31292A0 *)Method_System_Linq_Enumerable_OrderBy_GalleryFullScreenListViewItem__int___);
  object = System_Linq_Enumerable__First_object_(
             v19,
             (const MethodInfo_3120424 *)Method_System_Linq_Enumerable_First_GalleryFullScreenListViewItem___);
  if ( !object )
LABEL_27:
    sub_1C3E7C0(object, v7);
  klass = object[7].klass;
  if ( klass )
  {
    v23 = GalleryFullScreenListViewObject_TypeInfo;
    naturalAligment = GalleryFullScreenListViewObject_TypeInfo->_2.naturalAligment;
    if ( *((unsigned __int8 *)klass->_1.image + 304) >= (unsigned int)naturalAligment
      && *(GalleryFullScreenListViewObject_c **)(*((_QWORD *)klass->_1.image + 25) + 8 * (naturalAligment - 1)) == GalleryFullScreenListViewObject_TypeInfo )
    {
      *(_QWORD *)(v5 + 24) = klass;
      v25 = (CGThumbnailListItem_o *)(v5 + 24);
      if ( *((unsigned __int8 *)klass->_1.image + 304) >= (unsigned int)naturalAligment
        && *(GalleryFullScreenListViewObject_c **)(*((_QWORD *)klass->_1.image + 25) + 8 * (naturalAligment - 1)) == v23 )
      {
        goto LABEL_26;
      }
    }
    sub_1C3EA80(klass);
  }
  *(_QWORD *)(v5 + 24) = klass;
  v25 = (CGThumbnailListItem_o *)(v5 + 24);
LABEL_26:
  sub_1C3E508(v25, (int32_t)klass, v20, v21);
  v26 = (System_Func_bool__o *)sub_1C3E7B0(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v26,
    (Il2CppObject *)v5,
    Method_GalleryFullScreenListViewManager___c__DisplayClass36_0__WaitSetDataSelectGallery_b__2__,
    0);
  v27 = (UnityEngine_WaitWhile_o *)sub_1C3E7B0(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v27, v26, 0);
  this->fields.__2__current = (Il2CppObject *)v27;
  p__2__current = &this->fields.__2__current;
  sub_1C3E508((CGThumbnailListItem_o *)p__2__current, (int32_t)v27, v29, v30);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36__System_Collections_IEnumerator_Reset(
        GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
}


Il2CppObject *GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36__System_Collections_IEnumerator_get_Current(
        GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36__System_IDisposable_Dispose(
        GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36_o *this,
        const MethodInfo *method)
{
  ;
}


void GalleryFullScreenListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C51D3B & 1) == 0 )
  {
    sub_1C3E564(&GalleryFullScreenListViewManager___c_TypeInfo);
    byte_4C51D3B = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(GalleryFullScreenListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GalleryFullScreenListViewManager___c_TypeInfo->static_fields->__9 = (struct GalleryFullScreenListViewManager___c_o *)v1;
  sub_1C3E508(
    (CGThumbnailListItem_o *)GalleryFullScreenListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void GalleryFullScreenListViewManager___c___ctor(
        GalleryFullScreenListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t GalleryFullScreenListViewManager___c___CreateList_b__13_0(
        GalleryFullScreenListViewManager___c_o *this,
        GalleryResourceEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields.idx;
}


GalleryResourceEntity_o *GalleryFullScreenListViewManager___c___GetDiffResourcePageInfo_b__35_0(
        GalleryFullScreenListViewManager___c_o *this,
        GalleryFullScreenListViewItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields._GalleryResourceEntity_k__BackingField;
}


int32_t GalleryFullScreenListViewManager___c___GetDiffResourcePageInfo_b__35_2(
        GalleryFullScreenListViewManager___c_o *this,
        GalleryResourceEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields.idx;
}


int32_t GalleryFullScreenListViewManager___c___GetInRangeGalleryResourceList_b__18_0(
        GalleryFullScreenListViewManager___c_o *this,
        GalleryFullScreenListViewItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields.index;
}


GalleryResourceEntity_o *GalleryFullScreenListViewManager___c___GetInRangeGalleryResourceList_b__18_1(
        GalleryFullScreenListViewManager___c_o *this,
        GalleryFullScreenListViewItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields._GalleryResourceEntity_k__BackingField;
}


bool GalleryFullScreenListViewManager___c___GetInRangeGalleryResourceList_b__18_2(
        GalleryFullScreenListViewManager___c_o *this,
        GalleryResourceEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return GalleryType__IsCG(x->fields.galleryType, 0);
}


void GalleryFullScreenListViewManager___c___OnModifyViewerCenter_b__25_0(
        GalleryFullScreenListViewManager___c_o *this,
        GalleryFullScreenListViewItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  x->fields.isCenterItem = 0;
}


int32_t GalleryFullScreenListViewManager___c___WaitSetDataSelectGallery_b__36_1(
        GalleryFullScreenListViewManager___c_o *this,
        GalleryFullScreenListViewItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields.index;
}


void GalleryFullScreenListViewManager___c__DisplayClass19_0___ctor(
        GalleryFullScreenListViewManager___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GalleryFullScreenListViewManager___c__DisplayClass19_0___LoadAssetCache_b__0(
        GalleryFullScreenListViewManager___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  GalleryFullScreenListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3E7C0(0, method);
  GalleryFullScreenListViewManager__LoadEnd(_4__this, this->fields.assetLoadNames, this->fields.isLoadFromThumbnail, v2);
  ActionExtensions__Call(this->fields.endCallback, 0);
}


void GalleryFullScreenListViewManager___c__DisplayClass35_0___ctor(
        GalleryFullScreenListViewManager___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GalleryFullScreenListViewManager___c__DisplayClass35_0___GetDiffResourcePageInfo_b__1(
        GalleryFullScreenListViewManager___c__DisplayClass35_0_o *this,
        GalleryResourceEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields.galleryId == this->fields.centerGalleryId;
}


void GalleryFullScreenListViewManager___c__DisplayClass36_0___ctor(
        GalleryFullScreenListViewManager___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GalleryFullScreenListViewManager___c__DisplayClass36_0___WaitSetDataSelectGallery_b__0(
        GalleryFullScreenListViewManager___c__DisplayClass36_0_o *this,
        GalleryFullScreenListViewItem_o *x,
        const MethodInfo *method)
{
  struct GalleryResourceEntity_o *GalleryResourceEntity_k__BackingField; // x8

  if ( !x || (GalleryResourceEntity_k__BackingField = x->fields._GalleryResourceEntity_k__BackingField) == 0 )
    sub_1C3E7C0(this, x);
  return GalleryResourceEntity_k__BackingField->fields.galleryId == this->fields.selectGalleryId;
}


bool GalleryFullScreenListViewManager___c__DisplayClass36_0___WaitSetDataSelectGallery_b__2(
        GalleryFullScreenListViewManager___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  struct GalleryFullScreenListViewObject_o *obj; // x8
  struct GalleryFullScreenListViewItemDraw_o *itemDraw; // x8

  obj = this->fields.obj;
  if ( !obj || (itemDraw = obj->fields.itemDraw) == 0 )
    sub_1C3E7C0(this, method);
  return itemDraw->fields.setDataWait;
}