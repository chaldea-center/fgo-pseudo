void __fastcall BlankEarthShortcutButtonListViewManager___ctor(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FB0CC & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1B64870(&System_Collections_Generic_List_GameObject__TypeInfo, v3);
    byte_49FB0CC = 1;
  }
  this->fields.spotMoveEasingType = 15;
  *(_QWORD *)&this->fields.spotMoveTime = 0x3D23D70A3FC00000LL;
  this->fields.moveDistanceMultipleValue = 0.18;
  v4 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.spotEffectList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.spotEffectList, (int32_t)v4, v5, v6);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall BlankEarthShortcutButtonListViewManager__CreateList(
        BlankEarthShortcutButtonListViewManager_o *this,
        BlankEarth_o *blankEarth,
        UIAtlas_o *commonUIAtlas,
        const MethodInfo *method)
{
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
  int32_t v20; // w2
  int32_t v21; // w3
  const MethodInfo *v22; // x2
  __int64 v23; // x1
  UnityEngine_Component_o *scrollBar; // x0
  Il2CppObject *Object_object__48356600; // x22
  BlankEarthSpotNavimenuEntity_array *EnableShortcutButtons; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v27; // x23
  int32_t v28; // w24
  __int64 v29; // x26
  int32_t v30; // w2
  int32_t v31; // w3
  BlankEarthSpotNavimenuEntity_o *v32; // x28
  System_Collections_Generic_List_object__o *itemList; // x25
  int32_t iconId; // w27
  System_String_o *name; // x28
  System_Action_o *v36; // x29
  BlankEarthShortcutButtonListViewItem_o *v37; // x26
  const MethodInfo *v38; // x7
  int32_t v39; // w2
  int32_t v40; // w3
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  Il2CppObject *Component_object; // [xsp+8h] [xbp-68h]

  if ( (byte_49FB0C3 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, blankEarth);
    sub_1B64870(&Method_AssetData_GetObject_GameObject____75714440, v6);
    sub_1B64870(&AssetManager_TypeInfo, v7);
    sub_1B64870(&BlankEarthShortcutButtonListViewItem_TypeInfo, v8);
    sub_1B64870(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v9);
    sub_1B64870(&Method_DataManager_GetMaster_BlankEarthSpotNavimenuMaster___, v10);
    sub_1B64870(&DataManager_TypeInfo, v11);
    sub_1B64870(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v12);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v13);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__Add__, v14);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v15);
    sub_1B64870(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0__CreateList_b__0__, v16);
    sub_1B64870(&BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0_TypeInfo, v17);
    sub_1B64870(&StringLiteral_8836/*"MapShortcut/DownloadMapShortcut"*/, v18);
    sub_1B64870(&StringLiteral_5360/*"DownloadMapShortcutAtlas"*/, v19);
    byte_49FB0C3 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.blankEarth = blankEarth;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.blankEarth, (int32_t)blankEarth, v20, v21);
  BlankEarthShortcutButtonListViewManager__SetTouchEnable(this, 0, v22);
  scrollBar = (UnityEngine_Component_o *)this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_32;
  scrollBar = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(scrollBar, 0LL);
  if ( !scrollBar )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollBar, 0, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  scrollBar = (UnityEngine_Component_o *)AssetManager__getAssetStorage((System_String_o *)StringLiteral_8836/*"MapShortcut/DownloadMapShortcut"*/, 0LL);
  if ( !scrollBar )
    goto LABEL_32;
  Object_object__48356600 = AssetData__GetObject_object__48356600(
                              (AssetData_o *)scrollBar,
                              (System_String_o *)StringLiteral_5360/*"DownloadMapShortcutAtlas"*/,
                              (const MethodInfo_2E1DCF8 *)Method_AssetData_GetObject_GameObject____75714440);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  scrollBar = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Object_object__48356600,
                                           0LL,
                                           0LL);
  Component_object = 0LL;
  if ( ((unsigned __int8)scrollBar & 1) != 0 )
  {
    if ( !Object_object__48356600 )
      goto LABEL_32;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_object__48356600,
                         (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  scrollBar = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_BlankEarthSpotNavimenuMaster___);
  if ( !scrollBar
    || (EnableShortcutButtons = BlankEarthSpotNavimenuMaster__GetEnableShortcutButtons(
                                  (BlankEarthSpotNavimenuMaster_o *)scrollBar,
                                  0LL),
        scrollBar = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___),
        !EnableShortcutButtons) )
  {
LABEL_32:
    sub_1B64ACC(scrollBar, v23);
  }
  if ( (int)EnableShortcutButtons->max_length >= 1 )
  {
    v27 = (DataMasterBase_TMaster__TEntity__PKType__o *)scrollBar;
    v28 = 0;
    do
    {
      v29 = sub_1B64ABC(BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v29, 0LL);
      if ( !v29 )
        goto LABEL_32;
      *(_QWORD *)(v29 + 32) = this;
      sub_1B64814((ServantStatusBattleListViewItem_o *)(v29 + 32), (int32_t)this, v30, v31);
      if ( v28 >= EnableShortcutButtons->max_length )
        sub_1B64AD4(scrollBar, v23);
      v32 = EnableShortcutButtons->m_Items[v28];
      *(_DWORD *)(v29 + 16) = v28;
      if ( !v32 || !v27 )
        goto LABEL_32;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             v27,
             (Il2CppObject **)(v29 + 24),
             v32->fields.blankEarthSpotId,
             (const MethodInfo_30D61D4 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__) )
      {
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        iconId = v32->fields.iconId;
        name = v32->fields.name;
        v36 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
        System_Action___ctor(
          v36,
          (Il2CppObject *)v29,
          Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0__CreateList_b__0__,
          0LL);
        v37 = (BlankEarthShortcutButtonListViewItem_o *)sub_1B64ABC(BlankEarthShortcutButtonListViewItem_TypeInfo);
        BlankEarthShortcutButtonListViewItem___ctor(
          v37,
          v28,
          iconId,
          name,
          commonUIAtlas,
          (UIAtlas_o *)Component_object,
          v36,
          v38);
        if ( !itemList )
          goto LABEL_32;
        items = itemList->fields._items;
        v42 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          goto LABEL_32;
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v37,
            *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
        else
        {
          v44 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v44[4] = (Il2CppClass *)v37;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v44 + 4), (int32_t)v37, v39, v40);
        }
      }
    }
    while ( ++v28 < (signed int)EnableShortcutButtons->max_length );
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *spotEffectList; // x0
  Il2CppObject *current; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *v13; // x8
  int32_t size; // w2
  int v15; // w9
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FB0C6 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__Clear__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__get_Count__, v7);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v8);
    byte_49FB0C6 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  spotEffectList = (System_Collections_Generic_List_object__o *)this->fields.spotEffectList;
  if ( spotEffectList && spotEffectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      spotEffectList,
      (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v16.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69135916((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v13 = this->fields.spotEffectList;
    if ( !v13 )
      sub_1B64ACC(v11, v12);
    size = v13->fields._size;
    v15 = v13->fields._version + 1;
    v13->fields._size = 0;
    v13->fields._version = v15;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v13->fields._items, 0, size, 0LL);
  }
}


void __fastcall BlankEarthShortcutButtonListViewManager__FrameIn(
        BlankEarthShortcutButtonListViewManager_o *this,
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
  const MethodInfo *v13; // x1
  System_Collections_Generic_IEnumerable_T__o *ObjectList; // x21
  System_Collections_Generic_List_object__o *v15; // x20
  System_Action_o *v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x19
  Il2CppObject *object; // x22
  _BOOL8 v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  System_Action_o *v24; // x1
  BlankEarth_o *blankEarth; // x20
  System_Action_o *v26; // x21
  const MethodInfo *v27; // x2
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FB0C7 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_0__, v3);
    sub_1B64870(&Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_1__, v4);
    sub_1B64870(&Method_System_Linq_Enumerable_Last_BlankEarthShortcutButtonListViewObject___, v5);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__,
      v6);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__,
      v7);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__,
      v8);
    sub_1B64870(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor___75654440, v10);
    sub_1B64870(&System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo, v11);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v12);
    byte_49FB0C7 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL) <= 0 )
  {
    blankEarth = this->fields.blankEarth;
    v26 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
    System_Action___ctor(
      v26,
      (Il2CppObject *)this,
      Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_0__,
      0LL);
    if ( blankEarth )
    {
      BlankEarth__ExecuteAfterStartUpScaling(blankEarth, v26, v27);
      return;
    }
LABEL_19:
    sub_1B64ACC(v17, v18);
  }
  ObjectList = (System_Collections_Generic_IEnumerable_T__o *)BlankEarthShortcutButtonListViewManager__get_ObjectList(
                                                                this,
                                                                v13);
  v15 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor_55243428(
    v15,
    ObjectList,
    (const MethodInfo_34AF2A4 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor___75654440);
  v16 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)this,
    Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_1__,
    0LL);
  if ( !v15 )
    goto LABEL_19;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    v15,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__) )
  {
    current = v28.fields._current;
    object = System_Linq_Enumerable__Last_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v15,
               (const MethodInfo_2E60F5C *)Method_System_Linq_Enumerable_Last_BlankEarthShortcutButtonListViewObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v21 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, (UnityEngine_Object_o *)object, 0LL);
    if ( !current )
      sub_1B64ACC(v21, v22);
    if ( v21 )
      v24 = v16;
    else
      v24 = 0LL;
    BlankEarthShortcutButtonListViewObject__SetEntryAnim((BlankEarthShortcutButtonListViewObject_o *)current, v24, v23);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
}


