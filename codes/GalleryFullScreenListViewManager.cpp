void GalleryFullScreenListViewManager___ctor(GalleryFullScreenListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_string__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_List_object__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596B551 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_AssetData__TypeInfo);
    byte_596B551 = 1;
  }
  v3 = System_Collections_Generic_List_string__TypeInfo;
  *(_QWORD *)&this->fields.currentCenterIndex = -1;
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.nowLoadingAssetNameList = (struct System_Collections_Generic_List_string__o *)v4;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.nowLoadingAssetNameList,
    (int32_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_AssetData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.cacheAssetDataList = (struct System_Collections_Generic_List_AssetData__o *)v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cacheAssetDataList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void GalleryFullScreenListViewManager__AfterScrollCallback(
        GalleryFullScreenListViewManager_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596B53D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_GalleryFullScreenListViewManager_AfterScrollCallback__);
    byte_596B53D = 1;
  }
  GalleryFullScreenListViewManager__Change(this, method);
  v3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_GalleryFullScreenListViewManager_AfterScrollCallback__, 0);
  this->fields.callbackAfterScroll = v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackAfterScroll,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


void GalleryFullScreenListViewManager__Awake(GalleryFullScreenListViewManager_o *this, const MethodInfo *method)
{
  ;
}


bool GalleryFullScreenListViewManager__CenterItemIsMovie(
        GalleryFullScreenListViewManager_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *centerItem; // x8
  __int64 naturalAligment; // x11
  bool result; // w0

  if ( (byte_596B54F & 1) == 0 )
  {
    sub_2213A60(&GalleryFullScreenListViewItem_TypeInfo);
    byte_596B54F = 1;
  }
  centerItem = this->fields.centerItem;
  result = centerItem
        && (naturalAligment = GalleryFullScreenListViewItem_TypeInfo->_2.naturalAligment,
            centerItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
        && (GalleryFullScreenListViewItem_c *)centerItem->klass->_2.typeHierarchy[naturalAligment - 1] == GalleryFullScreenListViewItem_TypeInfo
        && LODWORD(centerItem[1].klass) == 1;
  return result;
}


void GalleryFullScreenListViewManager__Change(GalleryFullScreenListViewManager_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *centerItem; // x23
  ListViewItem_o *Item; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *viewObject; // x20
  struct ListViewObject_o *v8; // x24
  __int64 naturalAligment; // x10
  System_Action_bool__o *v10; // x20
  Il2CppObject *galleryFullScreenPanel; // x22
  System_Action_o *v12; // x21
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  GalleryFullScreenListViewItemDraw_o *m_CachedPtr; // x0

  if ( (byte_596B53E & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_GalleryFullScreenListViewManager__Change_b__16_0__);
    sub_2213A60(&GalleryFullScreenListViewObject_TypeInfo);
    sub_2213A60(&Method_GalleryFullScreenPanel_Close__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B53E = 1;
  }
  centerItem = this->fields.centerItem;
  Item = ListViewManager__GetItem((ListViewManager_o *)this, this->fields.oldCenterIndex, 0);
  if ( centerItem && this->fields.oldCenterIndex != centerItem->fields.index && Item )
  {
    viewObject = (UnityEngine_Object_o *)centerItem->fields.viewObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
    {
      v8 = centerItem->fields.viewObject;
      if ( v8 )
      {
        naturalAligment = GalleryFullScreenListViewObject_TypeInfo->_2.naturalAligment;
        if ( v8->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (GalleryFullScreenListViewObject_c *)v8->klass->_2.typeHierarchy[naturalAligment - 1] == GalleryFullScreenListViewObject_TypeInfo )
        {
          v10 = (System_Action_bool__o *)sub_2213CCC(System_Action_bool__TypeInfo);
          System_Action_bool____ctor(
            v10,
            (Il2CppObject *)this,
            Method_GalleryFullScreenListViewManager__Change_b__16_0__,
            0);
          galleryFullScreenPanel = (Il2CppObject *)this->fields.galleryFullScreenPanel;
          v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(v12, galleryFullScreenPanel, (intptr_t)Method_GalleryFullScreenPanel_Close__, 0);
          m_CachedPtr = (GalleryFullScreenListViewItemDraw_o *)v8[1].fields.m_CachedPtr;
          if ( !m_CachedPtr )
            sub_2213CDC(0, v13);
          GalleryFullScreenListViewItemDraw__StartPlayMovieCoroutine(m_CachedPtr, v10, v12, v14);
        }
      }
    }
    this->fields.oldCenterIndex = centerItem->fields.index;
  }
}


// local variable allocation has failed, the output may be wrong!
void GalleryFullScreenListViewManager__CreateList(
        GalleryFullScreenListViewManager_o *this,
        System_Collections_Generic_List_int__o *galleryIdList,
        int32_t selectGalleryId,
        System_Action_int__o *changeListItem,
        System_Action_o *action,
        const MethodInfo *method)
{
  int v9; // w8
  Il2CppObject *Master_object; // x24
  System_Collections_Generic_List_object__o *v11; // x22
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v19; // x1
  _BOOL8 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_GalleryResourceEntity__o *EnableGalleryResourceEntityListByGalleryId; // x23
  GalleryFullScreenListViewManager___c_c *v25; // x0
  struct GalleryFullScreenListViewManager___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__13_0; // x25
  Il2CppObject *v28; // x26
  struct GalleryFullScreenListViewManager___c_StaticFields *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Collections_Generic_IEnumerable_T__o *v37; // x0
  int32_t v38; // w24
  int32_t v39; // w23
  GalleryResourceEntity_o *Item; // x25
  GalleryFullScreenListViewItem_o *v41; // x26
  const MethodInfo *v42; // x3
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x8
  Il2CppObject *Component_object; // x0
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  UIDragDropListViewBackMask_o *backMask; // x21
  EventDelegate_Callback_o *v62; // x22
  EventDelegate_Callback_o *v63; // x24
  const MethodInfo *v64; // x4
  System_Action_o *v65; // x21
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  __int64 v72; // x1
  __int64 v73; // x2
  Il2CppObject *ComponentInChildren_object__58855044; // x21
  SpringPanel_OnFinished_o *v75; // x22
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  System_Collections_Generic_List_Enumerator_int__o v84; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v85; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_596B53C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_UICenterOnChild___);
    sub_2213A60(&Method_DataManager_GetMaster_GalleryResourceMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_GalleryResourceEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_2213A60(&System_Func_GalleryResourceEntity__int__TypeInfo);
    sub_2213A60(&GalleryFullScreenListViewItem_TypeInfo);
    sub_2213A60(&Method_GalleryFullScreenListViewManager_AfterScrollCallback__);
    sub_2213A60(&Method_GalleryFullScreenListViewManager_OnClickMaxim__);
    sub_2213A60(&Method_GalleryFullScreenListViewManager_OnDragUpdate__);
    sub_2213A60(&Method_GalleryFullScreenListViewManager_OnFinishedChange__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
    sub_2213A60(&Method_System_Collections_Generic_List_GalleryResourceEntity__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_GalleryResourceEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GalleryResourceEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GalleryResourceEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_GalleryResourceEntity__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SpringPanel_OnFinished_TypeInfo);
    sub_2213A60(&Method_GalleryFullScreenListViewManager___c__CreateList_b__13_0__);
    sub_2213A60(&GalleryFullScreenListViewManager___c_TypeInfo);
    byte_596B53C = 1;
  }
  v9 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  memset(&v85, 0, sizeof(v85));
  if ( !v9 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, galleryIdList, *(_QWORD *)&selectGalleryId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GalleryResourceMaster___);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GalleryResourceEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GalleryResourceEntity___ctor__);
  this->fields.changeListItemAction = changeListItem;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.changeListItemAction,
    (int32_t)changeListItem,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( !galleryIdList )
    goto LABEL_44;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v84,
    galleryIdList,
    (const MethodInfo_4467D20 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v85 = v84;
  v84.fields._list = 0;
  *(_QWORD *)&v84.fields._index = &v85;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v85,
            (const MethodInfo_40F5CBC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v20 )
      break;
    if ( !Master_object )
      sub_2213CDC(v20, v21);
    EnableGalleryResourceEntityListByGalleryId = GalleryResourceMaster__GetEnableGalleryResourceEntityListByGalleryId(
                                                   (GalleryResourceMaster_o *)Master_object,
                                                   v85.fields._current,
                                                   0);
    v25 = GalleryFullScreenListViewManager___c_TypeInfo;
    if ( !*(&GalleryFullScreenListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(GalleryFullScreenListViewManager___c_TypeInfo, v22, v23);
      v25 = GalleryFullScreenListViewManager___c_TypeInfo;
    }
    static_fields = v25->static_fields;
    _9__13_0 = (System_Func_object__int__o *)static_fields->__9__13_0;
    if ( !_9__13_0 )
    {
      if ( !*(&v25->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v25, v22, v23);
        static_fields = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
      }
      v28 = (Il2CppObject *)static_fields->__9;
      _9__13_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_GalleryResourceEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__13_0,
        v28,
        Method_GalleryFullScreenListViewManager___c__CreateList_b__13_0__,
        0);
      v29 = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
      v29->__9__13_0 = (struct System_Func_GalleryResourceEntity__int__o *)_9__13_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v29->__9__13_0, (int32_t)_9__13_0, v30, v31, v32, v33, v34, v35);
    }
    v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)EnableGalleryResourceEntityListByGalleryId,
                                                                 (System_Func_TSource__TKey__o *)_9__13_0,
                                                                 (const MethodInfo_3888BA0 *)Method_System_Linq_Enumerable_OrderBy_GalleryResourceEntity__int___);
    v37 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToList_object_(
                                                           v36,
                                                           (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
    if ( !v11 )
      sub_2213CDC(v37, v37);
    System_Collections_Generic_List_object___AddRange(
      v11,
      v37,
      (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_GalleryResourceEntity__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v85,
    (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( !v11 )
    goto LABEL_44;
  if ( v11->fields._size >= 1 )
  {
    v38 = 0;
    v39 = -1;
    while ( 1 )
    {
      Item = (GalleryResourceEntity_o *)System_Collections_Generic_List_object___get_Item(
                                          v11,
                                          v38,
                                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GalleryResourceEntity__get_Item__);
      v41 = (GalleryFullScreenListViewItem_o *)sub_2213CCC(GalleryFullScreenListViewItem_TypeInfo);
      GalleryFullScreenListViewItem___ctor(v41, v38, Item, v42);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_44;
      items = itemList->fields._items;
      v50 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        goto LABEL_44;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v41,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
      }
      else
      {
        v52 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v52[4] = (Il2CppClass *)v41;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v52 + 4), (int32_t)v41, v43, v44, v45, v46, v47, v48);
      }
      if ( !Item )
        goto LABEL_44;
      if ( v39 <= -1 && Item->fields.galleryId == selectGalleryId )
        v39 = v38;
      if ( ++v38 >= v11->fields._size )
        goto LABEL_35;
    }
  }
  v39 = -1;
LABEL_35:
  itemList = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(GalleryFullScreenListViewManager_o *, const MethodInfo *))this->klass->vtable._7_GetDragRoot.methodPtr)(
                                                            this,
                                                            this->klass->vtable._7_GetDragRoot.method);
  if ( !itemList )
    goto LABEL_44;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)itemList,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
  this->fields.backMask = (struct UIDragDropListViewBackMask_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.backMask,
    (int32_t)Component_object,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
  backMask = this->fields.backMask;
  v62 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v62, (Il2CppObject *)this, Method_GalleryFullScreenListViewManager_OnClickMaxim__, 0);
  v63 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v63, (Il2CppObject *)this, Method_GalleryFullScreenListViewManager_OnDragUpdate__, 0);
  if ( !backMask )
    goto LABEL_44;
  UIDragDropListViewBackMask__DragStartMultiTouch(backMask, v62, v63, 0);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  GalleryFullScreenListViewManager__SetEnableScroll(this, 1, 0, 0, v64);
  v65 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v65, (Il2CppObject *)this, Method_GalleryFullScreenListViewManager_AfterScrollCallback__, 0);
  this->fields.callbackAfterScroll = v65;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackAfterScroll,
    (int32_t)v65,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  ListViewManager__JumpItem((ListViewManager_o *)this, v39, 0);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
  this->fields.currentCenterIndex = v39;
  if ( !itemList )
