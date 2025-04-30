void __fastcall GalleryFullScreenListViewManager___ctor(
        GalleryFullScreenListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4A49608 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_AssetData___ctor__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_string___ctor__, v3);
    sub_1B863B8(&System_Collections_Generic_List_string__TypeInfo, v4);
    sub_1B863B8(&System_Collections_Generic_List_AssetData__TypeInfo, v5);
    byte_4A49608 = 1;
  }
  *(_QWORD *)&this->fields.currentCenterIndex = -1LL;
  v6 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.nowLoadingAssetNameList = (struct System_Collections_Generic_List_string__o *)v6;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.nowLoadingAssetNameList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_AssetData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.cacheAssetDataList = (struct System_Collections_Generic_List_AssetData__o *)v9;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.cacheAssetDataList, (int32_t)v9, v10, v11);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall GalleryFullScreenListViewManager__AfterScrollCallback(
        GalleryFullScreenListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4A495F4 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_GalleryFullScreenListViewManager_AfterScrollCallback__, v3);
    byte_4A495F4 = 1;
  }
  GalleryFullScreenListViewManager__Change(this, method);
  v4 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_GalleryFullScreenListViewManager_AfterScrollCallback__, 0LL);
  this->fields.callbackAfterScroll = v4;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackAfterScroll, (int32_t)v4, v5, v6);
}


void __fastcall GalleryFullScreenListViewManager__Awake(
        GalleryFullScreenListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


bool __fastcall GalleryFullScreenListViewManager__CenterItemIsMovie(
        GalleryFullScreenListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t *centerItem; // x8
  __int64 methodPtr_low; // x11
  bool result; // w0

  if ( (byte_4A49606 & 1) == 0 )
  {
    sub_1B863B8(&GalleryFullScreenListViewItem_TypeInfo, method);
    byte_4A49606 = 1;
  }
  centerItem = (int32_t *)this->fields.centerItem;
  result = centerItem
        && (methodPtr_low = LOBYTE(GalleryFullScreenListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)centerItem + 304LL) >= (unsigned int)methodPtr_low)
        && *(GalleryFullScreenListViewItem_c **)(*(_QWORD *)(*(_QWORD *)centerItem + 200LL) + 8 * methodPtr_low - 8) == GalleryFullScreenListViewItem_TypeInfo
        && GalleryType__IsMovie(centerItem[28], 0LL);
  return result;
}


void __fastcall GalleryFullScreenListViewManager__Change(
        GalleryFullScreenListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct ListViewItem_o *centerItem; // x24
  ListViewItem_o *Item; // x0
  UnityEngine_Object_o *viewObject; // x20
  GalleryFullScreenListViewObject_o *v11; // x20
  __int64 methodPtr_low; // x10
  System_Action_bool__o *v13; // x21
  Il2CppObject *galleryFullScreenPanel; // x22
  System_Action_o *v15; // x23

  if ( (byte_4A495F5 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_bool__TypeInfo, method);
    sub_1B863B8(&System_Action_TypeInfo, v3);
    sub_1B863B8(&Method_GalleryFullScreenListViewManager__Change_b__16_0__, v4);
    sub_1B863B8(&GalleryFullScreenListViewObject_TypeInfo, v5);
    sub_1B863B8(&Method_GalleryFullScreenPanel_Close__, v6);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v7);
    byte_4A495F5 = 1;
  }
  centerItem = this->fields.centerItem;
  Item = ListViewManager__GetItem((ListViewManager_o *)this, this->fields.oldCenterIndex, 0LL);
  if ( centerItem && Item && this->fields.oldCenterIndex != centerItem->fields.index )
  {
    viewObject = (UnityEngine_Object_o *)centerItem->fields.viewObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
    {
      v11 = (GalleryFullScreenListViewObject_o *)centerItem->fields.viewObject;
      if ( v11 )
      {
        methodPtr_low = LOBYTE(GalleryFullScreenListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v11->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (GalleryFullScreenListViewObject_c *)v11->klass->_2.typeHierarchy[methodPtr_low - 1] == GalleryFullScreenListViewObject_TypeInfo )
        {
          v13 = (System_Action_bool__o *)sub_1B86604(System_Action_bool__TypeInfo);
          System_Action_bool____ctor(
            v13,
            (Il2CppObject *)this,
            Method_GalleryFullScreenListViewManager__Change_b__16_0__,
            0LL);
          galleryFullScreenPanel = (Il2CppObject *)this->fields.galleryFullScreenPanel;
          v15 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
          System_Action___ctor(v15, galleryFullScreenPanel, (intptr_t)Method_GalleryFullScreenPanel_Close__, 0LL);
          GalleryFullScreenListViewObject__PlayMovie(v11, v13, v15, 0LL);
        }
      }
    }
    this->fields.oldCenterIndex = centerItem->fields.index;
  }
}


void __fastcall GalleryFullScreenListViewManager__CreateList(
        GalleryFullScreenListViewManager_o *this,
        System_Collections_Generic_List_int__o *galleryIdList,
        int32_t selectGalleryId,
        System_Action_int__o *changeListItem,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  Il2CppObject *Master_object; // x24
  System_Collections_Generic_List_object__o *v37; // x22
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v41; // x1
  _BOOL8 v42; // x0
  __int64 v43; // x1
  System_Collections_Generic_List_GalleryResourceEntity__o *EnableGalleryResourceEntityListByGalleryId; // x0
  GalleryFullScreenListViewManager___c_c *v45; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x23
  System_Func_object__int__o *_9__13_0; // x25
  Il2CppObject *v48; // x26
  struct GalleryFullScreenListViewManager___c_StaticFields *static_fields; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  System_Collections_Generic_IEnumerable_T__o *v53; // x0
  int32_t v54; // w24
  int32_t v55; // w23
  GalleryResourceEntity_o *Item; // x25
  GalleryFullScreenListViewItem_o *v57; // x26
  const MethodInfo *v58; // x3
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  Il2CppClass **v64; // x8
  Il2CppObject *Component_object; // x0
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  UIDragDropListViewBackMask_o *backMask; // x21
  EventDelegate_Callback_o *v70; // x22
  EventDelegate_Callback_o *v71; // x24
  const MethodInfo *v72; // x4
  System_Action_o *v73; // x21
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  Il2CppObject *ComponentInChildren_object__49695012; // x21
  SpringPanel_OnFinished_o *v77; // x22
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  System_Collections_Generic_List_Enumerator_int__o v82; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v83; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4A495F3 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, galleryIdList);
    sub_1B863B8(&EventDelegate_Callback_TypeInfo, v9);
    sub_1B863B8(&Method_UnityEngine_Component_GetComponentInChildren_UICenterOnChild___, v10);
    sub_1B863B8(&Method_DataManager_GetMaster_GalleryResourceMaster___, v11);
    sub_1B863B8(&DataManager_TypeInfo, v12);
    sub_1B863B8(&Method_System_Linq_Enumerable_OrderBy_GalleryResourceEntity__int___, v13);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v16);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v17);
    sub_1B863B8(&System_Func_GalleryResourceEntity__int__TypeInfo, v18);
    sub_1B863B8(&GalleryFullScreenListViewItem_TypeInfo, v19);
    sub_1B863B8(&Method_GalleryFullScreenListViewManager_AfterScrollCallback__, v20);
    sub_1B863B8(&Method_GalleryFullScreenListViewManager_OnClickMaxim__, v21);
    sub_1B863B8(&Method_GalleryFullScreenListViewManager_OnDragUpdate__, v22);
    sub_1B863B8(&Method_GalleryFullScreenListViewManager_OnFinishedChange__, v23);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___, v24);
    sub_1B863B8(&Method_System_Collections_Generic_List_GalleryResourceEntity__AddRange__, v25);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v26);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v27);
    sub_1B863B8(&Method_System_Collections_Generic_List_GalleryResourceEntity___ctor__, v28);
    sub_1B863B8(&Method_System_Collections_Generic_List_GalleryResourceEntity__get_Count__, v29);
    sub_1B863B8(&Method_System_Collections_Generic_List_GalleryResourceEntity__get_Item__, v30);
    sub_1B863B8(&System_Collections_Generic_List_GalleryResourceEntity__TypeInfo, v31);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v32);
    sub_1B863B8(&SpringPanel_OnFinished_TypeInfo, v33);
    sub_1B863B8(&Method_GalleryFullScreenListViewManager___c__CreateList_b__13_0__, v34);
    sub_1B863B8(&GalleryFullScreenListViewManager___c_TypeInfo, v35);
    byte_4A495F3 = 1;
  }
  memset(&v83, 0, sizeof(v83));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_GalleryResourceMaster___);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  v37 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_GalleryResourceEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_GalleryResourceEntity___ctor__);
  this->fields.changeListItemAction = changeListItem;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.changeListItemAction, (int32_t)changeListItem, v38, v39);
  if ( !galleryIdList )
    goto LABEL_44;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v82,
    galleryIdList,
    (const MethodInfo_35E0408 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v83 = v82;
  while ( 1 )
  {
    v42 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v83,
            (const MethodInfo_337C530 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v42 )
      break;
    if ( !Master_object )
      sub_1B86614(v42, v43);
    EnableGalleryResourceEntityListByGalleryId = GalleryResourceMaster__GetEnableGalleryResourceEntityListByGalleryId(
                                                   (GalleryResourceMaster_o *)Master_object,
                                                   v83.fields._current,
                                                   0LL);
    v45 = GalleryFullScreenListViewManager___c_TypeInfo;
    v46 = (System_Collections_Generic_IEnumerable_TSource__o *)EnableGalleryResourceEntityListByGalleryId;
    if ( !GalleryFullScreenListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GalleryFullScreenListViewManager___c_TypeInfo);
      v45 = GalleryFullScreenListViewManager___c_TypeInfo;
    }
    _9__13_0 = (System_Func_object__int__o *)v45->static_fields->__9__13_0;
    if ( !_9__13_0 )
    {
      if ( !v45->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v45);
        v45 = GalleryFullScreenListViewManager___c_TypeInfo;
      }
      v48 = (Il2CppObject *)v45->static_fields->__9;
      _9__13_0 = (System_Func_object__int__o *)sub_1B86604(System_Func_GalleryResourceEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__13_0,
        v48,
        Method_GalleryFullScreenListViewManager___c__CreateList_b__13_0__,
        0LL);
      static_fields = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__13_0 = (struct System_Func_GalleryResourceEntity__int__o *)_9__13_0;
      sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v50, v51);
    }
    v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 v46,
                                                                 (System_Func_TSource__TKey__o *)_9__13_0,
                                                                 (const MethodInfo_2F9AB50 *)Method_System_Linq_Enumerable_OrderBy_GalleryResourceEntity__int___);
    v53 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToList_object_(
                                                           v52,
                                                           (const MethodInfo_2FADBE0 *)Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
    if ( !v37 )
      sub_1B86614(v53, v53);
    System_Collections_Generic_List_object___AddRange(
      v37,
      v53,
      (const MethodInfo_35FCB64 *)Method_System_Collections_Generic_List_GalleryResourceEntity__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v83,
    (const MethodInfo_337C52C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( !v37 )
    goto LABEL_44;
  if ( v37->fields._size >= 1 )
  {
    v54 = 0;
    v55 = -1;
    while ( 1 )
    {
      Item = (GalleryResourceEntity_o *)System_Collections_Generic_List_object___get_Item(
                                          v37,
                                          v54,
                                          (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_GalleryResourceEntity__get_Item__);
      v57 = (GalleryFullScreenListViewItem_o *)sub_1B86604(GalleryFullScreenListViewItem_TypeInfo);
      GalleryFullScreenListViewItem___ctor(v57, v54, Item, v58);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_44;
      items = itemList->fields._items;
      v62 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        goto LABEL_44;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v57,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
      }
      else
      {
        v64 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v64[4] = (Il2CppClass *)v57;
        sub_1B8635C((CGThumbnailListItem_o *)(v64 + 4), (int32_t)v57, v59, v60);
      }
      if ( !Item )
        goto LABEL_44;
      if ( Item->fields.galleryId == selectGalleryId && v55 <= -1 )
        v55 = v54;
      if ( ++v54 >= v37->fields._size )
        goto LABEL_35;
    }
  }
  v55 = -1;
LABEL_35:
  itemList = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(GalleryFullScreenListViewManager_o *, Il2CppMethodPointer))this->klass->vtable._7_GetDragRoot.method)(
                                                            this,
                                                            this->klass->vtable._8_ItemDragStart.methodPtr);
  if ( !itemList )
    goto LABEL_44;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)itemList,
                       (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
  this->fields.backMask = (struct UIDragDropListViewBackMask_o *)Component_object;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.backMask, (int32_t)Component_object, v67, v68);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  backMask = this->fields.backMask;
  v70 = (EventDelegate_Callback_o *)sub_1B86604(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v70, (Il2CppObject *)this, Method_GalleryFullScreenListViewManager_OnClickMaxim__, 0LL);
  v71 = (EventDelegate_Callback_o *)sub_1B86604(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v71, (Il2CppObject *)this, Method_GalleryFullScreenListViewManager_OnDragUpdate__, 0LL);
  if ( !backMask )
    goto LABEL_44;
  UIDragDropListViewBackMask__DragStartMultiTouch(backMask, v70, v71, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  GalleryFullScreenListViewManager__SetEnableScroll(this, 1, 0, 0, v72);
  v73 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v73, (Il2CppObject *)this, Method_GalleryFullScreenListViewManager_AfterScrollCallback__, 0LL);
  this->fields.callbackAfterScroll = v73;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackAfterScroll, (int32_t)v73, v74, v75);
  ListViewManager__JumpItem((ListViewManager_o *)this, v55, 0LL);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
  this->fields.currentCenterIndex = v55;
  if ( !itemList )
