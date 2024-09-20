void __fastcall BlankEarthShortcutButtonListViewManager___ctor(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A57CBF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4A57CBF = 1;
  }
  this->fields.spotMoveEasingType = 15;
  *(_QWORD *)&this->fields.spotMoveTime = 0x3D23D70A3FC00000LL;
  this->fields.moveDistanceMultipleValue = 0.18;
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.spotEffectList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.spotEffectList, (int32_t)v3, v4, v5);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall BlankEarthShortcutButtonListViewManager__CreateList(
        BlankEarthShortcutButtonListViewManager_o *this,
        BlankEarth_o *blankEarth,
        UIAtlas_o *commonUIAtlas,
        const MethodInfo *method)
{
  int32_t v6; // w2
  int32_t v7; // w3
  const MethodInfo *v8; // x2
  __int64 v9; // x1
  UnityEngine_Component_o *scrollBar; // x0
  Il2CppObject *Object_object__48635516; // x22
  Il2CppObject *Component_object; // x21
  BlankEarthSpotNavimenuEntity_array *EnableShortcutButtons; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x23
  int32_t v15; // w24
  __int64 v16; // x26
  int32_t v17; // w2
  int32_t v18; // w3
  BlankEarthSpotNavimenuEntity_o *v19; // x27
  System_Collections_Generic_List_object__o *itemList; // x25
  System_Action_o *v21; // x28
  BlankEarthShortcutButtonListViewItem_o *v22; // x26
  const MethodInfo *v23; // x6
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_4A57CB6 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&BlankEarthShortcutButtonListViewItem_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_BlankEarthSpotNavimenuMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0__CreateList_b__0__);
    sub_1B885B0(&BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0_TypeInfo);
    sub_1B885B0(&StringLiteral_8876/*"MapShortcut/DownloadMapShortcut"*/);
    sub_1B885B0(&StringLiteral_5385/*"DownloadMapShortcutAtlas"*/);
    byte_4A57CB6 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.blankEarth = blankEarth;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.blankEarth, (int32_t)blankEarth, v6, v7);
  BlankEarthShortcutButtonListViewManager__SetTouchEnable(this, 0, v8);
  scrollBar = (UnityEngine_Component_o *)this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_32;
  scrollBar = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(scrollBar, 0LL);
  if ( !scrollBar )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollBar, 0, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  scrollBar = (UnityEngine_Component_o *)AssetManager__getAssetStorage((System_String_o *)StringLiteral_8876/*"MapShortcut/DownloadMapShortcut"*/, 0LL);
  if ( !scrollBar )
    goto LABEL_32;
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              (AssetData_o *)scrollBar,
                              (System_String_o *)StringLiteral_5385/*"DownloadMapShortcutAtlas"*/,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  scrollBar = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Object_object__48635516,
                                           0LL,
                                           0LL);
  Component_object = 0LL;
  if ( ((unsigned __int8)scrollBar & 1) != 0 )
  {
    if ( !Object_object__48635516 )
      goto LABEL_32;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_object__48635516,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  scrollBar = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BlankEarthSpotNavimenuMaster___);
  if ( !scrollBar
    || (EnableShortcutButtons = BlankEarthSpotNavimenuMaster__GetEnableShortcutButtons(
                                  (BlankEarthSpotNavimenuMaster_o *)scrollBar,
                                  0LL),
        scrollBar = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___),
        !EnableShortcutButtons) )
  {
LABEL_32:
    sub_1B8880C(scrollBar, v9);
  }
  if ( (int)EnableShortcutButtons->max_length >= 1 )
  {
    v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)scrollBar;
    v15 = 0;
    do
    {
      v16 = sub_1B887FC(BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v16, 0LL);
      if ( !v16 )
        goto LABEL_32;
      *(_QWORD *)(v16 + 32) = this;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 32), (int32_t)this, v17, v18);
      if ( v15 >= EnableShortcutButtons->max_length )
        sub_1B88814(scrollBar, v9);
      v19 = EnableShortcutButtons->m_Items[v15];
      *(_DWORD *)(v16 + 16) = v15;
      if ( !v19 || !v14 )
        goto LABEL_32;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             v14,
             (Il2CppObject **)(v16 + 24),
             v19->fields.blankEarthSpotId,
             (const MethodInfo_311D988 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__) )
      {
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v21 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(
          v21,
          (Il2CppObject *)v16,
          Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0__CreateList_b__0__,
          0LL);
        v22 = (BlankEarthShortcutButtonListViewItem_o *)sub_1B887FC(BlankEarthShortcutButtonListViewItem_TypeInfo);
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
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v22,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v22;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v22, v24, v25);
        }
      }
    }
    while ( ++v15 < (signed int)EnableShortcutButtons->max_length );
  }
  scrollBar = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollBar )
    goto LABEL_32;
  UIScrollView__ResetPosition((UIScrollView_o *)scrollBar, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall BlankEarthShortcutButtonListViewManager__DestroyList(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  BlankEarthShortcutButtonListViewManager__DestroyShortcutButtonSpotEffect(this, v3);
}


void __fastcall BlankEarthShortcutButtonListViewManager__DestroyShortcutButtonSpotEffect(
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

  if ( (byte_4A57CB9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57CB9 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  spotEffectList = (System_Collections_Generic_List_object__o *)this->fields.spotEffectList;
  if ( spotEffectList && spotEffectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      spotEffectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v10.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v7 = this->fields.spotEffectList;
    if ( !v7 )
      sub_1B8880C(v5, v6);
    size = v7->fields._size;
    v9 = v7->fields._version + 1;
    v7->fields._size = 0;
    v7->fields._version = v9;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0LL);
  }
}


void __fastcall BlankEarthShortcutButtonListViewManager__FrameIn(
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
  const MethodInfo *v17; // x2
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A57CBA & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_0__);
    sub_1B885B0(&Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_1__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Last_BlankEarthShortcutButtonListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor___76025296);
    sub_1B885B0(&System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57CBA = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL) <= 0 )
  {
    blankEarth = this->fields.blankEarth;
    v16 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v16,
      (Il2CppObject *)this,
      Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_0__,
      0LL);
    if ( blankEarth )
    {
      BlankEarth__ExecuteAfterStartUpScaling(blankEarth, v16, v17);
      return;
    }
LABEL_19:
    sub_1B8880C(v7, v8);
  }
  ObjectList = (System_Collections_Generic_IEnumerable_T__o *)BlankEarthShortcutButtonListViewManager__get_ObjectList(
                                                                this,
                                                                v3);
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor_55562536(
    v5,
    ObjectList,
    (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor___76025296);
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_1__, 0LL);
  if ( !v5 )
    goto LABEL_19;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    v5,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__) )
  {
    current = v18.fields._current;
    object = System_Linq_Enumerable__Last_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v5,
               (const MethodInfo_2EA59EC *)Method_System_Linq_Enumerable_Last_BlankEarthShortcutButtonListViewObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, (UnityEngine_Object_o *)object, 0LL);
    if ( !current )
      sub_1B8880C(v11, v12);
    if ( v11 )
      v14 = v6;
    else
      v14 = 0LL;
    BlankEarthShortcutButtonListViewObject__SetEntryAnim((BlankEarthShortcutButtonListViewObject_o *)current, v14, v13);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
}


