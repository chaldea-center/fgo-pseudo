void BlankEarthShortcutButtonListViewManager___ctor(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB2B06 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4CB2B06 = 1;
  }
  this->fields.spotMoveEasingType = 15;
  *(_QWORD *)&this->fields.spotMoveTime = 0x3D23D70A3FC00000LL;
  this->fields.moveDistanceMultipleValue = 0.18;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.spotEffectList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.spotEffectList, (int32_t)v3, v4, v5);
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void BlankEarthShortcutButtonListViewManager__CreateList(
        BlankEarthShortcutButtonListViewManager_o *this,
        BlankEarth_o *blankEarth,
        UIAtlas_o *commonUIAtlas,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2
  __int64 v9; // x1
  UnityEngine_Component_o *scrollBar; // x0
  Il2CppObject *Object_object__51495936; // x22
  Il2CppObject *Component_object; // x21
  BlankEarthSpotNavimenuEntity_array *EnableShortcutButtons; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x23
  int32_t v15; // w24
  __int64 v16; // x26
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  BlankEarthSpotNavimenuEntity_o *v19; // x27
  System_Collections_Generic_List_object__o *itemList; // x25
  System_Action_o *v21; // x28
  BlankEarthShortcutButtonListViewItem_o *v22; // x26
  const MethodInfo *v23; // x6
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_4CB2AFD & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_AssetData_GetObject_GameObject____78568200);
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&BlankEarthShortcutButtonListViewItem_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_BlankEarthSpotNavimenuMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0__CreateList_b__0__);
    sub_1C6BA08(&BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_8916/*"MapShortcut/DownloadMapShortcut"*/);
    sub_1C6BA08(&StringLiteral_5341/*"DownloadMapShortcutAtlas"*/);
    byte_4CB2AFD = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  this->fields.blankEarth = blankEarth;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.blankEarth, (int32_t)blankEarth, v6, v7);
  BlankEarthShortcutButtonListViewManager__SetTouchEnable(this, 0, v8);
  scrollBar = (UnityEngine_Component_o *)this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_32;
  scrollBar = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(scrollBar, 0);
  if ( !scrollBar )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollBar, 0, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  scrollBar = (UnityEngine_Component_o *)AssetManager__getAssetStorage((System_String_o *)StringLiteral_8916/*"MapShortcut/DownloadMapShortcut"*/, 0);
  if ( !scrollBar )
    goto LABEL_32;
  Object_object__51495936 = AssetData__GetObject_object__51495936(
                              (AssetData_o *)scrollBar,
                              (System_String_o *)StringLiteral_5341/*"DownloadMapShortcutAtlas"*/,
                              (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  scrollBar = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Object_object__51495936,
                                           0,
                                           0);
  Component_object = 0;
  if ( ((unsigned __int8)scrollBar & 1) != 0 )
  {
    if ( !Object_object__51495936 )
      goto LABEL_32;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_object__51495936,
                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  scrollBar = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_BlankEarthSpotNavimenuMaster___);
  if ( !scrollBar
    || (EnableShortcutButtons = BlankEarthSpotNavimenuMaster__GetEnableShortcutButtons(
                                  (BlankEarthSpotNavimenuMaster_o *)scrollBar,
                                  0),
        scrollBar = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___),
        !EnableShortcutButtons) )
  {
LABEL_32:
    sub_1C6BC60(scrollBar, v9);
  }
  if ( SLODWORD(EnableShortcutButtons->max_length) >= 1 )
  {
    v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)scrollBar;
    v15 = 0;
    do
    {
      v16 = sub_1C6BC54(BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v16, 0);
      if ( !v16 )
        goto LABEL_32;
      *(_QWORD *)(v16 + 32) = this;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v16 + 32), (int32_t)this, v17, v18);
      if ( (unsigned int)v15 >= LODWORD(EnableShortcutButtons->max_length) )
        sub_1C6BC68(scrollBar);
      v19 = EnableShortcutButtons->m_Items[v15];
      *(_DWORD *)(v16 + 16) = v15;
      if ( !v19 || !v14 )
        goto LABEL_32;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             v14,
             (Il2CppObject **)(v16 + 24),
             v19->fields.blankEarthSpotId,
             (const MethodInfo_33F9128 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__) )
      {
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v21 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
        System_Action___ctor(
          v21,
          (Il2CppObject *)v16,
          Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0__CreateList_b__0__,
          0);
        v22 = (BlankEarthShortcutButtonListViewItem_o *)sub_1C6BC54(BlankEarthShortcutButtonListViewItem_TypeInfo);
        BlankEarthShortcutButtonListViewItem___ctor(
          v22,
          v19,
          v15,
          commonUIAtlas,
          (UIAtlas_o *)Component_object,
          v21,
          v23);
        if ( !itemList )
          goto LABEL_32;
        items = itemList->fields._items;
        v27 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          goto LABEL_32;
        size = itemList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v22,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v22;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v22, v24, v25);
        }
      }
    }
    while ( ++v15 < SLODWORD(EnableShortcutButtons->max_length) );
  }
  scrollBar = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollBar )
    goto LABEL_32;
  UIScrollView__ResetPosition((UIScrollView_o *)scrollBar, 0);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void BlankEarthShortcutButtonListViewManager__DestroyList(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  BlankEarthShortcutButtonListViewManager__DestroyShortcutButtonSpotEffect(this, v3);
}


