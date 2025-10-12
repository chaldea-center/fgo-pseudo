void GalleryFullScreenListViewManager___ctor(GalleryFullScreenListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C329D0 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_AssetData__TypeInfo);
    byte_4C329D0 = 1;
  }
  *(_QWORD *)&this->fields.currentCenterIndex = -1;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.nowLoadingAssetNameList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.nowLoadingAssetNameList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_AssetData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.cacheAssetDataList = (struct System_Collections_Generic_List_AssetData__o *)v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.cacheAssetDataList, (int32_t)v6, v7, v8);
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void GalleryFullScreenListViewManager__AfterScrollCallback(
        GalleryFullScreenListViewManager_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C329BC & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_GalleryFullScreenListViewManager_AfterScrollCallback__);
    byte_4C329BC = 1;
  }
  GalleryFullScreenListViewManager__Change(this, method);
  v3 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_GalleryFullScreenListViewManager_AfterScrollCallback__, 0);
  this->fields.callbackAfterScroll = v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackAfterScroll, (int32_t)v3, v4, v5);
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

  if ( (byte_4C329CE & 1) == 0 )
  {
    sub_1C32C20(&GalleryFullScreenListViewItem_TypeInfo);
    byte_4C329CE = 1;
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
  const MethodInfo *v11; // x3
  GalleryFullScreenListViewItemDraw_o *m_CachedPtr; // x0

  if ( (byte_4C329BD & 1) == 0 )
  {
    sub_1C32C20(&System_Action_bool__TypeInfo);
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_GalleryFullScreenListViewManager__Change_b__16_0__);
    sub_1C32C20(&GalleryFullScreenListViewObject_TypeInfo);
    sub_1C32C20(&Method_GalleryFullScreenPanel_Close__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C329BD = 1;
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
          v8 = (System_Action_bool__o *)sub_1C32E6C(System_Action_bool__TypeInfo);
          System_Action_bool____ctor(
            v8,
            (Il2CppObject *)this,
            Method_GalleryFullScreenListViewManager__Change_b__16_0__,
            0);
          galleryFullScreenPanel = (Il2CppObject *)this->fields.galleryFullScreenPanel;
          v10 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          System_Action___ctor(v10, galleryFullScreenPanel, (intptr_t)Method_GalleryFullScreenPanel_Close__, 0);
          m_CachedPtr = (GalleryFullScreenListViewItemDraw_o *)v6[1].fields.m_CachedPtr;
          if ( !m_CachedPtr )
            sub_1C32E7C(0);
          GalleryFullScreenListViewItemDraw__StartPlayMovieCoroutine(m_CachedPtr, v8, v10, v11);
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
  _BOOL8 v14; // x0
  System_Collections_Generic_List_GalleryResourceEntity__o *EnableGalleryResourceEntityListByGalleryId; // x0
  GalleryFullScreenListViewManager___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x23
  System_Func_object__int__o *_9__13_0; // x25
  Il2CppObject *v19; // x26
  struct GalleryFullScreenListViewManager___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  System_Collections_Generic_IEnumerable_T__o *v24; // x0
  int32_t v25; // w24
  int32_t v26; // w23
  GalleryResourceEntity_o *Item; // x25
  GalleryFullScreenListViewItem_o *v28; // x26
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x8
  Il2CppObject *Component_object; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  UIDragDropListViewBackMask_o *backMask; // x21
  EventDelegate_Callback_o *v41; // x22
  EventDelegate_Callback_o *v42; // x24
  const MethodInfo *v43; // x4
  System_Action_o *v44; // x21
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  Il2CppObject *ComponentInChildren_object__51199524; // x21
  SpringPanel_OnFinished_o *v48; // x22
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  System_Collections_Generic_List_Enumerator_int__o v53; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v54; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4C329BB & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&EventDelegate_Callback_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentInChildren_UICenterOnChild___);
    sub_1C32C20(&Method_DataManager_GetMaster_GalleryResourceMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderBy_GalleryResourceEntity__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C32C20(&System_Func_GalleryResourceEntity__int__TypeInfo);
    sub_1C32C20(&GalleryFullScreenListViewItem_TypeInfo);
    sub_1C32C20(&Method_GalleryFullScreenListViewManager_AfterScrollCallback__);
    sub_1C32C20(&Method_GalleryFullScreenListViewManager_OnClickMaxim__);
    sub_1C32C20(&Method_GalleryFullScreenListViewManager_OnDragUpdate__);
    sub_1C32C20(&Method_GalleryFullScreenListViewManager_OnFinishedChange__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
    sub_1C32C20(&Method_System_Collections_Generic_List_GalleryResourceEntity__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GalleryResourceEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GalleryResourceEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GalleryResourceEntity__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_GalleryResourceEntity__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&SpringPanel_OnFinished_TypeInfo);
    sub_1C32C20(&Method_GalleryFullScreenListViewManager___c__CreateList_b__13_0__);
    sub_1C32C20(&GalleryFullScreenListViewManager___c_TypeInfo);
    byte_4C329BB = 1;
  }
  memset(&v54, 0, sizeof(v54));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GalleryResourceMaster___);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GalleryResourceEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GalleryResourceEntity___ctor__);
  this->fields.changeListItemAction = changeListItem;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.changeListItemAction, (int32_t)changeListItem, v11, v12);
  if ( !galleryIdList )
    goto LABEL_44;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v53,
    galleryIdList,
    (const MethodInfo_377C26C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v54 = v53;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v54,
            (const MethodInfo_351F190 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v14 )
      break;
    if ( !Master_object )
      sub_1C32E7C(v14);
    EnableGalleryResourceEntityListByGalleryId = GalleryResourceMaster__GetEnableGalleryResourceEntityListByGalleryId(
                                                   (GalleryResourceMaster_o *)Master_object,
                                                   v54.fields._current,
                                                   0);
    v16 = GalleryFullScreenListViewManager___c_TypeInfo;
    v17 = (System_Collections_Generic_IEnumerable_TSource__o *)EnableGalleryResourceEntityListByGalleryId;
    if ( !GalleryFullScreenListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GalleryFullScreenListViewManager___c_TypeInfo);
      v16 = GalleryFullScreenListViewManager___c_TypeInfo;
    }
    _9__13_0 = (System_Func_object__int__o *)v16->static_fields->__9__13_0;
    if ( !_9__13_0 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = GalleryFullScreenListViewManager___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v16->static_fields->__9;
      _9__13_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_GalleryResourceEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__13_0,
        v19,
        Method_GalleryFullScreenListViewManager___c__CreateList_b__13_0__,
        0);
      static_fields = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__13_0 = (struct System_Func_GalleryResourceEntity__int__o *)_9__13_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v21, v22);
    }
    v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 v17,
                                                                 (System_Func_TSource__TKey__o *)_9__13_0,
                                                                 (const MethodInfo_310CB44 *)Method_System_Linq_Enumerable_OrderBy_GalleryResourceEntity__int___);
    v24 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToList_object_(
                                                           v23,
                                                           (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
    if ( !v10 )
      sub_1C32E7C(v24);
    System_Collections_Generic_List_object___AddRange(
      v10,
      v24,
      (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_GalleryResourceEntity__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v54,
    (const MethodInfo_351F18C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( !v10 )
    goto LABEL_44;
  if ( v10->fields._size >= 1 )
  {
    v25 = 0;
    v26 = -1;
    while ( 1 )
    {
      Item = (GalleryResourceEntity_o *)System_Collections_Generic_List_object___get_Item(
                                          v10,
                                          v25,
                                          (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GalleryResourceEntity__get_Item__);
      v28 = (GalleryFullScreenListViewItem_o *)sub_1C32E6C(GalleryFullScreenListViewItem_TypeInfo);
      GalleryFullScreenListViewItem___ctor(v28, v25, Item, v29);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_44;
      items = itemList->fields._items;
      v33 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        goto LABEL_44;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v28,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v28;
        sub_1C32BC4((CGThumbnailListItem_o *)(v35 + 4), (int32_t)v28, v30, v31);
      }
      if ( !Item )
        goto LABEL_44;
      if ( Item->fields.galleryId == selectGalleryId && v26 <= -1 )
        v26 = v25;
      if ( ++v25 >= v10->fields._size )
        goto LABEL_35;
    }
  }
  v26 = -1;
LABEL_35:
  itemList = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(GalleryFullScreenListViewManager_o *, const MethodInfo *))this->klass->vtable._7_GetDragRoot.methodPtr)(
                                                            this,
                                                            this->klass->vtable._7_GetDragRoot.method);
  if ( !itemList )
    goto LABEL_44;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)itemList,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
  this->fields.backMask = (struct UIDragDropListViewBackMask_o *)Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.backMask, (int32_t)Component_object, v38, v39);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
  backMask = this->fields.backMask;
  v41 = (EventDelegate_Callback_o *)sub_1C32E6C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v41, (Il2CppObject *)this, Method_GalleryFullScreenListViewManager_OnClickMaxim__, 0);
  v42 = (EventDelegate_Callback_o *)sub_1C32E6C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v42, (Il2CppObject *)this, Method_GalleryFullScreenListViewManager_OnDragUpdate__, 0);
  if ( !backMask )
    goto LABEL_44;
  UIDragDropListViewBackMask__DragStartMultiTouch(backMask, v41, v42, 0);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  GalleryFullScreenListViewManager__SetEnableScroll(this, 1, 0, 0, v43);
  v44 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v44, (Il2CppObject *)this, Method_GalleryFullScreenListViewManager_AfterScrollCallback__, 0);
  this->fields.callbackAfterScroll = v44;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackAfterScroll, (int32_t)v44, v45, v46);
  ListViewManager__JumpItem((ListViewManager_o *)this, v26, 0);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
  this->fields.currentCenterIndex = v26;
  if ( !itemList )