void __fastcall BlankEarthShortcutButtonListViewManager__FrameOut(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A57CBB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    byte_4A57CBB = 1;
  }
  memset(&v7, 0, sizeof(v7));
  if ( ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL) >= 1 )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)BlankEarthShortcutButtonListViewManager__get_ObjectList(
                                                                this,
                                                                v3);
    if ( !ObjectList )
      sub_1B8880C(0LL, v5);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v7,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v7,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__) )
    {
      if ( !v7.fields._current )
        sub_1B8880C(0LL, v6);
      BlankEarthShortcutButtonListViewObject__FrameOut(
        (BlankEarthShortcutButtonListViewObject_o *)v7.fields._current,
        v6);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v7,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
  }
}


void __fastcall BlankEarthShortcutButtonListViewManager__OnClickButton(
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
  int32_t id; // w8
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  WarReleaseEntity_o *v15; // x22
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x26
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  WarReleaseEntity_o *OpenEntity; // x0
  __int64 v22; // x1
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  System_Collections_Generic_Dictionary_string__DataEntityBase__c *klass; // x8
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  System_Action_object__o *v28; // x22
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x1
  Il2CppClass *v31; // d8
  Il2CppObject *v32; // x23
  const MethodInfo *v33; // x6
  System_Collections_Generic_List_object__o *ObjectList; // x23
  System_Predicate_object__o *v35; // x24
  const MethodInfo *v36; // x2
  BlankEarthShortcutButtonListViewObject_o *v37; // x23
  const MethodInfo *v38; // x1
  TerminalPramsManager_c *v39; // x0
  __int64 v40; // x19
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A57CB7 & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
    sub_1B885B0(&System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
    sub_1B885B0(&Method_BlankEarthShortcutButtonListViewManager_OnClickButton__);
    sub_1B885B0(&BlankEarthShortcutButtonListViewObject_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_WarMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Find__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarEntity__GetEnumerator__);
    sub_1B885B0(&System_Predicate_BlankEarthShortcutButtonListViewObject__TypeInfo);
    sub_1B885B0(&BlankEarth_QAARotateEarthResponse_TypeInfo);
    sub_1B885B0(&BlankEarth_RotateEarthTimeCalculateParam_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__0__);
    sub_1B885B0(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__1__);
    sub_1B885B0(&BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_TypeInfo);
    byte_4A57CB7 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v7 = sub_1B887FC(BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_60;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_DWORD *)(v7 + 28) = index;
  if ( !this->fields.itemList )
    return;
  if ( !bSpotEnt )
    goto LABEL_60;
  id = bSpotEnt->fields.id;
  *(_DWORD *)(v7 + 24) = id;
  if ( id == this->fields.goalSpotId )
  {
    v13 = Method_BlankEarthShortcutButtonListViewManager_OnClickButton__;
    if ( (*((_BYTE *)Method_BlankEarthShortcutButtonListViewManager_OnClickButton__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_1B885C8(Method_BlankEarthShortcutButtonListViewManager_OnClickButton__);
    v14 = (System_Reflection_MethodBase_o *)sub_1B88594(v13, v13[4]);
    OverwriteAssetSoundName__PlaySystemSe(v14, 2, 0LL);
    return;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (WarMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_60;
  Master_object = (WarMaster_o *)WarMaster__GetEntityList(Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_WarEntity__GetEnumerator__);
  v42 = v41;
  v15 = 0LL;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_WarEntity__MoveNext__);
    if ( !v16 )
      break;
    current = v42.fields._current;
    if ( !v42.fields._current )
      sub_1B8880C(v16, v17);
    if ( HIDWORD(v42.fields._current[7].monitor) == bSpotEnt->fields.id )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v19 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarReleaseMaster___);
      if ( !v19 )
        sub_1B8880C(0LL, v20);
      OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)v19, (int32_t)current[1].klass, 0LL);
      if ( OpenEntity )
        v15 = OpenEntity;
      if ( OpenEntity )
      {
        if ( !v15 )
          sub_1B8880C(OpenEntity, v22);
        if ( WarReleaseEntity__IsClose(v15, 0LL) )
        {
          v23 = Method_BlankEarthShortcutButtonListViewManager_OnClickButton__;
          if ( (*((_BYTE *)Method_BlankEarthShortcutButtonListViewManager_OnClickButton__ + 83) & 2) != 0 )
            v23 = (_QWORD *)sub_1B885C8(Method_BlankEarthShortcutButtonListViewManager_OnClickButton__);
          v24 = (System_Reflection_MethodBase_o *)sub_1B88594(v23, v23[4]);
          OverwriteAssetSoundName__PlaySystemSe(v24, 2, 0LL);
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v42,
            (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_WarEntity__Dispose__);
          return;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_WarEntity__Dispose__);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
  }
  Master_object = (WarMaster_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_object = (WarMaster_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Master_object[2].fields._lookup->klass;
  if ( !klass )
    goto LABEL_60;
  Master_object = *(WarMaster_o **)&klass->_2.instance_size;
  if ( !Master_object )
    goto LABEL_60;
  TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)Master_object, 0, 0LL);
  v26 = Method_BlankEarthShortcutButtonListViewManager_OnClickButton__;
  if ( (*((_BYTE *)Method_BlankEarthShortcutButtonListViewManager_OnClickButton__ + 83) & 2) != 0 )
    v26 = (_QWORD *)sub_1B885C8(Method_BlankEarthShortcutButtonListViewManager_OnClickButton__);
  v27 = (System_Reflection_MethodBase_o *)sub_1B88594(v26, v26[4]);
  OverwriteAssetSoundName__PlaySystemSe(v27, 0, 0LL);
  v28 = (System_Action_object__o *)sub_1B887FC(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
  System_Action_object____ctor(
    v28,
    (Il2CppObject *)v7,
    Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__0__,
    0LL);
  Master_object = (WarMaster_o *)this->fields.blankEarth;
  if ( !Master_object )
    goto LABEL_60;
  BlankEarth__SaveSpotRotation((BlankEarth_o *)Master_object, bSpotEnt, v29);
  if ( !bSpotEnt->fields.onObjectType )
  {
    v31 = *(Il2CppClass **)&this->fields.moveDefaultTime;
    v32 = (Il2CppObject *)sub_1B887FC(BlankEarth_RotateEarthTimeCalculateParam_TypeInfo);
    System_Object___ctor(v32, 0LL);
    v32[1].klass = v31;
    Master_object = (WarMaster_o *)this->fields.blankEarth;
    if ( !Master_object )
      goto LABEL_60;
    BlankEarth__RotateEarthTowardsSpot(
      (BlankEarth_o *)Master_object,
      bSpotEnt,
      this->fields.spotMoveTime,
      this->fields.spotMoveEasingType,
      1,
      (System_Action_BlankEarth_QAARotateEarthResponse__o *)v28,
      (BlankEarth_RotateEarthTimeCalculateParam_o *)v32,
      v33);
  }
  ObjectList = (System_Collections_Generic_List_object__o *)BlankEarthShortcutButtonListViewManager__get_ObjectList(
                                                              this,
                                                              v30);
  v35 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BlankEarthShortcutButtonListViewObject__TypeInfo);
  System_Predicate_object____ctor(
    v35,
    (Il2CppObject *)v7,
    Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__1__,
    0LL);
  if ( !ObjectList )
    goto LABEL_60;
  Master_object = (WarMaster_o *)System_Collections_Generic_List_object___Find(
                                   ObjectList,
                                   (System_Predicate_T__o *)v35,
                                   (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Find__);
  v37 = (BlankEarthShortcutButtonListViewObject_o *)Master_object;
  if ( !Master_object )
  {
    v37 = (BlankEarthShortcutButtonListViewObject_o *)sub_1B887FC(BlankEarthShortcutButtonListViewObject_TypeInfo);
    BlankEarthShortcutButtonListViewObject___ctor(v37, v38);
  }
  if ( !v37 || (Master_object = (WarMaster_o *)v37->fields.itemDraw) == 0LL )
LABEL_60:
    sub_1B8880C(Master_object, v9);
  BlankEarthShortcutButtonListViewItemDraw__SetShortcutButtonEnable(
    (BlankEarthShortcutButtonListViewItemDraw_o *)Master_object,
    0,
    v36);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57CE2 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57CE2 = 1;
  }
  v39 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v39 = TerminalPramsManager_TypeInfo;
  }
  v39->static_fields->_IsBlankEarthShortcutMoving_k__BackingField = 1;
  this->fields.goalSpotId = *(_DWORD *)(v7 + 24);
  if ( bSpotEnt->fields.onObjectType )
  {
    v40 = sub_1B887FC(BlankEarth_QAARotateEarthResponse_TypeInfo);
    System_Object___ctor((Il2CppObject *)v40, 0LL);
    *(_BYTE *)(v40 + 16) = 0;
    ActionExtensions__Call_object_(
      (System_Action_T__o *)v28,
      (Il2CppObject *)v40,
      (const MethodInfo_2DD5858 *)Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
  }
}


void __fastcall BlankEarthShortcutButtonListViewManager__OnClickListView(
        BlankEarthShortcutButtonListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarthShortcutButtonListViewManager__QuickFrameOut(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A57CBC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    byte_4A57CBC = 1;
  }
  memset(&v7, 0, sizeof(v7));
  if ( ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL) >= 1 )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)BlankEarthShortcutButtonListViewManager__get_ObjectList(
                                                                this,
                                                                v3);
    if ( !ObjectList )
      sub_1B8880C(0LL, v5);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v7,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v7,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__) )
    {
      if ( !v7.fields._current )
        sub_1B8880C(0LL, v6);
      BlankEarthShortcutButtonListViewObject__QuickFrameOut(
        (BlankEarthShortcutButtonListViewObject_o *)v7.fields._current,
        v6);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v7,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
  }
}