void BlankEarthShortcutButtonListViewManager__DestroyShortcutButtonSpotEffect(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *spotEffectList; // x0
  Il2CppObject *current; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_GameObject__o *v7; // x8
  int32_t size; // w2
  int v9; // w9
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CB2B00 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB2B00 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  spotEffectList = (System_Collections_Generic_List_object__o *)this->fields.spotEffectList;
  if ( spotEffectList && spotEffectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      spotEffectList,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v10.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71659676((UnityEngine_Object_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v7 = this->fields.spotEffectList;
    if ( !v7 )
      sub_1C6BC60(v5, v6);
    size = v7->fields._size;
    v9 = v7->fields._version + 1;
    v7->fields._size = 0;
    v7->fields._version = v9;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0);
  }
}


void BlankEarthShortcutButtonListViewManager__FrameIn(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_IEnumerable_T__o *ObjectList; // x21
  System_Collections_Generic_List_object__o *v5; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x19
  Il2CppObject *object; // x22
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  System_Action_o *v14; // x1
  BlankEarth_o *blankEarth; // x20
  System_Action_o *v16; // x21
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CB2B01 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_0__);
    sub_1C6BA08(&Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_1__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Last_BlankEarthShortcutButtonListViewObject___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor___78506936);
    sub_1C6BA08(&System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB2B01 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0) <= 0 )
  {
    blankEarth = this->fields.blankEarth;
    v16 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(
      v16,
      (Il2CppObject *)this,
      Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_0__,
      0);
    if ( blankEarth )
    {
      BlankEarth__ExecuteAfterStartUpScaling(blankEarth, v16, 0);
      return;
    }
LABEL_19:
    sub_1C6BC60(v7, v8);
  }
  ObjectList = (System_Collections_Generic_IEnumerable_T__o *)BlankEarthShortcutButtonListViewManager__get_ObjectList(
                                                                this,
                                                                v3);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor_58720872(
    v5,
    ObjectList,
    (const MethodInfo_3800268 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor___78506936);
  v6 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_1__, 0);
  if ( !v5 )
    goto LABEL_19;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    v5,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__) )
  {
    current = v17.fields._current;
    object = System_Linq_Enumerable__Last_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v5,
               (const MethodInfo_3166318 *)Method_System_Linq_Enumerable_Last_BlankEarthShortcutButtonListViewObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, (UnityEngine_Object_o *)object, 0);
    if ( !current )
      sub_1C6BC60(v11, v12);
    if ( v11 )
      v14 = v6;
    else
      v14 = 0;
    BlankEarthShortcutButtonListViewObject__SetEntryAnim((BlankEarthShortcutButtonListViewObject_o *)current, v14, v13);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
}


