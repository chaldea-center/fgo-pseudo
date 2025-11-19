void PhotoFrameListViewManager___ctor(PhotoFrameListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void PhotoFrameListViewManager__CreatePhotoFrameList(
        PhotoFrameListViewManager_o *this,
        System_Collections_Generic_List_PhotoFrameEntity__o *photoFrameList,
        int32_t selectedId,
        int32_t *firstSelectIndex,
        const MethodInfo *method)
{
  __int64 v7; // x22
  void *Item; // x0
  __int64 v9; // x1
  int32_t *v10; // x20
  PhotoFrameListViewManager___c_c *v11; // x0
  System_Func_object__int__o *_9__10_0; // x23
  Il2CppObject *v13; // x24
  struct PhotoFrameListViewManager___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Collections_Generic_List_object__o *v18; // x26
  System_Predicate_object__o *v19; // x23
  PhotoFrameListViewItem_o *v20; // x23
  int32_t v21; // w22
  System_Collections_Generic_List_object__o *v22; // x19
  int32_t v23; // w26
  int32_t v24; // w27
  System_String_o *v25; // x28
  System_String_o *v26; // x29
  UIAtlas_o *frameSampleAtlas; // x21
  _DWORD *v28; // x25
  PhotoFrameListViewItem_o *v29; // x24
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  UnityEngine_Object_o *scrollBar; // x20
  struct UIScrollBar_o *v37; // x8
  const MethodInfo *v38; // [xsp+0h] [xbp-80h]
  int32_t selectedIda; // [xsp+1Ch] [xbp-64h]

  if ( (byte_4CB18D8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_OrderByDescending_PhotoFrameEntity__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_PhotoFrameEntity___);
    sub_1C6BA08(&System_Func_PhotoFrameEntity__int__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_PhotoFrameEntity__Find__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_PhotoFrameEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_PhotoFrameEntity__get_Item__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&PhotoFrameListViewItem_TypeInfo);
    sub_1C6BA08(&System_Predicate_PhotoFrameEntity__TypeInfo);
    sub_1C6BA08(&Method_PhotoFrameListViewManager___c__CreatePhotoFrameList_b__10_0__);
    sub_1C6BA08(&Method_PhotoFrameListViewManager___c__DisplayClass10_0__CreatePhotoFrameList_b__1__);
    sub_1C6BA08(&PhotoFrameListViewManager___c__DisplayClass10_0_TypeInfo);
    sub_1C6BA08(&PhotoFrameListViewManager___c_TypeInfo);
    byte_4CB18D8 = 1;
  }
  v7 = sub_1C6BC54(PhotoFrameListViewManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_37;
  *(_DWORD *)(v7 + 16) = selectedId;
  v10 = (int32_t *)(v7 + 16);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  v11 = PhotoFrameListViewManager___c_TypeInfo;
  if ( !PhotoFrameListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoFrameListViewManager___c_TypeInfo);
    v11 = PhotoFrameListViewManager___c_TypeInfo;
  }
  _9__10_0 = (System_Func_object__int__o *)v11->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = PhotoFrameListViewManager___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v11->static_fields->__9;
    _9__10_0 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_PhotoFrameEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__10_0,
      v13,
      Method_PhotoFrameListViewManager___c__CreatePhotoFrameList_b__10_0__,
      0);
    static_fields = PhotoFrameListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Func_PhotoFrameEntity__int__o *)_9__10_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)photoFrameList,
                                                               (System_Func_TSource__TKey__o *)_9__10_0,
                                                               (const MethodInfo_316B118 *)Method_System_Linq_Enumerable_OrderByDescending_PhotoFrameEntity__int___);
  v18 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v17,
                                                       (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_PhotoFrameEntity___);
  v19 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_PhotoFrameEntity__TypeInfo);
  System_Predicate_object____ctor(
    v19,
    (Il2CppObject *)v7,
    Method_PhotoFrameListViewManager___c__DisplayClass10_0__CreatePhotoFrameList_b__1__,
    0);
  if ( !v18 )
    goto LABEL_37;
  Item = System_Collections_Generic_List_object___Find(
           v18,
           (System_Predicate_T__o *)v19,
           (const MethodInfo_3800FDC *)Method_System_Collections_Generic_List_PhotoFrameEntity__Find__);
  if ( !Item )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v18,
             0,
             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_PhotoFrameEntity__get_Item__);
    if ( !Item )
      goto LABEL_37;
    v10 = (int32_t *)((char *)Item + 16);
  }
  if ( v18->fields._size < 1 )
    goto LABEL_37;
  v20 = 0;
  v21 = 0;
  selectedIda = *v10;
  do
  {
    v22 = v18;
    Item = System_Collections_Generic_List_object___get_Item(
             v18,
             v21,
             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_PhotoFrameEntity__get_Item__);
    if ( !Item )
      goto LABEL_37;
    v23 = *((_DWORD *)Item + 4);
    v24 = *((_DWORD *)Item + 5);
    v25 = (System_String_o *)*((_QWORD *)Item + 3);
    v26 = (System_String_o *)*((_QWORD *)Item + 4);
    frameSampleAtlas = this->fields.frameSampleAtlas;
    v28 = Item;
    v29 = (PhotoFrameListViewItem_o *)sub_1C6BC54(PhotoFrameListViewItem_TypeInfo);
    PhotoFrameListViewItem___ctor(v29, v21, v23, v24, v25, v26, frameSampleAtlas, selectedIda, v38);
    if ( !v29 )
      goto LABEL_37;
    if ( v29->fields._IsSelected_k__BackingField )
      v20 = v29;
    ListViewItem__SetSortIndex((ListViewItem_o *)v29, v28[5], 0);
    Item = this->fields.itemList;
    if ( !Item )
      goto LABEL_37;
    v32 = *((_QWORD *)Item + 2);
    v33 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++*((_DWORD *)Item + 7);
    if ( !v32 )
      goto LABEL_37;
    v34 = *((int *)Item + 6);
    v18 = v22;
    if ( (unsigned int)v34 >= *(_DWORD *)(v32 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Item,
        (Il2CppObject *)v29,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = v32 + 8 * v34;
      *((_DWORD *)Item + 6) = v34 + 1;
      *(_QWORD *)(v35 + 32) = v29;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v35 + 32), (int32_t)v29, v30, v31);
    }
    ++v21;
  }
  while ( v21 < v22->fields._size );
  if ( !v20 )