void __fastcall BlankEarthShortcutButtonListViewManager__SetAllButtonsClickable(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  BlankEarthShortcutButtonListViewItemDraw_o *monitor; // x0
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A57CBD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    byte_4A57CBD = 1;
  }
  memset(&v9, 0, sizeof(v9));
  this->fields.goalSpotId = 0;
  ObjectList = (System_Collections_Generic_List_object__o *)BlankEarthShortcutButtonListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    ObjectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__);
    if ( !v5 )
      break;
    if ( !v9.fields._current )
      sub_1B8880C(v5, v6);
    monitor = (BlankEarthShortcutButtonListViewItemDraw_o *)v9.fields._current[10].monitor;
    if ( !monitor )
      sub_1B8880C(0LL, v6);
    BlankEarthShortcutButtonListViewItemDraw__SetShortcutButtonEnable(monitor, 1, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
}


void __fastcall BlankEarthShortcutButtonListViewManager__SetObjectItem(
        BlankEarthShortcutButtonListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4A57CB8 & 1) == 0 )
  {
    this = (BlankEarthShortcutButtonListViewManager_o *)sub_1B885B0(&BlankEarthShortcutButtonListViewObject_TypeInfo);
    byte_4A57CB8 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(BlankEarthShortcutButtonListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (BlankEarthShortcutButtonListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != BlankEarthShortcutButtonListViewObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
  }
  BlankEarthShortcutButtonListViewObject__SetupDisp(
    (BlankEarthShortcutButtonListViewObject_o *)obj,
    (const MethodInfo *)obj);
}


void __fastcall BlankEarthShortcutButtonListViewManager__SetTouchEnable(
        BlankEarthShortcutButtonListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *blockMask; // x22
  ServantStatusBattleListViewItem_o *p_blockMask; // x19
  UnityEngine_Object_o *klass; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  UnityEngine_Object_o *blockMaskPrefab; // x21
  Il2CppObject *v11; // x21
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  UnityEngine_GameObject_o *v15; // x20
  __int64 v16; // x1

  if ( (byte_4A57CBE & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57CBE = 1;
  }
  blockMask = (UnityEngine_Object_o *)this->fields.blockMask;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_blockMask = (ServantStatusBattleListViewItem_o *)&this->fields.blockMask;
  if ( isEnable )
  {
    if ( UnityEngine_Object__op_Inequality(blockMask, 0LL, 0LL) )
    {
      klass = (UnityEngine_Object_o *)p_blockMask->klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_69459568(klass, 0LL);
      p_blockMask->klass = 0LL;
      sub_1B88554(p_blockMask, 0, v8, v9);
    }
  }
  else if ( UnityEngine_Object__op_Equality(blockMask, 0LL, 0LL) )
  {
    blockMaskPrefab = (UnityEngine_Object_o *)this->fields.blockMaskPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(blockMaskPrefab, 0LL, 0LL) )
    {
      v11 = (Il2CppObject *)this->fields.blockMaskPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v12 = UnityEngine_Object__Instantiate_object_(
              v11,
              (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      this->fields.blockMask = (struct UnityEngine_GameObject_o *)v12;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.blockMask, (int32_t)v12, v13, v14);
      GameObjectExtensions__SafeSetParent(
        this->fields.blockMask,
        (UnityEngine_Component_o *)this->fields.blockMaskPanel,
        0LL);
      v15 = this->fields.blockMask;
      if ( !byte_4A55CE1 )
      {
        sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE1 = 1;
      }
      GameObjectExtensions__SetLocalPosition(v15, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      if ( !p_blockMask->klass )
        sub_1B8880C(0LL, v16);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)p_blockMask->klass, 1, 0LL);
    }
  }
}


void __fastcall BlankEarthShortcutButtonListViewManager___FrameIn_b__18_0(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BlankEarthShortcutButtonListViewManager__SetTouchEnable(this, 1, v2);
}


void __fastcall BlankEarthShortcutButtonListViewManager___FrameIn_b__18_1(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  BlankEarth_o *blankEarth; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4A57CC0 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_2__);
    byte_4A57CC0 = 1;
  }
  BlankEarthShortcutButtonListViewManager__SetAllButtonsClickable(this, method);
  blankEarth = this->fields.blankEarth;
  v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_2__, 0LL);
  if ( !blankEarth )
    sub_1B8880C(v5, v6);
  BlankEarth__ExecuteAfterStartUpScaling(blankEarth, v4, v7);
}