LABEL_44:
    sub_1C32E7C(itemList);
  ComponentInChildren_object__51199524 = UnityEngine_Component__GetComponentInChildren_object__51199524(
                                           (UnityEngine_Component_o *)itemList,
                                           (const MethodInfo_30D3E24 *)Method_UnityEngine_Component_GetComponentInChildren_UICenterOnChild___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object__51199524, 0, 0) )
  {
    v48 = (SpringPanel_OnFinished_o *)sub_1C32E6C(SpringPanel_OnFinished_TypeInfo);
    SpringPanel_OnFinished___ctor(
      v48,
      (Il2CppObject *)this,
      Method_GalleryFullScreenListViewManager_OnFinishedChange__,
      0);
    if ( !ComponentInChildren_object__51199524 )
      goto LABEL_44;
    ComponentInChildren_object__51199524[2].monitor = v48;
    sub_1C32BC4((CGThumbnailListItem_o *)&ComponentInChildren_object__51199524[2].monitor, (int32_t)v48, v49, v50);
  }
  ActionExtensions__Call(action, 0);
}


void GalleryFullScreenListViewManager__CreateViewerObj(
        GalleryFullScreenListViewManager_o *this,
        GalleryFullScreenListViewObject_o *galleryFullScreenListViewObject,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  GalleryFullScreenPanel_o *galleryFullScreenPanel; // x0
  GalleryFullScreenListViewObject_o *actionObject; // x20
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x4

  if ( (byte_4C329C8 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_GalleryFullScreenListViewManager__CreateViewerObj_b__29_0__);
    byte_4C329C8 = 1;
  }
  this->fields.actionObject = galleryFullScreenListViewObject;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.actionObject,
    (int32_t)galleryFullScreenListViewObject,
    (int32_t)method,
    v3);
  galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
  if ( !galleryFullScreenPanel
    || (GalleryFullScreenPanel__SetDispType(galleryFullScreenPanel, 2, 0),
        actionObject = this->fields.actionObject,
        v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)this,
          Method_GalleryFullScreenListViewManager__CreateViewerObj_b__29_0__,
          0),
        !actionObject) )
  {
    sub_1C32E7C(galleryFullScreenPanel);
  }
  GalleryFullScreenListViewObject__Init(actionObject, 4, 0, v8, v9);
}