LABEL_44:
    sub_2213CDC(itemList, v19);
  ComponentInChildren_object__58855044 = UnityEngine_Component__GetComponentInChildren_object__58855044(
                                           (UnityEngine_Component_o *)itemList,
                                           (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_UICenterOnChild___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v72, v73);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object__58855044, 0, 0) )
  {
    v75 = (SpringPanel_OnFinished_o *)sub_2213CCC(SpringPanel_OnFinished_TypeInfo);
    SpringPanel_OnFinished___ctor(
      v75,
      (Il2CppObject *)this,
      Method_GalleryFullScreenListViewManager_OnFinishedChange__,
      0);
    if ( !ComponentInChildren_object__58855044 )
      goto LABEL_44;
    ComponentInChildren_object__58855044[2].monitor = v75;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&ComponentInChildren_object__58855044[2].monitor,
      (int32_t)v75,
      v76,
      v77,
      v78,
      v79,
      v80,
      v81);
  }
  ActionExtensions__Call(action, 0);
}


void GalleryFullScreenListViewManager__CreateViewerObj(
        GalleryFullScreenListViewManager_o *this,
        GalleryFullScreenListViewObject_o *galleryFullScreenListViewObject,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  GalleryFullScreenPanel_o *galleryFullScreenPanel; // x0
  GalleryFullScreenListViewObject_o *actionObject; // x20
  System_Action_o *v14; // x21
  const MethodInfo *v15; // x4

  if ( (byte_596B549 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_GalleryFullScreenListViewManager__CreateViewerObj_b__29_0__);
    byte_596B549 = 1;
  }
  this->fields.actionObject = galleryFullScreenListViewObject;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.actionObject,
    (int32_t)galleryFullScreenListViewObject,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
  if ( !galleryFullScreenPanel
    || (GalleryFullScreenPanel__SetDispType(galleryFullScreenPanel, 2, v11),
        actionObject = this->fields.actionObject,
        v14 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v14,
          (Il2CppObject *)this,
          Method_GalleryFullScreenListViewManager__CreateViewerObj_b__29_0__,
          0),
        !actionObject) )
  {
    sub_2213CDC(galleryFullScreenPanel, v10);
  }
  GalleryFullScreenListViewObject__Init(actionObject, 4, 0, v14, v15);
}


void GalleryFullScreenListViewManager__DragEnd(GalleryFullScreenListViewManager_o *this, const MethodInfo *method)
{
  UIDragDropListViewBackMask_o *backMask; // x20
  EventDelegate_Callback_o *v4; // x21
  EventDelegate_Callback_o *v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_596B550 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_GalleryFullScreenListViewManager_OnClickMaxim__);
    sub_2213A60(&Method_GalleryFullScreenListViewManager_OnDragUpdate__);
    byte_596B550 = 1;
  }
  ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0);
  backMask = this->fields.backMask;
  v4 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v4, (Il2CppObject *)this, Method_GalleryFullScreenListViewManager_OnClickMaxim__, 0);
  v5 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v5, (Il2CppObject *)this, Method_GalleryFullScreenListViewManager_OnDragUpdate__, 0);
  if ( !backMask )
    sub_2213CDC(v6, v7);
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
  __int64 v11; // x2
  __int64 v12; // x3
  System_Collections_Generic_List_object__o *v13; // x21
  __int64 naturalAligment; // x9
  _DWORD *monitor; // x8
  System_Collections_IEnumerable_o *itemList; // x0
  const MethodInfo_3868AB0 *v17; // x1
  System_Collections_Generic_IEnumerable_TResult__o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  GalleryFullScreenListViewManager___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x23
  struct GalleryFullScreenListViewManager___c_StaticFields *static_fields; // x9
  System_Func_object__object__o *_9__35_0; // x24
  Il2CppObject *v25; // x25
  struct GalleryFullScreenListViewManager___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x23
  System_Func_object__bool__o *v34; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  __int64 v36; // x2
  int32_t size; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x22
  GalleryFullScreenListViewManager___c_c *v39; // x0
  struct GalleryFullScreenListViewManager___c_StaticFields *v40; // x8
  System_Func_object__int__o *_9__35_2; // x20
  Il2CppObject *v42; // x23
  struct GalleryFullScreenListViewManager___c_StaticFields *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  GalleryFullScreenListViewManager_o *v51; // x0
  const MethodInfo *v52; // x1

  if ( (byte_596B54D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Cast_GalleryFullScreenListViewItem___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_GalleryResourceEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_GalleryFullScreenListViewItem__GalleryResourceEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_GalleryResourceEntity___);
    sub_2213A60(&System_Func_GalleryResourceEntity__int__TypeInfo);
    sub_2213A60(&System_Func_GalleryResourceEntity__bool__TypeInfo);
    sub_2213A60(&System_Func_GalleryFullScreenListViewItem__GalleryResourceEntity__TypeInfo);
    sub_2213A60(&GalleryFullScreenListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GalleryResourceEntity__IndexOf__);
    sub_2213A60(&Method_System_Collections_Generic_List_GalleryResourceEntity__get_Count__);
    sub_2213A60(&Method_GalleryFullScreenListViewManager___c__GetDiffResourcePageInfo_b__35_0__);
    sub_2213A60(&Method_GalleryFullScreenListViewManager___c__GetDiffResourcePageInfo_b__35_2__);
    sub_2213A60(&Method_GalleryFullScreenListViewManager___c__DisplayClass35_0__GetDiffResourcePageInfo_b__1__);
    sub_2213A60(&GalleryFullScreenListViewManager___c__DisplayClass35_0_TypeInfo);
    sub_2213A60(&GalleryFullScreenListViewManager___c_TypeInfo);
    byte_596B54D = 1;
  }
  v7 = sub_2213CCC(GalleryFullScreenListViewManager___c__DisplayClass35_0_TypeInfo);
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
    v13 = Item;
    v10 = GalleryFullScreenListViewItem_TypeInfo;
    naturalAligment = GalleryFullScreenListViewItem_TypeInfo->_2.naturalAligment;
    if ( Item->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (GalleryFullScreenListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] != GalleryFullScreenListViewItem_TypeInfo )
    {
      v51 = (GalleryFullScreenListViewManager_o *)sub_221405C(Item, GalleryFullScreenListViewItem_TypeInfo, v11, v12);
      GalleryFullScreenListViewManager__get_CenterPosition(v51, v52);
      return;
    }
    monitor = Item[3].monitor;
    if ( !monitor || !v7 )
      goto LABEL_25;
    itemList = (System_Collections_IEnumerable_o *)this->fields.itemList;
    v17 = (const MethodInfo_3868AB0 *)Method_System_Linq_Enumerable_Cast_GalleryFullScreenListViewItem___;
    *(_DWORD *)(v7 + 16) = monitor[4];
    v18 = System_Linq_Enumerable__Cast_object_(itemList, v17);
    v21 = GalleryFullScreenListViewManager___c_TypeInfo;
    v22 = (System_Collections_Generic_IEnumerable_TSource__o *)v18;
    if ( !*(&GalleryFullScreenListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(GalleryFullScreenListViewManager___c_TypeInfo, v19, v20);
      v21 = GalleryFullScreenListViewManager___c_TypeInfo;
    }
    static_fields = v21->static_fields;
    _9__35_0 = (System_Func_object__object__o *)static_fields->__9__35_0;
    if ( !_9__35_0 )
    {
      if ( !*(&v21->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v21, v19, v20);
        static_fields = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
      }
      v25 = (Il2CppObject *)static_fields->__9;
      _9__35_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_GalleryFullScreenListViewItem__GalleryResourceEntity__TypeInfo);
      System_Func_object__object____ctor(
        _9__35_0,
        v25,
        Method_GalleryFullScreenListViewManager___c__GetDiffResourcePageInfo_b__35_0__,
        0);
      v26 = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
      v26->__9__35_0 = (struct System_Func_GalleryFullScreenListViewItem__GalleryResourceEntity__o *)_9__35_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26->__9__35_0, (int32_t)_9__35_0, v27, v28, v29, v30, v31, v32);
    }
    v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v22,
                                                                 (System_Func_TSource__TResult__o *)_9__35_0,
                                                                 (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_GalleryFullScreenListViewItem__GalleryResourceEntity___);
    v34 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_GalleryResourceEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v34,
      (Il2CppObject *)v7,
      Method_GalleryFullScreenListViewManager___c__DisplayClass35_0__GetDiffResourcePageInfo_b__1__,
      0);
    v35 = System_Linq_Enumerable__Where_object_(
            v33,
            (System_Func_TSource__bool__o *)v34,
            (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_GalleryResourceEntity___);
    Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                          v35,
                                                          (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
    if ( !Item )
      goto LABEL_25;
    size = Item->fields._size;
    v38 = (System_Collections_Generic_IEnumerable_TSource__o *)Item;
    v39 = GalleryFullScreenListViewManager___c_TypeInfo;
    *diffCount = size;
    if ( !*(&v39->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v39, v10, v36);
      v39 = GalleryFullScreenListViewManager___c_TypeInfo;
    }
    v40 = v39->static_fields;
    _9__35_2 = (System_Func_object__int__o *)v40->__9__35_2;
    if ( !_9__35_2 )
    {
      if ( !*(&v39->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v39, v10, v36);
        v40 = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
      }
      v42 = (Il2CppObject *)v40->__9;
      _9__35_2 = (System_Func_object__int__o *)sub_2213CCC(System_Func_GalleryResourceEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__35_2,
        v42,
        Method_GalleryFullScreenListViewManager___c__GetDiffResourcePageInfo_b__35_2__,
        0);
      v43 = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
      v43->__9__35_2 = (struct System_Func_GalleryResourceEntity__int__o *)_9__35_2;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v43->__9__35_2, (int32_t)_9__35_2, v44, v45, v46, v47, v48, v49);
    }
    v50 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 v38,
                                                                 (System_Func_TSource__TKey__o *)_9__35_2,
                                                                 (const MethodInfo_3888BA0 *)Method_System_Linq_Enumerable_OrderBy_GalleryResourceEntity__int___);
    Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                          v50,
                                                          (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
    if ( !Item )
LABEL_25:
      sub_2213CDC(Item, v10);
    *index = System_Collections_Generic_List_object___IndexOf(
               Item,
               (Il2CppObject *)v13[3].monitor,
               (const MethodInfo_44848E8 *)Method_System_Collections_Generic_List_GalleryResourceEntity__IndexOf__);
  }
}


