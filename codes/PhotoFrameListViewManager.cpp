void PhotoFrameListViewManager___ctor(PhotoFrameListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2BEA3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    byte_4D2BEA3 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.frameSampleAtlases = (struct System_Collections_Generic_List_UIAtlas__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.frameSampleAtlases, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
  const MethodInfo_38796CC **v13; // x25
  PhotoFrameListViewItem_o *v14; // x20
  int32_t v15; // w22
  const MethodInfo_38796CC **v16; // x19
  void *v17; // x25
  System_String_o *v18; // x26
  const MethodInfo *v19; // x2
  UIAtlas_o *FrameSpriteAtlas; // x0
  int32_t v21; // w23
  System_String_o *v22; // x28
  UIAtlas_o *v23; // x29
  PhotoFrameListViewItem_o *v24; // x24
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  __int64 v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  UnityEngine_Object_o *scrollBar; // x21
  struct UIScrollBar_o *v37; // x8
  const MethodInfo *v38; // [xsp+0h] [xbp-80h]
  int32_t selectedIda; // [xsp+1Ch] [xbp-64h]

  if ( (byte_4D2BE9C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_PhotoFrameEntity__Find__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_PhotoFrameEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_PhotoFrameEntity__get_Item__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&PhotoFrameListViewItem_TypeInfo);
    sub_1C93AD4(&System_Predicate_PhotoFrameEntity__TypeInfo);
    sub_1C93AD4(&Method_PhotoFrameListViewManager___c__DisplayClass10_0__CreatePhotoFrameList_b__0__);
    sub_1C93AD4(&PhotoFrameListViewManager___c__DisplayClass10_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_24372/*"thumbnail_"*/);
    byte_4D2BE9C = 1;
  }
  v8 = sub_1C93D20(PhotoFrameListViewManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8 )
    goto LABEL_31;
  *(_DWORD *)(v8 + 16) = selectedId;
  v11 = (int32_t *)(v8 + 16);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  v12 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_PhotoFrameEntity__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_PhotoFrameListViewManager___c__DisplayClass10_0__CreatePhotoFrameList_b__0__,
    0);
  if ( !photoFrameList )
    goto LABEL_31;
  v13 = (const MethodInfo_38796CC **)&Method_System_Collections_Generic_List_PhotoFrameEntity__get_Item__;
  Item = System_Collections_Generic_List_object___Find(
           (System_Collections_Generic_List_object__o *)photoFrameList,
           (System_Predicate_T__o *)v12,
           (const MethodInfo_387A004 *)Method_System_Collections_Generic_List_PhotoFrameEntity__Find__);
  if ( !Item )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)photoFrameList,
             0,
             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_PhotoFrameEntity__get_Item__);
    if ( !Item )
      goto LABEL_31;
    v11 = (int32_t *)((char *)Item + 16);
  }
  if ( photoFrameList->fields._size < 1 )
    goto LABEL_31;
  v14 = 0;
  v15 = 0;
  selectedIda = *v11;
  do
  {
    v16 = v13;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)photoFrameList,
             v15,
             *v13);
    if ( !Item )
      goto LABEL_31;
    v17 = Item;
    v18 = System_String__Concat_64425724((System_String_o *)StringLiteral_24372/*"thumbnail_"*/, *((System_String_o **)Item + 3), 0);
    FrameSpriteAtlas = PhotoFrameListViewManager__GetFrameSpriteAtlas(this, v18, v19);
    v21 = *((_DWORD *)v17 + 4);
    v22 = (System_String_o *)*((_QWORD *)v17 + 4);
    v23 = FrameSpriteAtlas;
    v24 = (PhotoFrameListViewItem_o *)sub_1C93D20(PhotoFrameListViewItem_TypeInfo);
    PhotoFrameListViewItem___ctor(v24, v15, v21, v25, v18, v22, v23, selectedIda, v38);
    if ( !v24 )
      goto LABEL_31;
    if ( v24->fields._IsSelected_k__BackingField )
      v14 = v24;
    ListViewItem__SetSortIndex((ListViewItem_o *)v24, *((_DWORD *)v17 + 5), 0);
    Item = this->fields.itemList;
    if ( !Item )
      goto LABEL_31;
    v32 = *((_QWORD *)Item + 2);
    v33 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++*((_DWORD *)Item + 7);
    if ( !v32 )
      goto LABEL_31;
    v34 = *((int *)Item + 6);
    v13 = v16;
    if ( (unsigned int)v34 >= *(_DWORD *)(v32 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Item,
        (Il2CppObject *)v24,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = v32 + 8 * v34;
      *((_DWORD *)Item + 6) = v34 + 1;
      *(_QWORD *)(v35 + 32) = v24;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v35 + 32), (int32_t)v24, v26, v27, v28, v29, v30, v31);
    }
    ++v15;
  }
  while ( v15 < photoFrameList->fields._size );
  if ( !v14 )