void GalleryFullScreenListViewManager__DragEnd(GalleryFullScreenListViewManager_o *this, const MethodInfo *method)
{
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v4; // x21
  EventDelegate_Callback_o *v5; // x22
  __int64 v6; // x0

  if ( (byte_4C329CF & 1) == 0 )
  {
    sub_1C32C20(&EventDelegate_Callback_TypeInfo);
    sub_1C32C20(&Method_GalleryFullScreenListViewManager_OnClickMaxim__);
    sub_1C32C20(&Method_GalleryFullScreenListViewManager_OnDragUpdate__);
    byte_4C329CF = 1;
  }
  ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0);
  backMask = this->fields.backMask;
  v4 = (EventDelegate_Callback_o *)sub_1C32E6C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v4, (Il2CppObject *)this, Method_GalleryFullScreenListViewManager_OnClickMaxim__, 0);
  v5 = (EventDelegate_Callback_o *)sub_1C32E6C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v5, (Il2CppObject *)this, Method_GalleryFullScreenListViewManager_OnDragUpdate__, 0);
  if ( !backMask )
    sub_1C32E7C(v6);
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
  System_Collections_Generic_List_object__o *v10; // x21
  __int64 naturalAligment; // x9
  _DWORD *monitor; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v13; // x0
  GalleryFullScreenListViewManager___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x23
  System_Func_object__object__o *_9__35_0; // x24
  Il2CppObject *v17; // x25
  struct GalleryFullScreenListViewManager___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x23
  System_Func_object__bool__o *v22; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x22
  GalleryFullScreenListViewManager___c_c *v25; // x0
  System_Func_object__int__o *_9__35_2; // x20
  Il2CppObject *v27; // x23
  struct GalleryFullScreenListViewManager___c_StaticFields *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  GalleryFullScreenListViewManager_o *v32; // x0
  const MethodInfo *v33; // x1

  if ( (byte_4C329CC & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Cast_GalleryFullScreenListViewItem___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderBy_GalleryResourceEntity__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_GalleryFullScreenListViewItem__GalleryResourceEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_GalleryResourceEntity___);
    sub_1C32C20(&System_Func_GalleryResourceEntity__int__TypeInfo);
    sub_1C32C20(&System_Func_GalleryResourceEntity__bool__TypeInfo);
    sub_1C32C20(&System_Func_GalleryFullScreenListViewItem__GalleryResourceEntity__TypeInfo);
    sub_1C32C20(&GalleryFullScreenListViewItem_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GalleryResourceEntity__IndexOf__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GalleryResourceEntity__get_Count__);
    sub_1C32C20(&Method_GalleryFullScreenListViewManager___c__GetDiffResourcePageInfo_b__35_0__);
    sub_1C32C20(&Method_GalleryFullScreenListViewManager___c__GetDiffResourcePageInfo_b__35_2__);
    sub_1C32C20(&Method_GalleryFullScreenListViewManager___c__DisplayClass35_0__GetDiffResourcePageInfo_b__1__);
    sub_1C32C20(&GalleryFullScreenListViewManager___c__DisplayClass35_0_TypeInfo);
    sub_1C32C20(&GalleryFullScreenListViewManager___c_TypeInfo);
    byte_4C329CC = 1;
  }
  v7 = sub_1C32E6C(GalleryFullScreenListViewManager___c__DisplayClass35_0_TypeInfo);
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
    v10 = Item;
    naturalAligment = GalleryFullScreenListViewItem_TypeInfo->_2.naturalAligment;
    if ( Item->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (GalleryFullScreenListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] != GalleryFullScreenListViewItem_TypeInfo )
    {
      v32 = (GalleryFullScreenListViewManager_o *)sub_1C3313C(Item);
      GalleryFullScreenListViewManager__get_CenterPosition(v32, v33);
      return;
    }
    monitor = Item[3].monitor;
    if ( !monitor || !v7 )
      goto LABEL_25;
    *(_DWORD *)(v7 + 16) = monitor[4];
    v13 = System_Linq_Enumerable__Cast_object_(
            (System_Collections_IEnumerable_o *)this->fields.itemList,
            (const MethodInfo_30EBAC8 *)Method_System_Linq_Enumerable_Cast_GalleryFullScreenListViewItem___);
    v14 = GalleryFullScreenListViewManager___c_TypeInfo;
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)v13;
    if ( !GalleryFullScreenListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GalleryFullScreenListViewManager___c_TypeInfo);
      v14 = GalleryFullScreenListViewManager___c_TypeInfo;
    }
    _9__35_0 = (System_Func_object__object__o *)v14->static_fields->__9__35_0;
    if ( !_9__35_0 )
    {
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        v14 = GalleryFullScreenListViewManager___c_TypeInfo;
      }
      v17 = (Il2CppObject *)v14->static_fields->__9;
      _9__35_0 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_GalleryFullScreenListViewItem__GalleryResourceEntity__TypeInfo);
      System_Func_object__object____ctor(
        _9__35_0,
        v17,
        Method_GalleryFullScreenListViewManager___c__GetDiffResourcePageInfo_b__35_0__,
        0);
      static_fields = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__35_0 = (struct System_Func_GalleryFullScreenListViewItem__GalleryResourceEntity__o *)_9__35_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__35_0, (int32_t)_9__35_0, v19, v20);
    }
    v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v15,
                                                                 (System_Func_TSource__TResult__o *)_9__35_0,
                                                                 (const MethodInfo_3113ABC *)Method_System_Linq_Enumerable_Select_GalleryFullScreenListViewItem__GalleryResourceEntity___);
    v22 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_GalleryResourceEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v22,
      (Il2CppObject *)v7,
      Method_GalleryFullScreenListViewManager___c__DisplayClass35_0__GetDiffResourcePageInfo_b__1__,
      0);
    v23 = System_Linq_Enumerable__Where_object_(
            v21,
            (System_Func_TSource__bool__o *)v22,
            (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_GalleryResourceEntity___);
    Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                          v23,
                                                          (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
    if ( !Item )
      goto LABEL_25;
    v24 = (System_Collections_Generic_IEnumerable_TSource__o *)Item;
    *diffCount = Item->fields._size;
    v25 = GalleryFullScreenListViewManager___c_TypeInfo;
    if ( !GalleryFullScreenListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GalleryFullScreenListViewManager___c_TypeInfo);
      v25 = GalleryFullScreenListViewManager___c_TypeInfo;
    }
    _9__35_2 = (System_Func_object__int__o *)v25->static_fields->__9__35_2;
    if ( !_9__35_2 )
    {
      if ( !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        v25 = GalleryFullScreenListViewManager___c_TypeInfo;
      }
      v27 = (Il2CppObject *)v25->static_fields->__9;
      _9__35_2 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_GalleryResourceEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__35_2,
        v27,
        Method_GalleryFullScreenListViewManager___c__GetDiffResourcePageInfo_b__35_2__,
        0);
      v28 = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
      v28->__9__35_2 = (struct System_Func_GalleryResourceEntity__int__o *)_9__35_2;
      sub_1C32BC4((CGThumbnailListItem_o *)&v28->__9__35_2, (int32_t)_9__35_2, v29, v30);
    }
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 v24,
                                                                 (System_Func_TSource__TKey__o *)_9__35_2,
                                                                 (const MethodInfo_310CB44 *)Method_System_Linq_Enumerable_OrderBy_GalleryResourceEntity__int___);
    Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                          v31,
                                                          (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
    if ( !Item )
LABEL_25:
      sub_1C32E7C(Item);
    *index = System_Collections_Generic_List_object___IndexOf(
               Item,
               (Il2CppObject *)v10[3].monitor,
               (const MethodInfo_379945C *)Method_System_Collections_Generic_List_GalleryResourceEntity__IndexOf__);
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
  int32_t v26; // w22
  int32_t v27; // w0
  System_Collections_Generic_List_T__o *Range; // x0
  GalleryFullScreenListViewManager___c_c *v29; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x19
  System_Func_object__bool__o *_9__18_2; // x20
  Il2CppObject *v32; // x21
  struct GalleryFullScreenListViewManager___c_StaticFields *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Collections_Generic_List_object__o *v38; // x19

  if ( (byte_4C329BF & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Cast_GalleryFullScreenListViewItem___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderBy_GalleryFullScreenListViewItem__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_GalleryFullScreenListViewItem__GalleryResourceEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_GalleryResourceEntity___);
    sub_1C32C20(&System_Func_GalleryResourceEntity__bool__TypeInfo);
    sub_1C32C20(&System_Func_GalleryFullScreenListViewItem__GalleryResourceEntity__TypeInfo);
    sub_1C32C20(&System_Func_GalleryFullScreenListViewItem__int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GalleryResourceEntity__GetRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GalleryResourceEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GalleryResourceEntity__get_Count__);
    sub_1C32C20(&System_Collections_Generic_List_GalleryResourceEntity__TypeInfo);
    sub_1C32C20(&System_Math_TypeInfo);
    sub_1C32C20(&Method_GalleryFullScreenListViewManager___c__GetInRangeGalleryResourceList_b__18_0__);
    sub_1C32C20(&Method_GalleryFullScreenListViewManager___c__GetInRangeGalleryResourceList_b__18_1__);
    sub_1C32C20(&Method_GalleryFullScreenListViewManager___c__GetInRangeGalleryResourceList_b__18_2__);
    sub_1C32C20(&GalleryFullScreenListViewManager___c_TypeInfo);
    byte_4C329BF = 1;
  }
  itemList = (System_Collections_IEnumerable_o *)this->fields.itemList;
  if ( itemList )
  {
    v6 = System_Linq_Enumerable__Cast_object_(
           itemList,
           (const MethodInfo_30EBAC8 *)Method_System_Linq_Enumerable_Cast_GalleryFullScreenListViewItem___);
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
      _9__18_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_GalleryFullScreenListViewItem__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__18_0,
        v10,
        Method_GalleryFullScreenListViewManager___c__GetInRangeGalleryResourceList_b__18_0__,
        0);
      static_fields = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__18_0 = (struct System_Func_GalleryFullScreenListViewItem__int__o *)_9__18_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__18_0, (int32_t)_9__18_0, v12, v13);
    }
    v14 = System_Linq_Enumerable__OrderBy_object__int_(
            v8,
            (System_Func_TSource__TKey__o *)_9__18_0,
            (const MethodInfo_310CB44 *)Method_System_Linq_Enumerable_OrderBy_GalleryFullScreenListViewItem__int___);
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
      _9__18_1 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_GalleryFullScreenListViewItem__GalleryResourceEntity__TypeInfo);
      System_Func_object__object____ctor(
        _9__18_1,
        v18,
        Method_GalleryFullScreenListViewManager___c__GetInRangeGalleryResourceList_b__18_1__,
        0);
      v19 = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
      v19->__9__18_1 = (struct System_Func_GalleryFullScreenListViewItem__GalleryResourceEntity__o *)_9__18_1;
      sub_1C32BC4((CGThumbnailListItem_o *)&v19->__9__18_1, (int32_t)_9__18_1, v20, v21);
    }
    v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v16,
                                                                 (System_Func_TSource__TResult__o *)_9__18_1,
                                                                 (const MethodInfo_3113ABC *)Method_System_Linq_Enumerable_Select_GalleryFullScreenListViewItem__GalleryResourceEntity___);
    v23 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                         v22,
                                                         (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
    CenterIndex = ListViewManager__GetCenterIndex((ListViewManager_o *)this, 0);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v25 = System_Math__Max_65041976(CenterIndex - loadRange, 0, 0);
    if ( !v23 )
      sub_1C32E7C(v25);
    v26 = v25;
    v27 = System_Math__Min_65042304(CenterIndex + loadRange, v23->fields._size - 1, 0);
    Range = System_Collections_Generic_List_object___GetRange(
              v23,
              v26,
              v27 - v26 + 1,
              (const MethodInfo_379938C *)Method_System_Collections_Generic_List_GalleryResourceEntity__GetRange__);
    v29 = GalleryFullScreenListViewManager___c_TypeInfo;
    v30 = (System_Collections_Generic_IEnumerable_TSource__o *)Range;
    if ( !GalleryFullScreenListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GalleryFullScreenListViewManager___c_TypeInfo);
      v29 = GalleryFullScreenListViewManager___c_TypeInfo;
    }
    _9__18_2 = (System_Func_object__bool__o *)v29->static_fields->__9__18_2;
    if ( !_9__18_2 )
    {
      if ( !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        v29 = GalleryFullScreenListViewManager___c_TypeInfo;
      }
      v32 = (Il2CppObject *)v29->static_fields->__9;
      _9__18_2 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_GalleryResourceEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__18_2,
        v32,
        Method_GalleryFullScreenListViewManager___c__GetInRangeGalleryResourceList_b__18_2__,
        0);
      v33 = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
      v33->__9__18_2 = (struct System_Func_GalleryResourceEntity__bool__o *)_9__18_2;
      sub_1C32BC4((CGThumbnailListItem_o *)&v33->__9__18_2, (int32_t)_9__18_2, v34, v35);
    }
    v36 = System_Linq_Enumerable__Where_object_(
            v30,
            (System_Func_TSource__bool__o *)_9__18_2,
            (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_GalleryResourceEntity___);
    return (System_Collections_Generic_List_GalleryResourceEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                         v36,
                                                                         (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
  }
  else
  {
    v38 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GalleryResourceEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v38,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GalleryResourceEntity___ctor__);
    return (System_Collections_Generic_List_GalleryResourceEntity__o *)v38;
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int32_t v10; // w22
  System_Collections_Generic_List_object__o *v11; // x8
  int32_t v12; // w23
  int32_t v13; // w24
  const MethodInfo *v14; // x4
  __int64 naturalAligment; // x10

  if ( (byte_4C329C6 & 1) == 0 )
  {
    sub_1C32C20(&GalleryFullScreenListViewObject_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C329C6 = 1;
  }
  CenterIndex = ListViewManager__GetCenterIndex((ListViewManager_o *)this, 0);
  loadRangeFromCenter = this->fields.loadRangeFromCenter;
  v7 = CenterIndex;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  Item = (Il2CppObject *)System_Math__Max_65041976(v7 - loadRangeFromCenter, 0, 0);
  itemList = this->fields.itemList;
  if ( !itemList
    || (v10 = (int)Item,
        Item = (Il2CppObject *)System_Math__Min_65042304(
                                 this->fields.loadRangeFromCenter + v7,
                                 itemList->fields._size - 1,
                                 0),
        (v11 = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0) )
  {
LABEL_20:
    sub_1C32E7C(Item);
  }
  v12 = (int)Item;
  v13 = 0;
  while ( v13 < v11->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v11,
             v13,
             (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      Item = (Il2CppObject *)Item[7].klass;
      if ( Item )
      {
        naturalAligment = GalleryFullScreenListViewObject_TypeInfo->_2.naturalAligment;
        if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (GalleryFullScreenListViewObject_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == GalleryFullScreenListViewObject_TypeInfo )
        {
          if ( v10 > v13 || v13 > v12 )
          {
            LOBYTE(Item[7].klass) = 0;
          }
          else if ( v7 != v13 || !isCenterNoTarget )
          {
            GalleryFullScreenListViewObject__Init((GalleryFullScreenListViewObject_o *)Item, 2, 0, 0, v14);
          }
        }
      }
      v11 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v13;
      if ( v11 )
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
  GalleryFullScreenPanel_o *v6; // x0
  bool v7; // w0
  bool v8; // w8

  if ( (byte_4C329C4 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C329C4 = 1;
  }
  galleryFullScreenPanel = (UnityEngine_Object_o *)this->fields.galleryFullScreenPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(galleryFullScreenPanel, 0, 0) )
    return !isLoadFromThumbnail;
  v6 = this->fields.galleryFullScreenPanel;
  if ( !v6 )
    sub_1C32E7C(0);
  v7 = GalleryFullScreenPanel__CheckSameDispType(v6, 0, 0);
  v8 = 0;
  if ( v7 )
    return !isLoadFromThumbnail;
  return v8;
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2
  System_Collections_Generic_HashSet_T__o *v16; // x22
  const MethodInfo *v17; // x2
  System_Collections_ICollection_o *v18; // x23
  System_String_o *AssetPath; // x23
  _BOOL8 isExistAssetStorage; // x0
  System_Collections_Generic_List_object__o *v21; // x22
  System_Collections_Generic_List_object__o *v22; // x23
  _BOOL8 v23; // x0
  Il2CppObject *current; // x24
  _BOOL8 v25; // x0
  Il2CppObject *v26; // x26
  _BOOL8 v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  Il2CppObject *monitor; // x1
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  const MethodInfo *v35; // x2
  System_Object_array *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_String_array *v39; // x19
  System_Action_o *v40; // x21
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4C329C0 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GalleryResourceEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GalleryResourceEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GalleryResourceEntity__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_1C32C20(&System_Collections_Generic_HashSet_string__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GalleryResourceEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C32C20(&Method_GalleryFullScreenListViewManager___c__DisplayClass19_0__LoadAssetCache_b__0__);
    sub_1C32C20(&GalleryFullScreenListViewManager___c__DisplayClass19_0_TypeInfo);
    byte_4C329C0 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  memset(&i, 0, sizeof(i));
  memset(&v42, 0, sizeof(v42));
  v9 = sub_1C32E6C(GalleryFullScreenListViewManager___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_51;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 40) = endCallback;
  *(_BYTE *)(v9 + 32) = isLoadFromThumbnail;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 40), (int32_t)endCallback, v13, v14);
  if ( GalleryFullScreenListViewManager__IsNonDisp(this, *(_BYTE *)(v9 + 32), v15) )
    goto LABEL_43;
  if ( loadRange < 0 )
    loadRange = this->fields.loadRangeFromCenter;
  v16 = (System_Collections_Generic_HashSet_T__o *)sub_1C32E6C(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v16,
    (const MethodInfo_364F828 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  v18 = (System_Collections_ICollection_o *)GalleryFullScreenListViewManager__GetInRangeGalleryResourceList(
                                              this,
                                              loadRange,
                                              v17);
  IsNullOrEmpty = (System_Collections_Generic_List_object__o *)BasicHelper__IsNullOrEmpty(v18, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    goto LABEL_43;
  if ( !v18 )
    goto LABEL_51;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)v18,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_GalleryResourceEntity__GetEnumerator__);
  v44 = v41;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v44,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_GalleryResourceEntity__MoveNext__) )
  {
    if ( !v44.fields._current )
      sub_1C32E7C(0);
    AssetPath = GalleryResourceEntity__GetAssetPath((GalleryResourceEntity_o *)v44.fields._current, 0);
    if ( !System_String__IsNullOrEmpty(AssetPath, 0) )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      isExistAssetStorage = AssetManager__isExistAssetStorage(AssetPath, 0);
      if ( isExistAssetStorage )
      {
        if ( !v16 )
          sub_1C32E7C(isExistAssetStorage);
        System_Collections_Generic_HashSet_object___Add(
          v16,
          (Il2CppObject *)AssetPath,
          (const MethodInfo_3650A0C *)Method_System_Collections_Generic_HashSet_string__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v44,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_GalleryResourceEntity__Dispose__);
  v21 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)v16,
                                                       (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_string___);
  v22 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
  IsNullOrEmpty = (System_Collections_Generic_List_object__o *)this->fields.nowLoadingAssetNameList;
  if ( !IsNullOrEmpty )
    goto LABEL_51;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    IsNullOrEmpty,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  i = v41;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v23 )
      break;
    if ( !v21 )
      sub_1C32E7C(v23);
    current = i.fields._current;
    if ( System_Collections_Generic_List_object___Contains(
           v21,
           i.fields._current,
           (const MethodInfo_3798B4C *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      System_Collections_Generic_List_object___Remove(
        v21,
        current,
        (const MethodInfo_3799CE4 *)Method_System_Collections_Generic_List_string__Remove__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  IsNullOrEmpty = (System_Collections_Generic_List_object__o *)this->fields.cacheAssetDataList;
  if ( !IsNullOrEmpty )
    goto LABEL_51;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    IsNullOrEmpty,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
  v42 = v41;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    if ( !v25 )
      break;
    v26 = v42.fields._current;
    if ( v42.fields._current )
    {
      if ( !v21 )
        sub_1C32E7C(v25);
      v27 = System_Collections_Generic_List_object___Contains(
              v21,
              (Il2CppObject *)v42.fields._current[1].monitor,
              (const MethodInfo_3798B4C *)Method_System_Collections_Generic_List_string__Contains__);
      monitor = (Il2CppObject *)v26[1].monitor;
      if ( v27 )
      {
        System_Collections_Generic_List_object___Remove(
          v21,
          monitor,
          (const MethodInfo_3799CE4 *)Method_System_Collections_Generic_List_string__Remove__);
      }
      else
      {
        if ( !v22 )
          sub_1C32E7C(v27);
        items = v22->fields._items;
        v32 = Method_System_Collections_Generic_List_string__Add__;
        ++v22->fields._version;
        if ( !items )
          sub_1C32E7C(v27);
        size = v22->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v22,
            monitor,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &items->obj.klass + size;
          v22->fields._size = size + 1;
          v34[4] = (Il2CppClass *)monitor;
          sub_1C32BC4((CGThumbnailListItem_o *)(v34 + 4), (int32_t)monitor, v28, v29);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
  if ( !v22 )
    goto LABEL_51;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    v22,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  for ( i = v41;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
        GalleryFullScreenListViewManager__ReleaseResourceCache_33068584(this, (System_String_o *)i.fields._current, v35) )
  {
    ;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  IsNullOrEmpty = (System_Collections_Generic_List_object__o *)this->fields.nowLoadingAssetNameList;
  if ( !IsNullOrEmpty
    || (System_Collections_Generic_List_object___AddRange(
          IsNullOrEmpty,
          (System_Collections_Generic_IEnumerable_T__o *)v21,
          (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_string__AddRange__),
        !v21) )
  {
LABEL_51:
    sub_1C32E7C(IsNullOrEmpty);
  }
  v36 = System_Collections_Generic_List_object___ToArray(
          v21,
          (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_string__ToArray__);
  *(_QWORD *)(v9 + 24) = v36;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 24), (int32_t)v36, v37, v38);
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v9 + 24), 0) )
  {
LABEL_43:
    ActionExtensions__Call(*(System_Action_o **)(v9 + 40), 0);
    return;
  }
  v39 = *(System_String_array **)(v9 + 24);
  v40 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v40,
    (Il2CppObject *)v9,
    Method_GalleryFullScreenListViewManager___c__DisplayClass19_0__LoadAssetCache_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_40442140(v39, v40, 5, 0);
}


void GalleryFullScreenListViewManager__LoadEnd(
        GalleryFullScreenListViewManager_o *this,
        System_String_array *assetLoadNames,
        bool isLoadFromThumbnail,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  System_Collections_Generic_List_object__o *nowLoadingAssetNameList; // x0
  Il2CppObject *current; // x23
  _BOOL8 v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  struct System_Collections_Generic_List_string__o *v17; // x0
  struct System_Collections_Generic_List_AssetData__o *cacheAssetDataList; // x22
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x1
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C329C1 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Contains_string___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_AssetData__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    byte_4C329C1 = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.nowLoadingAssetNameList, 0) )
  {
    v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
    nowLoadingAssetNameList = (System_Collections_Generic_List_object__o *)this->fields.nowLoadingAssetNameList;
    if ( !nowLoadingAssetNameList )
      goto LABEL_28;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      nowLoadingAssetNameList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    i = v21;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = i.fields._current;
      v10 = System_Linq_Enumerable__Contains_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)assetLoadNames,
              i.fields._current,
              (const MethodInfo_30FA694 *)Method_System_Linq_Enumerable_Contains_string___);
      if ( v10 )
      {
        if ( !v7 )
          sub_1C32E7C(v10);
        items = v7->fields._items;
        v14 = Method_System_Collections_Generic_List_string__Add__;
        ++v7->fields._version;
        if ( !items )
          sub_1C32E7C(v10);
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            current,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v16 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v16[4] = (Il2CppClass *)current;
          sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 4), (int32_t)current, v11, v12);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    if ( !v7 )
      goto LABEL_28;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      v7,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    for ( i = v21;
          System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
          System_Collections_Generic_List_object___Remove(
            (System_Collections_Generic_List_object__o *)v17,
            i.fields._current,
            (const MethodInfo_3799CE4 *)Method_System_Collections_Generic_List_string__Remove__) )
    {
      v17 = this->fields.nowLoadingAssetNameList;
      if ( !v17 )
        sub_1C32E7C(0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  }
  cacheAssetDataList = this->fields.cacheAssetDataList;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  nowLoadingAssetNameList = (System_Collections_Generic_List_object__o *)AssetManager__getAssetStorage_40443500(
                                                                           assetLoadNames,
                                                                           0);
  if ( !cacheAssetDataList )
LABEL_28:
    sub_1C32E7C(nowLoadingAssetNameList);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)cacheAssetDataList,
    (System_Collections_Generic_IEnumerable_T__o *)nowLoadingAssetNameList,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_AssetData__AddRange__);
  if ( GalleryFullScreenListViewManager__IsNonDisp(this, isLoadFromThumbnail, v19) )
  {
    *(_QWORD *)&this->fields.currentCenterIndex = -1;
    GalleryFullScreenListViewManager__ReleaseResourceCache(this, v20);
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

  if ( (byte_4C329C7 & 1) == 0 )
  {
    sub_1C32C20(&GalleryFullScreenListViewIndicator_TypeInfo);
    byte_4C329C7 = 1;
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

  if ( (byte_4C329C9 & 1) == 0 )
  {
    sub_1C32C20(&GalleryFullScreenListViewObject_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C329C9 = 1;
  }
  galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
  if ( !galleryFullScreenPanel )
    sub_1C32E7C(0);
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
              if ( !byte_4C313D1 )
              {
                sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
                byte_4C313D1 = 1;
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

  if ( (byte_4C329CA & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_GalleryFullScreenListViewManager__OnDragUpdate_b__31_0__);
    sub_1C32C20(&Method_GalleryFullScreenListViewManager__OnDragUpdate_b__31_1__);
    byte_4C329CA = 1;
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
      v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(v5, (Il2CppObject *)this, Method_GalleryFullScreenListViewManager__OnDragUpdate_b__31_0__, 0);
      v6 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(v6, (Il2CppObject *)this, Method_GalleryFullScreenListViewManager__OnDragUpdate_b__31_1__, 0);
      GalleryFullScreenDragProcess__OnDragUpdate(IsAbleToPinch, v5, v6, v7);
      return;
    }
LABEL_8:
    sub_1C32E7C(galleryFullScreenPanel);
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
  const MethodInfo *v8; // x3
  GalleryFullScreenListViewObject_o *v9; // x21
  __int64 naturalAligment; // x10
  void *itemDraw; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  System_Collections_Generic_IEnumerable_T__o *v14; // x20
  GalleryFullScreenListViewManager___c_c *v15; // x8
  System_Action_object__o *_9__25_0; // x21
  Il2CppObject *v17; // x22
  struct GalleryFullScreenListViewManager___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_Object_o *v21; // x20
  const MethodInfo *v22; // x1
  GalleryFullScreenListViewObject_o *v23; // x20
  __int64 v24; // x10
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2
  System_Action_T__o *changeListItemAction; // x21
  __int64 v28; // x8
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x4
  Il2CppObject *Instance; // x21
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x4
  bool IsCG; // w21
  int32_t oldCenterIndex; // w9
  int32_t index; // w8
  System_Action_bool__o *v40; // x22
  Il2CppObject *galleryFullScreenPanel; // x24
  System_Action_o *v42; // x23
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x4

  if ( (byte_4C329C5 & 1) == 0 )
  {
    sub_1C32C20(&Method_ActionExtensions_Call_int___);
    sub_1C32C20(&System_Action_bool__TypeInfo);
    sub_1C32C20(&System_Action_GalleryFullScreenListViewItem__TypeInfo);
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_GalleryFullScreenListViewItem___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Cast_GalleryFullScreenListViewItem___);
    sub_1C32C20(&Method_GalleryFullScreenListViewManager__OnModifyViewerCenter_b__25_1__);
    sub_1C32C20(&GalleryFullScreenListViewObject_TypeInfo);
    sub_1C32C20(&Method_GalleryFullScreenPanel_Close__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C32C20(&Method_GalleryFullScreenListViewManager___c__OnModifyViewerCenter_b__25_0__);
    sub_1C32C20(&GalleryFullScreenListViewManager___c_TypeInfo);
    byte_4C329C5 = 1;
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
          v9 = (GalleryFullScreenListViewObject_o *)v6->fields.viewObject;
          if ( v9 )
          {
            naturalAligment = GalleryFullScreenListViewObject_TypeInfo->_2.naturalAligment;
            if ( v9->klass->_2.naturalAligment >= (unsigned int)naturalAligment
              && (GalleryFullScreenListViewObject_c *)v9->klass->_2.typeHierarchy[naturalAligment - 1] == GalleryFullScreenListViewObject_TypeInfo )
            {
              itemDraw = v9->fields.itemDraw;
              if ( !itemDraw )
                goto LABEL_54;
              GalleryFullScreenListViewItemDraw__SetMovieCallBack(
                (GalleryFullScreenListViewItemDraw_o *)itemDraw,
                0,
                0,
                v8);
              GalleryFullScreenListViewObject__DeleteDragObject(v9, v12);
              this->fields.oldCenterIndex = v6->fields.index;
              itemDraw = v9->fields.itemDraw;
              if ( !itemDraw )
                goto LABEL_54;
              GalleryFullScreenListViewItemDraw__StopMovie((GalleryFullScreenListViewItemDraw_o *)itemDraw, v13);
            }
          }
        }
      }
      if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.itemList, 0) )
      {
        v14 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Cast_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.itemList,
                                                               (const MethodInfo_30EBAC8 *)Method_System_Linq_Enumerable_Cast_GalleryFullScreenListViewItem___);
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
          _9__25_0 = (System_Action_object__o *)sub_1C32E6C(System_Action_GalleryFullScreenListViewItem__TypeInfo);
          System_Action_object____ctor(
            _9__25_0,
            v17,
            Method_GalleryFullScreenListViewManager___c__OnModifyViewerCenter_b__25_0__,
            0);
          static_fields = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
          static_fields->__9__25_0 = (struct System_Action_GalleryFullScreenListViewItem__o *)_9__25_0;
          sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__25_0, (int32_t)_9__25_0, v19, v20);
        }
        BasicHelper__ForEach_object_(
          v14,
          (System_Action_T__o *)_9__25_0,
          (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_GalleryFullScreenListViewItem___);
      }
      v21 = (UnityEngine_Object_o *)centerItem->fields.viewObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v21, 0, 0) )
        goto LABEL_52;
      v23 = (GalleryFullScreenListViewObject_o *)centerItem->fields.viewObject;
      if ( !v23 )
        goto LABEL_52;
      v24 = GalleryFullScreenListViewObject_TypeInfo->_2.naturalAligment;
      if ( v23->klass->_2.naturalAligment < (unsigned int)v24
        || (GalleryFullScreenListViewObject_c *)v23->klass->_2.typeHierarchy[v24 - 1] != GalleryFullScreenListViewObject_TypeInfo )
      {
        goto LABEL_52;
      }
      itemDraw = GalleryFullScreenListViewObject__GetItem(
                   (GalleryFullScreenListViewObject_o *)centerItem->fields.viewObject,
                   v22);
      if ( !itemDraw )
        goto LABEL_54;
      *((_BYTE *)itemDraw + 136) = 1;
      itemDraw = this->fields.galleryFullScreenPanel;
      if ( !itemDraw )
        goto LABEL_54;
      if ( !GalleryFullScreenPanel__CheckSameDispType((GalleryFullScreenPanel_o *)itemDraw, 0, 0) )
      {
        changeListItemAction = (System_Action_T__o *)this->fields.changeListItemAction;
        itemDraw = GalleryFullScreenListViewObject__GetItem(v23, v25);
        if ( !itemDraw )
          goto LABEL_54;
        v28 = *((_QWORD *)itemDraw + 16);
        if ( !v28 )
          goto LABEL_54;
        ActionExtensions__Call_int_(
          changeListItemAction,
          *(_DWORD *)(v28 + 16),
          (const MethodInfo_3029C40 *)Method_ActionExtensions_Call_int___);
      }
      if ( GalleryFullScreenListViewManager__IsNonDisp(this, 0, v26) )
        GalleryFullScreenListViewObject__Init(v23, 2, 0, 0, v30);
      else
        GalleryFullScreenListViewManager__InitObjInLoadRange(this, 0, v29);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      itemDraw = GalleryFullScreenListViewObject__GetItem(v23, v32);
      if ( !itemDraw
        || (itemDraw = (void *)*((_QWORD *)itemDraw + 16)) == 0
        || (itemDraw = GalleryResourceEntity__GetAssetPath((GalleryResourceEntity_o *)itemDraw, 0), !Instance)
        || (AssetManager__InterruptDownloadAssetStorage((AssetManager_o *)Instance, (System_String_o *)itemDraw, 0),
            GalleryFullScreenListViewObject__DeleteDragObject(v23, v33),
            (itemDraw = GalleryFullScreenListViewObject__GetItem(v23, v34)) == 0) )
      {
LABEL_54:
        sub_1C32E7C(itemDraw);
      }
      IsCG = GalleryType__IsCG(*((_DWORD *)itemDraw + 30), 0);
      if ( IsCG )
        GalleryFullScreenListViewManager__CreateViewerObj(this, v23, v35);
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
          GalleryFullScreenListViewManager__SetEnableScroll(this, this->fields.isInput, 0, !IsCG, v36);