LABEL_37:
    sub_1C6BC60(Item, v9);
  *firstSelectIndex = v20->fields.index;
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
            ListViewManager__JumpItem((ListViewManager_o *)this, v20->fields.index, 0);
          return;
        }
      }
    }
    goto LABEL_37;
  }
}


void PhotoFrameListViewManager__DestroyList(PhotoFrameListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C6BC60(0, v3);
  ListViewSort__Save(sort, 0);
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

  if ( (byte_4CB18D9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&PhotoFrameListViewItem_TypeInfo);
    byte_4CB18D9 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v14 = v13;
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v14,
             (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v6 )
        break;
      current = v14.fields._current;
      if ( !v14.fields._current
        || (naturalAligment = PhotoFrameListViewItem_TypeInfo->_2.naturalAligment,
            v14.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
        || (PhotoFrameListViewItem_c *)v14.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != PhotoFrameListViewItem_TypeInfo )
      {
        sub_1C6BC60(v6, v7);
      }
      klass = v14.fields._current[7].klass;
      LOBYTE(v14.fields._current[9].monitor) = LODWORD(v14.fields._current[7].monitor) == selectedItemId;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0, 0) )
      {
        v12 = current[7].klass;
        if ( !v12 )
          sub_1C6BC60(0, v11);
        (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v12->_1.image + 49))(
          v12,
          current,
          *((_QWORD *)v12->_1.image + 50));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void PhotoFrameListViewManager__OnClickListView(
        PhotoFrameListViewManager_o *this,
        PhotoFrameListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct PhotoFrameListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C6BC60(v6, v7);
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

  if ( (byte_4CB18DC & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB18DC = 1;
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
          sub_1C6BC60(0, v7);
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

  if ( (byte_4CB18DB & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_PhotoFrameListViewObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_PhotoFrameListViewObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_PhotoFrameListViewObject__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_PhotoFrameListViewObject__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_PhotoFrameListViewObject__get_Count__);
    sub_1C6BA08(&Method_PhotoFrameListViewManager_OnMoveEnd__);
    sub_1C6BA08(&StringLiteral_9938/*"OnMoveEnd"*/);
    byte_4CB18DB = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)PhotoFrameListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C6BC60(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9938/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_PhotoFrameListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_PhotoFrameListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_PhotoFrameListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C6BC60(v10, v11);
      PhotoFrameListViewObject__Init((PhotoFrameListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_PhotoFrameListViewObject__Dispose__);
  }
}


void PhotoFrameListViewManager__SetFrameSpriteAtlas(
        PhotoFrameListViewManager_o *this,
        UIAtlas_o *atlas,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.frameSampleAtlas = atlas;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.frameSampleAtlas, (int32_t)atlas, (int32_t)method, v3);
}


void PhotoFrameListViewManager__SetMode(
        PhotoFrameListViewManager_o *this,
        int32_t mode,
        PhotoFrameListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  PhotoFrameListViewManager__SetMode_34038664(this, mode, v6);
}


void PhotoFrameListViewManager__SetMode_34038664(
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
  if ( (byte_4CB18DA & 1) == 0 )
  {
    this = (PhotoFrameListViewManager_o *)sub_1C6BA08(&PhotoFrameListViewObject_TypeInfo);
    byte_4CB18DA = 1;
  }
  if ( !obj
    || (naturalAligment = PhotoFrameListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (PhotoFrameListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != PhotoFrameListViewObject_TypeInfo )
  {
    sub_1C6BC60(this, obj);
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

  if ( (byte_4CB18D5 & 1) == 0 )
  {
    sub_1C6BA08(&PhotoFrameListViewManager_CallbackFunc_TypeInfo);
    byte_4CB18D5 = 1;
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
    v8 = sub_1CC77DC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PhotoFrameListViewManager_o *)sub_1C6BFFC(v7);
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
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CB18D7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_PhotoFrameListViewObject___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_PhotoFrameListViewObject__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_PhotoFrameListViewObject___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_PhotoFrameListViewObject__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB18D7 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_PhotoFrameListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_PhotoFrameListViewObject___ctor__);
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
                           (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_PhotoFrameListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1C6BC60(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_PhotoFrameListViewObject__Add__;
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

  if ( (byte_4CB18D6 & 1) == 0 )
  {
    sub_1C6BA08(&PhotoFrameListViewManager_CallbackFunc_TypeInfo);
    byte_4CB18D6 = 1;
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
    v8 = sub_1CC77DC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PhotoFrameListViewManager_o *)sub_1C6BFFC(v7);
  PhotoFrameListViewManager__get_ObjectList(v10, v11);
}


void PhotoFrameListViewManager_CallbackFunc___ctor(
        PhotoFrameListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A9AFEC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9AFA4;
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
  if ( (byte_4CB18DD & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    byte_4CB18DD = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v9, callback, object);
}


void PhotoFrameListViewManager_CallbackFunc__EndInvoke(
        PhotoFrameListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
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


void PhotoFrameListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB18DE & 1) == 0 )
  {
    sub_1C6BA08(&PhotoFrameListViewManager___c_TypeInfo);
    byte_4CB18DE = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(PhotoFrameListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PhotoFrameListViewManager___c_TypeInfo->static_fields->__9 = (struct PhotoFrameListViewManager___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)PhotoFrameListViewManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void PhotoFrameListViewManager___c___ctor(PhotoFrameListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t PhotoFrameListViewManager___c___CreatePhotoFrameList_b__10_0(
        PhotoFrameListViewManager___c_o *this,
        PhotoFrameEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.priority;
}


void PhotoFrameListViewManager___c__DisplayClass10_0___ctor(
        PhotoFrameListViewManager___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PhotoFrameListViewManager___c__DisplayClass10_0___CreatePhotoFrameList_b__1(
        PhotoFrameListViewManager___c__DisplayClass10_0_o *this,
        PhotoFrameEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.id == this->fields.selectedId;
}