void BlankEarthShortcutButtonListViewManager__FrameOut(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB2B02 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    byte_4CB2B02 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  if ( ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0) >= 1 )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)BlankEarthShortcutButtonListViewManager__get_ObjectList(
                                                                this,
                                                                v3);
    if ( !ObjectList )
      sub_1C6BC60(0, v5);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v7,
      ObjectList,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v7,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__) )
    {
      if ( !v7.fields._current )
        sub_1C6BC60(0, v6);
      BlankEarthShortcutButtonListViewObject__FrameOut(
        (BlankEarthShortcutButtonListViewObject_o *)v7.fields._current,
        v6);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v7,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
  }
}


void BlankEarthShortcutButtonListViewManager__OnClickButton(
        BlankEarthShortcutButtonListViewManager_o *this,
        int32_t index,
        BlankEarthSpotEntity_o *bSpotEnt,
        const MethodInfo *method)
{
  __int64 v7; // x21
  WarMaster_o *Master_object; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t id; // w8
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x26
  Il2CppObject *v18; // x0
  __int64 v19; // x1
  WarReleaseEntity_o *OpenEntity; // x0
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *klass; // x8
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  System_Action_object__o *v26; // x22
  const MethodInfo *v27; // x1
  float moveDefaultTime; // s8
  float moveDistanceMultipleValue; // s9
  BlankEarth_RotateEarthTimeCalculateParam_o *v30; // x23
  System_Collections_Generic_List_object__o *ObjectList; // x23
  System_Predicate_object__o *v32; // x24
  const MethodInfo *v33; // x2
  BlankEarthShortcutButtonListViewObject_o *v34; // x23
  const MethodInfo *v35; // x1
  TerminalPramsManager_c *v36; // x0
  BlankEarth_QAARotateEarthResponse_o *v37; // x19
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CB2AFE & 1) == 0 )
  {
    sub_1C6BA08(&Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
    sub_1C6BA08(&System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
    sub_1C6BA08(&Method_BlankEarthShortcutButtonListViewManager_OnClickButton__);
    sub_1C6BA08(&BlankEarthShortcutButtonListViewObject_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_WarEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_WarEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_WarEntity__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Find__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_WarEntity__GetEnumerator__);
    sub_1C6BA08(&System_Predicate_BlankEarthShortcutButtonListViewObject__TypeInfo);
    sub_1C6BA08(&BlankEarth_QAARotateEarthResponse_TypeInfo);
    sub_1C6BA08(&BlankEarth_RotateEarthTimeCalculateParam_TypeInfo);
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    sub_1C6BA08(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__0__);
    sub_1C6BA08(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__1__);
    sub_1C6BA08(&BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_TypeInfo);
    byte_4CB2AFE = 1;
  }
  memset(&v39, 0, sizeof(v39));
  v7 = sub_1C6BC54(BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_57;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_DWORD *)(v7 + 28) = index;
  if ( !this->fields.itemList )
    return;
  if ( !bSpotEnt )
    goto LABEL_57;
  id = bSpotEnt->fields.id;
  *(_DWORD *)(v7 + 24) = id;
  if ( id == this->fields.goalSpotId )
  {
    v13 = Method_BlankEarthShortcutButtonListViewManager_OnClickButton__;
    if ( (*((_BYTE *)Method_BlankEarthShortcutButtonListViewManager_OnClickButton__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_1C6BA20(Method_BlankEarthShortcutButtonListViewManager_OnClickButton__);
    v14 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v13, v13[4]);
    OverwriteAssetSoundName__PlaySystemSe(v14, 2, 0, 0);
    return;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (WarMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_57;
  Master_object = (WarMaster_o *)WarMaster__GetEntityList(Master_object, 0);
  if ( !Master_object )
    goto LABEL_57;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_WarEntity__GetEnumerator__);
  v39 = v38;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v39,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_WarEntity__MoveNext__);
    if ( !v15 )
      break;
    current = v39.fields._current;
    if ( !v39.fields._current )
      sub_1C6BC60(v15, v16);
    if ( HIDWORD(v39.fields._current[7].monitor) == bSpotEnt->fields.id )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v18 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_WarReleaseMaster___);
      if ( !v18 )
        sub_1C6BC60(0, v19);
      OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)v18, (int32_t)current[1].klass, 0);
      if ( OpenEntity )
      {
        if ( WarReleaseEntity__IsClose(OpenEntity, 0) )
        {
          v21 = Method_BlankEarthShortcutButtonListViewManager_OnClickButton__;
          if ( (*((_BYTE *)Method_BlankEarthShortcutButtonListViewManager_OnClickButton__ + 83) & 2) != 0 )
            v21 = (_QWORD *)sub_1C6BA20(Method_BlankEarthShortcutButtonListViewManager_OnClickButton__);
          v22 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v21, v21[4]);
          OverwriteAssetSoundName__PlaySystemSe(v22, 2, 0, 0);
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v39,
            (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_WarEntity__Dispose__);
          return;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v39,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_WarEntity__Dispose__);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CB01CE )
  {
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB01CE = 1;
  }
  Master_object = (WarMaster_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_object = (WarMaster_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Master_object[2].fields.list->klass;
  if ( !klass )
    goto LABEL_57;
  Master_object = (WarMaster_o *)klass->_2.genericContainerHandle;
  if ( !Master_object )
    goto LABEL_57;
  TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)Master_object, 0, 0);
  v24 = Method_BlankEarthShortcutButtonListViewManager_OnClickButton__;
  if ( (*((_BYTE *)Method_BlankEarthShortcutButtonListViewManager_OnClickButton__ + 83) & 2) != 0 )
    v24 = (_QWORD *)sub_1C6BA20(Method_BlankEarthShortcutButtonListViewManager_OnClickButton__);
  v25 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v24, v24[4]);
  OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0, 0);
  v26 = (System_Action_object__o *)sub_1C6BC54(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
  System_Action_object____ctor(
    v26,
    (Il2CppObject *)v7,
    Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__0__,
    0);
  Master_object = (WarMaster_o *)this->fields.blankEarth;
  if ( !Master_object )
    goto LABEL_57;
  BlankEarth__SaveSpotRotation((BlankEarth_o *)Master_object, bSpotEnt, 0);
  if ( !bSpotEnt->fields.onObjectType )
  {
    moveDefaultTime = this->fields.moveDefaultTime;
    moveDistanceMultipleValue = this->fields.moveDistanceMultipleValue;
    v30 = (BlankEarth_RotateEarthTimeCalculateParam_o *)sub_1C6BC54(BlankEarth_RotateEarthTimeCalculateParam_TypeInfo);
    BlankEarth_RotateEarthTimeCalculateParam___ctor(v30, moveDefaultTime, moveDistanceMultipleValue, 0);
    Master_object = (WarMaster_o *)this->fields.blankEarth;
    if ( !Master_object )
      goto LABEL_57;
    BlankEarth__RotateEarthTowardsSpot(
      (BlankEarth_o *)Master_object,
      bSpotEnt,
      this->fields.spotMoveTime,
      this->fields.spotMoveEasingType,
      1,
      (System_Action_BlankEarth_QAARotateEarthResponse__o *)v26,
      v30,
      0);
  }
  ObjectList = (System_Collections_Generic_List_object__o *)BlankEarthShortcutButtonListViewManager__get_ObjectList(
                                                              this,
                                                              v27);
  v32 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_BlankEarthShortcutButtonListViewObject__TypeInfo);
  System_Predicate_object____ctor(
    v32,
    (Il2CppObject *)v7,
    Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__1__,
    0);
  if ( !ObjectList )
    goto LABEL_57;
  Master_object = (WarMaster_o *)System_Collections_Generic_List_object___Find(
                                   ObjectList,
                                   (System_Predicate_T__o *)v32,
                                   (const MethodInfo_3800FDC *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Find__);
  v34 = (BlankEarthShortcutButtonListViewObject_o *)Master_object;
  if ( !Master_object )
  {
    v34 = (BlankEarthShortcutButtonListViewObject_o *)sub_1C6BC54(BlankEarthShortcutButtonListViewObject_TypeInfo);
    BlankEarthShortcutButtonListViewObject___ctor(v34, v35);
  }
  if ( !v34 || (Master_object = (WarMaster_o *)v34->fields.itemDraw) == 0 )
LABEL_57:
    sub_1C6BC60(Master_object, v9);
  BlankEarthShortcutButtonListViewItemDraw__SetShortcutButtonEnable(
    (BlankEarthShortcutButtonListViewItemDraw_o *)Master_object,
    0,
    v33);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CB2B7B )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB2B7B = 1;
  }
  v36 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v36 = TerminalPramsManager_TypeInfo;
  }
  v36->static_fields->_IsBlankEarthShortcutMoving_k__BackingField = 1;
  this->fields.goalSpotId = *(_DWORD *)(v7 + 24);
  if ( bSpotEnt->fields.onObjectType )
  {
    v37 = (BlankEarth_QAARotateEarthResponse_o *)sub_1C6BC54(BlankEarth_QAARotateEarthResponse_TypeInfo);
    BlankEarth_QAARotateEarthResponse___ctor(v37, 0, 0);
    ActionExtensions__Call_object_(
      (System_Action_T__o *)v26,
      (Il2CppObject *)v37,
      (const MethodInfo_3085F64 *)Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
  }
}