LABEL_52:
          itemDraw = this->fields.galleryFullScreenPanel;
          if ( itemDraw )
          {
            GalleryFullScreenPanel__SetDispType((GalleryFullScreenPanel_o *)itemDraw, 2, 0);
            GalleryFullScreenListViewManager__LoadAssetCache(this, this->fields.loadRangeFromCenter, 0, 0, v44);
            return;
          }
          goto LABEL_54;
        }
      }
      v40 = (System_Action_bool__o *)sub_1C32E6C(System_Action_bool__TypeInfo);
      System_Action_bool____ctor(
        v40,
        (Il2CppObject *)this,
        Method_GalleryFullScreenListViewManager__OnModifyViewerCenter_b__25_1__,
        0);
      galleryFullScreenPanel = (Il2CppObject *)this->fields.galleryFullScreenPanel;
      v42 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(v42, galleryFullScreenPanel, (intptr_t)Method_GalleryFullScreenPanel_Close__, 0);
      itemDraw = v23->fields.itemDraw;
      if ( !itemDraw )
        goto LABEL_54;
      GalleryFullScreenListViewItemDraw__StartPlayMovieCoroutine(
        (GalleryFullScreenListViewItemDraw_o *)itemDraw,
        v40,
        v42,
        v43);
      goto LABEL_51;
    }
  }
}