LABEL_44:
    sub_1B86614(itemList, v41);
  ComponentInChildren_object__49695012 = UnityEngine_Component__GetComponentInChildren_object__49695012(
                                           (UnityEngine_Component_o *)itemList,
                                           (const MethodInfo_2F64924 *)Method_UnityEngine_Component_GetComponentInChildren_UICenterOnChild___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object__49695012, 0LL, 0LL) )
  {
    v77 = (SpringPanel_OnFinished_o *)sub_1B86604(SpringPanel_OnFinished_TypeInfo);
    SpringPanel_OnFinished___ctor(
      v77,
      (Il2CppObject *)this,
      Method_GalleryFullScreenListViewManager_OnFinishedChange__,
      0LL);
    if ( !ComponentInChildren_object__49695012 )
      goto LABEL_44;
    ComponentInChildren_object__49695012[2].monitor = v77;
    sub_1B8635C((CGThumbnailListItem_o *)&ComponentInChildren_object__49695012[2].monitor, (int32_t)v77, v78, v79);
  }
  ActionExtensions__Call(action, 0LL);
}


void __fastcall GalleryFullScreenListViewManager__CreateViewerObj(
        GalleryFullScreenListViewManager_o *this,
        GalleryFullScreenListViewObject_o *galleryFullScreenListViewObject,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  GalleryFullScreenPanel_o *galleryFullScreenPanel; // x0
  GalleryFullScreenListViewObject_o *actionObject; // x20
  System_Action_o *v10; // x21

  if ( (byte_4A49600 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, galleryFullScreenListViewObject);
    sub_1B863B8(&Method_GalleryFullScreenListViewManager__CreateViewerObj_b__29_0__, v6);
    byte_4A49600 = 1;
  }
  this->fields.actionObject = galleryFullScreenListViewObject;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.actionObject,
    (int32_t)galleryFullScreenListViewObject,
    (int32_t)method,
    v3);
  galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
  if ( !galleryFullScreenPanel
    || (GalleryFullScreenPanel__SetDispType(galleryFullScreenPanel, 2, 0LL),
        actionObject = this->fields.actionObject,
        v10 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo),
        System_Action___ctor(
          v10,
          (Il2CppObject *)this,
          Method_GalleryFullScreenListViewManager__CreateViewerObj_b__29_0__,
          0LL),
        !actionObject) )
  {
    sub_1B86614(galleryFullScreenPanel, v7);
  }
  GalleryFullScreenListViewObject__Init(actionObject, 4, 0LL, v10, 0LL);
}


void __fastcall GalleryFullScreenListViewManager__DragEnd(
        GalleryFullScreenListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v6; // x21
  EventDelegate_Callback_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4A49607 & 1) == 0 )
  {
    sub_1B863B8(&EventDelegate_Callback_TypeInfo, method);
    sub_1B863B8(&Method_GalleryFullScreenListViewManager_OnClickMaxim__, v3);
    sub_1B863B8(&Method_GalleryFullScreenListViewManager_OnDragUpdate__, v4);
    byte_4A49607 = 1;
  }
  ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0LL);
  backMask = this->fields.backMask;
  v6 = (EventDelegate_Callback_o *)sub_1B86604(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v6, (Il2CppObject *)this, Method_GalleryFullScreenListViewManager_OnClickMaxim__, 0LL);
  v7 = (EventDelegate_Callback_o *)sub_1B86604(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v7, (Il2CppObject *)this, Method_GalleryFullScreenListViewManager_OnDragUpdate__, 0LL);
  if ( !backMask )
    sub_1B86614(v8, v9);
  UIDragDropListViewBackMask__DragEndMultiTouch(backMask, v6, v7, 0LL);
}


void __fastcall GalleryFullScreenListViewManager__GetDiffResourcePageInfo(
        GalleryFullScreenListViewManager_o *this,
        int32_t *diffCount,
        int32_t *index,
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  GalleryFullScreenListViewManager___c__DisplayClass35_0_o *v22; // x22
  int32_t CenterIndex; // w0
  System_Collections_Generic_List_object__o *Item; // x0
  GalleryFullScreenListViewItem_c *v25; // x1
  System_Collections_Generic_List_object__o *v26; // x21
  __int64 methodPtr_low; // x9
  System_Collections_Generic_List_object__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v29; // x0
  GalleryFullScreenListViewManager___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x23
  System_Func_object__object__o *_9__35_0; // x24
  Il2CppObject *v33; // x25
  struct GalleryFullScreenListViewManager___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x23
  System_Func_object__bool__o *v38; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x22
  GalleryFullScreenListViewManager___c_c *v41; // x0
  System_Func_object__int__o *_9__35_2; // x20
  Il2CppObject *v43; // x23
  struct GalleryFullScreenListViewManager___c_StaticFields *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  GalleryFullScreenListViewManager_o *v48; // x0
  const MethodInfo *v49; // x1

  if ( (byte_4A49604 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Cast_GalleryFullScreenListViewItem___, diffCount);
    sub_1B863B8(&Method_System_Linq_Enumerable_OrderBy_GalleryResourceEntity__int___, v7);
    sub_1B863B8(&Method_System_Linq_Enumerable_Select_GalleryFullScreenListViewItem__GalleryResourceEntity___, v8);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___, v9);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_GalleryResourceEntity___, v10);
    sub_1B863B8(&System_Func_GalleryResourceEntity__int__TypeInfo, v11);
    sub_1B863B8(&System_Func_GalleryResourceEntity__bool__TypeInfo, v12);
    sub_1B863B8(&System_Func_GalleryFullScreenListViewItem__GalleryResourceEntity__TypeInfo, v13);
    sub_1B863B8(&GalleryFullScreenListViewItem_TypeInfo, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_GalleryResourceEntity__IndexOf__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_GalleryResourceEntity__get_Count__, v16);
    sub_1B863B8(&Method_GalleryFullScreenListViewManager___c__GetDiffResourcePageInfo_b__35_0__, v17);
    sub_1B863B8(&Method_GalleryFullScreenListViewManager___c__GetDiffResourcePageInfo_b__35_2__, v18);
    sub_1B863B8(&Method_GalleryFullScreenListViewManager___c__DisplayClass35_0__GetDiffResourcePageInfo_b__1__, v19);
    sub_1B863B8(&GalleryFullScreenListViewManager___c__DisplayClass35_0_TypeInfo, v20);
    sub_1B863B8(&GalleryFullScreenListViewManager___c_TypeInfo, v21);
    byte_4A49604 = 1;
  }
  v22 = (GalleryFullScreenListViewManager___c__DisplayClass35_0_o *)sub_1B86604(GalleryFullScreenListViewManager___c__DisplayClass35_0_TypeInfo);
  GalleryFullScreenListViewManager___c__DisplayClass35_0___ctor(v22, 0LL);
  *diffCount = 0;
  *index = 0;
  CenterIndex = ListViewManager__GetCenterIndex((ListViewManager_o *)this, 0LL);
  if ( (CenterIndex & 0x80000000) == 0 )
  {
    Item = (System_Collections_Generic_List_object__o *)ListViewManager__GetItem(
                                                          (ListViewManager_o *)this,
                                                          CenterIndex,
                                                          0LL);
    if ( !Item )
      goto LABEL_25;
    v26 = Item;
    v25 = GalleryFullScreenListViewItem_TypeInfo;
    methodPtr_low = LOBYTE(GalleryFullScreenListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (GalleryFullScreenListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != GalleryFullScreenListViewItem_TypeInfo )
    {
      v48 = (GalleryFullScreenListViewManager_o *)sub_1B868D4(Item);
      GalleryFullScreenListViewManager__get_CenterPosition(v48, v49);
      return;
    }
    klass = Item[3].klass;
    if ( !klass || !v22 )
      goto LABEL_25;
    v22->fields.centerGalleryId = (int32_t)klass->_1.name;
    v29 = System_Linq_Enumerable__Cast_object_(
            (System_Collections_IEnumerable_o *)this->fields.itemList,
            (const MethodInfo_2F7E43C *)Method_System_Linq_Enumerable_Cast_GalleryFullScreenListViewItem___);
    v30 = GalleryFullScreenListViewManager___c_TypeInfo;
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)v29;
    if ( !GalleryFullScreenListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GalleryFullScreenListViewManager___c_TypeInfo);
      v30 = GalleryFullScreenListViewManager___c_TypeInfo;
    }
    _9__35_0 = (System_Func_object__object__o *)v30->static_fields->__9__35_0;
    if ( !_9__35_0 )
    {
      if ( !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        v30 = GalleryFullScreenListViewManager___c_TypeInfo;
      }
      v33 = (Il2CppObject *)v30->static_fields->__9;
      _9__35_0 = (System_Func_object__object__o *)sub_1B86604(System_Func_GalleryFullScreenListViewItem__GalleryResourceEntity__TypeInfo);
      System_Func_object__object____ctor(
        _9__35_0,
        v33,
        Method_GalleryFullScreenListViewManager___c__GetDiffResourcePageInfo_b__35_0__,
        0LL);
      static_fields = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__35_0 = (struct System_Func_GalleryFullScreenListViewItem__GalleryResourceEntity__o *)_9__35_0;
      sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__35_0, (int32_t)_9__35_0, v35, v36);
    }
    v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v31,
                                                                 (System_Func_TSource__TResult__o *)_9__35_0,
                                                                 (const MethodInfo_2FA1274 *)Method_System_Linq_Enumerable_Select_GalleryFullScreenListViewItem__GalleryResourceEntity___);
    v38 = (System_Func_object__bool__o *)sub_1B86604(System_Func_GalleryResourceEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v38,
      (Il2CppObject *)v22,
      Method_GalleryFullScreenListViewManager___c__DisplayClass35_0__GetDiffResourcePageInfo_b__1__,
      0LL);
    v39 = System_Linq_Enumerable__Where_object_(
            v37,
            (System_Func_TSource__bool__o *)v38,
            (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_GalleryResourceEntity___);
    Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                          v39,
                                                          (const MethodInfo_2FADBE0 *)Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
    if ( !Item )
      goto LABEL_25;
    v40 = (System_Collections_Generic_IEnumerable_TSource__o *)Item;
    *diffCount = Item->fields._size;
    v41 = GalleryFullScreenListViewManager___c_TypeInfo;
    if ( !GalleryFullScreenListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GalleryFullScreenListViewManager___c_TypeInfo);
      v41 = GalleryFullScreenListViewManager___c_TypeInfo;
    }
    _9__35_2 = (System_Func_object__int__o *)v41->static_fields->__9__35_2;
    if ( !_9__35_2 )
    {
      if ( !v41->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v41);
        v41 = GalleryFullScreenListViewManager___c_TypeInfo;
      }
      v43 = (Il2CppObject *)v41->static_fields->__9;
      _9__35_2 = (System_Func_object__int__o *)sub_1B86604(System_Func_GalleryResourceEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__35_2,
        v43,
        Method_GalleryFullScreenListViewManager___c__GetDiffResourcePageInfo_b__35_2__,
        0LL);
      v44 = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
      v44->__9__35_2 = (struct System_Func_GalleryResourceEntity__int__o *)_9__35_2;
      sub_1B8635C((CGThumbnailListItem_o *)&v44->__9__35_2, (int32_t)_9__35_2, v45, v46);
    }
    v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 v40,
                                                                 (System_Func_TSource__TKey__o *)_9__35_2,
                                                                 (const MethodInfo_2F9AB50 *)Method_System_Linq_Enumerable_OrderBy_GalleryResourceEntity__int___);
    Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                          v47,
                                                          (const MethodInfo_2FADBE0 *)Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
    if ( !Item )