void __fastcall BlankEarthShortcutButtonListViewManager__FrameOut(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FB0C8 & 1) == 0 )
  {
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__,
      method);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__,
      v3);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__,
      v4);
    sub_1B64870(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__, v5);
    byte_49FB0C8 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL) >= 1 )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)BlankEarthShortcutButtonListViewManager__get_ObjectList(
                                                                this,
                                                                v6);
    if ( !ObjectList )
      sub_1B64ACC(0LL, v8);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      ObjectList,
      (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__) )
    {
      if ( !v10.fields._current )
        sub_1B64ACC(0LL, v9);
      BlankEarthShortcutButtonListViewObject__FrameOut(
        (BlankEarthShortcutButtonListViewObject_o *)v10.fields._current,
        v9);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x20
  TitleInfoControl_o *blankEarth; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t id; // w8
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  UnityEngine_GameObject_c *klass; // x8
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  System_Action_object__o *v28; // x22
  const MethodInfo *v29; // x2
  Il2CppClass *v30; // d8
  Il2CppObject *v31; // x23
  const MethodInfo *v32; // x6
  const MethodInfo *v33; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x21
  System_Predicate_object__o *v35; // x22
  const MethodInfo *v36; // x2
  BlankEarthShortcutButtonListViewObject_o *v37; // x21
  const MethodInfo *v38; // x1
  __int64 v39; // x1
  TerminalPramsManager_c *v40; // x0

  if ( (byte_49FB0C4 & 1) == 0 )
  {
    sub_1B64870(&System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo, *(_QWORD *)&index);
    sub_1B64870(&Method_BlankEarthShortcutButtonListViewManager_OnClickButton__, v7);
    sub_1B64870(&BlankEarthShortcutButtonListViewObject_TypeInfo, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Find__, v9);
    sub_1B64870(&System_Predicate_BlankEarthShortcutButtonListViewObject__TypeInfo, v10);
    sub_1B64870(&BlankEarth_RotateEarthTimeCalculateParam_TypeInfo, v11);
    sub_1B64870(&TerminalPramsManager_TypeInfo, v12);
    sub_1B64870(&TerminalSceneComponent_TypeInfo, v13);
    sub_1B64870(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__0__, v14);
    sub_1B64870(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__1__, v15);
    sub_1B64870(&BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_TypeInfo, v16);
    byte_49FB0C4 = 1;
  }
  v17 = sub_1B64ABC(BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_35;
  *(_QWORD *)(v17 + 16) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)this, v20, v21);
  *(_DWORD *)(v17 + 28) = index;
  if ( !this->fields.itemList )
    return;
  if ( !bSpotEnt )
    goto LABEL_35;
  id = bSpotEnt->fields.id;
  *(_DWORD *)(v17 + 24) = id;
  if ( id == this->fields.goalSpotId )
  {
    v23 = Method_BlankEarthShortcutButtonListViewManager_OnClickButton__;
    if ( (*((_BYTE *)Method_BlankEarthShortcutButtonListViewManager_OnClickButton__ + 83) & 2) != 0 )
      v23 = (_QWORD *)sub_1B64888(Method_BlankEarthShortcutButtonListViewManager_OnClickButton__);
    v24 = (System_Reflection_MethodBase_o *)sub_1B64854(v23, v23[4]);
    OverwriteAssetSoundName__PlaySystemSe(v24, 2, 0LL);
    return;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F97AD )
  {
    sub_1B64870(&TerminalSceneComponent_TypeInfo, v19);
    byte_49F97AD = 1;
  }
  blankEarth = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    blankEarth = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = blankEarth->fields.mEventRoot->klass;
  if ( !klass )
    goto LABEL_35;
  blankEarth = *(TitleInfoControl_o **)&klass->_2.instance_size;
  if ( !blankEarth )
    goto LABEL_35;
  TitleInfoControl__SetTouchEnable(blankEarth, 0, 0LL);
  v26 = Method_BlankEarthShortcutButtonListViewManager_OnClickButton__;
  if ( (*((_BYTE *)Method_BlankEarthShortcutButtonListViewManager_OnClickButton__ + 83) & 2) != 0 )
    v26 = (_QWORD *)sub_1B64888(Method_BlankEarthShortcutButtonListViewManager_OnClickButton__);
  v27 = (System_Reflection_MethodBase_o *)sub_1B64854(v26, v26[4]);
  OverwriteAssetSoundName__PlaySystemSe(v27, 0, 0LL);
  v28 = (System_Action_object__o *)sub_1B64ABC(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
  System_Action_object____ctor(
    v28,
    (Il2CppObject *)v17,
    Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__0__,
    0LL);
  blankEarth = (TitleInfoControl_o *)this->fields.blankEarth;
  if ( !blankEarth )
    goto LABEL_35;
  BlankEarth__SaveSpotRotation((BlankEarth_o *)blankEarth, bSpotEnt, v29);
  v30 = *(Il2CppClass **)&this->fields.moveDefaultTime;
  v31 = (Il2CppObject *)sub_1B64ABC(BlankEarth_RotateEarthTimeCalculateParam_TypeInfo);
  System_Object___ctor(v31, 0LL);
  v31[1].klass = v30;
  blankEarth = (TitleInfoControl_o *)this->fields.blankEarth;
  if ( !blankEarth )
    goto LABEL_35;
  BlankEarth__RotateEarthTowardsSpot(
    (BlankEarth_o *)blankEarth,
    bSpotEnt,
    this->fields.spotMoveTime,
    this->fields.spotMoveEasingType,
    1,
    (System_Action_BlankEarth_QAARotateEarthResponse__o *)v28,
    (BlankEarth_RotateEarthTimeCalculateParam_o *)v31,
    v32);
  ObjectList = (System_Collections_Generic_List_object__o *)BlankEarthShortcutButtonListViewManager__get_ObjectList(
                                                              this,
                                                              v33);
  v35 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_BlankEarthShortcutButtonListViewObject__TypeInfo);
  System_Predicate_object____ctor(
    v35,
    (Il2CppObject *)v17,
    Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__1__,
    0LL);
  if ( !ObjectList )
    goto LABEL_35;
  blankEarth = (TitleInfoControl_o *)System_Collections_Generic_List_object___Find(
                                       ObjectList,
                                       (System_Predicate_T__o *)v35,
                                       (const MethodInfo_34B0018 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Find__);
  v37 = (BlankEarthShortcutButtonListViewObject_o *)blankEarth;
  if ( !blankEarth )
  {
    v37 = (BlankEarthShortcutButtonListViewObject_o *)sub_1B64ABC(BlankEarthShortcutButtonListViewObject_TypeInfo);
    BlankEarthShortcutButtonListViewObject___ctor(v37, v38);
  }
  if ( !v37 || (blankEarth = (TitleInfoControl_o *)v37->fields.itemDraw) == 0LL )
LABEL_35:
    sub_1B64ACC(blankEarth, v19);
  BlankEarthShortcutButtonListViewItemDraw__SetShortcutButtonEnable(
    (BlankEarthShortcutButtonListViewItemDraw_o *)blankEarth,
    0,
    v36);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB131 )
  {
    sub_1B64870(&TerminalPramsManager_TypeInfo, v39);
    byte_49FB131 = 1;
  }
  v40 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v40 = TerminalPramsManager_TypeInfo;
  }
  v40->static_fields->_IsBlankEarthShortcutMoving_k__BackingField = 1;
  this->fields.goalSpotId = *(_DWORD *)(v17 + 24);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FB0C9 & 1) == 0 )
  {
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__,
      method);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__,
      v3);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__,
      v4);
    sub_1B64870(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__, v5);
    byte_49FB0C9 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL) >= 1 )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)BlankEarthShortcutButtonListViewManager__get_ObjectList(
                                                                this,
                                                                v6);
    if ( !ObjectList )
      sub_1B64ACC(0LL, v8);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      ObjectList,
      (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__) )
    {
      if ( !v10.fields._current )
        sub_1B64ACC(0LL, v9);
      BlankEarthShortcutButtonListViewObject__QuickFrameOut(
        (BlankEarthShortcutButtonListViewObject_o *)v10.fields._current,
        v9);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
  }
}