void BlankEarthShortcutButtonListViewManager__OnClickListView(
        BlankEarthShortcutButtonListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void BlankEarthShortcutButtonListViewManager__QuickFrameOut(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB2B03 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    byte_4CB2B03 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  if ( ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0) >= 1 )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)BlankEarthShortcutButtonListViewManager__get_ObjectList(
                                                                this,
                                                                v3);
    if ( !ObjectList )
      sub_1C6BC60(0, v5);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v7,
      ObjectList,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v7,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__) )
    {
      if ( !v7.fields._current )
        sub_1C6BC60(0, v6);
      BlankEarthShortcutButtonListViewObject__QuickFrameOut(
        (BlankEarthShortcutButtonListViewObject_o *)v7.fields._current,
        v6);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v7,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
  }
}


void BlankEarthShortcutButtonListViewManager__SetAllButtonsClickable(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  BlankEarthShortcutButtonListViewItemDraw_o *v8; // x0
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB2B04 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    byte_4CB2B04 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  this->fields.goalSpotId = 0;
  ObjectList = (System_Collections_Generic_List_object__o *)BlankEarthShortcutButtonListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    sub_1C6BC60(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    ObjectList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__);
    if ( !v5 )
      break;
    if ( !v9.fields._current )
      sub_1C6BC60(v5, v6);
    v8 = *(BlankEarthShortcutButtonListViewItemDraw_o **)((char *)&v9.fields._current->klass
                                                        + (unsigned __int64)&qword_A8);
    if ( !v8 )
      sub_1C6BC60(0, v6);
    BlankEarthShortcutButtonListViewItemDraw__SetShortcutButtonEnable(v8, 1, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
}


void BlankEarthShortcutButtonListViewManager__SetObjectItem(
        BlankEarthShortcutButtonListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10

  if ( (byte_4CB2AFF & 1) == 0 )
  {
    this = (BlankEarthShortcutButtonListViewManager_o *)sub_1C6BA08(&BlankEarthShortcutButtonListViewObject_TypeInfo);
    byte_4CB2AFF = 1;
  }
  if ( !obj
    || (naturalAligment = BlankEarthShortcutButtonListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (BlankEarthShortcutButtonListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != BlankEarthShortcutButtonListViewObject_TypeInfo )
  {
    sub_1C6BC60(this, obj);
  }
  BlankEarthShortcutButtonListViewObject__SetupDisp(
    (BlankEarthShortcutButtonListViewObject_o *)obj,
    (const MethodInfo *)obj);
}


void BlankEarthShortcutButtonListViewManager__SetTouchEnable(
        BlankEarthShortcutButtonListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *blockMask; // x22
  CGThumbnailListItem_o *p_blockMask; // x19
  UnityEngine_Object_o *klass; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_Object_o *blockMaskPrefab; // x21
  Il2CppObject *v11; // x21
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_GameObject_o *v15; // x20
  __int64 v16; // x1

  if ( (byte_4CB2B05 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB2B05 = 1;
  }
  blockMask = (UnityEngine_Object_o *)this->fields.blockMask;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_blockMask = (CGThumbnailListItem_o *)&this->fields.blockMask;
  if ( isEnable )
  {
    if ( UnityEngine_Object__op_Inequality(blockMask, 0, 0) )
    {
      klass = (UnityEngine_Object_o *)p_blockMask->klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71659864(klass, 0);
      p_blockMask->klass = 0;
      sub_1C6B9AC(p_blockMask, 0, v8, v9);
    }
  }
  else if ( UnityEngine_Object__op_Equality(blockMask, 0, 0) )
  {
    blockMaskPrefab = (UnityEngine_Object_o *)this->fields.blockMaskPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(blockMaskPrefab, 0, 0) )
    {
      v11 = (Il2CppObject *)this->fields.blockMaskPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v12 = UnityEngine_Object__Instantiate_object_(
              v11,
              (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      this->fields.blockMask = (struct UnityEngine_GameObject_o *)v12;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.blockMask, (int32_t)v12, v13, v14);
      GameObjectExtensions__SafeSetParent(
        this->fields.blockMask,
        (UnityEngine_Component_o *)this->fields.blockMaskPanel,
        0);
      v15 = this->fields.blockMask;
      if ( !byte_4CAFC09 )
      {
        sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
        byte_4CAFC09 = 1;
      }
      GameObjectExtensions__SetLocalPosition(v15, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      if ( !p_blockMask->klass )
        sub_1C6BC60(0, v16);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)p_blockMask->klass, 1, 0);
    }
  }
}


void BlankEarthShortcutButtonListViewManager___FrameIn_b__18_0(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BlankEarthShortcutButtonListViewManager__SetTouchEnable(this, 1, v2);
}


void BlankEarthShortcutButtonListViewManager___FrameIn_b__18_1(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  BlankEarth_o *blankEarth; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4CB2B07 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_2__);
    byte_4CB2B07 = 1;
  }
  BlankEarthShortcutButtonListViewManager__SetAllButtonsClickable(this, method);
  blankEarth = this->fields.blankEarth;
  v4 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_2__, 0);
  if ( !blankEarth )
    sub_1C6BC60(v5, v6);
  BlankEarth__ExecuteAfterStartUpScaling(blankEarth, v4, 0);
}