LABEL_25:
      sub_1B86614(Item, v25);
    *index = System_Collections_Generic_List_object___IndexOf(
               Item,
               (Il2CppObject *)v26[3].klass,
               (const MethodInfo_35FD5F8 *)Method_System_Collections_Generic_List_GalleryResourceEntity__IndexOf__);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_GalleryResourceEntity__o *__fastcall GalleryFullScreenListViewManager__GetInRangeGalleryResourceList(
        GalleryFullScreenListViewManager_o *this,
        int32_t loadRange,
        const MethodInfo *method)
{
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  System_Collections_IEnumerable_o *itemList; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v22; // x0
  GalleryFullScreenListViewManager___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x21
  System_Func_object__int__o *_9__18_0; // x22
  Il2CppObject *v26; // x23
  struct GalleryFullScreenListViewManager___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v30; // x0
  GalleryFullScreenListViewManager___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x21
  System_Func_object__object__o *_9__18_1; // x22
  Il2CppObject *v34; // x23
  struct GalleryFullScreenListViewManager___c_StaticFields *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  System_Collections_Generic_List_object__o *v39; // x21
  int32_t CenterIndex; // w20
  __int64 v41; // x0
  __int64 v42; // x1
  int32_t v43; // w22
  int32_t v44; // w0
  System_Collections_Generic_List_T__o *Range; // x0
  GalleryFullScreenListViewManager___c_c *v46; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x19
  System_Func_object__bool__o *_9__18_2; // x20
  Il2CppObject *v49; // x21
  struct GalleryFullScreenListViewManager___c_StaticFields *v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  System_Collections_Generic_List_object__o *v55; // x19

  if ( (byte_4A495F7 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Cast_GalleryFullScreenListViewItem___, *(_QWORD *)&loadRange);
    sub_1B863B8(&Method_System_Linq_Enumerable_OrderBy_GalleryFullScreenListViewItem__int___, v5);
    sub_1B863B8(&Method_System_Linq_Enumerable_Select_GalleryFullScreenListViewItem__GalleryResourceEntity___, v6);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___, v7);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_GalleryResourceEntity___, v8);
    sub_1B863B8(&System_Func_GalleryResourceEntity__bool__TypeInfo, v9);
    sub_1B863B8(&System_Func_GalleryFullScreenListViewItem__GalleryResourceEntity__TypeInfo, v10);
    sub_1B863B8(&System_Func_GalleryFullScreenListViewItem__int__TypeInfo, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_GalleryResourceEntity__GetRange__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_GalleryResourceEntity___ctor__, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_GalleryResourceEntity__get_Count__, v14);
    sub_1B863B8(&System_Collections_Generic_List_GalleryResourceEntity__TypeInfo, v15);
    sub_1B863B8(&System_Math_TypeInfo, v16);
    sub_1B863B8(&Method_GalleryFullScreenListViewManager___c__GetInRangeGalleryResourceList_b__18_0__, v17);
    sub_1B863B8(&Method_GalleryFullScreenListViewManager___c__GetInRangeGalleryResourceList_b__18_1__, v18);
    sub_1B863B8(&Method_GalleryFullScreenListViewManager___c__GetInRangeGalleryResourceList_b__18_2__, v19);
    sub_1B863B8(&GalleryFullScreenListViewManager___c_TypeInfo, v20);
    byte_4A495F7 = 1;
  }
  itemList = (System_Collections_IEnumerable_o *)this->fields.itemList;
  if ( itemList )
  {
    v22 = System_Linq_Enumerable__Cast_object_(
            itemList,
            (const MethodInfo_2F7E43C *)Method_System_Linq_Enumerable_Cast_GalleryFullScreenListViewItem___);
    v23 = GalleryFullScreenListViewManager___c_TypeInfo;
    v24 = (System_Collections_Generic_IEnumerable_TSource__o *)v22;
    if ( !GalleryFullScreenListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GalleryFullScreenListViewManager___c_TypeInfo);
      v23 = GalleryFullScreenListViewManager___c_TypeInfo;
    }
    _9__18_0 = (System_Func_object__int__o *)v23->static_fields->__9__18_0;
    if ( !_9__18_0 )
    {
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        v23 = GalleryFullScreenListViewManager___c_TypeInfo;
      }
      v26 = (Il2CppObject *)v23->static_fields->__9;
      _9__18_0 = (System_Func_object__int__o *)sub_1B86604(System_Func_GalleryFullScreenListViewItem__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__18_0,
        v26,
        Method_GalleryFullScreenListViewManager___c__GetInRangeGalleryResourceList_b__18_0__,
        0LL);
      static_fields = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__18_0 = (struct System_Func_GalleryFullScreenListViewItem__int__o *)_9__18_0;
      sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__18_0, (int32_t)_9__18_0, v28, v29);
    }
    v30 = System_Linq_Enumerable__OrderBy_object__int_(
            v24,
            (System_Func_TSource__TKey__o *)_9__18_0,
            (const MethodInfo_2F9AB50 *)Method_System_Linq_Enumerable_OrderBy_GalleryFullScreenListViewItem__int___);
    v31 = GalleryFullScreenListViewManager___c_TypeInfo;
    v32 = (System_Collections_Generic_IEnumerable_TSource__o *)v30;
    if ( !GalleryFullScreenListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GalleryFullScreenListViewManager___c_TypeInfo);
      v31 = GalleryFullScreenListViewManager___c_TypeInfo;
    }
    _9__18_1 = (System_Func_object__object__o *)v31->static_fields->__9__18_1;
    if ( !_9__18_1 )
    {
      if ( !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        v31 = GalleryFullScreenListViewManager___c_TypeInfo;
      }
      v34 = (Il2CppObject *)v31->static_fields->__9;
      _9__18_1 = (System_Func_object__object__o *)sub_1B86604(System_Func_GalleryFullScreenListViewItem__GalleryResourceEntity__TypeInfo);
      System_Func_object__object____ctor(
        _9__18_1,
        v34,
        Method_GalleryFullScreenListViewManager___c__GetInRangeGalleryResourceList_b__18_1__,
        0LL);
      v35 = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
      v35->__9__18_1 = (struct System_Func_GalleryFullScreenListViewItem__GalleryResourceEntity__o *)_9__18_1;
      sub_1B8635C((CGThumbnailListItem_o *)&v35->__9__18_1, (int32_t)_9__18_1, v36, v37);
    }
    v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v32,
                                                                 (System_Func_TSource__TResult__o *)_9__18_1,
                                                                 (const MethodInfo_2FA1274 *)Method_System_Linq_Enumerable_Select_GalleryFullScreenListViewItem__GalleryResourceEntity___);
    v39 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                         v38,
                                                         (const MethodInfo_2FADBE0 *)Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
    CenterIndex = ListViewManager__GetCenterIndex((ListViewManager_o *)this, 0LL);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v41 = System_Math__Max_63172752(CenterIndex - loadRange, 0, 0LL);
    if ( !v39 )
      sub_1B86614(v41, v42);
    v43 = v41;
    v44 = System_Math__Min_63173080(CenterIndex + loadRange, v39->fields._size - 1, 0LL);
    Range = System_Collections_Generic_List_object___GetRange(
              v39,
              v43,
              v44 - v43 + 1,
              (const MethodInfo_35FD528 *)Method_System_Collections_Generic_List_GalleryResourceEntity__GetRange__);
    v46 = GalleryFullScreenListViewManager___c_TypeInfo;
    v47 = (System_Collections_Generic_IEnumerable_TSource__o *)Range;
    if ( !GalleryFullScreenListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GalleryFullScreenListViewManager___c_TypeInfo);
      v46 = GalleryFullScreenListViewManager___c_TypeInfo;
    }
    _9__18_2 = (System_Func_object__bool__o *)v46->static_fields->__9__18_2;
    if ( !_9__18_2 )
    {
      if ( !v46->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v46);
        v46 = GalleryFullScreenListViewManager___c_TypeInfo;
      }
      v49 = (Il2CppObject *)v46->static_fields->__9;
      _9__18_2 = (System_Func_object__bool__o *)sub_1B86604(System_Func_GalleryResourceEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__18_2,
        v49,
        Method_GalleryFullScreenListViewManager___c__GetInRangeGalleryResourceList_b__18_2__,
        0LL);
      v50 = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
      v50->__9__18_2 = (struct System_Func_GalleryResourceEntity__bool__o *)_9__18_2;
      sub_1B8635C((CGThumbnailListItem_o *)&v50->__9__18_2, (int32_t)_9__18_2, v51, v52);
    }
    v53 = System_Linq_Enumerable__Where_object_(
            v47,
            (System_Func_TSource__bool__o *)_9__18_2,
            (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_GalleryResourceEntity___);
    return (System_Collections_Generic_List_GalleryResourceEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                         v53,
                                                                         (const MethodInfo_2FADBE0 *)Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
  }
  else
  {
    v55 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_GalleryResourceEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v55,
      (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_GalleryResourceEntity___ctor__);
    return (System_Collections_Generic_List_GalleryResourceEntity__o *)v55;
  }
}


