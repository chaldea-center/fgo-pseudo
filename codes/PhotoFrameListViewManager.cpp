void PhotoFrameListViewManager___ctor(PhotoFrameListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596BC01 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    byte_596BC01 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.frameSampleAtlases = (struct System_Collections_Generic_List_UIAtlas__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.frameSampleAtlases, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void PhotoFrameListViewManager__CreatePhotoFrameList(
        PhotoFrameListViewManager_o *this,
        System_Collections_Generic_List_PhotoFrameEntity__o *photoFrameList,
        int32_t selectedId,
        int32_t *firstSelectIndex,
        const MethodInfo *method)
{
  __int64 v8; // x23
  void *Item; // x0
  __int64 v10; // x1
  int32_t *v11; // x24
  System_Predicate_object__o *v12; // x22
  int32_t v13; // w22
  PhotoFrameListViewItem_o *v14; // x20
  int32_t v15; // w23
  void *v16; // x25
  System_String_o *v17; // x26
  const MethodInfo *v18; // x2
  UIAtlas_o *FrameSpriteAtlas; // x0
  int32_t v20; // w27
  System_String_o *v21; // x28
  UIAtlas_o *v22; // x29
  PhotoFrameListViewItem_o *v23; // x24
  int32_t v24; // w3
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  __int64 v34; // x8
  __int64 v35; // x1
  __int64 v36; // x2
  UnityEngine_Object_o *scrollBar; // x21
  struct UIScrollBar_o *v38; // x8
  const MethodInfo *v39; // [xsp+0h] [xbp-70h]

  if ( (byte_596BBFA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_PhotoFrameEntity__Find__);
    sub_2213A60(&Method_System_Collections_Generic_List_PhotoFrameEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_PhotoFrameEntity__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&PhotoFrameListViewItem_TypeInfo);
    sub_2213A60(&System_Predicate_PhotoFrameEntity__TypeInfo);
    sub_2213A60(&Method_PhotoFrameListViewManager___c__DisplayClass10_0__CreatePhotoFrameList_b__0__);
    sub_2213A60(&PhotoFrameListViewManager___c__DisplayClass10_0_TypeInfo);
    sub_2213A60(&StringLiteral_25361/*"thumbnail_"*/);
    byte_596BBFA = 1;
  }
  v8 = sub_2213CCC(PhotoFrameListViewManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8 )
    goto LABEL_31;
  *(_DWORD *)(v8 + 16) = selectedId;
  v11 = (int32_t *)(v8 + 16);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  v12 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_PhotoFrameEntity__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_PhotoFrameListViewManager___c__DisplayClass10_0__CreatePhotoFrameList_b__0__,
    0);
  if ( !photoFrameList )
    goto LABEL_31;
  Item = System_Collections_Generic_List_object___Find(
           (System_Collections_Generic_List_object__o *)photoFrameList,
           (System_Predicate_T__o *)v12,
           (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_PhotoFrameEntity__Find__);
  if ( !Item )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)photoFrameList,
             0,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_PhotoFrameEntity__get_Item__);
    if ( !Item )
      goto LABEL_31;
    v11 = (int32_t *)((char *)Item + 16);
  }
  if ( photoFrameList->fields._size < 1 )
    goto LABEL_31;
  v13 = *v11;
  v14 = 0;
  v15 = 0;
  do
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)photoFrameList,
             v15,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_PhotoFrameEntity__get_Item__);
    if ( !Item )
      goto LABEL_31;
    v16 = Item;
    v17 = System_String__Concat_75651716((System_String_o *)StringLiteral_25361/*"thumbnail_"*/, *((System_String_o **)Item + 3), 0);
    FrameSpriteAtlas = PhotoFrameListViewManager__GetFrameSpriteAtlas(this, v17, v18);
    v20 = *((_DWORD *)v16 + 4);
    v21 = (System_String_o *)*((_QWORD *)v16 + 4);
    v22 = FrameSpriteAtlas;
    v23 = (PhotoFrameListViewItem_o *)sub_2213CCC(PhotoFrameListViewItem_TypeInfo);
    PhotoFrameListViewItem___ctor(v23, v15, v20, v24, v17, v21, v22, v13, v39);
    if ( !v23 )
      goto LABEL_31;
    if ( v23->fields._IsSelected_k__BackingField )
      v14 = v23;
    ListViewItem__SetSortIndex((ListViewItem_o *)v23, *((_DWORD *)v16 + 5), 0);
    Item = this->fields.itemList;
    if ( !Item )
      goto LABEL_31;
    v31 = *((_QWORD *)Item + 2);
    v32 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++*((_DWORD *)Item + 7);
    if ( !v31 )
      goto LABEL_31;
    v33 = *((int *)Item + 6);
    if ( (unsigned int)v33 >= *(_DWORD *)(v31 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Item,
        (Il2CppObject *)v23,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
    }
    else
    {
      v34 = v31 + 8 * v33;
      *((_DWORD *)Item + 6) = v33 + 1;
      *(_QWORD *)(v34 + 32) = v23;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v34 + 32), (int32_t)v23, v25, v26, v27, v28, v29, v30);
    }
    ++v15;
  }
  while ( v15 < photoFrameList->fields._size );
  if ( !v14 )