System_Collections_Generic_List_GalleryResourceEntity__o *GalleryFullScreenListViewManager__GetInRangeGalleryResourceList(
        GalleryFullScreenListViewManager_o *this,
        int32_t loadRange,
        const MethodInfo *method)
{
  System_Collections_IEnumerable_o *itemList; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  GalleryFullScreenListViewManager___c_c *v9; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x21
  struct GalleryFullScreenListViewManager___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__18_0; // x22
  Il2CppObject *v13; // x23
  struct GalleryFullScreenListViewManager___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  GalleryFullScreenListViewManager___c_c *v24; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x21
  struct GalleryFullScreenListViewManager___c_StaticFields *v26; // x9
  System_Func_object__object__o *_9__18_1; // x22
  Il2CppObject *v28; // x23
  struct GalleryFullScreenListViewManager___c_StaticFields *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Collections_Generic_List_object__o *v37; // x21
  __int64 v38; // x1
  __int64 v39; // x2
  int32_t CenterIndex; // w20
  __int64 v41; // x0
  __int64 v42; // x1
  int32_t v43; // w22
  int32_t v44; // w0
  System_Collections_Generic_List_T__o *Range; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  GalleryFullScreenListViewManager___c_c *v48; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x19
  struct GalleryFullScreenListViewManager___c_StaticFields *v50; // x9
  System_Func_object__bool__o *_9__18_2; // x20
  Il2CppObject *v52; // x21
  struct GalleryFullScreenListViewManager___c_StaticFields *v53; // x0
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x0
  System_Collections_Generic_List_object__o *v62; // x19

  if ( (byte_596B540 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Cast_GalleryFullScreenListViewItem___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_GalleryFullScreenListViewItem__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_GalleryFullScreenListViewItem__GalleryResourceEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_GalleryResourceEntity___);
    sub_2213A60(&System_Func_GalleryResourceEntity__bool__TypeInfo);
    sub_2213A60(&System_Func_GalleryFullScreenListViewItem__GalleryResourceEntity__TypeInfo);
    sub_2213A60(&System_Func_GalleryFullScreenListViewItem__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GalleryResourceEntity__GetRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_GalleryResourceEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GalleryResourceEntity__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_GalleryResourceEntity__TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&Method_GalleryFullScreenListViewManager___c__GetInRangeGalleryResourceList_b__18_0__);
    sub_2213A60(&Method_GalleryFullScreenListViewManager___c__GetInRangeGalleryResourceList_b__18_1__);
    sub_2213A60(&Method_GalleryFullScreenListViewManager___c__GetInRangeGalleryResourceList_b__18_2__);
    sub_2213A60(&GalleryFullScreenListViewManager___c_TypeInfo);
    byte_596B540 = 1;
  }
  itemList = (System_Collections_IEnumerable_o *)this->fields.itemList;
  if ( itemList )
  {
    v6 = System_Linq_Enumerable__Cast_object_(
           itemList,
           (const MethodInfo_3868AB0 *)Method_System_Linq_Enumerable_Cast_GalleryFullScreenListViewItem___);
    v9 = GalleryFullScreenListViewManager___c_TypeInfo;
    v10 = (System_Collections_Generic_IEnumerable_TSource__o *)v6;
    if ( !*(&GalleryFullScreenListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(GalleryFullScreenListViewManager___c_TypeInfo, v7, v8);
      v9 = GalleryFullScreenListViewManager___c_TypeInfo;
    }
    static_fields = v9->static_fields;
    _9__18_0 = (System_Func_object__int__o *)static_fields->__9__18_0;
    if ( !_9__18_0 )
    {
      if ( !*(&v9->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v9, v7, v8);
        static_fields = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
      }
      v13 = (Il2CppObject *)static_fields->__9;
      _9__18_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_GalleryFullScreenListViewItem__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__18_0,
        v13,
        Method_GalleryFullScreenListViewManager___c__GetInRangeGalleryResourceList_b__18_0__,
        0);
      v14 = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
      v14->__9__18_0 = (struct System_Func_GalleryFullScreenListViewItem__int__o *)_9__18_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->__9__18_0, (int32_t)_9__18_0, v15, v16, v17, v18, v19, v20);
    }
    v21 = System_Linq_Enumerable__OrderBy_object__int_(
            v10,
            (System_Func_TSource__TKey__o *)_9__18_0,
            (const MethodInfo_3888BA0 *)Method_System_Linq_Enumerable_OrderBy_GalleryFullScreenListViewItem__int___);
    v24 = GalleryFullScreenListViewManager___c_TypeInfo;
    v25 = (System_Collections_Generic_IEnumerable_TSource__o *)v21;
    if ( !*(&GalleryFullScreenListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(GalleryFullScreenListViewManager___c_TypeInfo, v22, v23);
      v24 = GalleryFullScreenListViewManager___c_TypeInfo;
    }
    v26 = v24->static_fields;
    _9__18_1 = (System_Func_object__object__o *)v26->__9__18_1;
    if ( !_9__18_1 )
    {
      if ( !*(&v24->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v24, v22, v23);
        v26 = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
      }
      v28 = (Il2CppObject *)v26->__9;
      _9__18_1 = (System_Func_object__object__o *)sub_2213CCC(System_Func_GalleryFullScreenListViewItem__GalleryResourceEntity__TypeInfo);
      System_Func_object__object____ctor(
        _9__18_1,
        v28,
        Method_GalleryFullScreenListViewManager___c__GetInRangeGalleryResourceList_b__18_1__,
        0);
      v29 = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
      v29->__9__18_1 = (struct System_Func_GalleryFullScreenListViewItem__GalleryResourceEntity__o *)_9__18_1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v29->__9__18_1, (int32_t)_9__18_1, v30, v31, v32, v33, v34, v35);
    }
    v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v25,
                                                                 (System_Func_TSource__TResult__o *)_9__18_1,
                                                                 (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_GalleryFullScreenListViewItem__GalleryResourceEntity___);
    v37 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                         v36,
                                                         (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
    CenterIndex = ListViewManager__GetCenterIndex((ListViewManager_o *)this, 0);
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v38, v39);
    v41 = System_Math__Max_77153260(CenterIndex - loadRange, 0, 0);
    if ( !v37 )
      sub_2213CDC(v41, v42);
    v43 = v41;
    v44 = System_Math__Min_77153596(CenterIndex + loadRange, v37->fields._size - 1, 0);
    Range = System_Collections_Generic_List_object___GetRange(
              v37,
              v43,
              v44 - v43 + 1,
              (const MethodInfo_4484814 *)Method_System_Collections_Generic_List_GalleryResourceEntity__GetRange__);
    v48 = GalleryFullScreenListViewManager___c_TypeInfo;
    v49 = (System_Collections_Generic_IEnumerable_TSource__o *)Range;
    if ( !*(&GalleryFullScreenListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(GalleryFullScreenListViewManager___c_TypeInfo, v46, v47);
      v48 = GalleryFullScreenListViewManager___c_TypeInfo;
    }
    v50 = v48->static_fields;
    _9__18_2 = (System_Func_object__bool__o *)v50->__9__18_2;
    if ( !_9__18_2 )
    {
      if ( !*(&v48->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v48, v46, v47);
        v50 = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
      }
      v52 = (Il2CppObject *)v50->__9;
      _9__18_2 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_GalleryResourceEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__18_2,
        v52,
        Method_GalleryFullScreenListViewManager___c__GetInRangeGalleryResourceList_b__18_2__,
        0);
      v53 = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
      v53->__9__18_2 = (struct System_Func_GalleryResourceEntity__bool__o *)_9__18_2;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v53->__9__18_2, (int32_t)_9__18_2, v54, v55, v56, v57, v58, v59);
    }
    v60 = System_Linq_Enumerable__Where_object_(
            v49,
            (System_Func_TSource__bool__o *)_9__18_2,
            (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_GalleryResourceEntity___);
    return (System_Collections_Generic_List_GalleryResourceEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                         v60,
                                                                         (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_GalleryResourceEntity___);
  }
  else
  {
    v62 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GalleryResourceEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v62,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GalleryResourceEntity___ctor__);
    return (System_Collections_Generic_List_GalleryResourceEntity__o *)v62;
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
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t loadRangeFromCenter; // w22
  int32_t v9; // w21
  Il2CppObject *Item; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int32_t v13; // w22
  System_Collections_Generic_List_object__o *v14; // x8
  int32_t v15; // w23
  int32_t v16; // w24
  const MethodInfo *v17; // x4
  __int64 naturalAligment; // x10

  if ( (byte_596B547 & 1) == 0 )
  {
    sub_2213A60(&GalleryFullScreenListViewObject_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&System_Math_TypeInfo);
    byte_596B547 = 1;
  }
  CenterIndex = ListViewManager__GetCenterIndex((ListViewManager_o *)this, 0);
  loadRangeFromCenter = this->fields.loadRangeFromCenter;
  v9 = CenterIndex;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6, v7);
  Item = (Il2CppObject *)System_Math__Max_77153260(v9 - loadRangeFromCenter, 0, 0);
  itemList = this->fields.itemList;
  if ( !itemList
    || (v13 = (int)Item,
        Item = (Il2CppObject *)System_Math__Min_77153596(
                                 this->fields.loadRangeFromCenter + v9,
                                 itemList->fields._size - 1,
                                 0),
        (v14 = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0) )
  {
LABEL_20:
    sub_2213CDC(Item, v11);
  }
  v15 = (int)Item;
  v16 = 0;
  while ( v16 < v14->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v14,
             v16,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( Item )
    {
      Item = (Il2CppObject *)Item[7].klass;
      if ( Item )
      {
        naturalAligment = GalleryFullScreenListViewObject_TypeInfo->_2.naturalAligment;
        if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (GalleryFullScreenListViewObject_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == GalleryFullScreenListViewObject_TypeInfo )
        {
          if ( v13 > v16 || v16 > v15 )
          {
            LOBYTE(Item[7].klass) = 0;
          }
          else if ( !isCenterNoTarget || v9 != v16 )
          {
            GalleryFullScreenListViewObject__Init((GalleryFullScreenListViewObject_o *)Item, 2, 0, 0, v17);
          }
        }
      }
      v14 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v16;
      if ( v14 )
        continue;
    }
    goto LABEL_20;
  }
}