void __fastcall BlankEarthShortcutButtonListViewManager__SetAllButtonsClickable(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v7; // x1
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  BlankEarthShortcutButtonListViewItemDraw_o *monitor; // x0
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FB0CA & 1) == 0 )
  {
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__,
      method);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__,
      v3);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__,
      v4);
    sub_1B64870(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__, v5);
    byte_49FB0CA = 1;
  }
  memset(&v12, 0, sizeof(v12));
  this->fields.goalSpotId = 0;
  ObjectList = (System_Collections_Generic_List_object__o *)BlankEarthShortcutButtonListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    sub_1B64ACC(0LL, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    ObjectList,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__);
    if ( !v8 )
      break;
    if ( !v12.fields._current )
      sub_1B64ACC(v8, v9);
    monitor = (BlankEarthShortcutButtonListViewItemDraw_o *)v12.fields._current[10].monitor;
    if ( !monitor )
      sub_1B64ACC(0LL, v9);
    BlankEarthShortcutButtonListViewItemDraw__SetShortcutButtonEnable(monitor, 1, v10);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
}


void __fastcall BlankEarthShortcutButtonListViewManager__SetObjectItem(
        BlankEarthShortcutButtonListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_49FB0C5 & 1) == 0 )
  {
    this = (BlankEarthShortcutButtonListViewManager_o *)sub_1B64870(
                                                          &BlankEarthShortcutButtonListViewObject_TypeInfo,
                                                          obj);
    byte_49FB0C5 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(BlankEarthShortcutButtonListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (BlankEarthShortcutButtonListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != BlankEarthShortcutButtonListViewObject_TypeInfo )
  {
    sub_1B64ACC(this, obj);
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
  UnityEngine_Object_o *blockMask; // x22
  ServantStatusBattleListViewItem_o *p_blockMask; // x19
  UnityEngine_Object_o *klass; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  UnityEngine_Object_o *blockMaskPrefab; // x21
  Il2CppObject *v12; // x21
  Il2CppObject *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x1
  UnityEngine_GameObject_o *v17; // x20
  __int64 v18; // x1

  if ( (byte_49FB0CB & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_Object_Instantiate_GameObject___, isEnable);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v5);
    byte_49FB0CB = 1;
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
      UnityEngine_Object__DestroyImmediate_69136104(klass, 0LL);
      p_blockMask->klass = 0LL;
      sub_1B64814(p_blockMask, 0, v9, v10);
    }
  }
  else if ( UnityEngine_Object__op_Equality(blockMask, 0LL, 0LL) )
  {
    blockMaskPrefab = (UnityEngine_Object_o *)this->fields.blockMaskPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(blockMaskPrefab, 0LL, 0LL) )
    {
      v12 = (Il2CppObject *)this->fields.blockMaskPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v13 = UnityEngine_Object__Instantiate_object_(
              v12,
              (const MethodInfo_2EBDF7C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      this->fields.blockMask = (struct UnityEngine_GameObject_o *)v13;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.blockMask, (int32_t)v13, v14, v15);
      GameObjectExtensions__SafeSetParent(
        this->fields.blockMask,
        (UnityEngine_Component_o *)this->fields.blockMaskPanel,
        0LL);
      v17 = this->fields.blockMask;
      if ( !byte_49F9201 )
      {
        sub_1B64870(&UnityEngine_Vector3_TypeInfo, v16);
        byte_49F9201 = 1;
      }
      GameObjectExtensions__SetLocalPosition(v17, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      if ( !p_blockMask->klass )
        sub_1B64ACC(0LL, v18);
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
  __int64 v3; // x1
  BlankEarth_o *blankEarth; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_49FB0CD & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_2__, v3);
    byte_49FB0CD = 1;
  }
  BlankEarthShortcutButtonListViewManager__SetAllButtonsClickable(this, method);
  blankEarth = this->fields.blankEarth;
  v5 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_2__, 0LL);
  if ( !blankEarth )
    sub_1B64ACC(v6, v7);
  BlankEarth__ExecuteAfterStartUpScaling(blankEarth, v5, v8);
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
  int32_t v19; // w3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FB0C2 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_BlankEarthShortcutButtonListViewObject___, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Add__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor__, v8);
    sub_1B64870(&System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo, v9);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v10);
    byte_49FB0C2 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64ACC(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64ACC(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthShortcutButtonListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1B64ACC(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1B64ACC(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__o *)v11;
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
    sub_1B64ACC(this, method);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  ScrTerminalListTop_o *blankEarth; // x0
  QuestRewardTokenAction_c *klass; // x8
  const MethodInfo *v16; // x2
  struct BlankEarthShortcutButtonListViewManager_o *_4__this; // x8
  UnityEngine_Object_o *EarthPoint; // x20
  QuestRewardTokenAction_c *v19; // x8
  struct BlankEarthShortcutButtonListViewManager_o *v20; // x8
  struct BlankEarthShortcutButtonListViewManager_o *v21; // x8
  UnityEngine_Object_o *v22; // x20
  struct BlankEarth_o *v23; // x8
  Il2CppObject *shortcutSpotEffect; // x20
  const MethodInfo *v25; // x2
  struct BlankEarthShortcutButtonListViewManager_o *v26; // x8
  UnityEngine_GameObject_o *v27; // x20
  UnityEngine_Component_o *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  struct BlankEarthShortcutButtonListViewManager_o *v31; // x8
  __int64 v32; // x8
  _QWORD *v33; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v35; // x8
  System_Action_o *_9__2; // x22
  UnityEngine_MonoBehaviour_o *v37; // x20
  int32_t v38; // w2
  int32_t v39; // w3
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FB0CE & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, response);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__Add__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__RemoveAt__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__get_Count__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__get_Item__, v8);
    sub_1B64870(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v10);
    sub_1B64870(&TerminalPramsManager_TypeInfo, v11);
    sub_1B64870(&TerminalSceneComponent_TypeInfo, v12);
    sub_1B64870(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__2__, v13);
    byte_49FB0CE = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F97AD )
  {
    sub_1B64870(&TerminalSceneComponent_TypeInfo, response);
    byte_49F97AD = 1;
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
  if ( !byte_49FB131 )
  {
    sub_1B64870(&TerminalPramsManager_TypeInfo, response);
    byte_49FB131 = 1;
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
  EarthPoint = (UnityEngine_Object_o *)BlankEarth__GetEarthPoint((BlankEarth_o *)blankEarth, this->fields.spotId, v16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  blankEarth = (ScrTerminalListTop_o *)UnityEngine_Object__op_Equality(EarthPoint, 0LL, 0LL);
  if ( ((unsigned __int8)blankEarth & 1) != 0 )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_49F97AD )
    {
      sub_1B64870(&TerminalSceneComponent_TypeInfo, response);
      byte_49F97AD = 1;
    }
    blankEarth = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      blankEarth = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    }
    v19 = blankEarth->fields.boardGameTokenAction->klass;
    if ( v19 )
    {
      blankEarth = *(ScrTerminalListTop_o **)&v19->_2.instance_size;
      if ( blankEarth )
      {
        TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)blankEarth, 1, 0LL);
        return;
      }
    }
