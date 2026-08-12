void BlankEarthShortcutButtonListViewManager___ctor(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_GameObject__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_596CE30 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_596CE30 = 1;
  }
  v3 = System_Collections_Generic_List_GameObject__TypeInfo;
  *(_QWORD *)&this->fields.spotMoveEasingType = 0x3FC000000000000FLL;
  *(_QWORD *)&this->fields.moveDefaultTime = 0x3E3851EC3D23D70ALL;
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.spotEffectList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.spotEffectList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void BlankEarthShortcutButtonListViewManager__CreateList(
        BlankEarthShortcutButtonListViewManager_o *this,
        BlankEarth_o *blankEarth,
        UIAtlas_o *commonUIAtlas,
        const MethodInfo *method)
{
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x2
  __int64 scrollBar; // x0
  __int64 v14; // x1
  struct ListViewItemSeed_o *seed; // x8
  float y; // s0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *Object_object__58532980; // x22
  __int64 v22; // x2
  Il2CppObject *Component_object; // x21
  BlankEarthSpotNavimenuEntity_array *EnableShortcutButtons; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v25; // x23
  int32_t v26; // w24
  __int64 v27; // x26
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  BlankEarthSpotNavimenuEntity_o *v34; // x27
  System_Collections_Generic_List_object__o *itemList; // x25
  System_Action_o *v36; // x28
  BlankEarthShortcutButtonListViewItem_o *v37; // x26
  const MethodInfo *v38; // x6
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v49; // x8
  struct ListViewItemSeed_o *v50; // x21
  int v51; // w20
  float Value; // s0
  System_Nullable_float__o p_defaultArrangementPitchY; // x0
  bool v54; // cc
  UnityEngine_Transform_o *v55; // x20
  struct UnityEngine_Vector3_o *p_oneVector; // x8
  float *p_y; // x9
  float *p_z; // x10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x10
  struct System_Nullable_float__o v61; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596CE27 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&BlankEarthShortcutButtonListViewItem_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_BlankEarthSpotNavimenuMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_float___ctor__);
    sub_2213A60(&Method_System_Nullable_float__get_HasValue__);
    sub_2213A60(&Method_System_Nullable_float__get_Value__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass18_0__CreateList_b__0__);
    sub_2213A60(&BlankEarthShortcutButtonListViewManager___c__DisplayClass18_0_TypeInfo);
    sub_2213A60(&StringLiteral_9287/*"MapShortcut/DownloadMapShortcut"*/);
    sub_2213A60(&StringLiteral_5546/*"DownloadMapShortcutAtlas"*/);
    byte_596CE27 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  this->fields.blankEarth = blankEarth;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.blankEarth,
    (int32_t)blankEarth,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  BlankEarthShortcutButtonListViewManager__SetTouchEnable(this, 0, v12);
  if ( !this->fields.defaultArrangementPitchY.fields.hasValue )
  {
    seed = this->fields.seed;
    if ( !seed )
      goto LABEL_47;
    y = seed->fields.arrangementPich.fields.y;
    v61 = 0;
    System_Nullable_float____ctor(
      (System_Nullable_float__o)&v61,
      y,
      (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
    this->fields.defaultArrangementPitchY = v61;
  }
  scrollBar = (__int64)this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_47;
  scrollBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollBar, 0);
  if ( !scrollBar )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollBar, 0, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v17, v18);
  scrollBar = (__int64)AssetManager__getAssetStorage((System_String_o *)StringLiteral_9287/*"MapShortcut/DownloadMapShortcut"*/, 0);
  if ( !scrollBar )
    goto LABEL_47;
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              (AssetData_o *)scrollBar,
                              (System_String_o *)StringLiteral_5546/*"DownloadMapShortcutAtlas"*/,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
  scrollBar = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__58532980, 0, 0);
  Component_object = 0;
  if ( (scrollBar & 1) != 0 )
  {
    if ( !Object_object__58532980 )
      goto LABEL_47;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_object__58532980,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14, v22);
  scrollBar = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BlankEarthSpotNavimenuMaster___);
  if ( !scrollBar
    || (EnableShortcutButtons = BlankEarthSpotNavimenuMaster__GetEnableShortcutButtons(
                                  (BlankEarthSpotNavimenuMaster_o *)scrollBar,
                                  0),
        scrollBar = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___),
        !EnableShortcutButtons) )
  {
LABEL_47:
    sub_2213CDC(scrollBar, v14);
  }
  if ( SLODWORD(EnableShortcutButtons->max_length) >= 1 )
  {
    v25 = (DataMasterBase_TMaster__TEntity__PKType__o *)scrollBar;
    v26 = 0;
    do
    {
      v27 = sub_2213CCC(BlankEarthShortcutButtonListViewManager___c__DisplayClass18_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v27, 0);
      if ( !v27 )
        goto LABEL_47;
      *(_QWORD *)(v27 + 32) = this;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v27 + 32), (int32_t)this, v28, v29, v30, v31, v32, v33);
      if ( (unsigned int)v26 >= LODWORD(EnableShortcutButtons->max_length) )
        sub_2213CE4(scrollBar);
      *(_DWORD *)(v27 + 16) = v26;
      v34 = EnableShortcutButtons->m_Items[v26];
      if ( !v34 || !v25 )
        goto LABEL_47;
      scrollBar = DataMasterBase_object__object__int___TryGetEntity(
                    v25,
                    (Il2CppObject **)(v27 + 24),
                    v34->fields.blankEarthSpotId,
                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
      if ( (scrollBar & 1) != 0 )
      {
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v36 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          v36,
          (Il2CppObject *)v27,
          Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass18_0__CreateList_b__0__,
          0);
        v37 = (BlankEarthShortcutButtonListViewItem_o *)sub_2213CCC(BlankEarthShortcutButtonListViewItem_TypeInfo);
        BlankEarthShortcutButtonListViewItem___ctor(
          v37,
          v34,
          v26,
          commonUIAtlas,
          (UIAtlas_o *)Component_object,
          v36,
          v38);
        if ( !itemList )
          goto LABEL_47;
        items = itemList->fields._items;
        v46 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          goto LABEL_47;
        size = itemList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v37,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
        }
        else
        {
          v48 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v48[4] = (Il2CppClass *)v37;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v48 + 4), (int32_t)v37, v39, v40, v41, v42, v43, v44);
        }
      }
    }
    while ( ++v26 < SLODWORD(EnableShortcutButtons->max_length) );
  }
  v49 = this->fields.itemList;
  if ( !v49 )
    goto LABEL_47;
  v50 = this->fields.seed;
  if ( !v50 )
    goto LABEL_47;
  v51 = v49->fields._size;
  if ( v51 <= 6 )
  {
    p_defaultArrangementPitchY = (System_Nullable_float__o)&this->fields.defaultArrangementPitchY;
    Value = System_Nullable_float___get_Value(
              p_defaultArrangementPitchY,
              (const MethodInfo_45E6930 *)Method_System_Nullable_float__get_Value__);
  }
  else
  {
    Value = this->fields.overWriteArrangementPitchY;
  }
  scrollBar = (__int64)this->fields.listViewGrid;
  v50->fields.arrangementPich.fields.y = Value;
  if ( !scrollBar )
    goto LABEL_47;
  scrollBar = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)scrollBar, 0);
  v54 = v51 <= 6;
  v55 = (UnityEngine_Transform_o *)scrollBar;
  if ( v54 )
  {
    if ( !byte_5969AE5 )
    {
      scrollBar = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE5 = 1;
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
  if ( !v55 )
    goto LABEL_47;
  v62.fields.x = p_oneVector->fields.x;
  v62.fields.y = *p_y;
  v62.fields.z = *p_z;
  UnityEngine_Transform__set_localScale(v55, v62, 0);
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
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *current; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_List_GameObject__o *v9; // x8
  int32_t size; // w2
  int v11; // w9
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596CE2A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CE2A = 1;
  }
  spotEffectList = (System_Collections_Generic_List_object__o *)this->fields.spotEffectList;
  memset(&v12, 0, sizeof(v12));
  if ( spotEffectList && spotEffectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      spotEffectList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v12.fields._current;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
      UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v9 = this->fields.spotEffectList;
    if ( !v9 )
      sub_2213CDC(v7, v8);
    size = v9->fields._size;
    v11 = v9->fields._version + 1;
    v9->fields._size = 0;
    v9->fields._version = v11;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v9->fields._items, 0, size, 0);
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
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *object; // x22
  _BOOL8 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  System_Action_o *v16; // x1
  BlankEarth_o *blankEarth; // x20
  System_Action_o *v18; // x21
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596CE2B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__23_0__);
    sub_2213A60(&Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__23_1__);
    sub_2213A60(&Method_System_Linq_Enumerable_Last_BlankEarthShortcutButtonListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor___91640824);
    sub_2213A60(&System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CE2B = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0) <= 0 )
  {
    blankEarth = this->fields.blankEarth;
    v18 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v18,
      (Il2CppObject *)this,
      Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__23_0__,
      0);
    if ( blankEarth )
    {
      BlankEarth__ExecuteAfterStartUpScaling(blankEarth, v18, 0);
      return;
    }