// local variable allocation has failed, the output may be wrong!
bool GalleryFullScreenListViewManager__IsNonDisp(
        GalleryFullScreenListViewManager_o *this,
        bool isLoadFromThumbnail,
        const MethodInfo *method)
{
  UnityEngine_Object_o *galleryFullScreenPanel; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct GalleryFullScreenPanel_o *v8; // x8

  if ( (byte_596B545 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B545 = 1;
  }
  galleryFullScreenPanel = (UnityEngine_Object_o *)this->fields.galleryFullScreenPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isLoadFromThumbnail, method);
  v6 = UnityEngine_Object__op_Equality(galleryFullScreenPanel, 0, 0);
  if ( v6 )
    return !isLoadFromThumbnail;
  v8 = this->fields.galleryFullScreenPanel;
  if ( !v8 )
    sub_2213CDC(v6, v7);
  return !v8->fields.currentDispType && !isLoadFromThumbnail;
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  bool v18; // w24
  System_Action_o **v19; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  const MethodInfo *v26; // x2
  System_Collections_Generic_HashSet_object__o *v27; // x22
  const MethodInfo *v28; // x2
  System_Collections_ICollection_o *v29; // x23
  __int64 v30; // x1
  System_String_o *AssetPath; // x23
  __int64 v32; // x1
  __int64 v33; // x2
  _BOOL8 isExistAssetStorage; // x0
  __int64 v35; // x1
  System_Collections_Generic_List_object__o *v36; // x22
  System_Collections_Generic_List_object__o *v37; // x23
  _BOOL8 v38; // x0
  __int64 v39; // x1
  Il2CppObject *current; // x24
  _BOOL8 v41; // x0
  __int64 v42; // x1
  Il2CppObject *v43; // x25
  _BOOL8 v44; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  Il2CppObject *monitor; // x1
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x0
  const MethodInfo *v56; // x2
  System_Object_array *v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  System_String_array *v64; // x19
  System_Action_o *v65; // x21
  __int64 v66; // x1
  __int64 v67; // x2
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+20h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_596B541 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_string___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GalleryResourceEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GalleryResourceEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GalleryResourceEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_string__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_GalleryResourceEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&Method_GalleryFullScreenListViewManager___c__DisplayClass19_0__LoadAssetCache_b__0__);
    sub_2213A60(&GalleryFullScreenListViewManager___c__DisplayClass19_0_TypeInfo);
    byte_596B541 = 1;
  }
  memset(&v71, 0, sizeof(v71));
  memset(&v70, 0, sizeof(v70));
  memset(&v69, 0, sizeof(v69));
  v9 = sub_2213CCC(GalleryFullScreenListViewManager___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_53;
  v18 = isLoadFromThumbnail;
  *(_QWORD *)(v9 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 40) = endCallback;
  v19 = (System_Action_o **)(v9 + 40);
  *(_BYTE *)(v9 + 32) = v18;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 40), (int32_t)endCallback, v20, v21, v22, v23, v24, v25);
  if ( GalleryFullScreenListViewManager__IsNonDisp(this, *(_BYTE *)(v9 + 32), v26) )
    goto LABEL_8;
  if ( loadRange < 0 )
    loadRange = this->fields.loadRangeFromCenter;
  v27 = (System_Collections_Generic_HashSet_object__o *)sub_2213CCC(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v27,
    (const MethodInfo_42BA2CC *)Method_System_Collections_Generic_HashSet_string___ctor__);
  v29 = (System_Collections_ICollection_o *)GalleryFullScreenListViewManager__GetInRangeGalleryResourceList(
                                              this,
                                              loadRange,
                                              v28);
  IsNullOrEmpty = (System_Collections_Generic_List_object__o *)BasicHelper__IsNullOrEmpty(v29, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
LABEL_8:
    ActionExtensions__Call(*v19, 0);
    return;
  }
  if ( !v29 )
    goto LABEL_53;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v68,
    (System_Collections_Generic_List_object__o *)v29,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GalleryResourceEntity__GetEnumerator__);
  v71 = v68;
  v68.fields._list = 0;
  *(_QWORD *)&v68.fields._index = &v71;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v71,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GalleryResourceEntity__MoveNext__) )
  {
    if ( !v71.fields._current )
      sub_2213CDC(0, v30);
    AssetPath = GalleryResourceEntity__GetAssetPath((GalleryResourceEntity_o *)v71.fields._current, 0);
    if ( !System_String__IsNullOrEmpty(AssetPath, 0) )
    {
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v32, v33);
      isExistAssetStorage = AssetManager__isExistAssetStorage(AssetPath, 0);
      if ( isExistAssetStorage )
      {
        if ( !v27 )
          sub_2213CDC(isExistAssetStorage, v35);
        System_Collections_Generic_HashSet_object___Add(
          v27,
          (Il2CppObject *)AssetPath,
          (const MethodInfo_42BB4C0 *)Method_System_Collections_Generic_HashSet_string__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v71,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GalleryResourceEntity__Dispose__);
  v36 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)v27,
                                                       (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_string___);
  v37 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  IsNullOrEmpty = (System_Collections_Generic_List_object__o *)this->fields.nowLoadingAssetNameList;
  if ( !IsNullOrEmpty )
    goto LABEL_53;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v68,
    IsNullOrEmpty,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v70 = v68;
  v68.fields._list = 0;
  *(_QWORD *)&v68.fields._index = &v70;
  while ( 1 )
  {
    v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v70,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v38 )
      break;
    if ( !v36 )
      sub_2213CDC(v38, v39);
    current = v70.fields._current;
    if ( System_Collections_Generic_List_object___Contains(
           v36,
           v70.fields._current,
           (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      System_Collections_Generic_List_object___Remove(
        v36,
        current,
        (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_string__Remove__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v70,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  IsNullOrEmpty = (System_Collections_Generic_List_object__o *)this->fields.cacheAssetDataList;
  if ( !IsNullOrEmpty )
    goto LABEL_53;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v68,
    IsNullOrEmpty,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
  v69 = v68;
  v68.fields._list = 0;
  *(_QWORD *)&v68.fields._index = &v69;
  while ( 1 )
  {
    v41 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v69,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    if ( !v41 )
      break;
    v43 = v69.fields._current;
    if ( v69.fields._current )
    {
      if ( !v36 )
        sub_2213CDC(v41, v42);
      v44 = System_Collections_Generic_List_object___Contains(
              v36,
              (Il2CppObject *)v69.fields._current[1].monitor,
              (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_string__Contains__);
      monitor = (Il2CppObject *)v43[1].monitor;
      if ( v44 )
      {
        System_Collections_Generic_List_object___Remove(
          v36,
          monitor,
          (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_string__Remove__);
      }
      else
      {
        if ( !v37
          || (items = v37->fields._items,
              v53 = Method_System_Collections_Generic_List_string__Add__,
              ++v37->fields._version,
              !items) )
        {
          sub_2213CDC(v44, monitor);
        }
        size = v37->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v37,
            monitor,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
        }
        else
        {
          v55 = &items->obj.klass + size;
          v37->fields._size = size + 1;
          v55[4] = (Il2CppClass *)monitor;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v55 + 4), (int32_t)monitor, v45, v46, v47, v48, v49, v50);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v69,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
  if ( !v37 )
    goto LABEL_53;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v68,
    v37,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v70 = v68;
  v68.fields._list = 0;
  *(_QWORD *)&v68.fields._index = &v70;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v70,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    GalleryFullScreenListViewManager__ReleaseResourceCache_39861056(this, (System_String_o *)v70.fields._current, v56);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v70,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  IsNullOrEmpty = (System_Collections_Generic_List_object__o *)this->fields.nowLoadingAssetNameList;
  if ( !IsNullOrEmpty
    || (System_Collections_Generic_List_object___AddRange(
          IsNullOrEmpty,
          (System_Collections_Generic_IEnumerable_T__o *)v36,
          (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_string__AddRange__),
        !v36) )
  {
LABEL_53:
    sub_2213CDC(IsNullOrEmpty, v11);
  }
  v57 = System_Collections_Generic_List_object___ToArray(
          v36,
          (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
  *(_QWORD *)(v9 + 24) = v57;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)v57, v58, v59, v60, v61, v62, v63);
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v9 + 24), 0) )
  {
    ActionExtensions__Call(*v19, 0);
  }
  else
  {
    v64 = *(System_String_array **)(v9 + 24);
    v65 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v65,
      (Il2CppObject *)v9,
      Method_GalleryFullScreenListViewManager___c__DisplayClass19_0__LoadAssetCache_b__0__,
      0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v66, v67);
    AssetManager__loadAssetStorage_47503780(v64, v65, 5, 0);
  }
}


void GalleryFullScreenListViewManager__LoadEnd(
        GalleryFullScreenListViewManager_o *this,
        System_String_array *assetLoadNames,
        bool isLoadFromThumbnail,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *nowLoadingAssetNameList; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *v10; // x22
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *AssetStorage_47505140; // x0
  Il2CppObject *current; // x23
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  __int64 v26; // x1
  struct System_Collections_Generic_List_string__o *v27; // x0
  struct System_Collections_Generic_List_AssetData__o *cacheAssetDataList; // x22
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x1
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596B542 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_string___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_AssetData__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    byte_596B542 = 1;
  }
  nowLoadingAssetNameList = (System_Collections_ICollection_o *)this->fields.nowLoadingAssetNameList;
  memset(&v32, 0, sizeof(v32));
  if ( !BasicHelper__IsNullOrEmpty(nowLoadingAssetNameList, 0) )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
    AssetStorage_47505140 = (System_Collections_Generic_List_object__o *)this->fields.nowLoadingAssetNameList;
    if ( !AssetStorage_47505140 )
      goto LABEL_27;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v31,
      AssetStorage_47505140,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v32 = v31;
    v31.fields._list = 0;
    *(_QWORD *)&v31.fields._index = &v32;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v32.fields._current;
      v14 = System_Linq_Enumerable__Contains_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)assetLoadNames,
              v32.fields._current,
              (const MethodInfo_3876940 *)Method_System_Linq_Enumerable_Contains_string___);
      if ( v14 )
      {
        if ( !v10
          || (items = v10->fields._items,
              v23 = Method_System_Collections_Generic_List_string__Add__,
              ++v10->fields._version,
              !items) )
        {
          sub_2213CDC(v14, v15);
        }
        size = v10->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            current,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v25[4] = (Il2CppClass *)current;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 4), (int32_t)current, v16, v17, v18, v19, v20, v21);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    if ( !v10 )
      goto LABEL_27;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v31,
      v10,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v32 = v31;
    v31.fields._list = 0;
    *(_QWORD *)&v31.fields._index = &v32;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      v27 = this->fields.nowLoadingAssetNameList;
      if ( !v27 )
        sub_2213CDC(0, v26);
      System_Collections_Generic_List_object___Remove(
        (System_Collections_Generic_List_object__o *)v27,
        v32.fields._current,
        (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_string__Remove__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  }
  cacheAssetDataList = this->fields.cacheAssetDataList;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v8, v9);
  AssetStorage_47505140 = (System_Collections_Generic_List_object__o *)AssetManager__getAssetStorage_47505140(
                                                                         assetLoadNames,
                                                                         0);
  if ( !cacheAssetDataList )
LABEL_27:
    sub_2213CDC(AssetStorage_47505140, v11);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)cacheAssetDataList,
    (System_Collections_Generic_IEnumerable_T__o *)AssetStorage_47505140,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_AssetData__AddRange__);
  if ( GalleryFullScreenListViewManager__IsNonDisp(this, isLoadFromThumbnail, v29) )
  {
    *(_QWORD *)&this->fields.currentCenterIndex = -1;
    GalleryFullScreenListViewManager__ReleaseResourceCache(this, v30);
  }
}