void __fastcall BlankEarthShortcutButtonListViewManager___FrameIn_b__18_2(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BlankEarthShortcutButtonListViewManager__SetTouchEnable(this, 1, v2);
}


System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__o *__fastcall BlankEarthShortcutButtonListViewManager__get_ObjectList(
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
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A57CB5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BlankEarthShortcutButtonListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57CB5 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthShortcutButtonListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1B8880C(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__o *)v3;
}


void __fastcall BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0___ctor(
        BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0___CreateList_b__0(
        BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1B8880C(this, method);
  BlankEarthShortcutButtonListViewManager__OnClickButton(
    this->fields.__4__this,
    this->fields.itemIndex,
    this->fields.bSpotEnt,
    v2);
}


void __fastcall BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0___ctor(
        BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0___OnClickButton_b__0(
        BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *this,
        BlankEarth_QAARotateEarthResponse_o *response,
        const MethodInfo *method)
{
  ScrTerminalListTop_o *blankEarth; // x0
  QuestRewardTokenAction_c *klass; // x8
  const MethodInfo *v7; // x3
  struct BlankEarthShortcutButtonListViewManager_o *_4__this; // x8
  UnityEngine_Object_o *Point; // x20
  QuestRewardTokenAction_c *v10; // x8
  struct BlankEarthShortcutButtonListViewManager_o *v11; // x8
  struct BlankEarthShortcutButtonListViewManager_o *v12; // x8
  UnityEngine_Object_o *v13; // x20
  struct BlankEarth_o *v14; // x8
  Il2CppObject *shortcutSpotEffect; // x20
  const MethodInfo *v16; // x3
  struct BlankEarthShortcutButtonListViewManager_o *v17; // x8
  UnityEngine_GameObject_o *v18; // x20
  UnityEngine_Component_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  struct BlankEarthShortcutButtonListViewManager_o *v22; // x8
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v26; // x8
  System_Action_o *_9__2; // x22
  UnityEngine_MonoBehaviour_o *v28; // x20
  int32_t v29; // w2
  int32_t v30; // w3
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A57CC1 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__RemoveAt__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__2__);
    byte_4A57CC1 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
  }
  blankEarth = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    blankEarth = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = blankEarth->fields.boardGameTokenAction->klass;
  if ( !klass )
    goto LABEL_58;
  blankEarth = *(ScrTerminalListTop_o **)&klass->_2.static_fields_size;
  if ( !blankEarth )
    goto LABEL_58;
  ScrTerminalListTop__SetAllBlankEarthShortcutButtonsClickable(blankEarth, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57CE2 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57CE2 = 1;
  }
  blankEarth = (ScrTerminalListTop_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    blankEarth = (ScrTerminalListTop_o *)TerminalPramsManager_TypeInfo;
  }
  BYTE4(blankEarth->fields.boardGameTokenAction[4].fields.simpleAnimation) = 0;
  if ( !response )
    goto LABEL_58;
  if ( response->fields._IsInterrupted_k__BackingField )
    return;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_58;
  blankEarth = (ScrTerminalListTop_o *)_4__this->fields.blankEarth;
  if ( !blankEarth )
    goto LABEL_58;
  Point = (UnityEngine_Object_o *)BlankEarth__GetPoint((BlankEarth_o *)blankEarth, this->fields.spotId, 0, v7);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  blankEarth = (ScrTerminalListTop_o *)UnityEngine_Object__op_Equality(Point, 0LL, 0LL);
  if ( ((unsigned __int8)blankEarth & 1) != 0 )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4A5629D )
    {
      sub_1B885B0(&TerminalSceneComponent_TypeInfo);
      byte_4A5629D = 1;
    }
    blankEarth = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      blankEarth = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    }
    v10 = blankEarth->fields.boardGameTokenAction->klass;
    if ( v10 )
    {
      blankEarth = *(ScrTerminalListTop_o **)&v10->_2.instance_size;
      if ( blankEarth )
      {
        TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)blankEarth, 1, 0LL);
        return;
      }
    }