LABEL_18:
    sub_2213CDC(v7, v8);
  }
  ObjectList = (System_Collections_Generic_IEnumerable_T__o *)BlankEarthShortcutButtonListViewManager__get_ObjectList(
                                                                this,
                                                                v3);
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor_71841080(
    v5,
    ObjectList,
    (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor___91640824);
  v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__23_1__, 0);
  if ( !v5 )
    goto LABEL_18;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    v5,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__) )
  {
    current = v19.fields._current;
    object = System_Linq_Enumerable__Last_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v5,
               (const MethodInfo_3883CD8 *)Method_System_Linq_Enumerable_Last_BlankEarthShortcutButtonListViewObject___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
    v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, (UnityEngine_Object_o *)object, 0);
    if ( !current )
      sub_2213CDC(v13, v14);
    if ( v13 )
      v16 = v6;
    else
      v16 = 0;
    BlankEarthShortcutButtonListViewObject__SetEntryAnim((BlankEarthShortcutButtonListViewObject_o *)current, v16, v15);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
}


void BlankEarthShortcutButtonListViewManager__FrameOut(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596CE2C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    byte_596CE2C = 1;
  }
  memset(&v7, 0, sizeof(v7));
  if ( ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0) >= 1 )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)BlankEarthShortcutButtonListViewManager__get_ObjectList(
                                                                this,
                                                                v3);
    if ( !ObjectList )
      sub_2213CDC(0, v5);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v7,
      ObjectList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v7,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__) )
    {
      if ( !v7.fields._current )
        sub_2213CDC(0, v6);
      BlankEarthShortcutButtonListViewObject__FrameOut(
        (BlankEarthShortcutButtonListViewObject_o *)v7.fields._current,
        v6);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v7,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x2
  int32_t id; // w8
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  _BOOL8 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  Il2CppObject *current; // x25
  Il2CppObject *v24; // x0
  __int64 v25; // x1
  WarReleaseEntity_o *OpenEntity; // x0
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  __int64 v29; // x2
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *klass; // x8
  _QWORD *v31; // x0
  System_Reflection_MethodBase_o *v32; // x0
  System_Action_object__o *v33; // x22
  const MethodInfo *v34; // x1
  float moveDefaultTime; // s8
  float moveDistanceMultipleValue; // s9
  BlankEarth_RotateEarthTimeCalculateParam_o *v37; // x23
  System_Collections_Generic_List_object__o *ObjectList; // x23
  System_Predicate_object__o *v39; // x24
  const MethodInfo *v40; // x2
  BlankEarthShortcutButtonListViewObject_o *v41; // x23
  const MethodInfo *v42; // x1
  __int64 v43; // x1
  __int64 v44; // x2
  TerminalPramsManager_c *v45; // x0
  BlankEarth_QAARotateEarthResponse_o *v46; // x19
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596CE28 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
    sub_2213A60(&System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
    sub_2213A60(&Method_BlankEarthShortcutButtonListViewManager_OnClickButton__);
    sub_2213A60(&BlankEarthShortcutButtonListViewObject_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_WarMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WarEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WarEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WarEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Find__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarEntity__GetEnumerator__);
    sub_2213A60(&System_Predicate_BlankEarthShortcutButtonListViewObject__TypeInfo);
    sub_2213A60(&BlankEarth_QAARotateEarthResponse_TypeInfo);
    sub_2213A60(&BlankEarth_RotateEarthTimeCalculateParam_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0__OnClickButton_b__0__);
    sub_2213A60(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0__OnClickButton_b__1__);
    sub_2213A60(&BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0_TypeInfo);
    byte_596CE28 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  v7 = sub_2213CCC(BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_56;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 28) = index;
  if ( !this->fields.itemList )
    return;
  if ( !bSpotEnt )
    goto LABEL_56;
  id = bSpotEnt->fields.id;
  *(_DWORD *)(v7 + 24) = id;
  if ( id == this->fields.goalSpotId )
  {
    v18 = Method_BlankEarthShortcutButtonListViewManager_OnClickButton__;
    if ( (*((_BYTE *)Method_BlankEarthShortcutButtonListViewManager_OnClickButton__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_2213A78(Method_BlankEarthShortcutButtonListViewManager_OnClickButton__);
    v19 = (System_Reflection_MethodBase_o *)sub_2213A44(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, 2, 0, 0);
    return;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v16);
  Master_object = (WarMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_56;
  Master_object = (WarMaster_o *)WarMaster__GetEntityList(Master_object, 0);
  if ( !Master_object )
    goto LABEL_56;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_WarEntity__GetEnumerator__);
  v48 = v47;
  v47.fields._list = 0;
  *(_QWORD *)&v47.fields._index = &v48;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v48,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_WarEntity__MoveNext__);
    if ( !v20 )
      break;
    current = v48.fields._current;
    if ( !v48.fields._current )
      sub_2213CDC(v20, v21);
    if ( HIDWORD(v48.fields._current[7].monitor) == bSpotEnt->fields.id )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21, v22);
      v24 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarReleaseMaster___);
      if ( !v24 )
        sub_2213CDC(0, v25);
      OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)v24, (int32_t)current[1].klass, 0);
      if ( OpenEntity )
      {
        if ( WarReleaseEntity__IsClose(OpenEntity, 0) )
        {
          v27 = Method_BlankEarthShortcutButtonListViewManager_OnClickButton__;
          if ( (*((_BYTE *)Method_BlankEarthShortcutButtonListViewManager_OnClickButton__ + 83) & 2) != 0 )
            v27 = (_QWORD *)sub_2213A78(Method_BlankEarthShortcutButtonListViewManager_OnClickButton__);
          v28 = (System_Reflection_MethodBase_o *)sub_2213A44(v27, v27[4]);
          OverwriteAssetSoundName__PlaySystemSe(v28, 2, 0, 0);
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v48,
            (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_WarEntity__Dispose__);
          return;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v48,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_WarEntity__Dispose__);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v9, v29);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  Master_object = (WarMaster_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v9, v29);
    Master_object = (WarMaster_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Master_object[2].fields.list->klass;
  if ( !klass )
    goto LABEL_56;
  Master_object = (WarMaster_o *)klass->_2.genericContainerHandle;
  if ( !Master_object )
    goto LABEL_56;
  TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)Master_object, 0, 0);
  v31 = Method_BlankEarthShortcutButtonListViewManager_OnClickButton__;
  if ( (*((_BYTE *)Method_BlankEarthShortcutButtonListViewManager_OnClickButton__ + 83) & 2) != 0 )
    v31 = (_QWORD *)sub_2213A78(Method_BlankEarthShortcutButtonListViewManager_OnClickButton__);
  v32 = (System_Reflection_MethodBase_o *)sub_2213A44(v31, v31[4]);
  OverwriteAssetSoundName__PlaySystemSe(v32, 0, 0, 0);
  v33 = (System_Action_object__o *)sub_2213CCC(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
  System_Action_object____ctor(
    v33,
    (Il2CppObject *)v7,
    Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0__OnClickButton_b__0__,
    0);
  Master_object = (WarMaster_o *)this->fields.blankEarth;
  if ( !Master_object )
    goto LABEL_56;
  BlankEarth__SaveSpotRotation((BlankEarth_o *)Master_object, bSpotEnt, 0);
  if ( !bSpotEnt->fields.onObjectType )
  {
    moveDefaultTime = this->fields.moveDefaultTime;
    moveDistanceMultipleValue = this->fields.moveDistanceMultipleValue;
    v37 = (BlankEarth_RotateEarthTimeCalculateParam_o *)sub_2213CCC(BlankEarth_RotateEarthTimeCalculateParam_TypeInfo);
    BlankEarth_RotateEarthTimeCalculateParam___ctor(v37, moveDefaultTime, moveDistanceMultipleValue, 0);
    Master_object = (WarMaster_o *)this->fields.blankEarth;
    if ( !Master_object )
      goto LABEL_56;
    BlankEarth__RotateEarthTowardsSpot(
      (BlankEarth_o *)Master_object,
      bSpotEnt,
      this->fields.spotMoveTime,
      this->fields.spotMoveEasingType,
      1,
      (System_Action_BlankEarth_QAARotateEarthResponse__o *)v33,
      v37,
      0);
  }
  if ( (ObjectList = (System_Collections_Generic_List_object__o *)BlankEarthShortcutButtonListViewManager__get_ObjectList(
                                                                    this,
                                                                    v34),
        v39 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_BlankEarthShortcutButtonListViewObject__TypeInfo),
        System_Predicate_object____ctor(
          v39,
          (Il2CppObject *)v7,
          Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0__OnClickButton_b__1__,
          0),
        !ObjectList)
    || (v41 = (BlankEarthShortcutButtonListViewObject_o *)System_Collections_Generic_List_object___Find(
                                                            ObjectList,
                                                            (System_Predicate_T__o *)v39,
                                                            (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Find__)) == 0
    && (v41 = (BlankEarthShortcutButtonListViewObject_o *)sub_2213CCC(BlankEarthShortcutButtonListViewObject_TypeInfo),
        BlankEarthShortcutButtonListViewObject___ctor(v41, v42),
        !v41)
    || (Master_object = (WarMaster_o *)v41->fields.itemDraw) == 0 )
  {
LABEL_56:
    sub_2213CDC(Master_object, v9);
  }
  BlankEarthShortcutButtonListViewItemDraw__SetShortcutButtonEnable(
    (BlankEarthShortcutButtonListViewItemDraw_o *)Master_object,
    0,
    v40);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v43, v44);
  if ( !byte_596CEAE )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CEAE = 1;
  }
  v45 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v43, v44);
    v45 = TerminalPramsManager_TypeInfo;
  }
  v45->static_fields->_IsBlankEarthShortcutMoving_k__BackingField = 1;
  this->fields.goalSpotId = *(_DWORD *)(v7 + 24);
  if ( bSpotEnt->fields.onObjectType )
  {
    v46 = (BlankEarth_QAARotateEarthResponse_o *)sub_2213CCC(BlankEarth_QAARotateEarthResponse_TypeInfo);
    BlankEarth_QAARotateEarthResponse___ctor(v46, 0, 0);
    ActionExtensions__Call_object_(
      (System_Action_T__o *)v33,
      (Il2CppObject *)v46,
      (const MethodInfo_36FFECC *)Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
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
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596CE2D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    byte_596CE2D = 1;
  }
  memset(&v7, 0, sizeof(v7));
  if ( ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0) >= 1 )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)BlankEarthShortcutButtonListViewManager__get_ObjectList(
                                                                this,
                                                                v3);
    if ( !ObjectList )
      sub_2213CDC(0, v5);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v7,
      ObjectList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v7,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__) )
    {
      if ( !v7.fields._current )
        sub_2213CDC(0, v6);
      BlankEarthShortcutButtonListViewObject__QuickFrameOut(
        (BlankEarthShortcutButtonListViewObject_o *)v7.fields._current,
        v6);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v7,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
  }
}