void GalleryFullScreenListViewManager__OnClickBack(GalleryFullScreenListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  struct ListViewIndicator_o *indicator; // x8
  __int64 naturalAligment; // x11
  unsigned int klass; // w8

  if ( (byte_596B548 & 1) == 0 )
  {
    sub_2213A60(&GalleryFullScreenListViewIndicator_TypeInfo);
    byte_596B548 = 1;
  }
  indicator = this->fields.indicator;
  if ( indicator )
  {
    naturalAligment = GalleryFullScreenListViewIndicator_TypeInfo->_2.naturalAligment;
    if ( indicator->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (GalleryFullScreenListViewIndicator_c *)indicator->klass->_2.typeHierarchy[naturalAligment - 1] == GalleryFullScreenListViewIndicator_TypeInfo )
    {
      klass = (unsigned int)indicator[3].klass;
      if ( klass <= 3 )
        GalleryFullScreenListViewManager__SetEnableScroll(this, (9u >> (klass & 0xF)) & 1, 0, 0, v2);
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
  const MethodInfo *v2; // x2
  GalleryFullScreenPanel_o *galleryFullScreenPanel; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct ListViewItem_o *centerItem; // x21
  UnityEngine_Object_o *viewObject; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  GalleryFullScreenListViewObject_o *v11; // x19
  __int64 naturalAligment; // x10
  UnityEngine_GameObject_o *dragObject; // x20
  const MethodInfo *v14; // x1
  UnityEngine_Vector3_o DispObjScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596B54A & 1) == 0 )
  {
    sub_2213A60(&GalleryFullScreenListViewObject_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B54A = 1;
  }
  galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
  if ( !galleryFullScreenPanel )
    sub_2213CDC(0, method);
  GalleryFullScreenPanel__SetDispType(galleryFullScreenPanel, 2, v2);
  centerItem = this->fields.centerItem;
  if ( centerItem )
  {
    viewObject = (UnityEngine_Object_o *)centerItem->fields.viewObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
    {
      v11 = (GalleryFullScreenListViewObject_o *)centerItem->fields.viewObject;
      if ( v11 )
      {
        naturalAligment = GalleryFullScreenListViewObject_TypeInfo->_2.naturalAligment;
        if ( v11->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (GalleryFullScreenListViewObject_c *)v11->klass->_2.typeHierarchy[naturalAligment - 1] == GalleryFullScreenListViewObject_TypeInfo )
        {
          dragObject = v11->fields.dragObject;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)dragObject, 0, 0) )
          {
            DispObjScale = GalleryFullScreenListViewObject__GetDispObjScale(v11, v14);
            GameObjectExtensions__SetLocalScale(dragObject, DispObjScale, 0);
            v16.fields.x = sub_24B9B38(0);
            GameObjectExtensions__SetLocalPosition(dragObject, v16, 0);
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

  if ( (byte_596B54B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_GalleryFullScreenListViewManager__OnDragUpdate_b__31_0__);
    sub_2213A60(&Method_GalleryFullScreenListViewManager__OnDragUpdate_b__31_1__);
    byte_596B54B = 1;
  }
  galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
  if ( !galleryFullScreenPanel )
    goto LABEL_8;
  if ( GalleryFullScreenPanel__IsAbleToPinch(galleryFullScreenPanel, method) )
  {
    galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
    if ( galleryFullScreenPanel )
    {
      IsAbleToPinch = GalleryFullScreenPanel__IsAbleToPinch(galleryFullScreenPanel, method);
      v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v5, (Il2CppObject *)this, Method_GalleryFullScreenListViewManager__OnDragUpdate_b__31_0__, 0);
      v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v6, (Il2CppObject *)this, Method_GalleryFullScreenListViewManager__OnDragUpdate_b__31_1__, 0);
      GalleryFullScreenDragProcess__OnDragUpdate(IsAbleToPinch, v5, v6, v7);
      return;
    }
LABEL_8:
    sub_2213CDC(galleryFullScreenPanel, method);
  }
}


void GalleryFullScreenListViewManager__OnModifyViewerCenter(
        GalleryFullScreenListViewManager_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *centerItem; // x23
  int32_t currentCenterIndex; // w1
  ListViewItem_o *Item; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  ListViewItem_o *v8; // x20
  UnityEngine_Object_o *viewObject; // x21
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x3
  GalleryFullScreenListViewObject_o *v12; // x21
  __int64 naturalAligment; // x10
  GalleryFullScreenListViewItemDraw_o *itemDraw; // x0
  const MethodInfo *v15; // x1
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_IEnumerable_T__o *v20; // x20
  GalleryFullScreenListViewManager___c_c *v21; // x8
  struct GalleryFullScreenListViewManager___c_StaticFields *static_fields; // x9
  System_Action_object__o *_9__25_0; // x21
  Il2CppObject *v24; // x22
  struct GalleryFullScreenListViewManager___c_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  UnityEngine_Object_o *v32; // x20
  const MethodInfo *v33; // x2
  GalleryFullScreenListViewObject_o *v34; // x20
  __int64 v35; // x10
  const MethodInfo *v36; // x2
  struct GalleryFullScreenPanel_o *galleryFullScreenPanel; // x8
  System_Action_T__o *changeListItemAction; // x21
  struct CRIMoviePlayer_o *moviePlayer; // x8
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x4
  Il2CppObject *Instance; // x21
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x4
  float debugWaitLoadTime; // w24
  int32_t oldCenterIndex; // w9
  int32_t index; // w8
  System_Action_bool__o *v51; // x21
  Il2CppObject *v52; // x23
  System_Action_o *v53; // x22
  const MethodInfo *v54; // x3
  const MethodInfo *v55; // x4

  if ( (byte_596B546 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_int___);
    sub_2213A60(&System_Action_bool__TypeInfo);
    sub_2213A60(&System_Action_GalleryFullScreenListViewItem__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_GalleryFullScreenListViewItem___);
    sub_2213A60(&Method_System_Linq_Enumerable_Cast_GalleryFullScreenListViewItem___);
    sub_2213A60(&Method_GalleryFullScreenListViewManager__OnModifyViewerCenter_b__25_1__);
    sub_2213A60(&GalleryFullScreenListViewObject_TypeInfo);
    sub_2213A60(&Method_GalleryFullScreenPanel_Close__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_2213A60(&Method_GalleryFullScreenListViewManager___c__OnModifyViewerCenter_b__25_0__);
    sub_2213A60(&GalleryFullScreenListViewManager___c_TypeInfo);
    byte_596B546 = 1;
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
        v8 = Item;
        viewObject = (UnityEngine_Object_o *)Item->fields.viewObject;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
        if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
        {
          v12 = (GalleryFullScreenListViewObject_o *)v8->fields.viewObject;
          if ( v12 )
          {
            naturalAligment = GalleryFullScreenListViewObject_TypeInfo->_2.naturalAligment;
            if ( v12->klass->_2.naturalAligment >= (unsigned int)naturalAligment
              && (GalleryFullScreenListViewObject_c *)v12->klass->_2.typeHierarchy[naturalAligment - 1] == GalleryFullScreenListViewObject_TypeInfo )
            {
              itemDraw = v12->fields.itemDraw;
              if ( !itemDraw )
                goto LABEL_54;
              GalleryFullScreenListViewItemDraw__SetMovieCallBack(itemDraw, 0, 0, v11);
              GalleryFullScreenListViewObject__DeleteDragObject(v12, v15);
              itemDraw = v12->fields.itemDraw;
              this->fields.oldCenterIndex = v8->fields.index;
              if ( !itemDraw )
                goto LABEL_54;
              GalleryFullScreenListViewItemDraw__StopMovie(itemDraw, v10);
            }
          }
        }
      }
      if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.itemList, 0) )
      {
        v20 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Cast_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.itemList,
                                                               (const MethodInfo_3868AB0 *)Method_System_Linq_Enumerable_Cast_GalleryFullScreenListViewItem___);
        v21 = GalleryFullScreenListViewManager___c_TypeInfo;
        if ( !*(&GalleryFullScreenListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(GalleryFullScreenListViewManager___c_TypeInfo, v18, v19);
          v21 = GalleryFullScreenListViewManager___c_TypeInfo;
        }
        static_fields = v21->static_fields;
        _9__25_0 = (System_Action_object__o *)static_fields->__9__25_0;
        if ( !_9__25_0 )
        {
          if ( !*(&v21->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v21, v18, v19);
            static_fields = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
          }
          v24 = (Il2CppObject *)static_fields->__9;
          _9__25_0 = (System_Action_object__o *)sub_2213CCC(System_Action_GalleryFullScreenListViewItem__TypeInfo);
          System_Action_object____ctor(
            _9__25_0,
            v24,
            Method_GalleryFullScreenListViewManager___c__OnModifyViewerCenter_b__25_0__,
            0);
          v25 = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
          v25->__9__25_0 = (struct System_Action_GalleryFullScreenListViewItem__o *)_9__25_0;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v25->__9__25_0,
            (int32_t)_9__25_0,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31);
        }
        BasicHelper__ForEach_object_(
          v20,
          (System_Action_T__o *)_9__25_0,
          (const MethodInfo_381282C *)Method_BasicHelper_ForEach_GalleryFullScreenListViewItem___);
      }
      v32 = (UnityEngine_Object_o *)centerItem->fields.viewObject;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
      if ( !UnityEngine_Object__op_Inequality(v32, 0, 0) )
        goto LABEL_52;
      v34 = (GalleryFullScreenListViewObject_o *)centerItem->fields.viewObject;
      if ( !v34 )
        goto LABEL_52;
      v35 = GalleryFullScreenListViewObject_TypeInfo->_2.naturalAligment;
      if ( v34->klass->_2.naturalAligment < (unsigned int)v35
        || (GalleryFullScreenListViewObject_c *)v34->klass->_2.typeHierarchy[v35 - 1] != GalleryFullScreenListViewObject_TypeInfo )
      {
        goto LABEL_52;
      }
      itemDraw = (GalleryFullScreenListViewItemDraw_o *)GalleryFullScreenListViewObject__GetItem(
                                                          (GalleryFullScreenListViewObject_o *)centerItem->fields.viewObject,
                                                          v10);
      if ( !itemDraw )
        goto LABEL_54;
      galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
      LOBYTE(itemDraw->fields.data) = 1;
      if ( !galleryFullScreenPanel )
        goto LABEL_54;
      if ( galleryFullScreenPanel->fields.currentDispType )
      {
        changeListItemAction = (System_Action_T__o *)this->fields.changeListItemAction;
        itemDraw = (GalleryFullScreenListViewItemDraw_o *)GalleryFullScreenListViewObject__GetItem(v34, v10);
        if ( !itemDraw )
          goto LABEL_54;
        moviePlayer = itemDraw->fields.moviePlayer;
        if ( !moviePlayer )
          goto LABEL_54;
        ActionExtensions__Call_int_(
          changeListItemAction,
          moviePlayer->fields.m_CachedPtr,
          (const MethodInfo_36FFDDC *)Method_ActionExtensions_Call_int___);
      }
      if ( GalleryFullScreenListViewManager__IsNonDisp(this, 0, v36) )
        GalleryFullScreenListViewObject__Init(v34, 2, 0, 0, v41);
      else
        GalleryFullScreenListViewManager__InitObjInLoadRange(this, 0, v40);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      itemDraw = (GalleryFullScreenListViewItemDraw_o *)GalleryFullScreenListViewObject__GetItem(v34, v43);
      if ( !itemDraw
        || (itemDraw = (GalleryFullScreenListViewItemDraw_o *)itemDraw->fields.moviePlayer) == 0
        || (itemDraw = (GalleryFullScreenListViewItemDraw_o *)GalleryResourceEntity__GetAssetPath(
                                                                (GalleryResourceEntity_o *)itemDraw,
                                                                0),
            !Instance)
        || (AssetManager__InterruptDownloadAssetStorage((AssetManager_o *)Instance, (System_String_o *)itemDraw, 0),
            GalleryFullScreenListViewObject__DeleteDragObject(v34, v44),
            (itemDraw = (GalleryFullScreenListViewItemDraw_o *)GalleryFullScreenListViewObject__GetItem(v34, v45)) == 0) )
      {
LABEL_54:
        sub_2213CDC(itemDraw, v10);
      }
      debugWaitLoadTime = itemDraw->fields.debugWaitLoadTime;
      if ( LODWORD(debugWaitLoadTime) == 2 )
        GalleryFullScreenListViewManager__CreateViewerObj(this, v34, v46);
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
          GalleryFullScreenListViewManager__SetEnableScroll(
            this,
            this->fields.isInput,
            0,
            LODWORD(debugWaitLoadTime) != 2,
            v47);