LABEL_31:
    sub_2213CDC(Item, v10);
  *firstSelectIndex = v14->fields.index;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35, v36);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
  {
    Item = this->fields.scrollBar;
    if ( Item )
    {
      Item = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0);
      if ( Item )
      {
        Item = (void *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Item, 0);
        if ( ((unsigned __int8)Item & 1) == 0 )
          return;
        v38 = this->fields.scrollBar;
        if ( v38 )
        {
          if ( v38->fields.mSize <= 0.98 )
            ListViewManager__JumpItem((ListViewManager_o *)this, v14->fields.index, 0);
          return;
        }
      }
    }
    goto LABEL_31;
  }
}


void PhotoFrameListViewManager__DestroyList(PhotoFrameListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_2213CDC(0, v3);
  ListViewSort__Save(sort, 0);
}


UIAtlas_o *PhotoFrameListViewManager__GetFrameSpriteAtlas(
        PhotoFrameListViewManager_o *this,
        System_String_o *frameSpriteName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_UIAtlas__o *frameSampleAtlases; // x0
  int32_t v6; // w21
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Item; // x22

  if ( (byte_596BC00 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIAtlas__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIAtlas__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BC00 = 1;
  }
  frameSampleAtlases = this->fields.frameSampleAtlases;
  if ( !frameSampleAtlases )
LABEL_13:
    sub_2213CDC(frameSampleAtlases, frameSpriteName);
  if ( frameSampleAtlases->fields._size < 1 )
  {
    return 0;
  }
  else
  {
    v6 = 0;
    while ( v6 < frameSampleAtlases->fields._size )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)frameSampleAtlases,
               v6,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UIAtlas__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
      frameSampleAtlases = (struct System_Collections_Generic_List_UIAtlas__o *)UnityEngine_Object__op_Inequality(
                                                                                  (UnityEngine_Object_o *)Item,
                                                                                  0,
                                                                                  0);
      if ( ((unsigned __int8)frameSampleAtlases & 1) != 0 )
      {
        if ( !Item )
          goto LABEL_13;
        if ( UIAtlas__GetSprite((UIAtlas_o *)Item, frameSpriteName, 0) )
          return (UIAtlas_o *)Item;
      }
      frameSampleAtlases = this->fields.frameSampleAtlases;
      ++v6;
      if ( !frameSampleAtlases )
        goto LABEL_13;
    }
    return (UIAtlas_o *)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)frameSampleAtlases,
                          0,
                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UIAtlas__get_Item__);
  }
}