void __fastcall GalleryFullScreenListViewManager__InitCenterIndex(
        GalleryFullScreenListViewManager_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.currentCenterIndex = -1LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GalleryFullScreenListViewManager__InitObjInLoadRange(
        GalleryFullScreenListViewManager_o *this,
        bool isCenterNoTarget,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t CenterIndex; // w0
  int32_t loadRangeFromCenter; // w22
  int32_t v10; // w21
  Il2CppObject *Item; // x0
  __int64 v12; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int32_t v14; // w22
  System_Collections_Generic_List_object__o *v15; // x8
  int32_t v16; // w23
  int32_t v17; // w24
  __int64 methodPtr_low; // x10

  if ( (byte_4A495FE & 1) == 0 )
  {
    sub_1B863B8(&GalleryFullScreenListViewObject_TypeInfo, isCenterNoTarget);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_1B863B8(&System_Math_TypeInfo, v7);
    byte_4A495FE = 1;
  }
  CenterIndex = ListViewManager__GetCenterIndex((ListViewManager_o *)this, 0LL);
  loadRangeFromCenter = this->fields.loadRangeFromCenter;
  v10 = CenterIndex;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  Item = (Il2CppObject *)System_Math__Max_63172752(v10 - loadRangeFromCenter, 0, 0LL);
  itemList = this->fields.itemList;
  if ( !itemList
    || (v14 = (int)Item,
        Item = (Il2CppObject *)System_Math__Min_63173080(
                                 this->fields.loadRangeFromCenter + v10,
                                 itemList->fields._size - 1,
                                 0LL),
        (v15 = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0LL) )
  {
LABEL_20:
    sub_1B86614(Item, v12);
  }
  v16 = (int)Item;
  v17 = 0;
  while ( v17 < v15->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v15,
             v17,
             (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      Item = (Il2CppObject *)Item[6].monitor;
      if ( Item )
      {
        methodPtr_low = LOBYTE(GalleryFullScreenListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (GalleryFullScreenListViewObject_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == GalleryFullScreenListViewObject_TypeInfo )
        {
          if ( v14 > v17 || v17 > v16 )
          {
            GalleryFullScreenListViewObject__OutOfLoadRange((GalleryFullScreenListViewObject_o *)Item, 0LL);
          }
          else if ( v10 != v17 || !isCenterNoTarget )
          {
            GalleryFullScreenListViewObject__Init_31522936((GalleryFullScreenListViewObject_o *)Item, 2, 0LL);
          }
        }
      }
      v15 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v17;
      if ( v15 )
        continue;
    }
    goto LABEL_20;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GalleryFullScreenListViewManager__IsNonDisp(
        GalleryFullScreenListViewManager_o *this,
        bool isLoadFromThumbnail,
        const MethodInfo *method)
{
  UnityEngine_Object_o *galleryFullScreenPanel; // x21
  __int64 v6; // x1
  GalleryFullScreenPanel_o *v7; // x0
  bool v8; // w0
  bool v9; // w8

  if ( (byte_4A495FC & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, isLoadFromThumbnail);
    byte_4A495FC = 1;
  }
  galleryFullScreenPanel = (UnityEngine_Object_o *)this->fields.galleryFullScreenPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(galleryFullScreenPanel, 0LL, 0LL) )
    return !isLoadFromThumbnail;
  v7 = this->fields.galleryFullScreenPanel;
  if ( !v7 )
    sub_1B86614(0LL, v6);
  v8 = GalleryFullScreenPanel__CheckSameDispType(v7, 0, 0LL);
  v9 = 0;
  if ( v8 )
    return !isLoadFromThumbnail;
  return v9;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GalleryFullScreenListViewManager__LoadAssetCache(
        GalleryFullScreenListViewManager_o *this,
        int32_t loadRange,
        System_Action_o *endCallback,
        bool isLoadFromThumbnail,
        const MethodInfo *method)
{
  int32_t loadRangeFromCenter; // w23
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x20
  System_Collections_Generic_List_object__o *IsNullOrEmpty; // x0
  __int64 v37; // x1
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x2
  System_Collections_Generic_HashSet_T__o *v43; // x22
  const MethodInfo *v44; // x2
  System_Collections_ICollection_o *v45; // x23
  __int64 v46; // x1
  System_String_o *AssetPath; // x23
  _BOOL8 isExistAssetStorage; // x0
  __int64 v49; // x1
  System_Collections_Generic_List_object__o *v50; // x22
  System_Collections_Generic_List_object__o *v51; // x23
  _BOOL8 v52; // x0
  __int64 v53; // x1
  Il2CppObject *current; // x24
  _BOOL8 v55; // x0
  __int64 v56; // x1
  Il2CppObject *v57; // x26
  _BOOL8 v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  Il2CppObject *monitor; // x1
  struct System_Object_array *items; // x8
  _QWORD *v63; // x9
  __int64 size; // x10
  Il2CppClass **v65; // x0
  const MethodInfo *v66; // x2
  System_Object_array *v67; // x0
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  System_String_array *v70; // x19
  System_Action_o *v71; // x21
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+20h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v75; // [xsp+60h] [xbp-80h] BYREF

  loadRangeFromCenter = loadRange;
  if ( (byte_4A495F8 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&loadRange);
    sub_1B863B8(&AssetManager_TypeInfo, v9);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToList_string___, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GalleryResourceEntity__Dispose__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GalleryResourceEntity__MoveNext__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v16);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v17);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GalleryResourceEntity__get_Current__, v18);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__, v19);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_string__Add__, v20);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_string___ctor__, v21);
    sub_1B863B8(&System_Collections_Generic_HashSet_string__TypeInfo, v22);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__AddRange__, v23);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Add__, v24);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Contains__, v25);
    sub_1B863B8(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__, v26);
    sub_1B863B8(&Method_System_Collections_Generic_List_GalleryResourceEntity__GetEnumerator__, v27);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__GetEnumerator__, v28);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Remove__, v29);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__ToArray__, v30);
    sub_1B863B8(&Method_System_Collections_Generic_List_string___ctor__, v31);
    sub_1B863B8(&System_Collections_Generic_List_string__TypeInfo, v32);
    sub_1B863B8(&Method_GalleryFullScreenListViewManager___c__DisplayClass19_0__LoadAssetCache_b__0__, v33);
    sub_1B863B8(&GalleryFullScreenListViewManager___c__DisplayClass19_0_TypeInfo, v34);
    byte_4A495F8 = 1;
  }
  memset(&v75, 0, sizeof(v75));
  memset(&i, 0, sizeof(i));
  memset(&v73, 0, sizeof(v73));
  v35 = sub_1B86604(GalleryFullScreenListViewManager___c__DisplayClass19_0_TypeInfo);
  GalleryFullScreenListViewManager___c__DisplayClass19_0___ctor(
    (GalleryFullScreenListViewManager___c__DisplayClass19_0_o *)v35,
    0LL);
  if ( !v35 )
    goto LABEL_51;
  *(_QWORD *)(v35 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v35 + 16), (int32_t)this, v38, v39);
  *(_QWORD *)(v35 + 40) = endCallback;
  *(_BYTE *)(v35 + 32) = isLoadFromThumbnail;
  sub_1B8635C((CGThumbnailListItem_o *)(v35 + 40), (int32_t)endCallback, v40, v41);
  if ( GalleryFullScreenListViewManager__IsNonDisp(this, *(_BYTE *)(v35 + 32), v42) )
    goto LABEL_43;
  if ( (loadRangeFromCenter & 0x80000000) != 0 )
    loadRangeFromCenter = this->fields.loadRangeFromCenter;
  v43 = (System_Collections_Generic_HashSet_T__o *)sub_1B86604(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v43,
    (const MethodInfo_34BDC34 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  v45 = (System_Collections_ICollection_o *)GalleryFullScreenListViewManager__GetInRangeGalleryResourceList(
                                              this,
                                              loadRangeFromCenter,
                                              v44);
  IsNullOrEmpty = (System_Collections_Generic_List_object__o *)BasicHelper__IsNullOrEmpty(v45, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    goto LABEL_43;
  if ( !v45 )
    goto LABEL_51;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v72,
    (System_Collections_Generic_List_object__o *)v45,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_GalleryResourceEntity__GetEnumerator__);
  v75 = v72;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v75,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_GalleryResourceEntity__MoveNext__) )
  {
    if ( !v75.fields._current )
      sub_1B86614(0LL, v46);
    AssetPath = GalleryResourceEntity__GetAssetPath((GalleryResourceEntity_o *)v75.fields._current, 0LL);
    if ( !System_String__IsNullOrEmpty(AssetPath, 0LL) )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      isExistAssetStorage = AssetManager__isExistAssetStorage(AssetPath, 0LL);
      if ( isExistAssetStorage )
      {
        if ( !v43 )
          sub_1B86614(isExistAssetStorage, v49);
        System_Collections_Generic_HashSet_object___Add(
          v43,
          (Il2CppObject *)AssetPath,
          (const MethodInfo_34BEE18 *)Method_System_Collections_Generic_HashSet_string__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v75,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_GalleryResourceEntity__Dispose__);
  v50 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)v43,
                                                       (const MethodInfo_2FADBE0 *)Method_System_Linq_Enumerable_ToList_string___);
  v51 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v51,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_string___ctor__);
  IsNullOrEmpty = (System_Collections_Generic_List_object__o *)this->fields.nowLoadingAssetNameList;
  if ( !IsNullOrEmpty )
    goto LABEL_51;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v72,
    IsNullOrEmpty,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  i = v72;
  while ( 1 )
  {
    v52 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v52 )
      break;
    if ( !v50 )
      sub_1B86614(v52, v53);
    current = i.fields._current;
    if ( System_Collections_Generic_List_object___Contains(
           v50,
           i.fields._current,
           (const MethodInfo_35FCCE8 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      System_Collections_Generic_List_object___Remove(
        v50,
        current,
        (const MethodInfo_35FDE80 *)Method_System_Collections_Generic_List_string__Remove__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  IsNullOrEmpty = (System_Collections_Generic_List_object__o *)this->fields.cacheAssetDataList;
  if ( !IsNullOrEmpty )
    goto LABEL_51;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v72,
    IsNullOrEmpty,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
  v73 = v72;
  while ( 1 )
  {
    v55 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v73,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    if ( !v55 )
      break;
    v57 = v73.fields._current;
    if ( v73.fields._current )
    {
      if ( !v50 )
        sub_1B86614(v55, v56);
      v58 = System_Collections_Generic_List_object___Contains(
              v50,
              (Il2CppObject *)v73.fields._current[1].monitor,
              (const MethodInfo_35FCCE8 *)Method_System_Collections_Generic_List_string__Contains__);
      monitor = (Il2CppObject *)v57[1].monitor;
      if ( v58 )
      {
        System_Collections_Generic_List_object___Remove(
          v50,
          monitor,
          (const MethodInfo_35FDE80 *)Method_System_Collections_Generic_List_string__Remove__);
      }
      else
      {
        if ( !v51 )
          sub_1B86614(v58, monitor);
        items = v51->fields._items;
        v63 = Method_System_Collections_Generic_List_string__Add__;
        ++v51->fields._version;
        if ( !items )
          sub_1B86614(v58, monitor);
        size = v51->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v51,
            monitor,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
        }
        else
        {
          v65 = &items->obj.klass + size;
          v51->fields._size = size + 1;
          v65[4] = (Il2CppClass *)monitor;
          sub_1B8635C((CGThumbnailListItem_o *)(v65 + 4), (int32_t)monitor, v59, v60);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v73,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
  if ( !v51 )
    goto LABEL_51;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v72,
    v51,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  for ( i = v72;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
        GalleryFullScreenListViewManager__ReleaseResourceCache_31515104(this, (System_String_o *)i.fields._current, v66) )
  {
    ;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  IsNullOrEmpty = (System_Collections_Generic_List_object__o *)this->fields.nowLoadingAssetNameList;
  if ( !IsNullOrEmpty
    || (System_Collections_Generic_List_object___AddRange(
          IsNullOrEmpty,
          (System_Collections_Generic_IEnumerable_T__o *)v50,
          (const MethodInfo_35FCB64 *)Method_System_Collections_Generic_List_string__AddRange__),
        !v50) )
  {
LABEL_51:
    sub_1B86614(IsNullOrEmpty, v37);
  }
  v67 = System_Collections_Generic_List_object___ToArray(
          v50,
          (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_string__ToArray__);
  *(_QWORD *)(v35 + 24) = v67;
  sub_1B8635C((CGThumbnailListItem_o *)(v35 + 24), (int32_t)v67, v68, v69);
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v35 + 24), 0LL) )
  {
LABEL_43:
    ActionExtensions__Call(*(System_Action_o **)(v35 + 40), 0LL);
    return;
  }
  v70 = *(System_String_array **)(v35 + 24);
  v71 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v71,
    (Il2CppObject *)v35,
    Method_GalleryFullScreenListViewManager___c__DisplayClass19_0__LoadAssetCache_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_38751600(v70, v71, 5, 0LL);
}


void __fastcall GalleryFullScreenListViewManager__LoadEnd(
        GalleryFullScreenListViewManager_o *this,
        System_String_array *assetLoadNames,
        bool isLoadFromThumbnail,
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
  __int64 v16; // x1
  System_Collections_Generic_List_object__o *v17; // x22
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *nowLoadingAssetNameList; // x0
  Il2CppObject *current; // x23
  _BOOL8 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  __int64 v29; // x1
  struct System_Collections_Generic_List_string__o *v30; // x0
  struct System_Collections_Generic_List_AssetData__o *cacheAssetDataList; // x22
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x1
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A495F9 & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, assetLoadNames);
    sub_1B863B8(&Method_System_Linq_Enumerable_Contains_string___, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_AssetData__AddRange__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Add__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__GetEnumerator__, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Remove__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_string___ctor__, v15);
    sub_1B863B8(&System_Collections_Generic_List_string__TypeInfo, v16);
    byte_4A495F9 = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.nowLoadingAssetNameList, 0LL) )
  {
    v17 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v17,
      (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_string___ctor__);
    nowLoadingAssetNameList = (System_Collections_Generic_List_object__o *)this->fields.nowLoadingAssetNameList;
    if ( !nowLoadingAssetNameList )
      goto LABEL_28;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v34,
      nowLoadingAssetNameList,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    i = v34;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = i.fields._current;
      v21 = System_Linq_Enumerable__Contains_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)assetLoadNames,
              i.fields._current,
              (const MethodInfo_2F887E4 *)Method_System_Linq_Enumerable_Contains_string___);
      if ( v21 )
      {
        if ( !v17 )
          sub_1B86614(v21, v22);
        items = v17->fields._items;
        v26 = Method_System_Collections_Generic_List_string__Add__;
        ++v17->fields._version;
        if ( !items )
          sub_1B86614(v21, v22);
        size = v17->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            current,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          v17->fields._size = size + 1;
          v28[4] = (Il2CppClass *)current;
          sub_1B8635C((CGThumbnailListItem_o *)(v28 + 4), (int32_t)current, v23, v24);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    if ( !v17 )
      goto LABEL_28;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v34,
      v17,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    for ( i = v34;
          System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
          System_Collections_Generic_List_object___Remove(
            (System_Collections_Generic_List_object__o *)v30,
            i.fields._current,
            (const MethodInfo_35FDE80 *)Method_System_Collections_Generic_List_string__Remove__) )
    {
      v30 = this->fields.nowLoadingAssetNameList;
      if ( !v30 )
        sub_1B86614(0LL, v29);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  }
  cacheAssetDataList = this->fields.cacheAssetDataList;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  nowLoadingAssetNameList = (System_Collections_Generic_List_object__o *)AssetManager__getAssetStorage_38752976(
                                                                           assetLoadNames,
                                                                           0LL);
  if ( !cacheAssetDataList )
LABEL_28:
    sub_1B86614(nowLoadingAssetNameList, v18);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)cacheAssetDataList,
    (System_Collections_Generic_IEnumerable_T__o *)nowLoadingAssetNameList,
    (const MethodInfo_35FCB64 *)Method_System_Collections_Generic_List_AssetData__AddRange__);
  if ( GalleryFullScreenListViewManager__IsNonDisp(this, isLoadFromThumbnail, v32) )
  {
    *(_QWORD *)&this->fields.currentCenterIndex = -1LL;
    GalleryFullScreenListViewManager__ReleaseResourceCache(this, v33);
  }
}