LABEL_58:
    sub_1B64ACC(blankEarth, response);
  }
  v20 = this->fields.__4__this;
  if ( !v20 )
    goto LABEL_58;
  blankEarth = (ScrTerminalListTop_o *)v20->fields.spotEffectList;
  if ( !blankEarth )
    goto LABEL_58;
  if ( SLODWORD(blankEarth->fields.m_CancellationTokenSource) >= 2 )
  {
    blankEarth = (ScrTerminalListTop_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)blankEarth,
                                           0,
                                           (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    v21 = this->fields.__4__this;
    if ( !v21 )
      goto LABEL_58;
    v22 = (UnityEngine_Object_o *)blankEarth;
    blankEarth = (ScrTerminalListTop_o *)v21->fields.spotEffectList;
    if ( !blankEarth )
      goto LABEL_58;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)blankEarth,
      0,
      (const MethodInfo_34B1224 *)Method_System_Collections_Generic_List_GameObject__RemoveAt__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69135916(v22, 0LL);
    v20 = this->fields.__4__this;
    if ( !v20 )
      goto LABEL_58;
  }
  v23 = v20->fields.blankEarth;
  if ( !v23 )
    goto LABEL_58;
  shortcutSpotEffect = (Il2CppObject *)v23->fields.shortcutSpotEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  blankEarth = (ScrTerminalListTop_o *)UnityEngine_Object__Instantiate_object_(
                                         shortcutSpotEffect,
                                         (const MethodInfo_2EBDF7C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v26 = this->fields.__4__this;
  if ( !v26 )
    goto LABEL_58;
  v27 = (UnityEngine_GameObject_o *)blankEarth;
  blankEarth = (ScrTerminalListTop_o *)v26->fields.blankEarth;
  if ( !blankEarth )
    goto LABEL_58;
  v28 = (UnityEngine_Component_o *)BlankEarth__GetEarthPoint((BlankEarth_o *)blankEarth, this->fields.spotId, v25);
  GameObjectExtensions__SetParent(v27, v28, 0LL);
  GameObjectExtensions__ResetTransform(v27, 0LL);
  if ( !v27 )
    goto LABEL_58;
  blankEarth = (ScrTerminalListTop_o *)UnityEngine_GameObject__get_transform(v27, 0LL);
  if ( !blankEarth )
    goto LABEL_58;
  v40.fields.y = 0.0;
  v40.fields.z = 0.0;
  v40.fields.x = -90.0;
  UnityEngine_Transform__Rotate_69158568((UnityEngine_Transform_o *)blankEarth, v40, 0LL);
  v31 = this->fields.__4__this;
  if ( !v31 )
    goto LABEL_58;
  blankEarth = (ScrTerminalListTop_o *)v31->fields.spotEffectList;
  if ( !blankEarth )
    goto LABEL_58;
  v32 = *(_QWORD *)&blankEarth->fields.m_CachedPtr;
  v33 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(blankEarth->fields.m_CancellationTokenSource);
  if ( !v32 )
    goto LABEL_58;
  m_CancellationTokenSource_low = SLODWORD(blankEarth->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v32 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)blankEarth,
      (Il2CppObject *)v27,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = v32 + 8 * m_CancellationTokenSource_low;
    LODWORD(blankEarth->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v35 + 32) = v27;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v35 + 32), (int32_t)v27, v29, v30);
  }
  _9__2 = this->fields.__9__2;
  v37 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v38, v39);
  }
  blankEarth = (ScrTerminalListTop_o *)BasicHelper__DelayCall(0.01, _9__2, 0LL);
  if ( !v37 )
    goto LABEL_58;
  UnityEngine_MonoBehaviour__StartCoroutine_69121188(v37, (System_Collections_IEnumerator_o *)blankEarth, 0LL);
}