void GalleryFullScreenListViewManager__ReleaseResourceCache(
        GalleryFullScreenListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_AssetData__o *cacheAssetDataList; // x0
  System_String_o *v4; // x20
  struct System_Collections_Generic_List_AssetData__o *v5; // x8
  int32_t size; // w2
  int v7; // w9
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C329C2 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_AssetData__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    byte_4C329C2 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.cacheAssetDataList, 0) )
  {
    cacheAssetDataList = this->fields.cacheAssetDataList;
    if ( !cacheAssetDataList )
      goto LABEL_15;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      (System_Collections_Generic_List_object__o *)cacheAssetDataList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v8,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
    {
      if ( v8.fields._current )
      {
        v4 = *(System_String_o **)((char *)&v8.fields._current->klass + (unsigned __int64)&off_18);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__releaseAssetStorage(v4, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v8,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    v5 = this->fields.cacheAssetDataList;
    if ( !v5 )
LABEL_15:
      sub_1C32E7C(cacheAssetDataList);
    size = v5->fields._size;
    v7 = v5->fields._version + 1;
    v5->fields._size = 0;
    v5->fields._version = v7;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v5->fields._items, 0, size, 0);
  }
}


void GalleryFullScreenListViewManager__ReleaseResourceCache_33068584(
        GalleryFullScreenListViewManager_o *this,
        System_String_o *targetName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  struct System_Collections_Generic_List_AssetData__o *cacheAssetDataList; // x0
  Il2CppObject *current; // x22
  System_String_o *monitor; // x23
  __int64 v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  struct System_Collections_Generic_List_AssetData__o *v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C329C3 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_AssetData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_AssetData__Remove__);
    sub_1C32C20(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_AssetData__TypeInfo);
    byte_4C329C3 = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.cacheAssetDataList, 0) )
  {
    v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_AssetData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_AssetData___ctor__);
    cacheAssetDataList = this->fields.cacheAssetDataList;
    if ( !cacheAssetDataList )
      goto LABEL_26;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      (System_Collections_Generic_List_object__o *)cacheAssetDataList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    i = v17;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
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
          sub_1C32E7C(v9);
        items = v5->fields._items;
        v13 = Method_System_Collections_Generic_List_AssetData__Add__;
        ++v5->fields._version;
        if ( !items )
          sub_1C32E7C(v9);
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            current,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v15[4] = (Il2CppClass *)current;
          sub_1C32BC4((CGThumbnailListItem_o *)(v15 + 4), (int32_t)current, v10, v11);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    if ( !v5 )