LABEL_31:
    sub_1C93D2C(Item, v10);
  *firstSelectIndex = v14->fields.index;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        v37 = this->fields.scrollBar;
        if ( v37 )
        {
          if ( v37->fields.mSize <= 0.98 )
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
    sub_1C93D2C(0, v3);
  ListViewSort__Save(sort, 0);
}


UIAtlas_o *PhotoFrameListViewManager__GetFrameSpriteAtlas(
        PhotoFrameListViewManager_o *this,
        System_String_o *frameSpriteName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_UIAtlas__o *frameSampleAtlases; // x0
  int32_t v6; // w21
  const MethodInfo_38796CC *v7; // x2
  Il2CppObject *Item; // x22

  if ( (byte_4D2BEA2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_UIAtlas__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UIAtlas__get_Item__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2BEA2 = 1;
  }
  frameSampleAtlases = this->fields.frameSampleAtlases;
  if ( !frameSampleAtlases )
LABEL_16:
    sub_1C93D2C(frameSampleAtlases, frameSpriteName);
  if ( frameSampleAtlases->fields._size < 1 )
    return 0;
  v6 = 0;
  v7 = (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_UIAtlas__get_Item__;
  while ( 1 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)frameSampleAtlases,
             v6,
             v7);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    frameSampleAtlases = (struct System_Collections_Generic_List_UIAtlas__o *)UnityEngine_Object__op_Inequality(
                                                                                (UnityEngine_Object_o *)Item,
                                                                                0,
                                                                                0);
    if ( ((unsigned __int8)frameSampleAtlases & 1) != 0 )
    {
      if ( !Item )
        goto LABEL_16;
      if ( UIAtlas__GetSprite((UIAtlas_o *)Item, frameSpriteName, 0) )
        return (UIAtlas_o *)Item;
    }
    frameSampleAtlases = this->fields.frameSampleAtlases;
    if ( !frameSampleAtlases )
      goto LABEL_16;
    v7 = (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_UIAtlas__get_Item__;
    if ( ++v6 >= frameSampleAtlases->fields._size )
      return (UIAtlas_o *)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)frameSampleAtlases,
                            0,
                            (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_UIAtlas__get_Item__);
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
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x10
  Il2CppClass *klass; // x21
  __int64 v11; // x1
  Il2CppClass *v12; // x0
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D2BE9D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&PhotoFrameListViewItem_TypeInfo);
    byte_4D2BE9D = 1;
  }
  memset(&v14, 0, sizeof(v14));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v14 = v13;
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v14,
             (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v6 )
        break;
      current = v14.fields._current;
      if ( !v14.fields._current
        || (naturalAligment = PhotoFrameListViewItem_TypeInfo->_2.naturalAligment,
            v14.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
        || (PhotoFrameListViewItem_c *)v14.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != PhotoFrameListViewItem_TypeInfo )
      {
        sub_1C93D2C(v6, v7);
      }
      klass = v14.fields._current[7].klass;
      LOBYTE(v14.fields._current[10].klass) = LODWORD(v14.fields._current[7].monitor) == selectedItemId;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0, 0) )
      {
        v12 = current[7].klass;
        if ( !v12 )
          sub_1C93D2C(0, v11);
        (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v12->_1.image + 49))(
          v12,
          current,
          *((_QWORD *)v12->_1.image + 50));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void PhotoFrameListViewManager__OnClickListView(
        PhotoFrameListViewManager_o *this,
        PhotoFrameListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct PhotoFrameListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C93D2C(v10, v11);
    Index = ListViewObject__get_Index((ListViewObject_o *)obj, 0);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      Index,
      callbackFunc->fields.method);
  }
}