void __fastcall GalleryFullScreenListViewManager__OnClickBack(
        GalleryFullScreenListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  GalleryFullScreenListViewManager_o *v3; // x19
  struct ListViewIndicator_o *indicator; // x8
  __int64 methodPtr_low; // x11
  GalleryFullScreenListViewIndicator_c *v6; // x10
  int klass; // w8
  bool v8; // w1
  GalleryFullScreenListViewManager_o *v9; // x0

  v3 = this;
  if ( (byte_4A495FF & 1) == 0 )
  {
    this = (GalleryFullScreenListViewManager_o *)sub_1B863B8(&GalleryFullScreenListViewIndicator_TypeInfo, method);
    byte_4A495FF = 1;
  }
  indicator = v3->fields.indicator;
  if ( indicator )
  {
    methodPtr_low = LOBYTE(GalleryFullScreenListViewIndicator_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(indicator->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      v6 = (GalleryFullScreenListViewIndicator_c *)indicator->klass->_2.typeHierarchy[methodPtr_low - 1];
      if ( v6 != GalleryFullScreenListViewIndicator_TypeInfo )
        indicator = 0LL;
      if ( v6 == GalleryFullScreenListViewIndicator_TypeInfo )
      {
        if ( !indicator )
          sub_1B86614(this, method);
        klass = (int)indicator[3].klass;
        if ( (unsigned int)(klass - 1) < 2 )
        {
          v9 = v3;
          v8 = 0;
        }
        else
        {
          if ( klass && klass != 3 )
            return;
          v8 = 1;
          v9 = v3;
        }
        GalleryFullScreenListViewManager__SetEnableScroll(v9, v8, 0, 0, v2);
      }
    }
  }
}


void __fastcall GalleryFullScreenListViewManager__OnClickListView(
        GalleryFullScreenListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall GalleryFullScreenListViewManager__OnClickMaxim(
        GalleryFullScreenListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  GalleryFullScreenPanel_o *galleryFullScreenPanel; // x0
  struct ListViewItem_o *centerItem; // x20
  UnityEngine_Object_o *viewObject; // x19
  struct ListViewObject_o *v7; // x8
  __int64 methodPtr_low; // x11
  GalleryFullScreenListViewObject_o *v9; // x20
  UnityEngine_GameObject_o *dragObject; // x19
  __int64 v11; // x1
  UnityEngine_Vector3_o DispObjScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A49601 & 1) == 0 )
  {
    sub_1B863B8(&GalleryFullScreenListViewObject_TypeInfo, method);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v3);
    byte_4A49601 = 1;
  }
  galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
  if ( !galleryFullScreenPanel )
    sub_1B86614(0LL, method);
  GalleryFullScreenPanel__SetDispType(galleryFullScreenPanel, 2, 0LL);
  centerItem = this->fields.centerItem;
  if ( centerItem )
  {
    viewObject = (UnityEngine_Object_o *)centerItem->fields.viewObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
    {
      v7 = centerItem->fields.viewObject;
      if ( v7 )
      {
        methodPtr_low = LOBYTE(GalleryFullScreenListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v7->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
        {
          v9 = (GalleryFullScreenListViewObject_c *)v7->klass->_2.typeHierarchy[methodPtr_low - 1] == GalleryFullScreenListViewObject_TypeInfo
             ? (GalleryFullScreenListViewObject_o *)centerItem->fields.viewObject
             : 0LL;
          if ( v9 )
          {
            dragObject = v9->fields.dragObject;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)dragObject, 0LL, 0LL) )
            {
              DispObjScale = GalleryFullScreenListViewObject__GetDispObjScale(v9, 0LL);
              GameObjectExtensions__SetLocalScale(dragObject, DispObjScale, 0LL);
              if ( !byte_4A487E1 )
              {
                sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v11);
                byte_4A487E1 = 1;
              }
              GameObjectExtensions__SetLocalPosition(
                dragObject,
                UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                0LL);
            }
          }
        }
      }
    }
  }
}


void __fastcall GalleryFullScreenListViewManager__OnDragUpdate(
        GalleryFullScreenListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  GalleryFullScreenPanel_o *galleryFullScreenPanel; // x0
  bool IsAbleToPinch; // w20
  System_Action_o *v7; // x21
  System_Action_o *v8; // x22
  const MethodInfo *v9; // x3

  if ( (byte_4A49602 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_GalleryFullScreenListViewManager__OnDragUpdate_b__31_0__, v3);
    sub_1B863B8(&Method_GalleryFullScreenListViewManager__OnDragUpdate_b__31_1__, v4);
    byte_4A49602 = 1;
  }
  galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
  if ( !galleryFullScreenPanel )
    goto LABEL_8;
  if ( GalleryFullScreenPanel__IsAbleToPinch(galleryFullScreenPanel, 0LL) )
  {
    galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
    if ( galleryFullScreenPanel )
    {
      IsAbleToPinch = GalleryFullScreenPanel__IsAbleToPinch(galleryFullScreenPanel, 0LL);
      v7 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(
        v7,
        (Il2CppObject *)this,
        Method_GalleryFullScreenListViewManager__OnDragUpdate_b__31_0__,
        0LL);
      v8 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(
        v8,
        (Il2CppObject *)this,
        Method_GalleryFullScreenListViewManager__OnDragUpdate_b__31_1__,
        0LL);
      GalleryFullScreenDragProcess__OnDragUpdate(IsAbleToPinch, v7, v8, v9);
      return;
    }
LABEL_8:
    sub_1B86614(galleryFullScreenPanel, method);
  }
}