LABEL_26:
      sub_1C32E7C(cacheAssetDataList);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      v5,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    for ( i = v17;
          System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
          System_Collections_Generic_List_object___Remove(
            (System_Collections_Generic_List_object__o *)v16,
            i.fields._current,
            (const MethodInfo_3799CE4 *)Method_System_Collections_Generic_List_AssetData__Remove__) )
    {
      v16 = this->fields.cacheAssetDataList;
      if ( !v16 )
        sub_1C32E7C(0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
  }
}


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
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  UnityEngine_Transform_o *v16; // x0
  const MethodInfo *v17; // x2
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v19; // x2
  UIScrollView_o *scrollView; // x21
  char v21; // w8
  int32_t index[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C329CB & 1) == 0 )
  {
    sub_1C32C20(&GalleryFullScreenListViewIndicator_TypeInfo);
    sub_1C32C20(&StringLiteral_8934/*"MaskRoot/BackMask"*/);
    byte_4C329CB = 1;
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
    GalleryFullScreenListViewIndicator__Closed(indicator, v14);
  }
  else
  {
    if ( isEnable )
    {
      indicator->fields.status = 1;
      GalleryFullScreenListViewIndicator__SetActiveObject(indicator, 1, v15);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      AndroidBackKeyManager__RemoveBackBtn_44858496(transform, (System_String_o *)StringLiteral_8934/*"MaskRoot/BackMask"*/, 0);
      goto LABEL_16;
    }
    galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
    if ( !galleryFullScreenPanel )
      goto LABEL_25;
    if ( !GalleryFullScreenPanel__IsAbleToPinch(galleryFullScreenPanel, 0) )
      goto LABEL_16;
    indicator->fields.status = 3;
  }
  v16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_44857896(v16, (System_String_o *)StringLiteral_8934/*"MaskRoot/BackMask"*/, 0);