LABEL_52:
          itemDraw = (GalleryFullScreenListViewItemDraw_o *)this->fields.galleryFullScreenPanel;
          if ( itemDraw )
          {
            GalleryFullScreenPanel__SetDispType((GalleryFullScreenPanel_o *)itemDraw, 2, v33);
            GalleryFullScreenListViewManager__LoadAssetCache(this, this->fields.loadRangeFromCenter, 0, 0, v55);
            return;
          }
          goto LABEL_54;
        }
      }
      v51 = (System_Action_bool__o *)sub_2213CCC(System_Action_bool__TypeInfo);
      System_Action_bool____ctor(
        v51,
        (Il2CppObject *)this,
        Method_GalleryFullScreenListViewManager__OnModifyViewerCenter_b__25_1__,
        0);
      v52 = (Il2CppObject *)this->fields.galleryFullScreenPanel;
      v53 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v53, v52, (intptr_t)Method_GalleryFullScreenPanel_Close__, 0);
      itemDraw = v34->fields.itemDraw;
      if ( !itemDraw )
        goto LABEL_54;
      GalleryFullScreenListViewItemDraw__StartPlayMovieCoroutine(itemDraw, v51, v53, v54);
      goto LABEL_51;
    }
  }
}


void GalleryFullScreenListViewManager__ReleaseResourceCache(
        GalleryFullScreenListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *cacheAssetDataList; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_List_AssetData__o *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *v8; // x20
  struct System_Collections_Generic_List_AssetData__o *v9; // x8
  int32_t size; // w2
  int v11; // w9
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596B543 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_AssetData__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    byte_596B543 = 1;
  }
  cacheAssetDataList = (System_Collections_ICollection_o *)this->fields.cacheAssetDataList;
  memset(&v12, 0, sizeof(v12));
  if ( !BasicHelper__IsNullOrEmpty(cacheAssetDataList, 0) )
  {
    v5 = this->fields.cacheAssetDataList;
    if ( !v5 )
      goto LABEL_15;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      (System_Collections_Generic_List_object__o *)v5,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
    {
      if ( v12.fields._current )
      {
        v8 = *(System_String_o **)((char *)&v12.fields._current->klass + (unsigned __int64)off_18);
        if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v6, v7);
        AssetManager__releaseAssetStorage(v8, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    v9 = this->fields.cacheAssetDataList;
    if ( !v9 )
LABEL_15:
      sub_2213CDC(v5, v4);
    size = v9->fields._size;
    v11 = v9->fields._version + 1;
    v9->fields._size = 0;
    v9->fields._version = v11;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v9->fields._items, 0, size, 0);
  }
}