LABEL_58:
    sub_1B8880C(blankEarth, response);
  }
  v11 = this->fields.__4__this;
  if ( !v11 )
    goto LABEL_58;
  blankEarth = (ScrTerminalListTop_o *)v11->fields.spotEffectList;
  if ( !blankEarth )
    goto LABEL_58;
  if ( SLODWORD(blankEarth->fields.m_CancellationTokenSource) >= 2 )
  {
    blankEarth = (ScrTerminalListTop_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)blankEarth,
                                           0,
                                           (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    v12 = this->fields.__4__this;
    if ( !v12 )
      goto LABEL_58;
    v13 = (UnityEngine_Object_o *)blankEarth;
    blankEarth = (ScrTerminalListTop_o *)v12->fields.spotEffectList;
    if ( !blankEarth )
      goto LABEL_58;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)blankEarth,
      0,
      (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_GameObject__RemoveAt__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(v13, 0LL);
    v11 = this->fields.__4__this;
    if ( !v11 )
      goto LABEL_58;
  }
  v14 = v11->fields.blankEarth;
  if ( !v14 )
    goto LABEL_58;
  shortcutSpotEffect = (Il2CppObject *)v14->fields.shortcutSpotEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  blankEarth = (ScrTerminalListTop_o *)UnityEngine_Object__Instantiate_object_(
                                         shortcutSpotEffect,
                                         (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v17 = this->fields.__4__this;
  if ( !v17 )
    goto LABEL_58;
  v18 = (UnityEngine_GameObject_o *)blankEarth;
  blankEarth = (ScrTerminalListTop_o *)v17->fields.blankEarth;
  if ( !blankEarth )
    goto LABEL_58;
  v19 = (UnityEngine_Component_o *)BlankEarth__GetPoint((BlankEarth_o *)blankEarth, this->fields.spotId, 0, v16);
  GameObjectExtensions__SetParent(v18, v19, 0LL);
  GameObjectExtensions__ResetTransform(v18, 0LL);
  if ( !v18 )
    goto LABEL_58;
  blankEarth = (ScrTerminalListTop_o *)UnityEngine_GameObject__get_transform(v18, 0LL);
  if ( !blankEarth )
    goto LABEL_58;
  v31.fields.y = 0.0;
  v31.fields.z = 0.0;
  v31.fields.x = -90.0;
  UnityEngine_Transform__Rotate_69482032((UnityEngine_Transform_o *)blankEarth, v31, 0LL);
  v22 = this->fields.__4__this;
  if ( !v22 )
    goto LABEL_58;
  blankEarth = (ScrTerminalListTop_o *)v22->fields.spotEffectList;
  if ( !blankEarth )
    goto LABEL_58;
  v23 = *(_QWORD *)&blankEarth->fields.m_CachedPtr;
  v24 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(blankEarth->fields.m_CancellationTokenSource);
  if ( !v23 )
    goto LABEL_58;
  m_CancellationTokenSource_low = SLODWORD(blankEarth->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v23 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)blankEarth,
      (Il2CppObject *)v18,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = v23 + 8 * m_CancellationTokenSource_low;
    LODWORD(blankEarth->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v26 + 32) = v18;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 32), (int32_t)v18, v20, v21);
  }
  _9__2 = this->fields.__9__2;
  v28 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v29, v30);
  }
  blankEarth = (ScrTerminalListTop_o *)BasicHelper__DelayCall(0.01, _9__2, 0LL);
  if ( !v28 )
    goto LABEL_58;
  UnityEngine_MonoBehaviour__StartCoroutine_69444652(v28, (System_Collections_IEnumerator_o *)blankEarth, 0LL);
}