LABEL_16:
  GalleryFullScreenListViewIndicator__SetPageMax(indicator, index[1], v17);
  GalleryFullScreenListViewIndicator__SetPageIndex(indicator, index[0], v19);
  v11 &= (unsigned int)(indicator->fields.status - 1) < 2 || isDisableUi;
LABEL_17:
  scrollView = this->fields.scrollView;
  if ( isEnable || isActiveScrollView )
  {
    if ( scrollView )
    {
      v21 = 1;
      goto LABEL_23;
    }
LABEL_25:
    sub_1C32E7C(galleryFullScreenPanel);
  }
  if ( !scrollView )
    goto LABEL_25;
  v21 = v11 & UIScrollView__get_isDragging(scrollView, 0);
LABEL_23:
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scrollView, v21 & 1, 0);
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
  const MethodInfo *v8; // x4
  int32_t initMode; // w8
  int32_t v10; // w1

  if ( (byte_4C329BE & 1) == 0 )
  {
    sub_1C32C20(&GalleryFullScreenListViewObject_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C329BE = 1;
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
        sub_1C32E7C(v7);
      if ( initMode == 2 )
        v10 = 3;
      else
        v10 = 2;
      GalleryFullScreenListViewObject__Init((GalleryFullScreenListViewObject_o *)obj, v10, 0, 0, v8);
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

  if ( (byte_4C329CD & 1) == 0 )
  {
    sub_1C32C20(&GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36_TypeInfo);
    byte_4C329CD = 1;
  }
  v7 = sub_1C32E6C(GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 40), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 32) = selectGalleryId;
  *(_QWORD *)(v7 + 48) = endCallBack;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 48), (int32_t)endCallBack, v10, v11);
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
    sub_1C32E7C(galleryFullScreenPanel);
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
    sub_1C32E7C(galleryFullScreenPanel);
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
    sub_1C32E7C(scrollView);
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
  System_Action_o *endCallBack; // x0
  bool result; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x21
  System_Func_object__bool__o *v10; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x21
  GalleryFullScreenListViewManager___c_c *v12; // x8
  System_Func_object__int__o *_9__36_1; // x22
  Il2CppObject *v14; // x23
  struct GalleryFullScreenListViewManager___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppClass *klass; // x1
  GalleryFullScreenListViewObject_c *v22; // x8
  __int64 naturalAligment; // x9
  CGThumbnailListItem_o *v24; // x0
  System_Func_bool__o *v25; // x21
  UnityEngine_WaitWhile_o *v26; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v28; // w2
  const MethodInfo *v29; // x3

  if ( (byte_4C329D2 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Cast_GalleryFullScreenListViewItem___);
    sub_1C32C20(&Method_System_Linq_Enumerable_First_GalleryFullScreenListViewItem___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderBy_GalleryFullScreenListViewItem__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_GalleryFullScreenListViewItem___);
    sub_1C32C20(&System_Func_bool__TypeInfo);
    sub_1C32C20(&System_Func_GalleryFullScreenListViewItem__bool__TypeInfo);
    sub_1C32C20(&System_Func_GalleryFullScreenListViewItem__int__TypeInfo);
    sub_1C32C20(&GalleryFullScreenListViewObject_TypeInfo);
    sub_1C32C20(&Method_GalleryFullScreenListViewManager___c__WaitSetDataSelectGallery_b__36_1__);
    sub_1C32C20(&Method_GalleryFullScreenListViewManager___c__DisplayClass36_0__WaitSetDataSelectGallery_b__0__);
    sub_1C32C20(&Method_GalleryFullScreenListViewManager___c__DisplayClass36_0__WaitSetDataSelectGallery_b__2__);
    sub_1C32C20(&GalleryFullScreenListViewManager___c__DisplayClass36_0_TypeInfo);
    sub_1C32C20(&GalleryFullScreenListViewManager___c_TypeInfo);
    sub_1C32C20(&UnityEngine_WaitWhile_TypeInfo);
    byte_4C329D2 = 1;
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
  v5 = sub_1C32E6C(GalleryFullScreenListViewManager___c__DisplayClass36_0_TypeInfo);
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
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_object_(
                                                              (System_Collections_IEnumerable_o *)_4__this->fields.itemList,
                                                              (const MethodInfo_30EBAC8 *)Method_System_Linq_Enumerable_Cast_GalleryFullScreenListViewItem___);
  v10 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_GalleryFullScreenListViewItem__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_GalleryFullScreenListViewManager___c__DisplayClass36_0__WaitSetDataSelectGallery_b__0__,
    0);
  v11 = System_Linq_Enumerable__Where_object_(
          v9,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_GalleryFullScreenListViewItem___);
  v12 = GalleryFullScreenListViewManager___c_TypeInfo;
  if ( !GalleryFullScreenListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GalleryFullScreenListViewManager___c_TypeInfo);
    v12 = GalleryFullScreenListViewManager___c_TypeInfo;
  }
  _9__36_1 = (System_Func_object__int__o *)v12->static_fields->__9__36_1;
  if ( !_9__36_1 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = GalleryFullScreenListViewManager___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__36_1 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_GalleryFullScreenListViewItem__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__36_1,
      v14,
      Method_GalleryFullScreenListViewManager___c__WaitSetDataSelectGallery_b__36_1__,
      0);
    static_fields = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__36_1 = (struct System_Func_GalleryFullScreenListViewItem__int__o *)_9__36_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__36_1, (int32_t)_9__36_1, v16, v17);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v11,
                                                               (System_Func_TSource__TKey__o *)_9__36_1,
                                                               (const MethodInfo_310CB44 *)Method_System_Linq_Enumerable_OrderBy_GalleryFullScreenListViewItem__int___);
  object = System_Linq_Enumerable__First_object_(
             v18,
             (const MethodInfo_3103CC8 *)Method_System_Linq_Enumerable_First_GalleryFullScreenListViewItem___);
  if ( !object )