void GalleryFullScreenListViewManager__ReleaseResourceCache_39861056(
        GalleryFullScreenListViewManager_o *this,
        System_String_o *targetName,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *cacheAssetDataList; // x0
  System_Collections_Generic_List_object__o *v6; // x20
  __int64 v7; // x1
  struct System_Collections_Generic_List_AssetData__o *v8; // x0
  Il2CppObject *current; // x22
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *monitor; // x23
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  __int64 v25; // x1
  struct System_Collections_Generic_List_AssetData__o *v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596B544 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_AssetData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_AssetData__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_AssetData__TypeInfo);
    byte_596B544 = 1;
  }
  cacheAssetDataList = (System_Collections_ICollection_o *)this->fields.cacheAssetDataList;
  memset(&v28, 0, sizeof(v28));
  if ( !BasicHelper__IsNullOrEmpty(cacheAssetDataList, 0) )
  {
    v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_AssetData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v6,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_AssetData___ctor__);
    v8 = this->fields.cacheAssetDataList;
    if ( !v8 )
      goto LABEL_25;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v27,
      (System_Collections_Generic_List_object__o *)v8,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    v28 = v27;
    v27.fields._list = 0;
    *(_QWORD *)&v27.fields._index = &v28;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v28,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
    {
      current = v28.fields._current;
      if ( v28.fields._current
        && System_String__op_Equality((System_String_o *)v28.fields._current[1].monitor, targetName, 0) )
      {
        monitor = (System_String_o *)current[1].monitor;
        if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v10, v11);
        AssetManager__releaseAssetStorage(monitor, 0);
        if ( !v6
          || (items = v6->fields._items,
              v22 = Method_System_Collections_Generic_List_AssetData__Add__,
              ++v6->fields._version,
              !items) )
        {
          sub_2213CDC(v13, v14);
        }
        size = v6->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            current,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v6->fields._size = size + 1;
          v24[4] = (Il2CppClass *)current;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)current, v15, v16, v17, v18, v19, v20);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v28,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    if ( !v6 )
LABEL_25:
      sub_2213CDC(v8, v7);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v27,
      v6,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    v28 = v27;
    v27.fields._list = 0;
    *(_QWORD *)&v27.fields._index = &v28;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v28,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
    {
      v26 = this->fields.cacheAssetDataList;
      if ( !v26 )
        sub_2213CDC(0, v25);
      System_Collections_Generic_List_object___Remove(
        (System_Collections_Generic_List_object__o *)v26,
        v28.fields._current,
        (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_AssetData__Remove__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v28,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
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
  GalleryFullScreenListViewManager_o *v8; // x21
  struct GalleryFullScreenPanel_o *galleryFullScreenPanel; // x8
  int32_t currentDispType; // w24
  GalleryFullScreenListViewIndicator_o *indicator; // x23
  bool v12; // w25
  __int64 naturalAligment; // x10
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2
  UnityEngine_Transform_o *v16; // x0
  const MethodInfo *v17; // x2
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v19; // x2
  UIScrollView_o *scrollView; // x21
  bool v21; // w1
  int32_t index[2]; // [xsp+8h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_596B54C & 1) == 0 )
  {
    sub_2213A60(&GalleryFullScreenListViewIndicator_TypeInfo);
    this = (GalleryFullScreenListViewManager_o *)sub_2213A60(&StringLiteral_9303/*"MaskRoot/BackMask"*/);
    byte_596B54C = 1;
  }
  galleryFullScreenPanel = v8->fields.galleryFullScreenPanel;
  *(_QWORD *)index = 0;
  if ( !galleryFullScreenPanel )
    goto LABEL_24;
  currentDispType = galleryFullScreenPanel->fields.currentDispType;
  indicator = (GalleryFullScreenListViewIndicator_o *)v8->fields.indicator;
  v12 = currentDispType != 1;
  if ( !indicator )
    goto LABEL_17;
  naturalAligment = GalleryFullScreenListViewIndicator_TypeInfo->_2.naturalAligment;
  if ( indicator->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (GalleryFullScreenListViewIndicator_c *)indicator->klass->_2.typeHierarchy[naturalAligment - 1] != GalleryFullScreenListViewIndicator_TypeInfo )
  {
    goto LABEL_17;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v8->fields.itemList, 0) )
    return;
  GalleryFullScreenListViewManager__GetDiffResourcePageInfo(v8, &index[1], index, v14);
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
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8, 0);
      AndroidBackKeyManager__RemoveBackBtn_51985588(transform, (System_String_o *)StringLiteral_9303/*"MaskRoot/BackMask"*/, 0);
      goto LABEL_16;
    }
    this = (GalleryFullScreenListViewManager_o *)v8->fields.galleryFullScreenPanel;
    if ( !this )
      goto LABEL_24;
    if ( !GalleryFullScreenPanel__IsAbleToPinch((GalleryFullScreenPanel_o *)this, (const MethodInfo *)isEnable) )
      goto LABEL_16;
    indicator->fields.status = 3;
  }
  v16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(v16, (System_String_o *)StringLiteral_9303/*"MaskRoot/BackMask"*/, 0);
LABEL_16:
  GalleryFullScreenListViewIndicator__SetPageMax(indicator, index[1], v17);
  GalleryFullScreenListViewIndicator__SetPageIndex(indicator, index[0], v19);
  v12 = currentDispType != 1 && ((unsigned int)(indicator->fields.status - 1) < 2 || isDisableUi);
LABEL_17:
  scrollView = v8->fields.scrollView;
  if ( isEnable || isActiveScrollView )
  {
    if ( scrollView )
    {
      v21 = 1;
      goto LABEL_23;
    }
LABEL_24:
    sub_2213CDC(this, isEnable);
  }
  if ( !scrollView )
    goto LABEL_24;
  v21 = v12 & UIScrollView__get_isDragging(scrollView, 0);
LABEL_23:
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scrollView, v21, 0);
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
  UnityEngine_Object_o *v4; // x20
  __int64 naturalAligment; // x11
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4
  int32_t initMode; // w8
  int32_t v11; // w1

  v4 = (UnityEngine_Object_o *)obj;
  if ( (byte_596B53F & 1) == 0 )
  {
    sub_2213A60(&GalleryFullScreenListViewObject_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B53F = 1;
  }
  if ( v4 )
  {
    naturalAligment = GalleryFullScreenListViewObject_TypeInfo->_2.naturalAligment;
    if ( v4->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (GalleryFullScreenListViewObject_c *)v4->klass->_2.typeHierarchy[naturalAligment - 1] != GalleryFullScreenListViewObject_TypeInfo )
        v4 = 0;
    }
    else
    {
      v4 = 0;
    }
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj, item);
  v7 = UnityEngine_Object__op_Equality(v4, 0, 0);
  if ( !v7 )
  {
    initMode = this->fields.initMode;
    if ( initMode )
    {
      if ( initMode == 2 )
      {
        if ( v4 )
        {
          v11 = 3;
LABEL_18:
          GalleryFullScreenListViewObject__Init((GalleryFullScreenListViewObject_o *)v4, v11, 0, 0, v9);
          return;
        }
      }
      else if ( v4 )
      {
        v11 = 2;
        goto LABEL_18;
      }
      sub_2213CDC(v7, v8);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_596B54E & 1) == 0 )
  {
    sub_2213A60(&GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36_TypeInfo);
    byte_596B54E = 1;
  }
  v7 = sub_2213CCC(GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 32) = selectGalleryId;
  *(_QWORD *)(v7 + 48) = endCallBack;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)endCallBack, v14, v15, v16, v17, v18, v19);
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
  const MethodInfo *v2; // x2
  struct GalleryFullScreenPanel_o *galleryFullScreenPanel; // x0
  const MethodInfo *v5; // x4

  galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
  if ( !galleryFullScreenPanel )
    sub_2213CDC(0, method);
  if ( galleryFullScreenPanel->fields.currentDispType == 1 )
  {
    GalleryFullScreenPanel__SetDispType(galleryFullScreenPanel, 2, v2);
    GalleryFullScreenListViewManager__SetEnableScroll(this, 0, 0, 0, v5);
  }
}


