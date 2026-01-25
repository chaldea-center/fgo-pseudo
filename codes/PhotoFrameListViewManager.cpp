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
  __int64 v8; // x22
  void *Item; // x0
  __int64 v10; // x1
  int32_t *v11; // x25
  PhotoFrameListViewManager___c_c *v12; // x0
  System_Func_object__int__o *_9__10_0; // x23
  Il2CppObject *v14; // x24
  struct PhotoFrameListViewManager___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Collections_Generic_List_object__o *v23; // x21
  System_Predicate_object__o *v24; // x23
  const MethodInfo_383EB2C **v25; // x24
  ListViewManager_o *v26; // x29
  PhotoFrameListViewItem_o *v27; // x20
  int32_t v28; // w22
  const MethodInfo_383EB2C **v29; // x19
  int32_t v30; // w26
  System_String_o *v31; // x27
  System_String_o *v32; // x28
  UIAtlas_o *m_CancellationTokenSource; // x23
  _DWORD *v34; // x25
  PhotoFrameListViewItem_o *v35; // x24
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  __int64 v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  __int64 v46; // x8
  UnityEngine_Object_o *scrollBar; // x21
  struct UIScrollBar_o *v48; // x8
  const MethodInfo *v49; // [xsp+0h] [xbp-80h]
  int32_t selectedIda; // [xsp+1Ch] [xbp-64h]

  if ( (byte_4CE9BB6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_OrderByDescending_PhotoFrameEntity__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToList_PhotoFrameEntity___);
    sub_1C7BAE8(&System_Func_PhotoFrameEntity__int__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_PhotoFrameEntity__Find__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_PhotoFrameEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_PhotoFrameEntity__get_Item__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&PhotoFrameListViewItem_TypeInfo);
    sub_1C7BAE8(&System_Predicate_PhotoFrameEntity__TypeInfo);
    sub_1C7BAE8(&Method_PhotoFrameListViewManager___c__CreatePhotoFrameList_b__10_0__);
    sub_1C7BAE8(&Method_PhotoFrameListViewManager___c__DisplayClass10_0__CreatePhotoFrameList_b__1__);
    sub_1C7BAE8(&PhotoFrameListViewManager___c__DisplayClass10_0_TypeInfo);
    sub_1C7BAE8(&PhotoFrameListViewManager___c_TypeInfo);
    byte_4CE9BB6 = 1;
  }
  v8 = sub_1C7BD34(PhotoFrameListViewManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8 )
    goto LABEL_37;
  *(_DWORD *)(v8 + 16) = selectedId;
  v11 = (int32_t *)(v8 + 16);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  v12 = PhotoFrameListViewManager___c_TypeInfo;
  if ( !PhotoFrameListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoFrameListViewManager___c_TypeInfo);
    v12 = PhotoFrameListViewManager___c_TypeInfo;
  }
  _9__10_0 = (System_Func_object__int__o *)v12->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = PhotoFrameListViewManager___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__10_0 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_PhotoFrameEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__10_0,
      v14,
      Method_PhotoFrameListViewManager___c__CreatePhotoFrameList_b__10_0__,
      0);
    static_fields = PhotoFrameListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Func_PhotoFrameEntity__int__o *)_9__10_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__10_0,
      (int32_t)_9__10_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)photoFrameList,
                                                               (System_Func_TSource__TKey__o *)_9__10_0,
                                                               (const MethodInfo_319F4D8 *)Method_System_Linq_Enumerable_OrderByDescending_PhotoFrameEntity__int___);
  v23 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v22,
                                                       (const MethodInfo_31B3E80 *)Method_System_Linq_Enumerable_ToList_PhotoFrameEntity___);
  v24 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_PhotoFrameEntity__TypeInfo);
  System_Predicate_object____ctor(
    v24,
    (Il2CppObject *)v8,
    Method_PhotoFrameListViewManager___c__DisplayClass10_0__CreatePhotoFrameList_b__1__,
    0);
  if ( !v23 )
    goto LABEL_37;
  v25 = (const MethodInfo_383EB2C **)&Method_System_Collections_Generic_List_PhotoFrameEntity__get_Item__;
  Item = System_Collections_Generic_List_object___Find(
           v23,
           (System_Predicate_T__o *)v24,
           (const MethodInfo_383F464 *)Method_System_Collections_Generic_List_PhotoFrameEntity__Find__);
  v26 = (ListViewManager_o *)this;
  if ( !Item )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v23,
             0,
             (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_PhotoFrameEntity__get_Item__);
    if ( !Item )
      goto LABEL_37;
    v11 = (int32_t *)((char *)Item + 16);
  }
  if ( v23->fields._size < 1 )
    goto LABEL_37;
  v27 = 0;
  v28 = 0;
  selectedIda = *v11;
  do
  {
    v29 = v25;
    Item = System_Collections_Generic_List_object___get_Item(v23, v28, *v25);
    if ( !Item )
      goto LABEL_37;
    v30 = *((_DWORD *)Item + 4);
    v31 = (System_String_o *)*((_QWORD *)Item + 3);
    v32 = (System_String_o *)*((_QWORD *)Item + 4);
    m_CancellationTokenSource = (UIAtlas_o *)v26[1].fields.m_CancellationTokenSource;
    v34 = Item;
    v35 = (PhotoFrameListViewItem_o *)sub_1C7BD34(PhotoFrameListViewItem_TypeInfo);
    PhotoFrameListViewItem___ctor(v35, v28, v30, v36, v31, v32, m_CancellationTokenSource, selectedIda, v49);
    if ( !v35 )
      goto LABEL_37;
    if ( v35->fields._IsSelected_k__BackingField )
      v27 = v35;
    ListViewItem__SetSortIndex((ListViewItem_o *)v35, v34[5], 0);
    Item = v26->fields.itemList;
    if ( !Item )
      goto LABEL_37;
    v43 = *((_QWORD *)Item + 2);
    v44 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++*((_DWORD *)Item + 7);
    if ( !v43 )
      goto LABEL_37;
    v45 = *((int *)Item + 6);
    if ( (unsigned int)v45 >= *(_DWORD *)(v43 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Item,
        (Il2CppObject *)v35,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    }
    else
    {
      v46 = v43 + 8 * v45;
      *((_DWORD *)Item + 6) = v45 + 1;
      *(_QWORD *)(v46 + 32) = v35;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v46 + 32), (int32_t)v35, v37, v38, v39, v40, v41, v42);
    }
    ++v28;
    v25 = v29;
  }
  while ( v28 < v23->fields._size );
  if ( !v27 )
