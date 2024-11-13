void __fastcall BlankEarthShortcutButtonListViewManager___ctor(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B12CC2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v5, v6);
    byte_4B12CC2 = 1;
  }
  this->fields.spotMoveEasingType = 15;
  *(_QWORD *)&this->fields.spotMoveTime = 0x3D23D70A3FC00000LL;
  this->fields.moveDistanceMultipleValue = 0.18;
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_GameObject__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.spotEffectList = (struct System_Collections_Generic_List_GameObject__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.spotEffectList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall BlankEarthShortcutButtonListViewManager__CreateList(
        BlankEarthShortcutButtonListViewManager_o *this,
        BlankEarth_o *blankEarth,
        UIAtlas_o *commonUIAtlas,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  const MethodInfo *v40; // x2
  __int64 v41; // x1
  UnityEngine_Component_o *scrollBar; // x0
  __int64 v43; // x1
  __int64 v44; // x1
  Il2CppObject *Object_object__49237568; // x22
  Il2CppObject *Component_object; // x21
  BlankEarthSpotNavimenuEntity_array *EnableShortcutButtons; // x22
  __int64 v48; // x2
  __int64 v49; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v50; // x23
  int32_t v51; // w24
  __int64 v52; // x26
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  BlankEarthSpotNavimenuEntity_o *v59; // x27
  System_Collections_Generic_List_object__o *itemList; // x25
  System_Action_o *v61; // x28
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  BlankEarthShortcutButtonListViewItem_o *v65; // x26
  const MethodInfo *v66; // x6
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  struct System_Object_array *items; // x8
  _QWORD *v74; // x9
  __int64 size; // x10
  Il2CppClass **v76; // x0

  if ( (byte_4B12CB9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, blankEarth, commonUIAtlas);
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, v6, v7);
    sub_1BCA7E0(&AssetManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&BlankEarthShortcutButtonListViewItem_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BlankEarthSpotNavimenuMaster___, v14, v15);
    sub_1BCA7E0(&DataManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v18, v19);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v22, v23);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0__CreateList_b__0__, v26, v27);
    sub_1BCA7E0(&BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0_TypeInfo, v28, v29);
    sub_1BCA7E0(&StringLiteral_9005/*"MapShortcut/DownloadMapShortcut"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_5460/*"DownloadMapShortcutAtlas"*/, v32, v33);
    byte_4B12CB9 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.blankEarth = blankEarth;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.blankEarth, (int64_t)blankEarth, v34, v35, v36, v37, v38, v39);
  BlankEarthShortcutButtonListViewManager__SetTouchEnable(this, 0, v40);
  scrollBar = (UnityEngine_Component_o *)this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_32;
  scrollBar = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(scrollBar, 0LL);
  if ( !scrollBar )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollBar, 0, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v43);
  scrollBar = (UnityEngine_Component_o *)AssetManager__getAssetStorage((System_String_o *)StringLiteral_9005/*"MapShortcut/DownloadMapShortcut"*/, 0LL);
  if ( !scrollBar )
    goto LABEL_32;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              (AssetData_o *)scrollBar,
                              (System_String_o *)StringLiteral_5460/*"DownloadMapShortcutAtlas"*/,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44);
  scrollBar = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Object_object__49237568,
                                           0LL,
                                           0LL);
  Component_object = 0LL;
  if ( ((unsigned __int8)scrollBar & 1) != 0 )
  {
    if ( !Object_object__49237568 )
      goto LABEL_32;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_object__49237568,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v41);
  scrollBar = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BlankEarthSpotNavimenuMaster___);
  if ( !scrollBar
    || (EnableShortcutButtons = BlankEarthSpotNavimenuMaster__GetEnableShortcutButtons(
                                  (BlankEarthSpotNavimenuMaster_o *)scrollBar,
                                  0LL),
        scrollBar = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BlankEarthSpotMaster___),
        !EnableShortcutButtons) )
  {
LABEL_32:
    sub_1BCAA3C(scrollBar, v41);
  }
  if ( (int)EnableShortcutButtons->max_length >= 1 )
  {
    v50 = (DataMasterBase_TMaster__TEntity__PKType__o *)scrollBar;
    v51 = 0;
    do
    {
      v52 = sub_1BCAA2C(BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0_TypeInfo, v41, v48, v49);
      System_Object___ctor((Il2CppObject *)v52, 0LL);
      if ( !v52 )
        goto LABEL_32;
      *(_QWORD *)(v52 + 32) = this;
      sub_1BCA784((PartyOrganizationUtility_o *)(v52 + 32), (int64_t)this, v53, v54, v55, v56, v57, v58);
      if ( v51 >= EnableShortcutButtons->max_length )
        sub_1BCAA44(scrollBar, v41);
      v59 = EnableShortcutButtons->m_Items[v51];
      *(_DWORD *)(v52 + 16) = v51;
      if ( !v59 || !v50 )
        goto LABEL_32;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             v50,
             (Il2CppObject **)(v52 + 24),
             v59->fields.blankEarthSpotId,
             (const MethodInfo_31B2E94 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__) )
      {
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v61 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v41, v48, v49);
        System_Action___ctor(
          v61,
          (Il2CppObject *)v52,
          Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0__CreateList_b__0__,
          0LL);
        v65 = (BlankEarthShortcutButtonListViewItem_o *)sub_1BCAA2C(
                                                          BlankEarthShortcutButtonListViewItem_TypeInfo,
                                                          v62,
                                                          v63,
                                                          v64);
        BlankEarthShortcutButtonListViewItem___ctor(
          v65,
          v59,
          v51,
          commonUIAtlas,
          (UIAtlas_o *)Component_object,
          v61,
          v66);
        if ( !itemList )
          goto LABEL_32;
        items = itemList->fields._items;
        v74 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          goto LABEL_32;
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v65,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
        }
        else
        {
          v76 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v76[4] = (Il2CppClass *)v65;
          sub_1BCA784((PartyOrganizationUtility_o *)(v76 + 4), (int64_t)v65, v67, v68, v69, v70, v71, v72);
        }
      }
    }
    while ( ++v51 < (signed int)EnableShortcutButtons->max_length );
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *spotEffectList; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x20
  __int64 v19; // x0
  __int64 v20; // x1
  struct System_Collections_Generic_List_GameObject__o *v21; // x8
  int32_t size; // w2
  int v23; // w9
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B12CBC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    byte_4B12CBC = 1;
  }
  memset(&v24, 0, sizeof(v24));
  spotEffectList = (System_Collections_Generic_List_object__o *)this->fields.spotEffectList;
  if ( spotEffectList && spotEffectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v24,
      spotEffectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v24,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v24.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
      UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v24,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v21 = this->fields.spotEffectList;
    if ( !v21 )
      sub_1BCAA3C(v19, v20);
    size = v21->fields._size;
    v23 = v21->fields._version + 1;
    v21->fields._size = 0;
    v21->fields._version = v23;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v21->fields._items, 0, size, 0LL);
  }
}