void PhotoFrameListViewManager__OnMoveEnd(PhotoFrameListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0

  if ( (byte_4D2BEA0 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2BEA0 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_1C93D2C(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v8->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v8,
          1,
          v8->klass->vtable._8_UpdateScrollbars.method);
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
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D2BE9F & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_PhotoFrameListViewObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_PhotoFrameListViewObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_PhotoFrameListViewObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_PhotoFrameListViewObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_PhotoFrameListViewObject__get_Count__);
    sub_1C93AD4(&Method_PhotoFrameListViewManager_OnMoveEnd__);
    sub_1C93AD4(&StringLiteral_9998/*"OnMoveEnd"*/);
    byte_4D2BE9F = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)PhotoFrameListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C93D2C(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9998/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_PhotoFrameListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_PhotoFrameListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_PhotoFrameListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C93D2C(v10, v11);
      PhotoFrameListViewObject__Init((PhotoFrameListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_PhotoFrameListViewObject__Dispose__);
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
  Il2CppObject *Item; // x22
  System_Collections_Generic_List_object__o *v10; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  PhotoFrameListViewManager_o *v20; // x1
  Il2CppClass **v21; // x0

  v4 = this;
  if ( (byte_4D2BEA1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UIAtlas__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UIAtlas__get_Item__);
    this = (PhotoFrameListViewManager_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2BEA1 = 1;
  }
  frameSampleAtlases = v4->fields.frameSampleAtlases;
  if ( !frameSampleAtlases )
LABEL_19:
    sub_1C93D2C(this, atlases);
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
               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_UIAtlas__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0) )
      {
        v10 = (System_Collections_Generic_List_object__o *)v4->fields.frameSampleAtlases;
        this = (PhotoFrameListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)atlases,
                                                i,
                                                (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_UIAtlas__get_Item__);
        if ( !v10 )
          goto LABEL_19;
        items = v10->fields._items;
        v18 = Method_System_Collections_Generic_List_UIAtlas__Add__;
        ++v10->fields._version;
        if ( !items )
          goto LABEL_19;
        v19 = v10->fields._size;
        v20 = this;
        if ( (unsigned int)v19 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)this,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + v19;
          v10->fields._size = v19 + 1;
          v21[4] = (Il2CppClass *)v20;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v20, v11, v12, v13, v14, v15, v16);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  PhotoFrameListViewManager__SetMode_34353136(this, mode, v10);
}


void PhotoFrameListViewManager__SetMode_34353136(
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
  PhotoFrameListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4D2BE9E & 1) == 0 )
  {
    this = (PhotoFrameListViewManager_o *)sub_1C93AD4(&PhotoFrameListViewObject_TypeInfo);
    byte_4D2BE9E = 1;
  }
  if ( !obj
    || (naturalAligment = PhotoFrameListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (PhotoFrameListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != PhotoFrameListViewObject_TypeInfo )
  {
    sub_1C93D2C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 2;
  else
    v7 = 1;
  PhotoFrameListViewObject__Init((PhotoFrameListViewObject_o *)obj, v7, 0, method);
}


void PhotoFrameListViewManager__add_callbackFunc(
        PhotoFrameListViewManager_o *this,
        PhotoFrameListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct PhotoFrameListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PhotoFrameListViewManager_o *v10; // x0
  PhotoFrameListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4D2BE99 & 1) == 0 )
  {
    sub_1C93AD4(&PhotoFrameListViewManager_CallbackFunc_TypeInfo);
    byte_4D2BE99 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (PhotoFrameListViewManager_CallbackFunc_c *)v7->klass != PhotoFrameListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CEF8A8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PhotoFrameListViewManager_o *)sub_1C940C8(v7);
  PhotoFrameListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_PhotoFrameListViewObject__o *PhotoFrameListViewManager__get_ObjectList(
        PhotoFrameListViewManager_o *this,
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

  if ( (byte_4D2BE9B & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_PhotoFrameListViewObject___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_PhotoFrameListViewObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_PhotoFrameListViewObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_PhotoFrameListViewObject__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2BE9B = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_PhotoFrameListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_PhotoFrameListViewObject___ctor__);
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
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_PhotoFrameListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C93D2C(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_PhotoFrameListViewObject__Add__;
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
  return (System_Collections_Generic_List_PhotoFrameListViewObject__o *)v3;
}


void PhotoFrameListViewManager__remove_callbackFunc(
        PhotoFrameListViewManager_o *this,
        PhotoFrameListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct PhotoFrameListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PhotoFrameListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4D2BE9A & 1) == 0 )
  {
    sub_1C93AD4(&PhotoFrameListViewManager_CallbackFunc_TypeInfo);
    byte_4D2BE9A = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (PhotoFrameListViewManager_CallbackFunc_c *)v7->klass != PhotoFrameListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CEF8A8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PhotoFrameListViewManager_o *)sub_1C940C8(v7);
  PhotoFrameListViewManager__get_ObjectList(v10, v11);
}


void PhotoFrameListViewManager_CallbackFunc___ctor(
        PhotoFrameListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC1A50;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC1A08;
}


System_IAsyncResult_o *PhotoFrameListViewManager_CallbackFunc__BeginInvoke(
        PhotoFrameListViewManager_CallbackFunc_o *this,
        int32_t frameId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = frameId;
  if ( (byte_4D2BEA4 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    byte_4D2BEA4 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return sub_1C93A88(this, v9, callback, object);
}


void PhotoFrameListViewManager_CallbackFunc__EndInvoke(
        PhotoFrameListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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
    sub_1C93D2C(this, 0);
  return x->fields.id == this->fields.selectedId;
}