bool __fastcall BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0___OnClickButton_b__1(
        BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *this,
        BlankEarthShortcutButtonListViewObject_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B8880C(this, 0LL);
  return ListViewObject__get_Index((ListViewObject_o *)n, 0LL) == this->fields.index;
}


void __fastcall BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0___OnClickButton_b__2(
        BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *v3; // x19
  struct BlankEarthShortcutButtonListViewManager_o *_4__this; // x8
  __int64 v5; // x8

  v3 = this;
  if ( (byte_4A57CC2 & 1) == 0 )
  {
    this = (BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *)sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A57CC2 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  this = (BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *)_4__this->fields.blankEarth;
  if ( !this )
    goto LABEL_15;
  this = (BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *)BlankEarth__GetPoint(
                                                                              (BlankEarth_o *)this,
                                                                              v3->fields.spotId,
                                                                              0,
                                                                              v2);
  if ( !this )
    goto LABEL_15;
  BlankEarthPoint__OpenQuestList((BlankEarthPoint_o *)this, method);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
  }
  this = (BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    this = (BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *)TerminalSceneComponent_TypeInfo;
  }
  v5 = **(_QWORD **)&this[4].fields.spotId;
  if ( !v5 || (this = *(BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o **)(v5 + 240)) == 0LL )
LABEL_15:
    sub_1B8880C(this, method);
  TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)this, 1, 0LL);
}