void __fastcall BlankEarthShortcutButtonListViewManager__FrameIn(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  const MethodInfo *v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_IEnumerable_T__o *ObjectList; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Collections_Generic_List_object__o *v31; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Action_o *v35; // x21
  __int64 v36; // x0
  __int64 v37; // x1
  Il2CppObject *current; // x19
  __int64 v39; // x1
  Il2CppObject *object; // x22
  _BOOL8 v41; // x0
  __int64 v42; // x1
  const MethodInfo *v43; // x2
  System_Action_o *v44; // x1
  BlankEarth_o *blankEarth; // x20
  System_Action_o *v46; // x21
  const MethodInfo *v47; // x2
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B12CBD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_0__, v4, v5);
    sub_1BCA7E0(&Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_1__, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Last_BlankEarthShortcutButtonListViewObject___, v8, v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__,
      v10,
      v11);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__,
      v12,
      v13);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__,
      v14,
      v15);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__,
      v16,
      v17);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor___76776088,
      v18,
      v19);
    sub_1BCA7E0(&System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo, v20, v21);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v22, v23);
    byte_4B12CBD = 1;
  }
  memset(&v48, 0, sizeof(v48));
  if ( ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL) <= 0 )
  {
    blankEarth = this->fields.blankEarth;
    v46 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
    System_Action___ctor(
      v46,
      (Il2CppObject *)this,
      Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_0__,
      0LL);
    if ( blankEarth )
    {
      BlankEarth__ExecuteAfterStartUpScaling(blankEarth, v46, v47);
      return;
    }
LABEL_19:
    sub_1BCAA3C(v36, v37);
  }
  ObjectList = (System_Collections_Generic_IEnumerable_T__o *)BlankEarthShortcutButtonListViewManager__get_ObjectList(
                                                                this,
                                                                v24);
  v31 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo,
                                                       v28,
                                                       v29,
                                                       v30);
  System_Collections_Generic_List_object____ctor_56235344(
    v31,
    ObjectList,
    (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor___76776088);
  v35 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v32, v33, v34);
  System_Action___ctor(
    v35,
    (Il2CppObject *)this,
    Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_1__,
    0LL);
  if ( !v31 )
    goto LABEL_19;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v48,
    v31,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v48,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__) )
  {
    current = v48.fields._current;
    object = System_Linq_Enumerable__Last_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v31,
               (const MethodInfo_2F36F54 *)Method_System_Linq_Enumerable_Last_BlankEarthShortcutButtonListViewObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
    v41 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, (UnityEngine_Object_o *)object, 0LL);
    if ( !current )
      sub_1BCAA3C(v41, v42);
    if ( v41 )
      v44 = v35;
    else
      v44 = 0LL;
    BlankEarthShortcutButtonListViewObject__SetEntryAnim((BlankEarthShortcutButtonListViewObject_o *)current, v44, v43);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v48,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
}