void BlankEarthShortcutButtonListViewManager__SetAllButtonsClickable(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  BlankEarthShortcutButtonListViewItemDraw_o *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  __int64 v8; // [xsp+8h] [xbp-48h]
  System_Collections_Generic_List_Enumerator_object__o *v9; // [xsp+10h] [xbp-40h]
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596CE2E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    byte_596CE2E = 1;
  }
  memset(&v10, 0, sizeof(v10));
  this->fields.goalSpotId = 0;
  ObjectList = (System_Collections_Generic_List_object__o *)BlankEarthShortcutButtonListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    ObjectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
  v8 = 0;
  v9 = &v10;
  while ( 1 )
  {
    v5 = (BlankEarthShortcutButtonListViewItemDraw_o *)System_Collections_Generic_List_Enumerator_object___MoveNext(
                                                         &v10,
                                                         (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__);
    if ( ((unsigned __int8)v5 & 1) == 0 )
      break;
    if ( !v10.fields._current
      || (v5 = *(BlankEarthShortcutButtonListViewItemDraw_o **)((char *)&v10.fields._current->klass
                                                              + (unsigned __int64)&qword_A8)) == 0 )
    {
      sub_2213CDC(v5, v6);
    }
    BlankEarthShortcutButtonListViewItemDraw__SetShortcutButtonEnable(v5, 1, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
}


void BlankEarthShortcutButtonListViewManager__SetObjectItem(
        BlankEarthShortcutButtonListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10

  if ( (byte_596CE29 & 1) == 0 )
  {
    this = (BlankEarthShortcutButtonListViewManager_o *)sub_2213A60(&BlankEarthShortcutButtonListViewObject_TypeInfo);
    byte_596CE29 = 1;
  }
  if ( !obj
    || (naturalAligment = BlankEarthShortcutButtonListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (BlankEarthShortcutButtonListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != BlankEarthShortcutButtonListViewObject_TypeInfo )
  {
    sub_2213CDC(this, obj);
  }
  BlankEarthShortcutButtonListViewObject__SetupDisp(
    (BlankEarthShortcutButtonListViewObject_o *)obj,
    (const MethodInfo *)obj);
}


// local variable allocation has failed, the output may be wrong!
void BlankEarthShortcutButtonListViewManager__SetTouchEnable(
        BlankEarthShortcutButtonListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *blockMask; // x21
  int v6; // w8
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *v9; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_Object_o *blockMaskPrefab; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *v21; // x20
  Il2CppObject *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  UnityEngine_GameObject_o *v29; // x20
  __int64 v30; // x1
  UnityEngine_GameObject_o *v31; // x0

  if ( (byte_596CE2F & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CE2F = 1;
  }
  blockMask = (UnityEngine_Object_o *)this->fields.blockMask;
  v6 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  if ( isEnable )
  {
    if ( !v6 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isEnable, method);
    if ( UnityEngine_Object__op_Inequality(blockMask, 0, 0) )
    {
      v9 = (UnityEngine_Object_o *)this->fields.blockMask;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
      UnityEngine_Object__DestroyImmediate_83460132(v9, 0);
      this->fields.blockMask = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.blockMask, 0, v10, v11, v12, v13, v14, v15);
    }
  }
  else
  {
    if ( !v6 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isEnable, method);
    if ( UnityEngine_Object__op_Equality(blockMask, 0, 0) )
    {
      blockMaskPrefab = (UnityEngine_Object_o *)this->fields.blockMaskPrefab;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
      if ( UnityEngine_Object__op_Inequality(blockMaskPrefab, 0, 0) )
      {
        v21 = (Il2CppObject *)this->fields.blockMaskPrefab;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
        v22 = UnityEngine_Object__Instantiate_object_(
                v21,
                (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
        this->fields.blockMask = (struct UnityEngine_GameObject_o *)v22;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.blockMask,
          (int32_t)v22,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
        GameObjectExtensions__SafeSetParent(
          this->fields.blockMask,
          (UnityEngine_Component_o *)this->fields.blockMaskPanel,
          0);
        v29 = this->fields.blockMask;
        if ( !byte_5969AE0 )
        {
          sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE0 = 1;
        }
        GameObjectExtensions__SetLocalPosition(v29, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        v31 = this->fields.blockMask;
        if ( !v31 )
          sub_2213CDC(0, v30);
        UnityEngine_GameObject__SetActive(v31, 1, 0);
      }
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

  if ( (byte_596CE31 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__23_2__);
    byte_596CE31 = 1;
  }
  BlankEarthShortcutButtonListViewManager__SetAllButtonsClickable(this, method);
  blankEarth = this->fields.blankEarth;
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__23_2__, 0);
  if ( !blankEarth )
    sub_2213CDC(v5, v6);
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

  if ( (byte_596CE26 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BlankEarthShortcutButtonListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CE26 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthShortcutButtonListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_2213CDC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
    sub_2213CDC(this, method);
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
  System_Collections_Generic_List_GameObject__c *klass; // x8
  __int64 v7; // x2
  struct BlankEarthShortcutButtonListViewManager_o *_4__this; // x8
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *Point; // x20
  __int64 v12; // x2
  System_Collections_Generic_List_GameObject__c *v13; // x8
  struct BlankEarthShortcutButtonListViewManager_o *v14; // x8
  struct BlankEarthShortcutButtonListViewManager_o *v15; // x8
  UnityEngine_Object_o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  struct BlankEarth_o *v19; // x8
  Il2CppObject *shortcutSpotEffect; // x20
  struct BlankEarthShortcutButtonListViewManager_o *v21; // x8
  UnityEngine_GameObject_o *v22; // x20
  struct BlankEarthShortcutButtonListViewManager_o *v23; // x8
  UnityEngine_Object_o *v24; // x21
  UnityEngine_Component_o *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct BlankEarthShortcutButtonListViewManager_o *v32; // x8
  intptr_t m_CachedPtr; // x8
  _QWORD *v34; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v36; // x8
  System_Action_o *_9__2; // x22
  UnityEngine_MonoBehaviour_o *v38; // x20
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o SonarPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596CE32 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0__OnClickButton_b__2__);
    byte_596CE32 = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, response, method);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  blankEarth = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, response, method);
    blankEarth = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = blankEarth->fields.itemGetEffectInstances->klass;
  if ( !klass )
    goto LABEL_64;
  blankEarth = *(ScrTerminalListTop_o **)&klass->_2.element_size;
  if ( !blankEarth )
    goto LABEL_64;
  ScrTerminalListTop__SetAllBlankEarthShortcutButtonsClickable(blankEarth, 0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, response, v7);
  if ( !byte_596CEAE )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CEAE = 1;
  }
  blankEarth = (ScrTerminalListTop_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, response, v7);
    blankEarth = (ScrTerminalListTop_o *)TerminalPramsManager_TypeInfo;
  }
  BYTE4(blankEarth->fields.itemGetEffectInstances[13].fields._syncRoot) = 0;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  blankEarth = (ScrTerminalListTop_o *)UnityEngine_Object__op_Equality(Point, 0, 0);
  if ( ((unsigned __int8)blankEarth & 1) != 0 )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, response, v12);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    blankEarth = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, response, v12);
      blankEarth = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    }
    v13 = blankEarth->fields.itemGetEffectInstances->klass;
    if ( v13 )
    {
      blankEarth = (ScrTerminalListTop_o *)v13->_2.genericContainerHandle;
      if ( blankEarth )
      {
        TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)blankEarth, 1, 0);
        return;
      }
    }
    goto LABEL_64;
  }
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_64;
  blankEarth = (ScrTerminalListTop_o *)v14->fields.spotEffectList;
  if ( !blankEarth )
    goto LABEL_64;
  if ( SLODWORD(blankEarth->fields.m_CancellationTokenSource) >= 2 )
  {
    blankEarth = (ScrTerminalListTop_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)blankEarth,
                                           0,
                                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    v15 = this->fields.__4__this;
    if ( !v15 )
      goto LABEL_64;
    v16 = (UnityEngine_Object_o *)blankEarth;
    blankEarth = (ScrTerminalListTop_o *)v15->fields.spotEffectList;
    if ( !blankEarth )
      goto LABEL_64;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)blankEarth,
      0,
      (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_GameObject__RemoveAt__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
    UnityEngine_Object__Destroy_83459800(v16, 0);
    v14 = this->fields.__4__this;
    if ( !v14 )
      goto LABEL_64;
  }
  v19 = v14->fields.blankEarth;
  if ( !v19 )
    goto LABEL_64;
  shortcutSpotEffect = (Il2CppObject *)v19->fields.shortcutSpotEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, response, v12);
  blankEarth = (ScrTerminalListTop_o *)UnityEngine_Object__Instantiate_object_(
                                         shortcutSpotEffect,
                                         (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v21 = this->fields.__4__this;
  if ( !v21 )
    goto LABEL_64;
  v22 = (UnityEngine_GameObject_o *)blankEarth;
  blankEarth = (ScrTerminalListTop_o *)v21->fields.blankEarth;
  if ( !blankEarth )
    goto LABEL_64;
  blankEarth = (ScrTerminalListTop_o *)BlankEarth__GetPoint((BlankEarth_o *)blankEarth, this->fields.spotId, 0, 0);
  v23 = this->fields.__4__this;
  if ( !v23 )
    goto LABEL_64;
  v24 = (UnityEngine_Object_o *)blankEarth;
  blankEarth = (ScrTerminalListTop_o *)v23->fields.blankEarth;
  if ( !blankEarth )
    goto LABEL_64;
  v25 = (UnityEngine_Component_o *)BlankEarth__GetPoint((BlankEarth_o *)blankEarth, this->fields.spotId, 0, 0);
  GameObjectExtensions__SetParent(v22, v25, 0);
  GameObjectExtensions__ResetTransform(v22, 0);
  if ( !v22 )
    goto LABEL_64;
  blankEarth = (ScrTerminalListTop_o *)UnityEngine_GameObject__get_transform(v22, 0);
  if ( !blankEarth )
    goto LABEL_64;
  v45.fields.y = 0.0;
  v45.fields.z = 0.0;
  v45.fields.x = -90.0;
  UnityEngine_Transform__Rotate_83494216((UnityEngine_Transform_o *)blankEarth, v45, 0);
  blankEarth = (ScrTerminalListTop_o *)UnityEngine_Object__op_Inequality(v24, 0, 0);
  if ( ((unsigned __int8)blankEarth & 1) != 0 )
  {
    if ( !v24 )
      goto LABEL_64;
    blankEarth = (ScrTerminalListTop_o *)BlankEarthPoint__HasSonarPoint(
                                           (BlankEarthPoint_o *)v24,
                                           (const MethodInfo *)response);
    if ( ((unsigned __int8)blankEarth & 1) != 0 )
    {
      SonarPosition = BlankEarthPoint__GetSonarPosition((BlankEarthPoint_o *)v24, (const MethodInfo *)response);
      GameObjectExtensions__SetLocalPosition(v22, SonarPosition, 0);
    }
  }
  v32 = this->fields.__4__this;
  if ( !v32 )
    goto LABEL_64;
  blankEarth = (ScrTerminalListTop_o *)v32->fields.spotEffectList;
  if ( !blankEarth )
    goto LABEL_64;
  m_CachedPtr = blankEarth->fields.m_CachedPtr;
  v34 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(blankEarth->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_64;
  m_CancellationTokenSource_low = SLODWORD(blankEarth->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)blankEarth,
      (Il2CppObject *)v22,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
    LODWORD(blankEarth->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v36 + 32) = v22;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 32), (int32_t)v22, v26, v27, v28, v29, v30, v31);
  }
  _9__2 = this->fields.__9__2;
  v38 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0__OnClickButton_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v39, v40, v41, v42, v43, v44);
  }
  blankEarth = (ScrTerminalListTop_o *)BasicHelper__DelayCall(0.01, _9__2, 1, 0);
  if ( !v38 )
LABEL_64:
    sub_2213CDC(blankEarth, response);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756(v38, (System_Collections_IEnumerator_o *)blankEarth, 0);
}


bool BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0___OnClickButton_b__1(
        BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0_o *this,
        BlankEarthShortcutButtonListViewObject_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_2213CDC(this, 0);
  return ListViewObject__get_Index((ListViewObject_o *)n, 0) == this->fields.index;
}


void BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0___OnClickButton_b__2(
        BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0_o *v2; // x19
  struct BlankEarthShortcutButtonListViewManager_o *_4__this; // x8
  __int64 v4; // x2
  __int64 v5; // x8

  v2 = this;
  if ( (byte_596CE33 & 1) == 0 )
  {
    this = (BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0_o *)sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596CE33 = 1;
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
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v4);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  this = (BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v4);
    this = (BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0_o *)TerminalSceneComponent_TypeInfo;
  }
  v5 = **((_QWORD **)this + 23);
  if ( !v5 || (this = *(BlankEarthShortcutButtonListViewManager___c__DisplayClass19_0_o **)(v5 + 240)) == 0 )
LABEL_15:
    sub_2213CDC(this, method);
  TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)this, 1, 0);
}