void GalleryFullScreenListViewManager___OnDragUpdate_b__31_1(
        GalleryFullScreenListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct GalleryFullScreenPanel_o *galleryFullScreenPanel; // x0
  const MethodInfo *v5; // x4

  galleryFullScreenPanel = this->fields.galleryFullScreenPanel;
  if ( !galleryFullScreenPanel )
    sub_2213CDC(0, method);
  if ( galleryFullScreenPanel->fields.currentDispType == 2 )
  {
    GalleryFullScreenPanel__SetDispType(galleryFullScreenPanel, 1, v2);
    GalleryFullScreenListViewManager__SetEnableScroll(this, 0, 0, 0, v5);
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
    sub_2213CDC(scrollView, method);
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
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x21
  GalleryFullScreenListViewManager___c_c *v15; // x8
  struct GalleryFullScreenListViewManager___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__36_1; // x22
  Il2CppObject *v18; // x23
  struct GalleryFullScreenListViewManager___c_StaticFields *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  Il2CppClass *klass; // x1
  GalleryFullScreenListViewObject_c *v34; // x8
  __int64 naturalAligment; // x9
  MissionNaviTransitionBoardItem_o *v36; // x0
  System_Func_bool__o *v37; // x21
  UnityEngine_WaitWhile_o *v38; // x20
  Il2CppObject **p__2__current; // x19
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7

  if ( (byte_596B553 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Cast_GalleryFullScreenListViewItem___);
    sub_2213A60(&Method_System_Linq_Enumerable_First_GalleryFullScreenListViewItem___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_GalleryFullScreenListViewItem__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_GalleryFullScreenListViewItem___);
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&System_Func_GalleryFullScreenListViewItem__bool__TypeInfo);
    sub_2213A60(&System_Func_GalleryFullScreenListViewItem__int__TypeInfo);
    sub_2213A60(&GalleryFullScreenListViewObject_TypeInfo);
    sub_2213A60(&Method_GalleryFullScreenListViewManager___c__WaitSetDataSelectGallery_b__36_1__);
    sub_2213A60(&Method_GalleryFullScreenListViewManager___c__DisplayClass36_0__WaitSetDataSelectGallery_b__0__);
    sub_2213A60(&Method_GalleryFullScreenListViewManager___c__DisplayClass36_0__WaitSetDataSelectGallery_b__2__);
    sub_2213A60(&GalleryFullScreenListViewManager___c__DisplayClass36_0_TypeInfo);
    sub_2213A60(&GalleryFullScreenListViewManager___c_TypeInfo);
    sub_2213A60(&UnityEngine_WaitWhile_TypeInfo);
    byte_596B553 = 1;
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
  _4__this = this->fields.__4__this;
  this->fields.__1__state = -1;
  v5 = sub_2213CCC(GalleryFullScreenListViewManager___c__DisplayClass36_0_TypeInfo);
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
                                                               (const MethodInfo_3868AB0 *)Method_System_Linq_Enumerable_Cast_GalleryFullScreenListViewItem___);
  v11 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_GalleryFullScreenListViewItem__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_GalleryFullScreenListViewManager___c__DisplayClass36_0__WaitSetDataSelectGallery_b__0__,
    0);
  v14 = System_Linq_Enumerable__Where_object_(
          v10,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_GalleryFullScreenListViewItem___);
  v15 = GalleryFullScreenListViewManager___c_TypeInfo;
  if ( !*(&GalleryFullScreenListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GalleryFullScreenListViewManager___c_TypeInfo, v12, v13);
    v15 = GalleryFullScreenListViewManager___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__36_1 = (System_Func_object__int__o *)static_fields->__9__36_1;
  if ( !_9__36_1 )
  {
    if ( !*(&v15->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v15, v12, v13);
      static_fields = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__36_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_GalleryFullScreenListViewItem__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__36_1,
      v18,
      Method_GalleryFullScreenListViewManager___c__WaitSetDataSelectGallery_b__36_1__,
      0);
    v19 = GalleryFullScreenListViewManager___c_TypeInfo->static_fields;
    v19->__9__36_1 = (struct System_Func_GalleryFullScreenListViewItem__int__o *)_9__36_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v19->__9__36_1, (int32_t)_9__36_1, v20, v21, v22, v23, v24, v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v14,
                                                               (System_Func_TSource__TKey__o *)_9__36_1,
                                                               (const MethodInfo_3888BA0 *)Method_System_Linq_Enumerable_OrderBy_GalleryFullScreenListViewItem__int___);
  object = System_Linq_Enumerable__First_object_(
             v26,
             (const MethodInfo_387FC04 *)Method_System_Linq_Enumerable_First_GalleryFullScreenListViewItem___);
  if ( !object )
LABEL_27:
    sub_2213CDC(object, v7);
  klass = object[7].klass;
  if ( klass )
  {
    v34 = GalleryFullScreenListViewObject_TypeInfo;
    naturalAligment = GalleryFullScreenListViewObject_TypeInfo->_2.naturalAligment;
    if ( *((unsigned __int8 *)klass->_1.image + 304) >= (unsigned int)naturalAligment
      && *(GalleryFullScreenListViewObject_c **)(*((_QWORD *)klass->_1.image + 25) + 8 * naturalAligment - 8) == GalleryFullScreenListViewObject_TypeInfo )
    {
      *(_QWORD *)(v5 + 24) = klass;
      v36 = (MissionNaviTransitionBoardItem_o *)(v5 + 24);
      if ( *((unsigned __int8 *)klass->_1.image + 304) >= (unsigned int)naturalAligment
        && *(GalleryFullScreenListViewObject_c **)(*((_QWORD *)klass->_1.image + 25) + 8 * naturalAligment - 8) == v34 )
      {
        goto LABEL_26;
      }
    }
    sub_221405C(klass, v34, v27, v28);
  }
  *(_QWORD *)(v5 + 24) = 0;
  v36 = (MissionNaviTransitionBoardItem_o *)(v5 + 24);
LABEL_26:
  sub_2213A04(v36, (int32_t)klass, v27, v28, v29, v30, v31, v32);
  v37 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v37,
    (Il2CppObject *)v5,
    Method_GalleryFullScreenListViewManager___c__DisplayClass36_0__WaitSetDataSelectGallery_b__2__,
    0);
  v38 = (UnityEngine_WaitWhile_o *)sub_2213CCC(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v38, v37, 0);
  this->fields.__2__current = (Il2CppObject *)v38;
  p__2__current = &this->fields.__2__current;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v38, v40, v41, v42, v43, v44, v45);
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_GalleryFullScreenListViewManager__WaitSetDataSelectGallery_d__36_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596B552 & 1) == 0 )
  {
    sub_2213A60(&GalleryFullScreenListViewManager___c_TypeInfo);
    byte_596B552 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(GalleryFullScreenListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GalleryFullScreenListViewManager___c_TypeInfo->static_fields->__9 = (struct GalleryFullScreenListViewManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)GalleryFullScreenListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, 0);
  return x->fields.idx;
}


GalleryResourceEntity_o *GalleryFullScreenListViewManager___c___GetDiffResourcePageInfo_b__35_0(
        GalleryFullScreenListViewManager___c_o *this,
        GalleryFullScreenListViewItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields._GalleryResourceEntity_k__BackingField;
}


int32_t GalleryFullScreenListViewManager___c___GetDiffResourcePageInfo_b__35_2(
        GalleryFullScreenListViewManager___c_o *this,
        GalleryResourceEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.idx;
}


int32_t GalleryFullScreenListViewManager___c___GetInRangeGalleryResourceList_b__18_0(
        GalleryFullScreenListViewManager___c_o *this,
        GalleryFullScreenListViewItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.index;
}


GalleryResourceEntity_o *GalleryFullScreenListViewManager___c___GetInRangeGalleryResourceList_b__18_1(
        GalleryFullScreenListViewManager___c_o *this,
        GalleryFullScreenListViewItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields._GalleryResourceEntity_k__BackingField;
}


bool GalleryFullScreenListViewManager___c___GetInRangeGalleryResourceList_b__18_2(
        GalleryFullScreenListViewManager___c_o *this,
        GalleryResourceEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.galleryType == 2;
}


void GalleryFullScreenListViewManager___c___OnModifyViewerCenter_b__25_0(
        GalleryFullScreenListViewManager___c_o *this,
        GalleryFullScreenListViewItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  x->fields.isCenterItem = 0;
}


int32_t GalleryFullScreenListViewManager___c___WaitSetDataSelectGallery_b__36_1(
        GalleryFullScreenListViewManager___c_o *this,
        GalleryFullScreenListViewItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
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
    sub_2213CDC(0, method);
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, x);
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
    sub_2213CDC(this, method);
  return itemDraw->fields.setDataWait;
}