bool __fastcall BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0___OnClickButton_b__1(
        BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *this,
        BlankEarthShortcutButtonListViewObject_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B64ACC(this, 0LL);
  return ListViewObject__get_Index((ListViewObject_o *)n, 0LL) == this->fields.index;
}


void __fastcall BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0___OnClickButton_b__2(
        BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *v3; // x19
  struct BlankEarthShortcutButtonListViewManager_o *_4__this; // x8
  __int64 v5; // x8

  v3 = this;
  if ( (byte_49FB0CF & 1) == 0 )
  {
    this = (BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *)sub_1B64870(
                                                                                &TerminalSceneComponent_TypeInfo,
                                                                                method);
    byte_49FB0CF = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  this = (BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *)_4__this->fields.blankEarth;
  if ( !this )
    goto LABEL_15;
  this = (BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *)BlankEarth__GetEarthPoint(
                                                                              (BlankEarth_o *)this,
                                                                              v3->fields.spotId,
                                                                              v2);
  if ( !this )
    goto LABEL_15;
  BlankEarthPoint__OpenQuestList((BlankEarthPoint_o *)this, method);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F97AD )
  {
    sub_1B64870(&TerminalSceneComponent_TypeInfo, method);
    byte_49F97AD = 1;
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
    sub_1B64ACC(this, method);
  TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)this, 1, 0LL);
}