LABEL_27:
    sub_1C32E7C(object);
  klass = object[7].klass;
  if ( klass )
  {
    v22 = GalleryFullScreenListViewObject_TypeInfo;
    naturalAligment = GalleryFullScreenListViewObject_TypeInfo->_2.naturalAligment;
    if ( *((unsigned __int8 *)klass->_1.image + 304) >= (unsigned int)naturalAligment
      && *(GalleryFullScreenListViewObject_c **)(*((_QWORD *)klass->_1.image + 25) + 8 * (naturalAligment - 1)) == GalleryFullScreenListViewObject_TypeInfo )
    {
      *(_QWORD *)(v5 + 24) = klass;
      v24 = (CGThumbnailListItem_o *)(v5 + 24);
      if ( *((unsigned __int8 *)klass->_1.image + 304) >= (unsigned int)naturalAligment
        && *(GalleryFullScreenListViewObject_c **)(*((_QWORD *)klass->_1.image + 25) + 8 * (naturalAligment - 1)) == v22 )
      {
        goto LABEL_26;
      }
    }
    sub_1C3313C(klass);
  }
  *(_QWORD *)(v5 + 24) = klass;
  v24 = (CGThumbnailListItem_o *)(v5 + 24);
LABEL_26:
  sub_1C32BC4(v24, (int32_t)klass, v19, v20);
  v25 = (System_Func_bool__o *)sub_1C32E6C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v25,
    (Il2CppObject *)v5,
    Method_GalleryFullScreenListViewManager___c__DisplayClass36_0__WaitSetDataSelectGallery_b__2__,
    0);
  v26 = (UnityEngine_WaitWhile_o *)sub_1C32E6C(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v26, v25, 0);
  this->fields.__2__current = (Il2CppObject *)v26;
  p__2__current = &this->fields.__2__current;
  sub_1C32BC4((CGThumbnailListItem_o *)p__2__current, (int32_t)v26, v28, v29);
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

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
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

  if ( (byte_4C329D1 & 1) == 0 )
  {
    sub_1C32C20(&GalleryFullScreenListViewManager___c_TypeInfo);
    byte_4C329D1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(GalleryFullScreenListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GalleryFullScreenListViewManager___c_TypeInfo->static_fields->__9 = (struct GalleryFullScreenListViewManager___c_o *)v1;
  sub_1C32BC4(
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
    sub_1C32E7C(this);
  return x->fields.idx;
}


GalleryResourceEntity_o *GalleryFullScreenListViewManager___c___GetDiffResourcePageInfo_b__35_0(
        GalleryFullScreenListViewManager___c_o *this,
        GalleryFullScreenListViewItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields._GalleryResourceEntity_k__BackingField;
}


int32_t GalleryFullScreenListViewManager___c___GetDiffResourcePageInfo_b__35_2(
        GalleryFullScreenListViewManager___c_o *this,
        GalleryResourceEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.idx;
}


int32_t GalleryFullScreenListViewManager___c___GetInRangeGalleryResourceList_b__18_0(
        GalleryFullScreenListViewManager___c_o *this,
        GalleryFullScreenListViewItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.index;
}


GalleryResourceEntity_o *GalleryFullScreenListViewManager___c___GetInRangeGalleryResourceList_b__18_1(
        GalleryFullScreenListViewManager___c_o *this,
        GalleryFullScreenListViewItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields._GalleryResourceEntity_k__BackingField;
}


bool GalleryFullScreenListViewManager___c___GetInRangeGalleryResourceList_b__18_2(
        GalleryFullScreenListViewManager___c_o *this,
        GalleryResourceEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return GalleryType__IsCG(x->fields.galleryType, 0);
}


void GalleryFullScreenListViewManager___c___OnModifyViewerCenter_b__25_0(
        GalleryFullScreenListViewManager___c_o *this,
        GalleryFullScreenListViewItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  x->fields.isCenterItem = 0;
}


int32_t GalleryFullScreenListViewManager___c___WaitSetDataSelectGallery_b__36_1(
        GalleryFullScreenListViewManager___c_o *this,
        GalleryFullScreenListViewItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
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
    sub_1C32E7C(0);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return itemDraw->fields.setDataWait;
}