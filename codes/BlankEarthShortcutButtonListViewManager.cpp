void BlankEarthShortcutButtonListViewManager___ctor(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2D0AC & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4D2D0AC = 1;
  }
  this->fields.spotMoveEasingType = 15;
  *(_QWORD *)&this->fields.spotMoveTime = 0x3D23D70A3FC00000LL;
  this->fields.moveDistanceMultipleValue = 0.18;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.spotEffectList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.spotEffectList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void BlankEarthShortcutButtonListViewManager__CreateList(
        BlankEarthShortcutButtonListViewManager_o *this,
        BlankEarth_o *blankEarth,
        UIAtlas_o *commonUIAtlas,
        const MethodInfo *method)
{
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  const MethodInfo *v12; // x2
  __int64 scrollBar; // x0
  __int64 v14; // x1
  struct ListViewItemSeed_o *seed; // x8
  float y; // s0
  Il2CppObject *Object_object__51927708; // x23
  Il2CppObject *Component_object; // x22
  BlankEarthSpotNavimenuEntity_array *EnableShortcutButtons; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x24
  int32_t v21; // w25
  __int64 v22; // x27
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  BlankEarthSpotNavimenuEntity_o *v29; // x28
  System_Collections_Generic_List_object__o *itemList; // x26
  System_Action_o *v31; // x29
  BlankEarthShortcutButtonListViewItem_o *v32; // x27
  const MethodInfo *v33; // x6
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v44; // x8
  struct ListViewItemSeed_o *v45; // x21
  int v46; // w20
  float v47; // s0
  bool v48; // cc
  UnityEngine_Transform_o *v49; // x20
  struct UnityEngine_Vector3_o *p_oneVector; // x8
  float *p_y; // x9
  float *p_z; // x10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x10
  struct System_Nullable_float__o v55; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2D0A3 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_AssetData_GetObject_GameObject____79057888);
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&BlankEarthShortcutButtonListViewItem_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_BlankEarthSpotNavimenuMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C93AD4(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_1C93AD4(&Method_System_Nullable_float___ctor__);
    sub_1C93AD4(&Method_System_Nullable_float__get_HasValue__);
    sub_1C93AD4(&Method_System_Nullable_float__get_Value__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass18_0__CreateList_b__0__);
    sub_1C93AD4(&BlankEarthShortcutButtonListViewManager___c__DisplayClass18_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_8970/*"MapShortcut/DownloadMapShortcut"*/);
    sub_1C93AD4(&StringLiteral_5374/*"DownloadMapShortcutAtlas"*/);
    byte_4D2D0A3 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  this->fields.blankEarth = blankEarth;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.blankEarth, (int32_t)blankEarth, v6, v7, v8, v9, v10, v11);
  BlankEarthShortcutButtonListViewManager__SetTouchEnable(this, 0, v12);
  if ( !this->fields.defaultArrangementPitchY.fields.hasValue )
  {
    seed = this->fields.seed;
    if ( !seed )
      goto LABEL_47;
    y = seed->fields.arrangementPich.fields.y;
    v55 = 0;
    System_Nullable_float____ctor(
      (System_Nullable_float__o)&v55,
      y,
      (const MethodInfo_39A1F0C *)Method_System_Nullable_float___ctor__);
    this->fields.defaultArrangementPitchY = v55;
  }
  scrollBar = (__int64)this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_47;
  scrollBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollBar, 0);
  if ( !scrollBar )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollBar, 0, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  scrollBar = (__int64)AssetManager__getAssetStorage((System_String_o *)StringLiteral_8970/*"MapShortcut/DownloadMapShortcut"*/, 0);
  if ( !scrollBar )
    goto LABEL_47;
  Object_object__51927708 = AssetData__GetObject_object__51927708(
                              (AssetData_o *)scrollBar,
                              (System_String_o *)StringLiteral_5374/*"DownloadMapShortcutAtlas"*/,
                              (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  scrollBar = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51927708, 0, 0);
  Component_object = 0;
  if ( (scrollBar & 1) != 0 )
  {
    if ( !Object_object__51927708 )
      goto LABEL_47;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_object__51927708,
                         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  scrollBar = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_BlankEarthSpotNavimenuMaster___);
  if ( !scrollBar
    || (EnableShortcutButtons = BlankEarthSpotNavimenuMaster__GetEnableShortcutButtons(
                                  (BlankEarthSpotNavimenuMaster_o *)scrollBar,
                                  0),
        scrollBar = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___),
        !EnableShortcutButtons) )
  {
LABEL_47:
    sub_1C93D2C(scrollBar, v14);
  }
  if ( SLODWORD(EnableShortcutButtons->max_length) >= 1 )
  {
    v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)scrollBar;
    v21 = 0;
    do
    {
      v22 = sub_1C93D20(BlankEarthShortcutButtonListViewManager___c__DisplayClass18_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v22, 0);
      if ( !v22 )
        goto LABEL_47;
      *(_QWORD *)(v22 + 32) = this;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v22 + 32), (int32_t)this, v23, v24, v25, v26, v27, v28);
      if ( (unsigned int)v21 >= LODWORD(EnableShortcutButtons->max_length) )
        sub_1C93D34(scrollBar);
      v29 = EnableShortcutButtons->m_Items[v21];
      *(_DWORD *)(v22 + 16) = v21;
      if ( !v29 || !v20 )
        goto LABEL_47;
      scrollBar = DataMasterBase_object__object__int___TryGetEntity(
                    v20,
                    (Il2CppObject **)(v22 + 24),
                    v29->fields.blankEarthSpotId,
                    (const MethodInfo_34632C0 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
      if ( (scrollBar & 1) != 0 )
      {
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v31 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
        System_Action___ctor(
          v31,
          (Il2CppObject *)v22,
          Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass18_0__CreateList_b__0__,
          0);
        v32 = (BlankEarthShortcutButtonListViewItem_o *)sub_1C93D20(BlankEarthShortcutButtonListViewItem_TypeInfo);
        BlankEarthShortcutButtonListViewItem___ctor(
          v32,
          v29,
          v21,
          commonUIAtlas,
          (UIAtlas_o *)Component_object,
          v31,
          v33);
        if ( !itemList )
          goto LABEL_47;
        items = itemList->fields._items;
        v41 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          goto LABEL_47;
        size = itemList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v32,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v43 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v43[4] = (Il2CppClass *)v32;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v43 + 4), (int32_t)v32, v34, v35, v36, v37, v38, v39);
        }
      }
    }
    while ( ++v21 < SLODWORD(EnableShortcutButtons->max_length) );
  }
  v44 = this->fields.itemList;
  if ( !v44 )
    goto LABEL_47;
  v45 = this->fields.seed;
  if ( !v45 )
    goto LABEL_47;
  v46 = v44->fields._size;
  v47 = v46 <= 6
      ? System_Nullable_float___get_Value(
          (System_Nullable_float__o)&this->fields.defaultArrangementPitchY,
          (const MethodInfo_39A1F24 *)Method_System_Nullable_float__get_Value__)
      : this->fields.overWriteArrangementPitchY;
  v45->fields.arrangementPich.fields.y = v47;
  scrollBar = (__int64)this->fields.listViewGrid;
  if ( !scrollBar )
    goto LABEL_47;
  scrollBar = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)scrollBar, 0);
  v48 = v46 <= 6;
  v49 = (UnityEngine_Transform_o *)scrollBar;
  if ( v48 )
  {
    if ( !byte_4D2A13E )
    {
      scrollBar = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A13E = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    p_oneVector = &static_fields->oneVector;
    p_y = &static_fields->oneVector.fields.y;
    p_z = &static_fields->oneVector.fields.z;
  }
  else
  {
    p_oneVector = &this->fields.listOverWriteScale;
    p_y = &this->fields.listOverWriteScale.fields.y;
    p_z = &this->fields.listOverWriteScale.fields.z;
  }
  if ( !v49 )
    goto LABEL_47;
  v56.fields.x = p_oneVector->fields.x;
  v56.fields.y = *p_y;
  v56.fields.z = *p_z;
  UnityEngine_Transform__set_localScale(v49, v56, 0);
  scrollBar = (__int64)this->fields.scrollView;
  if ( !scrollBar )
    goto LABEL_47;
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

  if ( (byte_4D2D0A6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D0A6 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  spotEffectList = (System_Collections_Generic_List_object__o *)this->fields.spotEffectList;
  if ( spotEffectList && spotEffectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      spotEffectList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v10.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72119908((UnityEngine_Object_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v7 = this->fields.spotEffectList;
    if ( !v7 )
      sub_1C93D2C(v5, v6);
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

  if ( (byte_4D2D0A7 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__23_0__);
    sub_1C93AD4(&Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__23_1__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Last_BlankEarthShortcutButtonListViewObject___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor___78996664);
    sub_1C93AD4(&System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D0A7 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0) <= 0 )
  {
    blankEarth = this->fields.blankEarth;
    v16 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      v16,
      (Il2CppObject *)this,
      Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__23_0__,
      0);
    if ( blankEarth )
    {
      BlankEarth__ExecuteAfterStartUpScaling(blankEarth, v16, 0);
      return;
    }
LABEL_19:
    sub_1C93D2C(v7, v8);
  }
  ObjectList = (System_Collections_Generic_IEnumerable_T__o *)BlankEarthShortcutButtonListViewManager__get_ObjectList(
                                                                this,
                                                                v3);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor_59216528(
    v5,
    ObjectList,
    (const MethodInfo_3879290 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor___78996664);
  v6 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__23_1__, 0);
  if ( !v5 )
    goto LABEL_19;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    v5,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__) )
  {
    current = v17.fields._current;
    object = System_Linq_Enumerable__Last_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v5,
               (const MethodInfo_31CEB48 *)Method_System_Linq_Enumerable_Last_BlankEarthShortcutButtonListViewObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, (UnityEngine_Object_o *)object, 0);
    if ( !current )
      sub_1C93D2C(v11, v12);
    if ( v11 )
      v14 = v6;
    else
      v14 = 0;
    BlankEarthShortcutButtonListViewObject__SetEntryAnim((BlankEarthShortcutButtonListViewObject_o *)current, v14, v13);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
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

  if ( (byte_4D2D0A8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    byte_4D2D0A8 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  if ( ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0) >= 1 )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)BlankEarthShortcutButtonListViewManager__get_ObjectList(
                                                                this,
                                                                v3);
    if ( !ObjectList )
      sub_1C93D2C(0, v5);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v7,
      ObjectList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v7,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__) )
    {
      if ( !v7.fields._current )
        sub_1C93D2C(0, v6);
      BlankEarthShortcutButtonListViewObject__FrameOut(
        (BlankEarthShortcutButtonListViewObject_o *)v7.fields._current,
        v6);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v7,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t id; // w8
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *current; // x26
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  WarReleaseEntity_o *OpenEntity; // x0
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *klass; // x8
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  System_Action_object__o *v30; // x22
  const MethodInfo *v31; // x1
  float moveDefaultTime; // s8
  float moveDistanceMultipleValue; // s9
  BlankEarth_RotateEarthTimeCalculateParam_o *v34; // x23
  System_Collections_Generic_List_object__o *ObjectList; // x23
  System_Predicate_object__o *v36; // x24
  const MethodInfo *v37; // x2
  BlankEarthShortcutButtonListViewObject_o *v38; // x23
  const MethodInfo *v39; // x1
  TerminalPramsManager_c *v40; // x0
  BlankEarth_QAARotateEarthResponse_o *v41; // x19
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4D2D0A4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
    sub_1C93AD4(&System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
    sub_1C93AD4(&Method_BlankEarthShortcutButtonListViewManager_OnClickButton__);
    sub_1C93AD4(&BlankEarthShortcutButtonListViewObject_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarEntity__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarEntity__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarEntity__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Find__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarEntity__GetEnumerator__);
    sub_1C93AD4(&System_Predicate_BlankEarthShortcutButtonListViewObject__TypeInfo);
    sub_1C93AD4(&BlankEarth_QAARotateEarthResponse_TypeInfo);
    sub_1C93AD4(&BlankEarth_RotateEarthTimeCalculateParam_TypeInfo);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    sub_1C93AD4(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0__OnClickButton_b__0__);
    sub_1C93AD4(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0__OnClickButton_b__1__);
    sub_1C93AD4(&BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0_TypeInfo);
    byte_4D2D0A4 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  v7 = sub_1C93D20(BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_57;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 28) = index;
  if ( !this->fields.itemList )
    return;
  if ( !bSpotEnt )
    goto LABEL_57;
  id = bSpotEnt->fields.id;
  *(_DWORD *)(v7 + 24) = id;
  if ( id == this->fields.goalSpotId )
  {
    v17 = Method_BlankEarthShortcutButtonListViewManager_OnClickButton__;
    if ( (*((_BYTE *)Method_BlankEarthShortcutButtonListViewManager_OnClickButton__ + 83) & 2) != 0 )
      v17 = (_QWORD *)sub_1C93AEC(Method_BlankEarthShortcutButtonListViewManager_OnClickButton__);
    v18 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v17, v17[4]);
    OverwriteAssetSoundName__PlaySystemSe(v18, 2, 0, 0);
    return;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (WarMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_57;
  Master_object = (WarMaster_o *)WarMaster__GetEntityList(Master_object, 0);
  if ( !Master_object )
    goto LABEL_57;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v42,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_WarEntity__GetEnumerator__);
  v43 = v42;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v43,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_WarEntity__MoveNext__);
    if ( !v19 )
      break;
    current = v43.fields._current;
    if ( !v43.fields._current )
      sub_1C93D2C(v19, v20);
    if ( HIDWORD(v43.fields._current[7].monitor) == bSpotEnt->fields.id )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v22 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_WarReleaseMaster___);
      if ( !v22 )
        sub_1C93D2C(0, v23);
      OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)v22, (int32_t)current[1].klass, 0);
      if ( OpenEntity )
      {
        if ( WarReleaseEntity__IsClose(OpenEntity, 0) )
        {
          v25 = Method_BlankEarthShortcutButtonListViewManager_OnClickButton__;
          if ( (*((_BYTE *)Method_BlankEarthShortcutButtonListViewManager_OnClickButton__ + 83) & 2) != 0 )
            v25 = (_QWORD *)sub_1C93AEC(Method_BlankEarthShortcutButtonListViewManager_OnClickButton__);
          v26 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v25, v25[4]);
          OverwriteAssetSoundName__PlaySystemSe(v26, 2, 0, 0);
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v43,
            (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_WarEntity__Dispose__);
          return;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v43,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_WarEntity__Dispose__);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
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
  v28 = Method_BlankEarthShortcutButtonListViewManager_OnClickButton__;
  if ( (*((_BYTE *)Method_BlankEarthShortcutButtonListViewManager_OnClickButton__ + 83) & 2) != 0 )
    v28 = (_QWORD *)sub_1C93AEC(Method_BlankEarthShortcutButtonListViewManager_OnClickButton__);
  v29 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v28, v28[4]);
  OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0, 0);
  v30 = (System_Action_object__o *)sub_1C93D20(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
  System_Action_object____ctor(
    v30,
    (Il2CppObject *)v7,
    Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0__OnClickButton_b__0__,
    0);
  Master_object = (WarMaster_o *)this->fields.blankEarth;
  if ( !Master_object )
    goto LABEL_57;
  BlankEarth__SaveSpotRotation((BlankEarth_o *)Master_object, bSpotEnt, 0);
  if ( !bSpotEnt->fields.onObjectType )
  {
    moveDefaultTime = this->fields.moveDefaultTime;
    moveDistanceMultipleValue = this->fields.moveDistanceMultipleValue;
    v34 = (BlankEarth_RotateEarthTimeCalculateParam_o *)sub_1C93D20(BlankEarth_RotateEarthTimeCalculateParam_TypeInfo);
    BlankEarth_RotateEarthTimeCalculateParam___ctor(v34, moveDefaultTime, moveDistanceMultipleValue, 0);
    Master_object = (WarMaster_o *)this->fields.blankEarth;
    if ( !Master_object )
      goto LABEL_57;
    BlankEarth__RotateEarthTowardsSpot(
      (BlankEarth_o *)Master_object,
      bSpotEnt,
      this->fields.spotMoveTime,
      this->fields.spotMoveEasingType,
      1,
      (System_Action_BlankEarth_QAARotateEarthResponse__o *)v30,
      v34,
      0);
  }
  ObjectList = (System_Collections_Generic_List_object__o *)BlankEarthShortcutButtonListViewManager__get_ObjectList(
                                                              this,
                                                              v31);
  v36 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_BlankEarthShortcutButtonListViewObject__TypeInfo);
  System_Predicate_object____ctor(
    v36,
    (Il2CppObject *)v7,
    Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0__OnClickButton_b__1__,
    0);
  if ( !ObjectList )
    goto LABEL_57;
  Master_object = (WarMaster_o *)System_Collections_Generic_List_object___Find(
                                   ObjectList,
                                   (System_Predicate_T__o *)v36,
                                   (const MethodInfo_387A004 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Find__);
  v38 = (BlankEarthShortcutButtonListViewObject_o *)Master_object;
  if ( !Master_object )
  {
    v38 = (BlankEarthShortcutButtonListViewObject_o *)sub_1C93D20(BlankEarthShortcutButtonListViewObject_TypeInfo);
    BlankEarthShortcutButtonListViewObject___ctor(v38, v39);
  }
  if ( !v38 || (Master_object = (WarMaster_o *)v38->fields.itemDraw) == 0 )
LABEL_57:
    sub_1C93D2C(Master_object, v9);
  BlankEarthShortcutButtonListViewItemDraw__SetShortcutButtonEnable(
    (BlankEarthShortcutButtonListViewItemDraw_o *)Master_object,
    0,
    v37);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2D12A )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D12A = 1;
  }
  v40 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v40 = TerminalPramsManager_TypeInfo;
  }
  v40->static_fields->_IsBlankEarthShortcutMoving_k__BackingField = 1;
  this->fields.goalSpotId = *(_DWORD *)(v7 + 24);
  if ( bSpotEnt->fields.onObjectType )
  {
    v41 = (BlankEarth_QAARotateEarthResponse_o *)sub_1C93D20(BlankEarth_QAARotateEarthResponse_TypeInfo);
    BlankEarth_QAARotateEarthResponse___ctor(v41, 0, 0);
    ActionExtensions__Call_object_(
      (System_Action_T__o *)v30,
      (Il2CppObject *)v41,
      (const MethodInfo_30EBC54 *)Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
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

  if ( (byte_4D2D0A9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    byte_4D2D0A9 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  if ( ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0) >= 1 )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)BlankEarthShortcutButtonListViewManager__get_ObjectList(
                                                                this,
                                                                v3);
    if ( !ObjectList )
      sub_1C93D2C(0, v5);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v7,
      ObjectList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v7,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__) )
    {
      if ( !v7.fields._current )
        sub_1C93D2C(0, v6);
      BlankEarthShortcutButtonListViewObject__QuickFrameOut(
        (BlankEarthShortcutButtonListViewObject_o *)v7.fields._current,
        v6);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v7,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
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

  if ( (byte_4D2D0AA & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    byte_4D2D0AA = 1;
  }
  memset(&v9, 0, sizeof(v9));
  this->fields.goalSpotId = 0;
  ObjectList = (System_Collections_Generic_List_object__o *)BlankEarthShortcutButtonListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    sub_1C93D2C(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    ObjectList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__);
    if ( !v5 )
      break;
    if ( !v9.fields._current )
      sub_1C93D2C(v5, v6);
    v8 = *(BlankEarthShortcutButtonListViewItemDraw_o **)((char *)&v9.fields._current->klass
                                                        + (unsigned __int64)&qword_A8);
    if ( !v8 )
      sub_1C93D2C(0, v6);
    BlankEarthShortcutButtonListViewItemDraw__SetShortcutButtonEnable(v8, 1, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
}


void BlankEarthShortcutButtonListViewManager__SetObjectItem(
        BlankEarthShortcutButtonListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10

  if ( (byte_4D2D0A5 & 1) == 0 )
  {
    this = (BlankEarthShortcutButtonListViewManager_o *)sub_1C93AD4(&BlankEarthShortcutButtonListViewObject_TypeInfo);
    byte_4D2D0A5 = 1;
  }
  if ( !obj
    || (naturalAligment = BlankEarthShortcutButtonListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (BlankEarthShortcutButtonListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != BlankEarthShortcutButtonListViewObject_TypeInfo )
  {
    sub_1C93D2C(this, obj);
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
  GrandQuestFolderBoardItem_o *p_blockMask; // x19
  UnityEngine_Object_o *klass; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  UnityEngine_Object_o *blockMaskPrefab; // x21
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  UnityEngine_GameObject_o *v23; // x20
  __int64 v24; // x1

  if ( (byte_4D2D0AB & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D0AB = 1;
  }
  blockMask = (UnityEngine_Object_o *)this->fields.blockMask;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_blockMask = (GrandQuestFolderBoardItem_o *)&this->fields.blockMask;
  if ( isEnable )
  {
    if ( UnityEngine_Object__op_Inequality(blockMask, 0, 0) )
    {
      klass = (UnityEngine_Object_o *)p_blockMask->klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_72120096(klass, 0);
      p_blockMask->klass = 0;
      sub_1C93A78(p_blockMask, 0, v8, v9, v10, v11, v12, v13);
    }
  }
  else if ( UnityEngine_Object__op_Equality(blockMask, 0, 0) )
  {
    blockMaskPrefab = (UnityEngine_Object_o *)this->fields.blockMaskPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(blockMaskPrefab, 0, 0) )
    {
      v15 = (Il2CppObject *)this->fields.blockMaskPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v16 = UnityEngine_Object__Instantiate_object_(
              v15,
              (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      this->fields.blockMask = (struct UnityEngine_GameObject_o *)v16;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.blockMask, (int32_t)v16, v17, v18, v19, v20, v21, v22);
      GameObjectExtensions__SafeSetParent(
        this->fields.blockMask,
        (UnityEngine_Component_o *)this->fields.blockMaskPanel,
        0);
      v23 = this->fields.blockMask;
      if ( !byte_4D2A139 )
      {
        sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A139 = 1;
      }
      GameObjectExtensions__SetLocalPosition(v23, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      if ( !p_blockMask->klass )
        sub_1C93D2C(0, v24);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)p_blockMask->klass, 1, 0);
    }
  }
}


void BlankEarthShortcutButtonListViewManager___FrameIn_b__23_0(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BlankEarthShortcutButtonListViewManager__SetTouchEnable(this, 1, v2);
}


void BlankEarthShortcutButtonListViewManager___FrameIn_b__23_1(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  BlankEarth_o *blankEarth; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4D2D0AD & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__23_2__);
    byte_4D2D0AD = 1;
  }
  BlankEarthShortcutButtonListViewManager__SetAllButtonsClickable(this, method);
  blankEarth = this->fields.blankEarth;
  v4 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__23_2__, 0);
  if ( !blankEarth )
    sub_1C93D2C(v5, v6);
  BlankEarth__ExecuteAfterStartUpScaling(blankEarth, v4, 0);
}


void BlankEarthShortcutButtonListViewManager___FrameIn_b__23_2(
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

  if ( (byte_4D2D0A2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BlankEarthShortcutButtonListViewObject___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D0A2 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C93D2C(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C93D2C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthShortcutButtonListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C93D2C(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C93D2C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__o *)v3;
}


void BlankEarthShortcutButtonListViewManager___c__DisplayClass18_0___ctor(
        BlankEarthShortcutButtonListViewManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BlankEarthShortcutButtonListViewManager___c__DisplayClass18_0___CreateList_b__0(
        BlankEarthShortcutButtonListViewManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1C93D2C(this, method);
  BlankEarthShortcutButtonListViewManager__OnClickButton(
    this->fields.__4__this,
    this->fields.itemIndex,
    this->fields.bSpotEnt,
    v2);
}


void BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0___ctor(
        BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0___OnClickButton_b__0(
        BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0_o *this,
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
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct BlankEarthShortcutButtonListViewManager_o *v26; // x8
  intptr_t m_CachedPtr; // x8
  _QWORD *v28; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v30; // x8
  System_Action_o *_9__2; // x21
  UnityEngine_MonoBehaviour_o *v32; // x20
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o SonarPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2D0AE & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__RemoveAt__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    sub_1C93AD4(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0__OnClickButton_b__2__);
    byte_4D2D0AE = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
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
  if ( !byte_4D2D12A )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D12A = 1;
  }
  blankEarth = (ScrTerminalListTop_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    blankEarth = (ScrTerminalListTop_o *)TerminalPramsManager_TypeInfo;
  }
  BYTE4(blankEarth->fields.friendPointBoostItemAction[1].fields.mAppearEffObjList_2) = 0;
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
    if ( !byte_4D2A6EE )
    {
      sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
      byte_4D2A6EE = 1;
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
                                           (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
      (const MethodInfo_387B170 *)Method_System_Collections_Generic_List_GameObject__RemoveAt__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(v12, 0);
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
                                         (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  v39.fields.y = 0.0;
  v39.fields.z = 0.0;
  v39.fields.x = -90.0;
  UnityEngine_Transform__Rotate_72144752((UnityEngine_Transform_o *)blankEarth, v39, 0);
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
  v26 = this->fields.__4__this;
  if ( !v26 )
    goto LABEL_64;
  blankEarth = (ScrTerminalListTop_o *)v26->fields.spotEffectList;
  if ( !blankEarth )
    goto LABEL_64;
  m_CachedPtr = blankEarth->fields.m_CachedPtr;
  v28 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(blankEarth->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_64;
  m_CancellationTokenSource_low = SLODWORD(blankEarth->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)blankEarth,
      (Il2CppObject *)v16,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
    LODWORD(blankEarth->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v30 + 32) = v16;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v30 + 32), (int32_t)v16, v20, v21, v22, v23, v24, v25);
  }
  _9__2 = this->fields.__9__2;
  v32 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0__OnClickButton_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v33, v34, v35, v36, v37, v38);
  }
  blankEarth = (ScrTerminalListTop_o *)BasicHelper__DelayCall(0.01, _9__2, 1, 0);
  if ( !v32 )
LABEL_64:
    sub_1C93D2C(blankEarth, response);
  UnityEngine_MonoBehaviour__StartCoroutine_72105100(v32, (System_Collections_IEnumerator_o *)blankEarth, 0);
}


bool BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0___OnClickButton_b__1(
        BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0_o *this,
        BlankEarthShortcutButtonListViewObject_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C93D2C(this, 0);
  return ListViewObject__get_Index((ListViewObject_o *)n, 0) == this->fields.index;
}


void BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0___OnClickButton_b__2(
        BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0_o *v2; // x19
  struct BlankEarthShortcutButtonListViewManager_o *_4__this; // x8
  __int64 v4; // x8

  v2 = this;
  if ( (byte_4D2D0AF & 1) == 0 )
  {
    this = (BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0_o *)sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2D0AF = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  this = (BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0_o *)_4__this->fields.blankEarth;
  if ( !this )
    goto LABEL_15;
  this = (BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0_o *)BlankEarth__GetPoint(
                                                                              (BlankEarth_o *)this,
                                                                              v2->fields.spotId,
                                                                              0,
                                                                              0);
  if ( !this )
    goto LABEL_15;
  BlankEarthPoint__OpenQuestList((BlankEarthPoint_o *)this, method);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  this = (BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    this = (BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0_o *)TerminalSceneComponent_TypeInfo;
  }
  v4 = **((_QWORD **)this + 23);
  if ( !v4 || (this = *(BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0_o **)(v4 + 240)) == 0 )
LABEL_15:
    sub_1C93D2C(this, method);
  TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)this, 1, 0);
}