void __fastcall BlankEarthShortcutButtonListViewManager__FrameOut(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  const MethodInfo *v10; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x1
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B12CBE & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__, v8, v9);
    byte_4B12CBE = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL) >= 1 )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)BlankEarthShortcutButtonListViewManager__get_ObjectList(
                                                                this,
                                                                v10);
    if ( !ObjectList )
      sub_1BCAA3C(0LL, v12);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__) )
    {
      if ( !v14.fields._current )
        sub_1BCAA3C(0LL, v13);
      BlankEarthShortcutButtonListViewObject__FrameOut(
        (BlankEarthShortcutButtonListViewObject_o *)v14.fields._current,
        v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthShortcutButtonListViewManager__OnClickButton(
        BlankEarthShortcutButtonListViewManager_o *this,
        int32_t index,
        BlankEarthSpotEntity_o *bSpotEnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x21
  WarMaster_o *Master_object; // x0
  __int64 v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int32_t id; // w8
  _QWORD *v55; // x0
  System_Reflection_MethodBase_o *v56; // x0
  WarReleaseEntity_o *v57; // x22
  _BOOL8 v58; // x0
  __int64 v59; // x1
  Il2CppObject *current; // x26
  Il2CppObject *v61; // x0
  __int64 v62; // x1
  WarReleaseEntity_o *OpenEntity; // x0
  __int64 v64; // x1
  _QWORD *v65; // x0
  System_Reflection_MethodBase_o *v66; // x0
  __int64 v67; // x2
  System_Collections_Generic_Dictionary_string__DataEntityBase__c *klass; // x8
  _QWORD *v69; // x0
  System_Reflection_MethodBase_o *v70; // x0
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  System_Action_object__o *v74; // x22
  const MethodInfo *v75; // x2
  const MethodInfo *v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  Il2CppClass *v79; // d8
  Il2CppObject *v80; // x23
  const MethodInfo *v81; // x6
  System_Collections_Generic_List_object__o *ObjectList; // x23
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x3
  System_Predicate_object__o *v86; // x24
  const MethodInfo *v87; // x2
  __int64 v88; // x3
  BlankEarthShortcutButtonListViewObject_o *v89; // x23
  const MethodInfo *v90; // x1
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  TerminalPramsManager_c *v94; // x0
  __int64 v95; // x19
  System_Collections_Generic_List_Enumerator_object__o v96; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v97; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B12CBA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___, *(_QWORD *)&index, bSpotEnt);
    sub_1BCA7E0(&System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_BlankEarthShortcutButtonListViewManager_OnClickButton__, v9, v10);
    sub_1BCA7E0(&BlankEarthShortcutButtonListViewObject_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarReleaseMaster___, v15, v16);
    sub_1BCA7E0(&DataManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarEntity__Dispose__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarEntity__MoveNext__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarEntity__get_Current__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Find__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarEntity__GetEnumerator__, v27, v28);
    sub_1BCA7E0(&System_Predicate_BlankEarthShortcutButtonListViewObject__TypeInfo, v29, v30);
    sub_1BCA7E0(&BlankEarth_QAARotateEarthResponse_TypeInfo, v31, v32);
    sub_1BCA7E0(&BlankEarth_RotateEarthTimeCalculateParam_TypeInfo, v33, v34);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v35, v36);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v37, v38);
    sub_1BCA7E0(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__0__, v39, v40);
    sub_1BCA7E0(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__1__, v41, v42);
    sub_1BCA7E0(&BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_TypeInfo, v43, v44);
    byte_4B12CBA = 1;
  }
  memset(&v97, 0, sizeof(v97));
  v45 = sub_1BCAA2C(
          BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_TypeInfo,
          *(_QWORD *)&index,
          bSpotEnt,
          method);
  System_Object___ctor((Il2CppObject *)v45, 0LL);
  if ( !v45 )
    goto LABEL_60;
  *(_QWORD *)(v45 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v45 + 16), (int64_t)this, v48, v49, v50, v51, v52, v53);
  *(_DWORD *)(v45 + 28) = index;
  if ( !this->fields.itemList )
    return;
  if ( !bSpotEnt )
    goto LABEL_60;
  id = bSpotEnt->fields.id;
  *(_DWORD *)(v45 + 24) = id;
  if ( id == this->fields.goalSpotId )
  {
    v55 = Method_BlankEarthShortcutButtonListViewManager_OnClickButton__;
    if ( (*((_BYTE *)Method_BlankEarthShortcutButtonListViewManager_OnClickButton__ + 83) & 2) != 0 )
      v55 = (_QWORD *)sub_1BCA7F8(Method_BlankEarthShortcutButtonListViewManager_OnClickButton__);
    v56 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v55, v55[4]);
    OverwriteAssetSoundName__PlaySystemSe(v56, 2, 0LL);
    return;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v47);
  Master_object = (WarMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_60;
  Master_object = (WarMaster_o *)WarMaster__GetEntityList(Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v96,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_WarEntity__GetEnumerator__);
  v97 = v96;
  v57 = 0LL;
  while ( 1 )
  {
    v58 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v97,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_WarEntity__MoveNext__);
    if ( !v58 )
      break;
    current = v97.fields._current;
    if ( !v97.fields._current )
      sub_1BCAA3C(v58, v59);
    if ( HIDWORD(v97.fields._current[7].monitor) == bSpotEnt->fields.id )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v59);
      v61 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarReleaseMaster___);
      if ( !v61 )
        sub_1BCAA3C(0LL, v62);
      OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)v61, (int32_t)current[1].klass, 0LL);
      if ( OpenEntity )
        v57 = OpenEntity;
      if ( OpenEntity )
      {
        if ( !v57 )
          sub_1BCAA3C(OpenEntity, v64);
        if ( WarReleaseEntity__IsClose(v57, 0LL) )
        {
          v65 = Method_BlankEarthShortcutButtonListViewManager_OnClickButton__;
          if ( (*((_BYTE *)Method_BlankEarthShortcutButtonListViewManager_OnClickButton__ + 83) & 2) != 0 )
            v65 = (_QWORD *)sub_1BCA7F8(Method_BlankEarthShortcutButtonListViewManager_OnClickButton__);
          v66 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v65, v65[4]);
          OverwriteAssetSoundName__PlaySystemSe(v66, 2, 0LL);
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v97,
            (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_WarEntity__Dispose__);
          return;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v97,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_WarEntity__Dispose__);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v47);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v47, v67);
    byte_4B10F83 = 1;
  }
  Master_object = (WarMaster_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v47);
    Master_object = (WarMaster_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Master_object[2].fields._lookup->klass;
  if ( !klass )
    goto LABEL_60;
  Master_object = *(WarMaster_o **)&klass->_2.instance_size;
  if ( !Master_object )
    goto LABEL_60;
  TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)Master_object, 0, 0LL);
  v69 = Method_BlankEarthShortcutButtonListViewManager_OnClickButton__;
  if ( (*((_BYTE *)Method_BlankEarthShortcutButtonListViewManager_OnClickButton__ + 83) & 2) != 0 )
    v69 = (_QWORD *)sub_1BCA7F8(Method_BlankEarthShortcutButtonListViewManager_OnClickButton__);
  v70 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v69, v69[4]);
  OverwriteAssetSoundName__PlaySystemSe(v70, 0, 0LL);
  v74 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo, v71, v72, v73);
  System_Action_object____ctor(
    v74,
    (Il2CppObject *)v45,
    Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__0__,
    0LL);
  Master_object = (WarMaster_o *)this->fields.blankEarth;
  if ( !Master_object )
    goto LABEL_60;
  BlankEarth__SaveSpotRotation((BlankEarth_o *)Master_object, bSpotEnt, v75);
  if ( !bSpotEnt->fields.onObjectType )
  {
    v79 = *(Il2CppClass **)&this->fields.moveDefaultTime;
    v80 = (Il2CppObject *)sub_1BCAA2C(BlankEarth_RotateEarthTimeCalculateParam_TypeInfo, v76, v77, v78);
    System_Object___ctor(v80, 0LL);
    v80[1].klass = v79;
    Master_object = (WarMaster_o *)this->fields.blankEarth;
    if ( !Master_object )
      goto LABEL_60;
    BlankEarth__RotateEarthTowardsSpot(
      (BlankEarth_o *)Master_object,
      bSpotEnt,
      this->fields.spotMoveTime,
      this->fields.spotMoveEasingType,
      1,
      (System_Action_BlankEarth_QAARotateEarthResponse__o *)v74,
      (BlankEarth_RotateEarthTimeCalculateParam_o *)v80,
      v81);
  }
  ObjectList = (System_Collections_Generic_List_object__o *)BlankEarthShortcutButtonListViewManager__get_ObjectList(
                                                              this,
                                                              v76);
  v86 = (System_Predicate_object__o *)sub_1BCAA2C(
                                        System_Predicate_BlankEarthShortcutButtonListViewObject__TypeInfo,
                                        v83,
                                        v84,
                                        v85);
  System_Predicate_object____ctor(
    v86,
    (Il2CppObject *)v45,
    Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__1__,
    0LL);
  if ( !ObjectList )
    goto LABEL_60;
  Master_object = (WarMaster_o *)System_Collections_Generic_List_object___Find(
                                   ObjectList,
                                   (System_Predicate_T__o *)v86,
                                   (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Find__);
  v89 = (BlankEarthShortcutButtonListViewObject_o *)Master_object;
  if ( !Master_object )
  {
    v89 = (BlankEarthShortcutButtonListViewObject_o *)sub_1BCAA2C(
                                                        BlankEarthShortcutButtonListViewObject_TypeInfo,
                                                        v47,
                                                        v87,
                                                        v88);
    BlankEarthShortcutButtonListViewObject___ctor(v89, v90);
  }
  if ( !v89 || (Master_object = (WarMaster_o *)v89->fields.itemDraw) == 0LL )
LABEL_60:
    sub_1BCAA3C(Master_object, v47);
  BlankEarthShortcutButtonListViewItemDraw__SetShortcutButtonEnable(
    (BlankEarthShortcutButtonListViewItemDraw_o *)Master_object,
    0,
    v87);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v91);
  if ( !byte_4B12CE5 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v91, v92);
    byte_4B12CE5 = 1;
  }
  v94 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v91);
    v94 = TerminalPramsManager_TypeInfo;
  }
  v94->static_fields->_IsBlankEarthShortcutMoving_k__BackingField = 1;
  this->fields.goalSpotId = *(_DWORD *)(v45 + 24);
  if ( bSpotEnt->fields.onObjectType )
  {
    v95 = sub_1BCAA2C(BlankEarth_QAARotateEarthResponse_TypeInfo, v91, v92, v93);
    System_Object___ctor((Il2CppObject *)v95, 0LL);
    *(_BYTE *)(v95 + 16) = 0;
    ActionExtensions__Call_object_(
      (System_Action_T__o *)v74,
      (Il2CppObject *)v95,
      (const MethodInfo_2E65588 *)Method_ActionExtensions_Call_BlankEarth_QAARotateEarthResponse___);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  const MethodInfo *v10; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x1
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B12CBF & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__, v8, v9);
    byte_4B12CBF = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL) >= 1 )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)BlankEarthShortcutButtonListViewManager__get_ObjectList(
                                                                this,
                                                                v10);
    if ( !ObjectList )
      sub_1BCAA3C(0LL, v12);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__) )
    {
      if ( !v14.fields._current )
        sub_1BCAA3C(0LL, v13);
      BlankEarthShortcutButtonListViewObject__QuickFrameOut(
        (BlankEarthShortcutButtonListViewObject_o *)v14.fields._current,
        v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
  }
}