void __fastcall GalleryFullScreenListViewManager__OnModifyViewerCenter(
        GalleryFullScreenListViewManager_o *this,
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
  __int64 v13; // x1
  __int64 v14; // x1
  struct ListViewItem_o *centerItem; // x23
  int32_t currentCenterIndex; // w1
  ListViewItem_o *Item; // x0
  ListViewItem_o *v18; // x20
  UnityEngine_Object_o *viewObject; // x21
  GalleryFullScreenListViewObject_o *v20; // x21
  __int64 methodPtr_low; // x10
  System_Collections_Generic_IEnumerable_T__o *v22; // x20
  GalleryFullScreenListViewManager___c_c *v23; // x8
  System_Action_object__o *_9__25_0; // x21
  Il2CppObject *v25; // x22
  struct GalleryFullScreenListViewManager___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  UnityEngine_Object_o *v29; // x20
  __int64 v30; // x1
  GalleryFullScreenListViewObject_o *v31; // x20
  __int64 v32; // x10
  GalleryFullScreenPanel_o *galleryFullScreenPanel; // x0
  const MethodInfo *v34; // x2
  System_Action_T__o *changeListItemAction; // x21
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  const MethodInfo *v37; // x2
  Il2CppObject *Instance; // x21
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x4
  bool IsCG; // w21
  int32_t oldCenterIndex; // w9
  int32_t index; // w8
  System_Action_bool__o *v44; // x22
  Il2CppObject *v45; // x23
  System_Action_o *v46; // x24
  const MethodInfo *v47; // x4

  if ( (byte_4A495FD & 1) == 0 )
  {
    sub_1B863B8(&Method_ActionExtensions_Call_int___, method);
    sub_1B863B8(&System_Action_bool__TypeInfo, v3);
    sub_1B863B8(&System_Action_GalleryFullScreenListViewItem__TypeInfo, v4);
    sub_1B863B8(&System_Action_TypeInfo, v5);
    sub_1B863B8(&Method_BasicHelper_ForEach_GalleryFullScreenListViewItem___, v6);
    sub_1B863B8(&Method_System_Linq_Enumerable_Cast_GalleryFullScreenListViewItem___, v7);
    sub_1B863B8(&Method_GalleryFullScreenListViewManager__OnModifyViewerCenter_b__25_1__, v8);
    sub_1B863B8(&GalleryFullScreenListViewObject_TypeInfo, v9);
    sub_1B863B8(&Method_GalleryFullScreenPanel_Close__, v10);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B863B8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v12);
    sub_1B863B8(&Method_GalleryFullScreenListViewManager___c__OnModifyViewerCenter_b__25_0__, v13);
    sub_1B863B8(&GalleryFullScreenListViewManager___c_TypeInfo, v14);
    byte_4A495FD = 1;
  }
  centerItem = this->fields.centerItem;
  if ( centerItem )
  {
    currentCenterIndex = this->fields.currentCenterIndex;
    if ( currentCenterIndex != centerItem->fields.index )
    {
      Item = ListViewManager__GetItem((ListViewManager_o *)this, currentCenterIndex, 0LL);
      if ( Item )
      {
        v18 = Item;
        viewObject = (UnityEngine_Object_o *)Item->fields.viewObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
        {
          v20 = (GalleryFullScreenListViewObject_o *)v18->fields.viewObject;
          if ( v20 )
          {
            methodPtr_low = LOBYTE(GalleryFullScreenListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(v20->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
              && (GalleryFullScreenListViewObject_c *)v20->klass->_2.typeHierarchy[methodPtr_low - 1] == GalleryFullScreenListViewObject_TypeInfo )
            {
              GalleryFullScreenListViewObject__SetMovieCallBack(
                (GalleryFullScreenListViewObject_o *)v18->fields.viewObject,
                0LL,
                0LL,
                0LL);
              GalleryFullScreenListViewObject__DeleteDragObject(v20, 0LL);
              this->fields.oldCenterIndex = v18->fields.index;
              GalleryFullScreenListViewObject__StopMovie(v20, 0LL);
            }
          }
        }
      }
      if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.itemList, 0LL) )
      {
        v22 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Cast_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.itemList,
                                                               (const MethodInfo_2F7E43C *)Method_System_Linq_Enumerable_Cast_GalleryFullScreenListViewItem___);
        v23 = GalleryFullScreenListViewManager___c_TypeInfo;
        if ( !GalleryFullScreenListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(GalleryFullScreenListViewManager___c_TypeInfo);
          v23 = GalleryFullScreenListViewManager___c_TypeInfo;
        }
        _9__25_0 = (System_Action_object__o *)v23->static_fields->__9__25_0;
        if ( !_9__25_0 )
        {
          if ( !v23->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v23);
            v23 = GalleryFullScreenListViewManager___c_TypeInfo;
          }
          v25 = (Il2CppObject *)v23->static_fields->__9;
          _9__25_0 = (System_Action_object__o *)sub_1B86604(System_Action_GalleryFullScreenListViewItem__TypeInfo);
          System_Action_object____ctor(
            _9__25_0,
            v25,
            Method_GalleryFullScreenListViewManager___c__OnModifyViewerCenter_b__25_0__,
            0LL);
          static_fields = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
          static_fields->__9__25_0 = (struct System_Action_GalleryFullScreenListViewItem__o *)_9__25_0;
          sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__25_0, (int32_t)_9__25_0, v27, v28);
        }
        BasicHelper__ForEach_object_(
          v22,
          (System_Action_T__o *)_9__25_0,
          (const MethodInfo_2F59FB0 *)Method_BasicHelper_ForEach_GalleryFullScreenListViewItem___);
      }
      v29 = (UnityEngine_Object_o *)centerItem->fields.viewObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v29, 0LL, 0LL)
        || (v31 = (GalleryFullScreenListViewObject_o *)centerItem->fields.viewObject) == 0LL
        || (v32 = LOBYTE(GalleryFullScreenListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v31->klass->vtable._0_Equals.methodPtr) < (unsigned int)v32)
        || (GalleryFullScreenListViewObject_c *)v31->klass->_2.typeHierarchy[v32 - 1] != GalleryFullScreenListViewObject_TypeInfo )
      {
LABEL_49:
        galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
        if ( galleryFullScreenPanel )
        {
          GalleryFullScreenPanel__SetDispType(galleryFullScreenPanel, 2, 0LL);
          GalleryFullScreenListViewManager__LoadAssetCache(this, this->fields.loadRangeFromCenter, 0LL, 0, v47);
          return;
        }
        goto LABEL_51;
      }
      galleryFullScreenPanel = (GalleryFullScreenPanel_o *)GalleryFullScreenListViewObject__GetItem(
                                                             (GalleryFullScreenListViewObject_o *)centerItem->fields.viewObject,
                                                             0LL);
      if ( !galleryFullScreenPanel )
        goto LABEL_51;
      LOBYTE(galleryFullScreenPanel[1].fields.galleryFullScreenPanel) = 1;
      galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
      if ( !galleryFullScreenPanel )
        goto LABEL_51;
      if ( !GalleryFullScreenPanel__CheckSameDispType(galleryFullScreenPanel, 0, 0LL) )
      {
        changeListItemAction = (System_Action_T__o *)this->fields.changeListItemAction;
        galleryFullScreenPanel = (GalleryFullScreenPanel_o *)GalleryFullScreenListViewObject__GetItem(v31, 0LL);
        if ( !galleryFullScreenPanel )
          goto LABEL_51;
        m_CancellationTokenSource = galleryFullScreenPanel[1].fields.m_CancellationTokenSource;
        if ( !m_CancellationTokenSource )
          goto LABEL_51;
        ActionExtensions__Call_int_(
          changeListItemAction,
          (int32_t)m_CancellationTokenSource->fields._kernelEvent,
          (const MethodInfo_2EBFB44 *)Method_ActionExtensions_Call_int___);
      }
      if ( GalleryFullScreenListViewManager__IsNonDisp(this, 0, v34) )
        GalleryFullScreenListViewObject__Init_31522936(v31, 2, 0LL);
      else
        GalleryFullScreenListViewManager__InitObjInLoadRange(this, 0, v37);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      galleryFullScreenPanel = (GalleryFullScreenPanel_o *)GalleryFullScreenListViewObject__GetItem(v31, 0LL);
      if ( !galleryFullScreenPanel
        || (galleryFullScreenPanel = (GalleryFullScreenPanel_o *)galleryFullScreenPanel[1].fields.m_CancellationTokenSource) == 0LL
        || (galleryFullScreenPanel = (GalleryFullScreenPanel_o *)GalleryResourceEntity__GetAssetPath(
                                                                   (GalleryResourceEntity_o *)galleryFullScreenPanel,
                                                                   0LL),
            !Instance)
        || (AssetManager__InterruptDownloadAssetStorage(
              (AssetManager_o *)Instance,
              (System_String_o *)galleryFullScreenPanel,
              0LL),
            GalleryFullScreenListViewObject__DeleteDragObject(v31, 0LL),
            (galleryFullScreenPanel = (GalleryFullScreenPanel_o *)GalleryFullScreenListViewObject__GetItem(v31, 0LL)) == 0LL) )
      {
LABEL_51:
        sub_1B86614(galleryFullScreenPanel, v30);
      }
      IsCG = GalleryType__IsCG(galleryFullScreenPanel[1].fields.m_CachedPtr, 0LL);
      if ( IsCG )
        GalleryFullScreenListViewManager__CreateViewerObj(this, v31, v39);
      oldCenterIndex = this->fields.oldCenterIndex;
      index = centerItem->fields.index;
      if ( (oldCenterIndex & 0x80000000) != 0 )
      {
        this->fields.oldCenterIndex = index;
        this->fields.currentCenterIndex = index;
      }
      else
      {
        this->fields.currentCenterIndex = index;
        if ( oldCenterIndex != index )
          goto LABEL_48;
      }
      v44 = (System_Action_bool__o *)sub_1B86604(System_Action_bool__TypeInfo);
      System_Action_bool____ctor(
        v44,
        (Il2CppObject *)this,
        Method_GalleryFullScreenListViewManager__OnModifyViewerCenter_b__25_1__,
        0LL);
      v45 = (Il2CppObject *)this->fields.galleryFullScreenPanel;
      v46 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(v46, v45, (intptr_t)Method_GalleryFullScreenPanel_Close__, 0LL);
      GalleryFullScreenListViewObject__PlayMovie(v31, v44, v46, 0LL);
LABEL_48:
      GalleryFullScreenListViewManager__SetEnableScroll(this, this->fields.isInput, 0, !IsCG, v40);
      goto LABEL_49;
    }
  }
}