LABEL_37:
    sub_1C7BD40(Item, v10);
  *firstSelectIndex = v27->fields.index;
  ListViewManager__SortItem(v26, -1, 0, -1, 0);
  scrollBar = (UnityEngine_Object_o *)v26->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
  {
    Item = v26->fields.scrollBar;
    if ( Item )
    {
      Item = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0);
      if ( Item )
      {
        Item = (void *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Item, 0);
        if ( ((unsigned __int8)Item & 1) == 0 )
          return;
        v48 = v26->fields.scrollBar;
        if ( v48 )
        {
          if ( v48->fields.mSize <= 0.98 )
            ListViewManager__JumpItem(v26, v27->fields.index, 0);
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
    sub_1C7BD40(0, v3);
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

  if ( (byte_4CE9BB7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&PhotoFrameListViewItem_TypeInfo);
    byte_4CE9BB7 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v14 = v13;
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v14,
             (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v6 )
        break;
      current = v14.fields._current;
      if ( !v14.fields._current
        || (naturalAligment = PhotoFrameListViewItem_TypeInfo->_2.naturalAligment,
            v14.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
        || (PhotoFrameListViewItem_c *)v14.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != PhotoFrameListViewItem_TypeInfo )
      {
        sub_1C7BD40(v6, v7);
      }
      klass = v14.fields._current[7].klass;
      LOBYTE(v14.fields._current[9].monitor) = LODWORD(v14.fields._current[7].monitor) == selectedItemId;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0, 0) )
      {
        v12 = current[7].klass;
        if ( !v12 )
          sub_1C7BD40(0, v11);
        (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v12->_1.image + 49))(
          v12,
          current,
          *((_QWORD *)v12->_1.image + 50));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C7BD40(v10, v11);
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

  if ( (byte_4CE9BBA & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE9BBA = 1;
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
          sub_1C7BD40(0, v7);
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

  if ( (byte_4CE9BB9 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_PhotoFrameListViewObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_PhotoFrameListViewObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_PhotoFrameListViewObject__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_PhotoFrameListViewObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_PhotoFrameListViewObject__get_Count__);
    sub_1C7BAE8(&Method_PhotoFrameListViewManager_OnMoveEnd__);
    sub_1C7BAE8(&StringLiteral_9968/*"OnMoveEnd"*/);
    byte_4CE9BB9 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)PhotoFrameListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C7BD40(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9968/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_PhotoFrameListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_PhotoFrameListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_PhotoFrameListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C7BD40(v10, v11);
      PhotoFrameListViewObject__Init((PhotoFrameListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_PhotoFrameListViewObject__Dispose__);
  }
}


void PhotoFrameListViewManager__SetFrameSpriteAtlas(
        PhotoFrameListViewManager_o *this,
        UIAtlas_o *atlas,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.frameSampleAtlas = atlas;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.frameSampleAtlas,
    (int32_t)atlas,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  PhotoFrameListViewManager__SetMode_34239176(this, mode, v10);
}


void PhotoFrameListViewManager__SetMode_34239176(
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
  if ( (byte_4CE9BB8 & 1) == 0 )
  {
    this = (PhotoFrameListViewManager_o *)sub_1C7BAE8(&PhotoFrameListViewObject_TypeInfo);
    byte_4CE9BB8 = 1;
  }
  if ( !obj
    || (naturalAligment = PhotoFrameListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (PhotoFrameListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != PhotoFrameListViewObject_TypeInfo )
  {
    sub_1C7BD40(this, obj);
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

  if ( (byte_4CE9BB3 & 1) == 0 )
  {
    sub_1C7BAE8(&PhotoFrameListViewManager_CallbackFunc_TypeInfo);
    byte_4CE9BB3 = 1;
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
    v8 = sub_1CD78BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PhotoFrameListViewManager_o *)sub_1C7C0DC(v7);
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

  if ( (byte_4CE9BB5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_PhotoFrameListViewObject___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_PhotoFrameListViewObject__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_PhotoFrameListViewObject___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_PhotoFrameListViewObject__TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE9BB5 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_PhotoFrameListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_PhotoFrameListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C7BD40(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C7BD40(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_PhotoFrameListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C7BD40(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_PhotoFrameListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C7BD40(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4CE9BB4 & 1) == 0 )
  {
    sub_1C7BAE8(&PhotoFrameListViewManager_CallbackFunc_TypeInfo);
    byte_4CE9BB4 = 1;
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
    v8 = sub_1CD78BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PhotoFrameListViewManager_o *)sub_1C7C0DC(v7);
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
  sub_1C7BA8C(
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
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AAABD0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AAAB88;
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
  if ( (byte_4CE9BBB & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    byte_4CE9BBB = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v9, callback, object);
}


void PhotoFrameListViewManager_CallbackFunc__EndInvoke(
        PhotoFrameListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CE9BBC & 1) == 0 )
  {
    sub_1C7BAE8(&PhotoFrameListViewManager___c_TypeInfo);
    byte_4CE9BBC = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(PhotoFrameListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PhotoFrameListViewManager___c_TypeInfo->static_fields->__9 = (struct PhotoFrameListViewManager___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)PhotoFrameListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C7BD40(this, 0);
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
    sub_1C7BD40(this, 0);
  return x->fields.id == this->fields.selectedId;
}