void PhotoFrameListViewManager__ModifySelectingItem(
        PhotoFrameListViewManager_o *this,
        int32_t selectedItemId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x10
  UnityEngine_Object_c *v11; // x0
  Il2CppClass *klass; // x21
  __int64 v13; // x1
  Il2CppClass *v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596BBFB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&PhotoFrameListViewItem_TypeInfo);
    byte_596BBFB = 1;
  }
  itemList = this->fields.itemList;
  memset(&v16, 0, sizeof(v16));
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v16 = v15;
    v15.fields._list = 0;
    *(_QWORD *)&v15.fields._index = &v16;
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v16,
             (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v6 )
        break;
      current = v16.fields._current;
      if ( !v16.fields._current
        || (naturalAligment = PhotoFrameListViewItem_TypeInfo->_2.naturalAligment,
            v16.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
        || (PhotoFrameListViewItem_c *)v16.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != PhotoFrameListViewItem_TypeInfo )
      {
        sub_2213CDC(v6, v7);
      }
      v11 = UnityEngine_Object_TypeInfo;
      klass = v16.fields._current[7].klass;
      LOBYTE(v16.fields._current[10].klass) = LODWORD(v16.fields._current[7].monitor) == selectedItemId;
      if ( !*(&v11->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v11, v7, v8);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0, 0) )
      {
        v14 = current[7].klass;
        if ( !v14 )
          sub_2213CDC(0, v13);
        (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v14->_1.image + 49))(
          v14,
          current,
          *((_QWORD *)v14->_1.image + 50));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void PhotoFrameListViewManager__OnClickListView(
        PhotoFrameListViewManager_o *this,
        PhotoFrameListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct PhotoFrameListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x1

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_2213CDC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index((ListViewObject_o *)obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      Index,
      callbackFunc->fields.method);
  }
}


void PhotoFrameListViewManager__OnMoveEnd(PhotoFrameListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  struct UIScrollView_o *v9; // x0

  if ( (byte_596BBFE & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BBFE = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v9 = this->fields.scrollView;
        if ( !v9 )
          sub_2213CDC(0, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v9->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v9,
          1,
          v9->klass->vtable._8_UpdateScrollbars.method);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void PhotoFrameListViewManager__RequestListObject(
        PhotoFrameListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  const MethodInfo_448473C *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  __int64 v14; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v15; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596BBFD & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_PhotoFrameListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_PhotoFrameListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_PhotoFrameListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_PhotoFrameListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_PhotoFrameListViewObject__get_Count__);
    sub_2213A60(&Method_PhotoFrameListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596BBFD = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)PhotoFrameListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v8 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_PhotoFrameListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v8);
    v14 = 0;
    v15 = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_PhotoFrameListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_PhotoFrameListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v11, v12);
      PhotoFrameListViewObject__Init((PhotoFrameListViewObject_o *)current, mode, v10, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_PhotoFrameListViewObject__Dispose__);
  }
}


void PhotoFrameListViewManager__SetFrameSpriteAtlases(
        PhotoFrameListViewManager_o *this,
        System_Collections_Generic_List_UIAtlas__o *atlases,
        const MethodInfo *method)
{
  PhotoFrameListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_UIAtlas__o *frameSampleAtlases; // x8
  int32_t size; // w2
  int v7; // w9
  int32_t i; // w21
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Item; // x22
  System_Collections_Generic_List_object__o *v12; // x22
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  PhotoFrameListViewManager_o *v22; // x1
  Il2CppClass **v23; // x0

  v4 = this;
  if ( (byte_596BBFF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIAtlas__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIAtlas__get_Item__);
    this = (PhotoFrameListViewManager_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BBFF = 1;
  }
  frameSampleAtlases = v4->fields.frameSampleAtlases;
  if ( !frameSampleAtlases )
LABEL_19:
    sub_2213CDC(this, atlases);
  size = frameSampleAtlases->fields._size;
  v7 = frameSampleAtlases->fields._version + 1;
  frameSampleAtlases->fields._size = 0;
  frameSampleAtlases->fields._version = v7;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)frameSampleAtlases->fields._items, 0, size, 0);
  if ( atlases && atlases->fields._size >= 1 )
  {
    for ( i = 0; i < atlases->fields._size; ++i )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)atlases,
               i,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UIAtlas__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0) )
      {
        v12 = (System_Collections_Generic_List_object__o *)v4->fields.frameSampleAtlases;
        this = (PhotoFrameListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)atlases,
                                                i,
                                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UIAtlas__get_Item__);
        if ( !v12 )
          goto LABEL_19;
        items = v12->fields._items;
        v20 = Method_System_Collections_Generic_List_UIAtlas__Add__;
        ++v12->fields._version;
        if ( !items )
          goto LABEL_19;
        v21 = v12->fields._size;
        v22 = this;
        if ( (unsigned int)v21 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)this,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + v21;
          v12->fields._size = v21 + 1;
          v23[4] = (Il2CppClass *)v22;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 4), (int32_t)v22, v13, v14, v15, v16, v17, v18);
        }
      }
    }
  }
}