void __fastcall GalleryFullScreenListViewManager__ReleaseResourceCache(
        GalleryFullScreenListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_AssetData__o *cacheAssetDataList; // x0
  System_String_o *monitor; // x20
  struct System_Collections_Generic_List_AssetData__o *v11; // x8
  int32_t size; // w2
  int v13; // w9
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A495FA & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_AssetData__Clear__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__, v7);
    byte_4A495FA = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.cacheAssetDataList, 0LL) )
  {
    cacheAssetDataList = this->fields.cacheAssetDataList;
    if ( !cacheAssetDataList )
      goto LABEL_15;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      (System_Collections_Generic_List_object__o *)cacheAssetDataList,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
    {
      if ( v14.fields._current )
      {
        monitor = (System_String_o *)v14.fields._current[1].monitor;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__releaseAssetStorage(monitor, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    v11 = this->fields.cacheAssetDataList;
    if ( !v11 )
LABEL_15:
      sub_1B86614(cacheAssetDataList, v8);
    size = v11->fields._size;
    v13 = v11->fields._version + 1;
    v11->fields._size = 0;
    v11->fields._version = v13;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v11->fields._items, 0, size, 0LL);
  }
}


void __fastcall GalleryFullScreenListViewManager__ReleaseResourceCache_31515104(
        GalleryFullScreenListViewManager_o *this,
        System_String_o *targetName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *v13; // x20
  __int64 v14; // x1
  struct System_Collections_Generic_List_AssetData__o *cacheAssetDataList; // x0
  Il2CppObject *current; // x22
  System_String_o *monitor; // x23
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  __int64 v26; // x1
  struct System_Collections_Generic_List_AssetData__o *v27; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A495FB & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, targetName);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_AssetData__Add__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_AssetData__Remove__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_AssetData___ctor__, v11);
    sub_1B863B8(&System_Collections_Generic_List_AssetData__TypeInfo, v12);
    byte_4A495FB = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.cacheAssetDataList, 0LL) )
  {
    v13 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_AssetData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v13,
      (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_AssetData___ctor__);
    cacheAssetDataList = this->fields.cacheAssetDataList;
    if ( !cacheAssetDataList )
      goto LABEL_26;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v28,
      (System_Collections_Generic_List_object__o *)cacheAssetDataList,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    i = v28;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
    {
      current = i.fields._current;
      if ( i.fields._current
        && System_String__op_Equality((System_String_o *)i.fields._current[1].monitor, targetName, 0LL) )
      {
        monitor = (System_String_o *)current[1].monitor;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__releaseAssetStorage(monitor, 0LL);
        if ( !v13 )
          sub_1B86614(v18, v19);
        items = v13->fields._items;
        v23 = Method_System_Collections_Generic_List_AssetData__Add__;
        ++v13->fields._version;
        if ( !items )
          sub_1B86614(v18, v19);
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            current,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v13->fields._size = size + 1;
          v25[4] = (Il2CppClass *)current;
          sub_1B8635C((CGThumbnailListItem_o *)(v25 + 4), (int32_t)current, v20, v21);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    if ( !v13 )
LABEL_26:
      sub_1B86614(cacheAssetDataList, v14);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v28,
      v13,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    for ( i = v28;
          System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
          System_Collections_Generic_List_object___Remove(
            (System_Collections_Generic_List_object__o *)v27,
            i.fields._current,
            (const MethodInfo_35FDE80 *)Method_System_Collections_Generic_List_AssetData__Remove__) )
    {
      v27 = this->fields.cacheAssetDataList;
      if ( !v27 )
        sub_1B86614(0LL, v26);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GalleryFullScreenListViewManager__SetEnableScroll(
        GalleryFullScreenListViewManager_o *this,
        bool isEnable,
        bool isActiveScrollView,
        bool isDisableUi,
        const MethodInfo *method)
{
  __int64 v9; // x1
  GalleryFullScreenPanel_o *galleryFullScreenPanel; // x0
  GalleryFullScreenListViewIndicator_o *indicator; // x23
  char v12; // w24
  __int64 methodPtr_low; // x10
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2
  UnityEngine_Transform_o *v16; // x0
  const MethodInfo *v17; // x2
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v19; // x2
  UIScrollView_o *scrollView; // x21
  char v21; // w8
  int32_t index[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A49603 & 1) == 0 )
  {
    sub_1B863B8(&GalleryFullScreenListViewIndicator_TypeInfo, isEnable);
    sub_1B863B8(&StringLiteral_8782/*"MaskRoot/BackMask"*/, v9);
    byte_4A49603 = 1;
  }
  *(_QWORD *)index = 0LL;
  galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
  if ( !galleryFullScreenPanel )
    goto LABEL_25;
  galleryFullScreenPanel = (GalleryFullScreenPanel_o *)GalleryFullScreenPanel__CheckSameDispType(
                                                         galleryFullScreenPanel,
                                                         1,
                                                         0LL);
  indicator = (GalleryFullScreenListViewIndicator_o *)this->fields.indicator;
  v12 = (unsigned __int8)galleryFullScreenPanel ^ 1;
  if ( !indicator )
    goto LABEL_17;
  methodPtr_low = LOBYTE(GalleryFullScreenListViewIndicator_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(indicator->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (GalleryFullScreenListViewIndicator_c *)indicator->klass->_2.typeHierarchy[methodPtr_low - 1] != GalleryFullScreenListViewIndicator_TypeInfo )
  {
    goto LABEL_17;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.itemList, 0LL) )
    return;
  GalleryFullScreenListViewManager__GetDiffResourcePageInfo(this, &index[1], index, v14);
  if ( isDisableUi )
  {
    GalleryFullScreenListViewIndicator__Closed(indicator, (const MethodInfo *)isEnable);
  }
  else
  {
    if ( isEnable )
    {
      indicator->fields.status = 1;
      GalleryFullScreenListViewIndicator__SetActiveObject(indicator, 1, v15);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      AndroidBackKeyManager__RemoveBackBtn_42896776(transform, (System_String_o *)StringLiteral_8782/*"MaskRoot/BackMask"*/, 0LL);
      goto LABEL_16;
    }
    galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
    if ( !galleryFullScreenPanel )
      goto LABEL_25;
    if ( !GalleryFullScreenPanel__IsAbleToPinch(galleryFullScreenPanel, 0LL) )
      goto LABEL_16;
    indicator->fields.status = 3;
  }
  v16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42896176(v16, (System_String_o *)StringLiteral_8782/*"MaskRoot/BackMask"*/, 0LL);
LABEL_16:
  GalleryFullScreenListViewIndicator__SetPageMax(indicator, index[1], v17);
  GalleryFullScreenListViewIndicator__SetPageIndex(indicator, index[0], v19);
  v12 &= (unsigned int)(indicator->fields.status - 1) < 2 || isDisableUi;
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
    sub_1B86614(galleryFullScreenPanel, isEnable);
  }
  if ( !scrollView )
    goto LABEL_25;
  v21 = v12 & UIScrollView__get_isDragging(scrollView, 0LL);
LABEL_23:
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scrollView, v21 & 1, 0LL);
}


void __fastcall GalleryFullScreenListViewManager__SetMode(
        GalleryFullScreenListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  this->fields.initMode = mode;
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  GalleryFullScreenListViewManager__SetEnableScroll(this, this->fields.isInput, 0, 0, v4);
}


void __fastcall GalleryFullScreenListViewManager__SetObjectItem(
        GalleryFullScreenListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v4; // x20
  __int64 v6; // x1
  __int64 methodPtr_low; // x11
  _BOOL8 v8; // x0
  __int64 v9; // x1
  int32_t initMode; // w8
  int32_t v11; // w1

  v4 = (UnityEngine_Object_o *)obj;
  if ( (byte_4A495F6 & 1) == 0 )
  {
    sub_1B863B8(&GalleryFullScreenListViewObject_TypeInfo, obj);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v6);
    byte_4A495F6 = 1;
  }
  if ( v4 )
  {
    methodPtr_low = LOBYTE(GalleryFullScreenListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v4->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (GalleryFullScreenListViewObject_c *)v4->klass->_2.typeHierarchy[methodPtr_low - 1] != GalleryFullScreenListViewObject_TypeInfo )
        v4 = 0LL;
    }
    else
    {
      v4 = 0LL;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality(v4, 0LL, 0LL);
  if ( !v8 )
  {
    initMode = this->fields.initMode;
    if ( initMode )
    {
      if ( !v4 )
        sub_1B86614(v8, v9);
      if ( initMode == 2 )
        v11 = 3;
      else
        v11 = 2;
      GalleryFullScreenListViewObject__Init_31522936((GalleryFullScreenListViewObject_o *)v4, v11, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall GalleryFullScreenListViewManager__WaitSetDataSelectGallery(
        GalleryFullScreenListViewManager_o *this,
        int32_t selectGalleryId,
        System_Action_o *endCallBack,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4A49605 & 1) == 0 )
  {
    sub_1B863B8(&GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36_TypeInfo, *(_QWORD *)&selectGalleryId);
    byte_4A49605 = 1;
  }
  v7 = sub_1B86604(GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36_TypeInfo);
  GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36___ctor(
    (GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_1B86614(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v7 + 40), (int32_t)this, v10, v11);
  *(_DWORD *)(v7 + 32) = selectGalleryId;
  *(_QWORD *)(v7 + 48) = endCallBack;
  sub_1B8635C((CGThumbnailListItem_o *)(v7 + 48), (int32_t)endCallBack, v12, v13);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall GalleryFullScreenListViewManager___Change_b__16_0(
        GalleryFullScreenListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  GalleryFullScreenListViewManager__SetEnableScroll(this, isEnable, 1, 0, v3);
}


void __fastcall GalleryFullScreenListViewManager___CreateViewerObj_b__29_0(
        GalleryFullScreenListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Camera_o *main; // x0
  const MethodInfo *v4; // x2

  main = UnityEngine_Camera__get_main(0LL);
  GalleryFullScreenDragProcess__Init(main, this->fields.actionObject, v4);
}


void __fastcall GalleryFullScreenListViewManager___OnDragUpdate_b__31_0(
        GalleryFullScreenListViewManager_o *this,
        const MethodInfo *method)
{
  GalleryFullScreenPanel_o *galleryFullScreenPanel; // x0
  const MethodInfo *v4; // x4

  galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
  if ( !galleryFullScreenPanel )
    goto LABEL_6;
  if ( GalleryFullScreenPanel__CheckSameDispType(galleryFullScreenPanel, 1, 0LL) )
  {
    galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
    if ( galleryFullScreenPanel )
    {
      GalleryFullScreenPanel__SetDispType(galleryFullScreenPanel, 2, 0LL);
      GalleryFullScreenListViewManager__SetEnableScroll(this, 0, 0, 0, v4);
      return;
    }
LABEL_6:
    sub_1B86614(galleryFullScreenPanel, method);
  }
}


void __fastcall GalleryFullScreenListViewManager___OnDragUpdate_b__31_1(
        GalleryFullScreenListViewManager_o *this,
        const MethodInfo *method)
{
  GalleryFullScreenPanel_o *galleryFullScreenPanel; // x0
  const MethodInfo *v4; // x4

  galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
  if ( !galleryFullScreenPanel )
    goto LABEL_6;
  if ( GalleryFullScreenPanel__CheckSameDispType(galleryFullScreenPanel, 2, 0LL) )
  {
    galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
    if ( galleryFullScreenPanel )
    {
      GalleryFullScreenPanel__SetDispType(galleryFullScreenPanel, 1, 0LL);
      GalleryFullScreenListViewManager__SetEnableScroll(this, 0, 0, 0, v4);
      return;
    }
LABEL_6:
    sub_1B86614(galleryFullScreenPanel, method);
  }
}


void __fastcall GalleryFullScreenListViewManager___OnModifyViewerCenter_b__25_1(
        GalleryFullScreenListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  GalleryFullScreenListViewManager__SetEnableScroll(this, isEnable, 1, 0, v3);
}


UnityEngine_Vector2_o __fastcall GalleryFullScreenListViewManager__get_CenterPosition(
        GalleryFullScreenListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *scrollView; // x0
  float v4; // s0
  float v5; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(scrollView, 0LL)) == 0LL )
  {
    sub_1B86614(scrollView, method);
  }
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0LL);
  v4 = this->fields.clipOffset.fields.x - localPosition.fields.x;
  v5 = this->fields.clipOffset.fields.y - localPosition.fields.y;
  result.fields.y = v5;
  result.fields.x = v4;
  return result;
}


void __fastcall GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36___ctor(
        GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36__MoveNext(
        GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36_o *this,
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t _1__state; // w8
  struct GalleryFullScreenListViewManager_o *_4__this; // x21
  __int64 v18; // x20
  Il2CppObject *object; // x0
  __int64 v20; // x1
  System_Action_o *endCallBack; // x0
  bool result; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x21
  System_Func_object__bool__o *v24; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x21
  GalleryFullScreenListViewManager___c_c *v26; // x8
  System_Func_object__int__o *_9__36_1; // x22
  Il2CppObject *v28; // x23
  struct GalleryFullScreenListViewManager___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  void *monitor; // x1
  GalleryFullScreenListViewObject_c *v36; // x8
  __int64 methodPtr_low; // x9
  CGThumbnailListItem_o *v38; // x0
  System_Func_bool__o *v39; // x21
  UnityEngine_WaitWhile_o *v40; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v42; // w2
  const MethodInfo *v43; // x3

  if ( (byte_4A4960B & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Cast_GalleryFullScreenListViewItem___, method);
    sub_1B863B8(&Method_System_Linq_Enumerable_First_GalleryFullScreenListViewItem___, v3);
    sub_1B863B8(&Method_System_Linq_Enumerable_OrderBy_GalleryFullScreenListViewItem__int___, v4);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_GalleryFullScreenListViewItem___, v5);
    sub_1B863B8(&System_Func_bool__TypeInfo, v6);
    sub_1B863B8(&System_Func_GalleryFullScreenListViewItem__bool__TypeInfo, v7);
    sub_1B863B8(&System_Func_GalleryFullScreenListViewItem__int__TypeInfo, v8);
    sub_1B863B8(&GalleryFullScreenListViewObject_TypeInfo, v9);
    sub_1B863B8(&Method_GalleryFullScreenListViewManager___c__WaitSetDataSelectGallery_b__36_1__, v10);
    sub_1B863B8(&Method_GalleryFullScreenListViewManager___c__DisplayClass36_0__WaitSetDataSelectGallery_b__0__, v11);
    sub_1B863B8(&Method_GalleryFullScreenListViewManager___c__DisplayClass36_0__WaitSetDataSelectGallery_b__2__, v12);
    sub_1B863B8(&GalleryFullScreenListViewManager___c__DisplayClass36_0_TypeInfo, v13);
    sub_1B863B8(&GalleryFullScreenListViewManager___c_TypeInfo, v14);
    sub_1B863B8(&UnityEngine_WaitWhile_TypeInfo, v15);
    byte_4A4960B = 1;
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
  v18 = sub_1B86604(GalleryFullScreenListViewManager___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_27;
  *(_DWORD *)(v18 + 16) = this->fields.selectGalleryId;
  if ( !_4__this )
    goto LABEL_27;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)_4__this->fields.itemList, 0LL) )
  {
    endCallBack = this->fields.endCallBack;
LABEL_10:
    ActionExtensions__Call(endCallBack, 0LL);
    return 0;
  }
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_object_(
                                                               (System_Collections_IEnumerable_o *)_4__this->fields.itemList,
                                                               (const MethodInfo_2F7E43C *)Method_System_Linq_Enumerable_Cast_GalleryFullScreenListViewItem___);
  v24 = (System_Func_object__bool__o *)sub_1B86604(System_Func_GalleryFullScreenListViewItem__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v24,
    (Il2CppObject *)v18,
    Method_GalleryFullScreenListViewManager___c__DisplayClass36_0__WaitSetDataSelectGallery_b__0__,
    0LL);
  v25 = System_Linq_Enumerable__Where_object_(
          v23,
          (System_Func_TSource__bool__o *)v24,
          (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_GalleryFullScreenListViewItem___);
  v26 = GalleryFullScreenListViewManager___c_TypeInfo;
  if ( !GalleryFullScreenListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GalleryFullScreenListViewManager___c_TypeInfo);
    v26 = GalleryFullScreenListViewManager___c_TypeInfo;
  }
  _9__36_1 = (System_Func_object__int__o *)v26->static_fields->__9__36_1;
  if ( !_9__36_1 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = GalleryFullScreenListViewManager___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v26->static_fields->__9;
    _9__36_1 = (System_Func_object__int__o *)sub_1B86604(System_Func_GalleryFullScreenListViewItem__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__36_1,
      v28,
      Method_GalleryFullScreenListViewManager___c__WaitSetDataSelectGallery_b__36_1__,
      0LL);
    static_fields = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__36_1 = (struct System_Func_GalleryFullScreenListViewItem__int__o *)_9__36_1;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__36_1, (int32_t)_9__36_1, v30, v31);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v25,
                                                               (System_Func_TSource__TKey__o *)_9__36_1,
                                                               (const MethodInfo_2F9AB50 *)Method_System_Linq_Enumerable_OrderBy_GalleryFullScreenListViewItem__int___);
  object = System_Linq_Enumerable__First_object_(
             v32,
             (const MethodInfo_2F91E3C *)Method_System_Linq_Enumerable_First_GalleryFullScreenListViewItem___);
  if ( !object )
LABEL_27:
    sub_1B86614(object, v20);
  monitor = object[6].monitor;
  if ( monitor )
  {
    v36 = GalleryFullScreenListViewObject_TypeInfo;
    methodPtr_low = LOBYTE(GalleryFullScreenListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)monitor + 304LL) >= (unsigned int)methodPtr_low
      && *(GalleryFullScreenListViewObject_c **)(*(_QWORD *)(*(_QWORD *)monitor + 200LL) + 8 * (methodPtr_low - 1)) == GalleryFullScreenListViewObject_TypeInfo )
    {
      *(_QWORD *)(v18 + 24) = monitor;
      v38 = (CGThumbnailListItem_o *)(v18 + 24);
      if ( *(unsigned __int8 *)(*(_QWORD *)monitor + 304LL) >= (unsigned int)methodPtr_low
        && *(GalleryFullScreenListViewObject_c **)(*(_QWORD *)(*(_QWORD *)monitor + 200LL) + 8 * (methodPtr_low - 1)) == v36 )
      {
        goto LABEL_26;
      }
    }
    sub_1B868D4(monitor);
  }
  *(_QWORD *)(v18 + 24) = monitor;
  v38 = (CGThumbnailListItem_o *)(v18 + 24);