void BlankEarthShortcutButtonListViewManager___FrameIn_b__18_2(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BlankEarthShortcutButtonListViewManager__SetTouchEnable(this, 1, v2);
}


System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__o *BlankEarthShortcutButtonListViewManager__get_ObjectList(
        BlankEarthShortcutButtonListViewManager_o *this,
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
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CB2AFC & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_BlankEarthShortcutButtonListViewObject___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB2AFC = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C6BC60(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C6BC60(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_BlankEarthShortcutButtonListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1C6BC60(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C6BC60(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__o *)v3;
}


void BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0___ctor(
        BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0___CreateList_b__0(
        BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1C6BC60(this, method);
  BlankEarthShortcutButtonListViewManager__OnClickButton(
    this->fields.__4__this,
    this->fields.itemIndex,
    this->fields.bSpotEnt,
    v2);
}


void BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0___ctor(
        BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0___OnClickButton_b__0(
        BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *this,
        BlankEarth_QAARotateEarthResponse_o *response,
        const MethodInfo *method)
{
  ScrTerminalListTop_o *blankEarth; // x0
  QuestRewardItemAction_c *klass; // x8
  struct BlankEarthShortcutButtonListViewManager_o *_4__this; // x8
  UnityEngine_Object_o *Point; // x20
  QuestRewardItemAction_c *v9; // x8
  struct BlankEarthShortcutButtonListViewManager_o *v10; // x8
  struct BlankEarthShortcutButtonListViewManager_o *v11; // x8
  UnityEngine_Object_o *v12; // x20
  struct BlankEarth_o *v13; // x8
  Il2CppObject *shortcutSpotEffect; // x20
  struct BlankEarthShortcutButtonListViewManager_o *v15; // x8
  UnityEngine_GameObject_o *v16; // x20
  struct BlankEarthShortcutButtonListViewManager_o *v17; // x8
  UnityEngine_Object_o *v18; // x21
  UnityEngine_Component_o *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct BlankEarthShortcutButtonListViewManager_o *v22; // x8
  intptr_t m_CachedPtr; // x8
  _QWORD *v24; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v26; // x8
  System_Action_o *_9__2; // x21
  UnityEngine_MonoBehaviour_o *v28; // x20
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o SonarPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB2B08 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__RemoveAt__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    sub_1C6BA08(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__2__);
    byte_4CB2B08 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CB01CE )
  {
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB01CE = 1;
  }
  blankEarth = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    blankEarth = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = blankEarth->fields.friendPointBoostItemAction->klass;
  if ( !klass )
    goto LABEL_64;
  blankEarth = *(ScrTerminalListTop_o **)&klass->_2.element_size;
  if ( !blankEarth )
    goto LABEL_64;
  ScrTerminalListTop__SetAllBlankEarthShortcutButtonsClickable(blankEarth, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CB2B7B )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB2B7B = 1;
  }
  blankEarth = (ScrTerminalListTop_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    blankEarth = (ScrTerminalListTop_o *)TerminalPramsManager_TypeInfo;
  }
  BYTE4(blankEarth->fields.friendPointBoostItemAction[1].fields.mItemLabelList_4) = 0;
  if ( !response )
    goto LABEL_64;
  if ( response->fields._IsInterrupted_k__BackingField )
    return;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_64;
  blankEarth = (ScrTerminalListTop_o *)_4__this->fields.blankEarth;
  if ( !blankEarth )
    goto LABEL_64;
  Point = (UnityEngine_Object_o *)BlankEarth__GetPoint((BlankEarth_o *)blankEarth, this->fields.spotId, 0, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  blankEarth = (ScrTerminalListTop_o *)UnityEngine_Object__op_Equality(Point, 0, 0);
  if ( ((unsigned __int8)blankEarth & 1) != 0 )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4CB01CE )
    {
      sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
      byte_4CB01CE = 1;
    }
    blankEarth = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      blankEarth = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    }
    v9 = blankEarth->fields.friendPointBoostItemAction->klass;
    if ( v9 )
    {
      blankEarth = (ScrTerminalListTop_o *)v9->_2.genericContainerHandle;
      if ( blankEarth )
      {
        TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)blankEarth, 1, 0);
        return;
      }
    }
    goto LABEL_64;
  }
  v10 = this->fields.__4__this;
  if ( !v10 )
    goto LABEL_64;
  blankEarth = (ScrTerminalListTop_o *)v10->fields.spotEffectList;
  if ( !blankEarth )
    goto LABEL_64;
  if ( SLODWORD(blankEarth->fields.m_CancellationTokenSource) >= 2 )
  {
    blankEarth = (ScrTerminalListTop_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)blankEarth,
                                           0,
                                           (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    v11 = this->fields.__4__this;
    if ( !v11 )
      goto LABEL_64;
    v12 = (UnityEngine_Object_o *)blankEarth;
    blankEarth = (ScrTerminalListTop_o *)v11->fields.spotEffectList;
    if ( !blankEarth )
      goto LABEL_64;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)blankEarth,
      0,
      (const MethodInfo_3802148 *)Method_System_Collections_Generic_List_GameObject__RemoveAt__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71659676(v12, 0);
    v10 = this->fields.__4__this;
    if ( !v10 )
      goto LABEL_64;
  }
  v13 = v10->fields.blankEarth;
  if ( !v13 )
    goto LABEL_64;
  shortcutSpotEffect = (Il2CppObject *)v13->fields.shortcutSpotEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  blankEarth = (ScrTerminalListTop_o *)UnityEngine_Object__Instantiate_object_(
                                         shortcutSpotEffect,
                                         (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_64;
  v16 = (UnityEngine_GameObject_o *)blankEarth;
  blankEarth = (ScrTerminalListTop_o *)v15->fields.blankEarth;
  if ( !blankEarth )
    goto LABEL_64;
  blankEarth = (ScrTerminalListTop_o *)BlankEarth__GetPoint((BlankEarth_o *)blankEarth, this->fields.spotId, 0, 0);
  v17 = this->fields.__4__this;
  if ( !v17 )
    goto LABEL_64;
  v18 = (UnityEngine_Object_o *)blankEarth;
  blankEarth = (ScrTerminalListTop_o *)v17->fields.blankEarth;
  if ( !blankEarth )
    goto LABEL_64;
  v19 = (UnityEngine_Component_o *)BlankEarth__GetPoint((BlankEarth_o *)blankEarth, this->fields.spotId, 0, 0);
  GameObjectExtensions__SetParent(v16, v19, 0);
  GameObjectExtensions__ResetTransform(v16, 0);
  if ( !v16 )
    goto LABEL_64;
  blankEarth = (ScrTerminalListTop_o *)UnityEngine_GameObject__get_transform(v16, 0);
  if ( !blankEarth )
    goto LABEL_64;
  v31.fields.y = 0.0;
  v31.fields.z = 0.0;
  v31.fields.x = -90.0;
  UnityEngine_Transform__Rotate_71684520((UnityEngine_Transform_o *)blankEarth, v31, 0);
  blankEarth = (ScrTerminalListTop_o *)UnityEngine_Object__op_Inequality(v18, 0, 0);
  if ( ((unsigned __int8)blankEarth & 1) != 0 )
  {
    if ( !v18 )
      goto LABEL_64;
    blankEarth = (ScrTerminalListTop_o *)BlankEarthPoint__HasSonarPoint(
                                           (BlankEarthPoint_o *)v18,
                                           (const MethodInfo *)response);
    if ( ((unsigned __int8)blankEarth & 1) != 0 )
    {
      SonarPosition = BlankEarthPoint__GetSonarPosition((BlankEarthPoint_o *)v18, (const MethodInfo *)response);
      GameObjectExtensions__SetLocalPosition(v16, SonarPosition, 0);
    }
  }
  v22 = this->fields.__4__this;
  if ( !v22 )
    goto LABEL_64;
  blankEarth = (ScrTerminalListTop_o *)v22->fields.spotEffectList;
  if ( !blankEarth )
    goto LABEL_64;
  m_CachedPtr = blankEarth->fields.m_CachedPtr;
  v24 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(blankEarth->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_64;
  m_CancellationTokenSource_low = SLODWORD(blankEarth->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)blankEarth,
      (Il2CppObject *)v16,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
    LODWORD(blankEarth->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v26 + 32) = v16;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 32), (int32_t)v16, v20, v21);
  }
  _9__2 = this->fields.__9__2;
  v28 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v29, v30);
  }
  blankEarth = (ScrTerminalListTop_o *)BasicHelper__DelayCall(0.01, _9__2, 1, 0);
  if ( !v28 )