void PhotoFrameListViewManager__SetMode(
        PhotoFrameListViewManager_o *this,
        int32_t mode,
        PhotoFrameListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  PhotoFrameListViewManager__SetMode_40553648(this, mode, v10);
}


void PhotoFrameListViewManager__SetMode_40553648(
        PhotoFrameListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  if ( (unsigned int)(mode - 1) <= 2 )
    PhotoFrameListViewManager__RequestListObject(this, mode, v5);
}


void PhotoFrameListViewManager__SetObjectItem(
        PhotoFrameListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_596BBFC & 1) == 0 )
  {
    sub_2213A60(&PhotoFrameListViewObject_TypeInfo);
    byte_596BBFC = 1;
  }
  if ( obj
    && (naturalAligment = PhotoFrameListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (PhotoFrameListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == PhotoFrameListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 2 )
  {
    if ( v7 )
    {
      v8 = 1;
      goto LABEL_14;
    }
LABEL_15:
    sub_2213CDC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 2;
LABEL_14:
  PhotoFrameListViewObject__Init((PhotoFrameListViewObject_o *)v7, v8, 0, method);
}


void PhotoFrameListViewManager__add_callbackFunc(
        PhotoFrameListViewManager_o *this,
        PhotoFrameListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  PhotoFrameListViewManager_o *v11; // x0
  PhotoFrameListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596BBF7 & 1) == 0 )
  {
    sub_2213A60(&PhotoFrameListViewManager_CallbackFunc_TypeInfo);
    byte_596BBF7 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (PhotoFrameListViewManager_CallbackFunc_c *)v6->klass != PhotoFrameListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PhotoFrameListViewManager_o *)sub_221405C(v6, PhotoFrameListViewManager_CallbackFunc_TypeInfo, v7, v8);
  PhotoFrameListViewManager__remove_callbackFunc(v11, v12, v13);
}


System_Collections_Generic_List_PhotoFrameListViewObject__o *PhotoFrameListViewManager__get_ObjectList(
        PhotoFrameListViewManager_o *this,
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

  if ( (byte_596BBF9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_PhotoFrameListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_PhotoFrameListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_PhotoFrameListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_PhotoFrameListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BBF9 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_PhotoFrameListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_PhotoFrameListViewObject___ctor__);
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
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_PhotoFrameListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_PhotoFrameListViewObject__Add__,
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
  return (System_Collections_Generic_List_PhotoFrameListViewObject__o *)v3;
}


void PhotoFrameListViewManager__remove_callbackFunc(
        PhotoFrameListViewManager_o *this,
        PhotoFrameListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  PhotoFrameListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_596BBF8 & 1) == 0 )
  {
    sub_2213A60(&PhotoFrameListViewManager_CallbackFunc_TypeInfo);
    byte_596BBF8 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (PhotoFrameListViewManager_CallbackFunc_c *)v6->klass != PhotoFrameListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PhotoFrameListViewManager_o *)sub_221405C(v6, PhotoFrameListViewManager_CallbackFunc_TypeInfo, v7, v8);
  PhotoFrameListViewManager__get_ObjectList(v11, v12);
}


void PhotoFrameListViewManager_CallbackFunc___ctor(
        PhotoFrameListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_20033C4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_200337C;
}


System_IAsyncResult_o *PhotoFrameListViewManager_CallbackFunc__BeginInvoke(
        PhotoFrameListViewManager_CallbackFunc_o *this,
        int32_t frameId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = frameId;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984348, &v10);
  return sub_2213A14(this, v9, callback, object);
}


void PhotoFrameListViewManager_CallbackFunc__EndInvoke(
        PhotoFrameListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void PhotoFrameListViewManager_CallbackFunc__Invoke(
        PhotoFrameListViewManager_CallbackFunc_o *this,
        int32_t frameId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    frameId,
    this->fields.method);
}


void PhotoFrameListViewManager___c__DisplayClass10_0___ctor(
        PhotoFrameListViewManager___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PhotoFrameListViewManager___c__DisplayClass10_0___CreatePhotoFrameList_b__0(
        PhotoFrameListViewManager___c__DisplayClass10_0_o *this,
        PhotoFrameEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.id == this->fields.selectedId;
}