void __fastcall BlankEarthShortcutButtonListViewManager__SetAllButtonsClickable(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v11; // x1
  _BOOL8 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  BlankEarthShortcutButtonListViewItemDraw_o *monitor; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B12CC0 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__, v8, v9);
    byte_4B12CC0 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  this->fields.goalSpotId = 0;
  ObjectList = (System_Collections_Generic_List_object__o *)BlankEarthShortcutButtonListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v11);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    ObjectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__);
    if ( !v12 )
      break;
    if ( !v16.fields._current )
      sub_1BCAA3C(v12, v13);
    monitor = (BlankEarthShortcutButtonListViewItemDraw_o *)v16.fields._current[10].monitor;
    if ( !monitor )
      sub_1BCAA3C(0LL, v13);
    BlankEarthShortcutButtonListViewItemDraw__SetShortcutButtonEnable(monitor, 1, v14);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
}


void __fastcall BlankEarthShortcutButtonListViewManager__SetObjectItem(
        BlankEarthShortcutButtonListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4B12CBB & 1) == 0 )
  {
    this = (BlankEarthShortcutButtonListViewManager_o *)sub_1BCA7E0(
                                                          &BlankEarthShortcutButtonListViewObject_TypeInfo,
                                                          obj,
                                                          item);
    byte_4B12CBB = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(BlankEarthShortcutButtonListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (BlankEarthShortcutButtonListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != BlankEarthShortcutButtonListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  BlankEarthShortcutButtonListViewObject__SetupDisp(
    (BlankEarthShortcutButtonListViewObject_o *)obj,
    (const MethodInfo *)obj);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthShortcutButtonListViewManager__SetTouchEnable(
        BlankEarthShortcutButtonListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *blockMask; // x22
  PartyOrganizationUtility_o *p_blockMask; // x19
  __int64 v9; // x1
  UnityEngine_Object_o *klass; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x1
  UnityEngine_Object_o *blockMaskPrefab; // x21
  __int64 v19; // x1
  Il2CppObject *v20; // x21
  Il2CppObject *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  UnityEngine_GameObject_o *v30; // x20
  __int64 v31; // x1

  if ( (byte_4B12CC1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, isEnable, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B12CC1 = 1;
  }
  blockMask = (UnityEngine_Object_o *)this->fields.blockMask;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isEnable);
  p_blockMask = (PartyOrganizationUtility_o *)&this->fields.blockMask;
  if ( isEnable )
  {
    if ( UnityEngine_Object__op_Inequality(blockMask, 0LL, 0LL) )
    {
      klass = (UnityEngine_Object_o *)p_blockMask->klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      UnityEngine_Object__DestroyImmediate_70154432(klass, 0LL);
      p_blockMask->klass = 0LL;
      sub_1BCA784(p_blockMask, 0LL, v11, v12, v13, v14, v15, v16);
    }
  }
  else if ( UnityEngine_Object__op_Equality(blockMask, 0LL, 0LL) )
  {
    blockMaskPrefab = (UnityEngine_Object_o *)this->fields.blockMaskPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    if ( UnityEngine_Object__op_Inequality(blockMaskPrefab, 0LL, 0LL) )
    {
      v20 = (Il2CppObject *)this->fields.blockMaskPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
      v21 = UnityEngine_Object__Instantiate_object_(
              v20,
              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      this->fields.blockMask = (struct UnityEngine_GameObject_o *)v21;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.blockMask, (int64_t)v21, v22, v23, v24, v25, v26, v27);
      GameObjectExtensions__SafeSetParent(
        this->fields.blockMask,
        (UnityEngine_Component_o *)this->fields.blockMaskPanel,
        0LL);
      v30 = this->fields.blockMask;
      if ( !byte_4B109C1 )
      {
        sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v28, v29);
        byte_4B109C1 = 1;
      }
      GameObjectExtensions__SetLocalPosition(v30, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      if ( !p_blockMask->klass )
        sub_1BCAA3C(0LL, v31);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BlankEarth_o *blankEarth; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B12CC3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_2__, v4, v5);
    byte_4B12CC3 = 1;
  }
  BlankEarthShortcutButtonListViewManager__SetAllButtonsClickable(this, method);
  blankEarth = this->fields.blankEarth;
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_2__,
    0LL);
  if ( !blankEarth )
    sub_1BCAA3C(v11, v12);
  BlankEarth__ExecuteAfterStartUpScaling(blankEarth, v10, v13);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B12CB8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BlankEarthShortcutButtonListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B12CB8 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v42 = v41;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v42.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthShortcutButtonListViewObject___);
      v35 = (int64_t)Component_object;
      if ( !v21 )
        sub_1BCAA3C(Component_object, Component_object);
      items = v21->fields._items;
      v37 = Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1BCAA3C(Component_object, Component_object);
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          Component_object,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v35;
        sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 4), v35, v29, v30, v31, v32, v33, v34);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__o *)v21;
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
    sub_1BCAA3C(this, method);
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  ScrTerminalListTop_o *blankEarth; // x0
  QuestRewardTokenAction_c *klass; // x8
  __int64 v25; // x2
  const MethodInfo *v26; // x3
  struct BlankEarthShortcutButtonListViewManager_o *_4__this; // x8
  __int64 v28; // x1
  UnityEngine_Object_o *Point; // x20
  __int64 v30; // x2
  QuestRewardTokenAction_c *v31; // x8
  struct BlankEarthShortcutButtonListViewManager_o *v32; // x8
  struct BlankEarthShortcutButtonListViewManager_o *v33; // x8
  UnityEngine_Object_o *v34; // x20
  __int64 v35; // x1
  struct BlankEarth_o *v36; // x8
  Il2CppObject *shortcutSpotEffect; // x20
  const MethodInfo *v38; // x3
  struct BlankEarthShortcutButtonListViewManager_o *v39; // x8
  UnityEngine_GameObject_o *v40; // x20
  UnityEngine_Component_o *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct BlankEarthShortcutButtonListViewManager_o *v48; // x8
  __int64 v49; // x8
  _QWORD *v50; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v52; // x8
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  System_Action_o *_9__2; // x21
  UnityEngine_MonoBehaviour_o *v57; // x20
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B12CC4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, response, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__RemoveAt__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__2__, v21, v22);
    byte_4B12CC4 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, response);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, response, method);
    byte_4B10F83 = 1;
  }
  blankEarth = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, response);
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
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, response);
  if ( !byte_4B12CE5 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, response, v25);
    byte_4B12CE5 = 1;
  }
  blankEarth = (ScrTerminalListTop_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, response);
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
  Point = (UnityEngine_Object_o *)BlankEarth__GetPoint((BlankEarth_o *)blankEarth, this->fields.spotId, 0, v26);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
  blankEarth = (ScrTerminalListTop_o *)UnityEngine_Object__op_Equality(Point, 0LL, 0LL);
  if ( ((unsigned __int8)blankEarth & 1) != 0 )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, response);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, response, v30);
      byte_4B10F83 = 1;
    }
    blankEarth = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, response);
      blankEarth = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    }
    v31 = blankEarth->fields.boardGameTokenAction->klass;
    if ( v31 )
    {
      blankEarth = *(ScrTerminalListTop_o **)&v31->_2.instance_size;
      if ( blankEarth )
      {
        TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)blankEarth, 1, 0LL);
        return;
      }
    }