LABEL_26:
  sub_1B8635C(v38, (int32_t)monitor, v33, v34);
  v39 = (System_Func_bool__o *)sub_1B86604(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v39,
    (Il2CppObject *)v18,
    Method_GalleryFullScreenListViewManager___c__DisplayClass36_0__WaitSetDataSelectGallery_b__2__,
    0LL);
  v40 = (UnityEngine_WaitWhile_o *)sub_1B86604(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v40, v39, 0LL);
  this->fields.__2__current = (Il2CppObject *)v40;
  p__2__current = &this->fields.__2__current;
  sub_1B8635C((CGThumbnailListItem_o *)p__2__current, (int32_t)v40, v42, v43);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36__System_Collections_IEnumerator_Reset(
        GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
}


Il2CppObject *__fastcall GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36__System_Collections_IEnumerator_get_Current(
        GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36__System_IDisposable_Dispose(
        GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall GalleryFullScreenListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4960A & 1) == 0 )
  {
    sub_1B863B8(&GalleryFullScreenListViewManager___c_TypeInfo, v1);
    byte_4A4960A = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(GalleryFullScreenListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  GalleryFullScreenListViewManager___c_TypeInfo->static_fields->__9 = (struct GalleryFullScreenListViewManager___c_o *)v2;
  sub_1B8635C(
    (CGThumbnailListItem_o *)GalleryFullScreenListViewManager___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall GalleryFullScreenListViewManager___c___ctor(
        GalleryFullScreenListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall GalleryFullScreenListViewManager___c___CreateList_b__13_0(
        GalleryFullScreenListViewManager___c_o *this,
        GalleryResourceEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields.idx;
}


GalleryResourceEntity_o *__fastcall GalleryFullScreenListViewManager___c___GetDiffResourcePageInfo_b__35_0(
        GalleryFullScreenListViewManager___c_o *this,
        GalleryFullScreenListViewItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields._GalleryResourceEntity_k__BackingField;
}


int32_t __fastcall GalleryFullScreenListViewManager___c___GetDiffResourcePageInfo_b__35_2(
        GalleryFullScreenListViewManager___c_o *this,
        GalleryResourceEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields.idx;
}


int32_t __fastcall GalleryFullScreenListViewManager___c___GetInRangeGalleryResourceList_b__18_0(
        GalleryFullScreenListViewManager___c_o *this,
        GalleryFullScreenListViewItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields.index;
}


GalleryResourceEntity_o *__fastcall GalleryFullScreenListViewManager___c___GetInRangeGalleryResourceList_b__18_1(
        GalleryFullScreenListViewManager___c_o *this,
        GalleryFullScreenListViewItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields._GalleryResourceEntity_k__BackingField;
}


bool __fastcall GalleryFullScreenListViewManager___c___GetInRangeGalleryResourceList_b__18_2(
        GalleryFullScreenListViewManager___c_o *this,
        GalleryResourceEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields.galleryType == 2;
}


void __fastcall GalleryFullScreenListViewManager___c___OnModifyViewerCenter_b__25_0(
        GalleryFullScreenListViewManager___c_o *this,
        GalleryFullScreenListViewItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  x->fields.isCenterItem = 0;
}


int32_t __fastcall GalleryFullScreenListViewManager___c___WaitSetDataSelectGallery_b__36_1(
        GalleryFullScreenListViewManager___c_o *this,
        GalleryFullScreenListViewItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields.index;
}


void __fastcall GalleryFullScreenListViewManager___c__DisplayClass19_0___ctor(
        GalleryFullScreenListViewManager___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GalleryFullScreenListViewManager___c__DisplayClass19_0___LoadAssetCache_b__0(
        GalleryFullScreenListViewManager___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  GalleryFullScreenListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B86614(0LL, method);
  GalleryFullScreenListViewManager__LoadEnd(
    _4__this,
    this->fields.assetLoadNames,
    this->fields.isLoadFromThumbnail,
    0LL);
  ActionExtensions__Call(this->fields.endCallback, 0LL);
}


void __fastcall GalleryFullScreenListViewManager___c__DisplayClass35_0___ctor(
        GalleryFullScreenListViewManager___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GalleryFullScreenListViewManager___c__DisplayClass35_0___GetDiffResourcePageInfo_b__1(
        GalleryFullScreenListViewManager___c__DisplayClass35_0_o *this,
        GalleryResourceEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields.galleryId == this->fields.centerGalleryId;
}


void __fastcall GalleryFullScreenListViewManager___c__DisplayClass36_0___ctor(
        GalleryFullScreenListViewManager___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GalleryFullScreenListViewManager___c__DisplayClass36_0___WaitSetDataSelectGallery_b__0(
        GalleryFullScreenListViewManager___c__DisplayClass36_0_o *this,
        GalleryFullScreenListViewItem_o *x,
        const MethodInfo *method)
{
  struct GalleryResourceEntity_o *GalleryResourceEntity_k__BackingField; // x8

  if ( !x || (GalleryResourceEntity_k__BackingField = x->fields._GalleryResourceEntity_k__BackingField) == 0LL )
    sub_1B86614(this, x);
  return GalleryResourceEntity_k__BackingField->fields.galleryId == this->fields.selectGalleryId;
}


bool __fastcall GalleryFullScreenListViewManager___c__DisplayClass36_0___WaitSetDataSelectGallery_b__2(
        GalleryFullScreenListViewManager___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  struct GalleryFullScreenListViewObject_o *obj; // x8
  struct GalleryFullScreenListViewItemDraw_o *itemDraw; // x8

  obj = this->fields.obj;
  if ( !obj || (itemDraw = obj->fields.itemDraw) == 0LL )
    sub_1B86614(this, method);
  return itemDraw->fields.setDataWait;
}