LABEL_64:
    sub_1C6BC60(blankEarth, response);
  UnityEngine_MonoBehaviour__StartCoroutine_71644868(v28, (System_Collections_IEnumerator_o *)blankEarth, 0);
}


bool BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0___OnClickButton_b__1(
        BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *this,
        BlankEarthShortcutButtonListViewObject_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C6BC60(this, 0);
  return ListViewObject__get_Index((ListViewObject_o *)n, 0) == this->fields.index;
}


void BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0___OnClickButton_b__2(
        BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *v2; // x19
  struct BlankEarthShortcutButtonListViewManager_o *_4__this; // x8
  __int64 v4; // x8

  v2 = this;
  if ( (byte_4CB2B09 & 1) == 0 )
  {
    this = (BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *)sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB2B09 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  this = (BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *)_4__this->fields.blankEarth;
  if ( !this )
    goto LABEL_15;
  this = (BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *)BlankEarth__GetPoint(
                                                                              (BlankEarth_o *)this,
                                                                              v2->fields.spotId,
                                                                              0,
                                                                              0);
  if ( !this )
    goto LABEL_15;
  BlankEarthPoint__OpenQuestList((BlankEarthPoint_o *)this, method);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CB01CE )
  {
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB01CE = 1;
  }
  this = (BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    this = (BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *)TerminalSceneComponent_TypeInfo;
  }
  v4 = **(_QWORD **)&this[4].fields.spotId;
  if ( !v4 || (this = *(BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o **)(v4 + 240)) == 0 )
LABEL_15:
    sub_1C6BC60(this, method);
  TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)this, 1, 0);
}