LABEL_58:
    sub_1BCAA3C(blankEarth, response);
  }
  v32 = this->fields.__4__this;
  if ( !v32 )
    goto LABEL_58;
  blankEarth = (ScrTerminalListTop_o *)v32->fields.spotEffectList;
  if ( !blankEarth )
    goto LABEL_58;
  if ( SLODWORD(blankEarth->fields.m_CancellationTokenSource) >= 2 )
  {
    blankEarth = (ScrTerminalListTop_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)blankEarth,
                                           0,
                                           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    v33 = this->fields.__4__this;
    if ( !v33 )
      goto LABEL_58;
    v34 = (UnityEngine_Object_o *)blankEarth;
    blankEarth = (ScrTerminalListTop_o *)v33->fields.spotEffectList;
    if ( !blankEarth )
      goto LABEL_58;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)blankEarth,
      0,
      (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_GameObject__RemoveAt__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
    UnityEngine_Object__Destroy_70154244(v34, 0LL);
    v32 = this->fields.__4__this;
    if ( !v32 )
      goto LABEL_58;
  }
  v36 = v32->fields.blankEarth;
  if ( !v36 )
    goto LABEL_58;
  shortcutSpotEffect = (Il2CppObject *)v36->fields.shortcutSpotEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, response);
  blankEarth = (ScrTerminalListTop_o *)UnityEngine_Object__Instantiate_object_(
                                         shortcutSpotEffect,
                                         (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v39 = this->fields.__4__this;
  if ( !v39 )
    goto LABEL_58;
  v40 = (UnityEngine_GameObject_o *)blankEarth;
  blankEarth = (ScrTerminalListTop_o *)v39->fields.blankEarth;
  if ( !blankEarth )
    goto LABEL_58;
  v41 = (UnityEngine_Component_o *)BlankEarth__GetPoint((BlankEarth_o *)blankEarth, this->fields.spotId, 0, v38);
  GameObjectExtensions__SetParent(v40, v41, 0LL);
  GameObjectExtensions__ResetTransform(v40, 0LL);
  if ( !v40 )
    goto LABEL_58;
  blankEarth = (ScrTerminalListTop_o *)UnityEngine_GameObject__get_transform(v40, 0LL);
  if ( !blankEarth )
    goto LABEL_58;
  v64.fields.y = 0.0;
  v64.fields.z = 0.0;
  v64.fields.x = -90.0;
  UnityEngine_Transform__Rotate_70176896((UnityEngine_Transform_o *)blankEarth, v64, 0LL);
  v48 = this->fields.__4__this;
  if ( !v48 )
    goto LABEL_58;
  blankEarth = (ScrTerminalListTop_o *)v48->fields.spotEffectList;
  if ( !blankEarth )
    goto LABEL_58;
  v49 = *(_QWORD *)&blankEarth->fields.m_CachedPtr;
  v50 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(blankEarth->fields.m_CancellationTokenSource);
  if ( !v49 )
    goto LABEL_58;
  m_CancellationTokenSource_low = SLODWORD(blankEarth->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v49 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)blankEarth,
      (Il2CppObject *)v40,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
  }
  else
  {
    v52 = v49 + 8 * m_CancellationTokenSource_low;
    LODWORD(blankEarth->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v52 + 32) = v40;
    sub_1BCA784((PartyOrganizationUtility_o *)(v52 + 32), (int64_t)v40, v42, v43, v44, v45, v46, v47);
  }
  _9__2 = this->fields.__9__2;
  v57 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v53, v54, v55);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v58, v59, v60, v61, v62, v63);
  }
  blankEarth = (ScrTerminalListTop_o *)BasicHelper__DelayCall(0.01, _9__2, 1, 0LL);
  if ( !v57 )
    goto LABEL_58;
  UnityEngine_MonoBehaviour__StartCoroutine_70139516(v57, (System_Collections_IEnumerator_o *)blankEarth, 0LL);
}


bool __fastcall BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0___OnClickButton_b__1(
        BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *this,
        BlankEarthShortcutButtonListViewObject_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1BCAA3C(this, 0LL);
  return ListViewObject__get_Index((ListViewObject_o *)n, 0LL) == this->fields.index;
}


void __fastcall BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0___OnClickButton_b__2(
        BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *v4; // x19
  struct BlankEarthShortcutButtonListViewManager_o *_4__this; // x8
  __int64 v6; // x2
  __int64 v7; // x8

  v4 = this;
  if ( (byte_4B12CC5 & 1) == 0 )
  {
    this = (BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *)sub_1BCA7E0(
                                                                                &TerminalSceneComponent_TypeInfo,
                                                                                method,
                                                                                v2);
    byte_4B12CC5 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  this = (BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *)_4__this->fields.blankEarth;
  if ( !this )
    goto LABEL_15;
  this = (BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *)BlankEarth__GetPoint(
                                                                              (BlankEarth_o *)this,
                                                                              v4->fields.spotId,
                                                                              0,
                                                                              v3);
  if ( !this )
    goto LABEL_15;
  BlankEarthPoint__OpenQuestList((BlankEarthPoint_o *)this, method);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v6);
    byte_4B10F83 = 1;
  }
  this = (BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    this = (BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *)TerminalSceneComponent_TypeInfo;
  }
  v7 = **(_QWORD **)&this[4].fields.spotId;
  if ( !v7 || (this = *(BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o **)(v7 + 240)) == 0LL )
LABEL_15:
    sub_1BCAA3C(this, method);
  TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)this, 1, 0LL);
}