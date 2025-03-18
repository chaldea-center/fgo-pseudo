void __fastcall PhotoFrameListViewManager___ctor(PhotoFrameListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall PhotoFrameListViewManager__CreatePhotoFrameList(
        PhotoFrameListViewManager_o *this,
        System_Collections_Generic_List_PhotoFrameEntity__o *photoFrameList,
        int32_t selectedId,
        int32_t *firstSelectIndex,
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x22
  __int64 Item; // x0
  __int64 v22; // x1
  int32_t *v23; // x20
  PhotoFrameListViewManager___c_c *v24; // x0
  System_Func_object__int__o *_9__10_0; // x23
  Il2CppObject *v26; // x24
  struct PhotoFrameListViewManager___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Collections_Generic_List_object__o *v29; // x26
  System_Predicate_object__o *v30; // x23
  PhotoFrameListViewItem_o *v31; // x23
  int32_t v32; // w22
  System_Collections_Generic_List_object__o *v33; // x19
  int32_t v34; // w26
  int32_t v35; // w27
  System_String_o *v36; // x28
  System_String_o *v37; // x29
  UIAtlas_o *frameSampleAtlas; // x21
  __int64 v39; // x25
  PhotoFrameListViewItem_o *v40; // x24
  __int64 v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  __int64 v44; // x8
  UnityEngine_Object_o *scrollBar; // x20
  struct UIScrollBar_o *v46; // x8
  const MethodInfo *v47; // [xsp+0h] [xbp-80h]
  int32_t selectedIda; // [xsp+1Ch] [xbp-64h]

  if ( (byte_4C1D7D9 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_OrderByDescending_PhotoFrameEntity__int___, photoFrameList);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToList_PhotoFrameEntity___, v7);
    sub_1C3B764(&System_Func_PhotoFrameEntity__int__TypeInfo, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoFrameEntity__Find__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoFrameEntity__get_Count__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoFrameEntity__get_Item__, v12);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v13);
    sub_1C3B764(&PhotoFrameListViewItem_TypeInfo, v14);
    sub_1C3B764(&System_Predicate_PhotoFrameEntity__TypeInfo, v15);
    sub_1C3B764(&Method_PhotoFrameListViewManager___c__CreatePhotoFrameList_b__10_0__, v16);
    sub_1C3B764(&Method_PhotoFrameListViewManager___c__DisplayClass10_0__CreatePhotoFrameList_b__1__, v17);
    sub_1C3B764(&PhotoFrameListViewManager___c__DisplayClass10_0_TypeInfo, v18);
    sub_1C3B764(&PhotoFrameListViewManager___c_TypeInfo, v19);
    byte_4C1D7D9 = 1;
  }
  v20 = sub_1C3B9B0(PhotoFrameListViewManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_37;
  *(_DWORD *)(v20 + 16) = selectedId;
  v23 = (int32_t *)(v20 + 16);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  v24 = PhotoFrameListViewManager___c_TypeInfo;
  if ( !PhotoFrameListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoFrameListViewManager___c_TypeInfo);
    v24 = PhotoFrameListViewManager___c_TypeInfo;
  }
  _9__10_0 = (System_Func_object__int__o *)v24->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = PhotoFrameListViewManager___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v24->static_fields->__9;
    _9__10_0 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_PhotoFrameEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__10_0,
      v26,
      Method_PhotoFrameListViewManager___c__CreatePhotoFrameList_b__10_0__,
      0LL);
    static_fields = PhotoFrameListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Func_PhotoFrameEntity__int__o *)_9__10_0;
    sub_1C3B708(&static_fields->__9__10_0);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)photoFrameList,
                                                               (System_Func_TSource__TKey__o *)_9__10_0,
                                                               (const MethodInfo_301A780 *)Method_System_Linq_Enumerable_OrderByDescending_PhotoFrameEntity__int___);
  v29 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v28,
                                                       (const MethodInfo_302EAAC *)Method_System_Linq_Enumerable_ToList_PhotoFrameEntity___);
  v30 = (System_Predicate_object__o *)sub_1C3B9B0(System_Predicate_PhotoFrameEntity__TypeInfo);
  System_Predicate_object____ctor(
    v30,
    (Il2CppObject *)v20,
    Method_PhotoFrameListViewManager___c__DisplayClass10_0__CreatePhotoFrameList_b__1__,
    0LL);
  if ( !v29 )
    goto LABEL_37;
  Item = (__int64)System_Collections_Generic_List_object___Find(
                    v29,
                    (System_Predicate_T__o *)v30,
                    (const MethodInfo_368C2D4 *)Method_System_Collections_Generic_List_PhotoFrameEntity__Find__);
  if ( !Item )
  {
    Item = (__int64)System_Collections_Generic_List_object___get_Item(
                      v29,
                      0,
                      (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_PhotoFrameEntity__get_Item__);
    if ( !Item )
      goto LABEL_37;
    v23 = (int32_t *)(Item + 16);
  }
  if ( v29->fields._size < 1 )
    goto LABEL_37;
  v31 = 0LL;
  v32 = 0;
  selectedIda = *v23;
  do
  {
    v33 = v29;
    Item = (__int64)System_Collections_Generic_List_object___get_Item(
                      v29,
                      v32,
                      (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_PhotoFrameEntity__get_Item__);
    if ( !Item )
      goto LABEL_37;
    v34 = *(_DWORD *)(Item + 16);
    v35 = *(_DWORD *)(Item + 20);
    v36 = *(System_String_o **)(Item + 24);
    v37 = *(System_String_o **)(Item + 32);
    frameSampleAtlas = this->fields.frameSampleAtlas;
    v39 = Item;
    v40 = (PhotoFrameListViewItem_o *)sub_1C3B9B0(PhotoFrameListViewItem_TypeInfo);
    PhotoFrameListViewItem___ctor(v40, v32, v34, v35, v36, v37, frameSampleAtlas, selectedIda, v47);
    if ( !v40 )
      goto LABEL_37;
    if ( v40->fields._IsSelected_k__BackingField )
      v31 = v40;
    ListViewItem__SetSortIndex((ListViewItem_o *)v40, *(_DWORD *)(v39 + 20), 0LL);
    Item = (__int64)this->fields.itemList;
    if ( !Item )
      goto LABEL_37;
    v41 = *(_QWORD *)(Item + 16);
    v42 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++*(_DWORD *)(Item + 28);
    if ( !v41 )
      goto LABEL_37;
    v43 = *(int *)(Item + 24);
    v29 = v33;
    if ( (unsigned int)v43 >= *(_DWORD *)(v41 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Item,
        (Il2CppObject *)v40,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
    }
    else
    {
      v44 = v41 + 8 * v43;
      *(_DWORD *)(Item + 24) = v43 + 1;
      *(_QWORD *)(v44 + 32) = v40;
      Item = sub_1C3B708(v44 + 32);
    }
    ++v32;
  }
  while ( v32 < v33->fields._size );
  if ( !v31 )
LABEL_37:
    sub_1C3B9C0(Item, v22);
  *firstSelectIndex = v31->fields.index;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
  {
    Item = (__int64)this->fields.scrollBar;
    if ( Item )
    {
      Item = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0LL);
      if ( Item )
      {
        Item = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Item, 0LL);
        if ( (Item & 1) == 0 )
          return;
        v46 = this->fields.scrollBar;
        if ( v46 )
        {
          if ( v46->fields.mSize <= 0.98 )
            ListViewManager__JumpItem((ListViewManager_o *)this, v31->fields.index, 0LL);
          return;
        }
      }
    }
    goto LABEL_37;
  }
}


void __fastcall PhotoFrameListViewManager__DestroyList(PhotoFrameListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C3B9C0(0LL, v3);
  ListViewSort__Save(sort, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoFrameListViewManager__ModifySelectingItem(
        PhotoFrameListViewManager_o *this,
        int32_t selectedItemId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x21
  __int64 v16; // x1
  void *v17; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C1D7DA & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&selectedItemId);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v8);
    sub_1C3B764(&PhotoFrameListViewItem_TypeInfo, v9);
    byte_4C1D7DA = 1;
  }
  memset(&v19, 0, sizeof(v19));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v19 = v18;
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v11 )
        break;
      current = v19.fields._current;
      if ( !v19.fields._current
        || (methodPtr_low = LOBYTE(PhotoFrameListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v19.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (PhotoFrameListViewItem_c *)v19.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != PhotoFrameListViewItem_TypeInfo )
      {
        sub_1C3B9C0(v11, v12);
      }
      monitor = (UnityEngine_Object_o *)v19.fields._current[6].monitor;
      LOBYTE(v19.fields._current[9].klass) = LODWORD(v19.fields._current[7].klass) == selectedItemId;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      {
        v17 = current[6].monitor;
        if ( !v17 )
          sub_1C3B9C0(0LL, v16);
        (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v17 + 392LL))(
          v17,
          current,
          *(_QWORD *)(*(_QWORD *)v17 + 400LL));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void __fastcall PhotoFrameListViewManager__OnClickListView(
        PhotoFrameListViewManager_o *this,
        PhotoFrameListViewObject_o *obj,
        const MethodInfo *method)
{
  struct PhotoFrameListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  v5 = sub_1C3B708(&this->fields.callbackFunc);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C3B9C0(v5, v6);
    Index = ListViewObject__get_Index((ListViewObject_o *)obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      Index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall PhotoFrameListViewManager__OnMoveEnd(PhotoFrameListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0

  if ( (byte_4C1D7DD & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1D7DD = 1;
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
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_1C3B9C0(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoFrameListViewManager__RequestListObject(
        PhotoFrameListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C1D7DC & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_PhotoFrameListViewObject__Dispose__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_PhotoFrameListViewObject__MoveNext__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_PhotoFrameListViewObject__get_Current__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoFrameListViewObject__GetEnumerator__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoFrameListViewObject__get_Count__, v9);
    sub_1C3B764(&Method_PhotoFrameListViewManager_OnMoveEnd__, v10);
    sub_1C3B764(&StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/, v11);
    byte_4C1D7DC = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)PhotoFrameListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C3B9C0(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_PhotoFrameListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_PhotoFrameListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_PhotoFrameListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C3B9C0(v17, v18);
      PhotoFrameListViewObject__Init((PhotoFrameListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_PhotoFrameListViewObject__Dispose__);
  }
}


void __fastcall PhotoFrameListViewManager__SetFrameSpriteAtlas(
        PhotoFrameListViewManager_o *this,
        UIAtlas_o *atlas,
        const MethodInfo *method)
{
  this->fields.frameSampleAtlas = atlas;
  sub_1C3B708(&this->fields.frameSampleAtlas);
}


void __fastcall PhotoFrameListViewManager__SetMode(
        PhotoFrameListViewManager_o *this,
        int32_t mode,
        PhotoFrameListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1C3B708(&this->fields.callbackFunc);
  PhotoFrameListViewManager__SetMode_32767284(this, mode, v6);
}


void __fastcall PhotoFrameListViewManager__SetMode_32767284(
        PhotoFrameListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( (unsigned int)(mode - 1) <= 2 )
    PhotoFrameListViewManager__RequestListObject(this, mode, v5);
}


void __fastcall PhotoFrameListViewManager__SetObjectItem(
        PhotoFrameListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  PhotoFrameListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4C1D7DB & 1) == 0 )
  {
    this = (PhotoFrameListViewManager_o *)sub_1C3B764(&PhotoFrameListViewObject_TypeInfo, obj);
    byte_4C1D7DB = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(PhotoFrameListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (PhotoFrameListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != PhotoFrameListViewObject_TypeInfo )
  {
    sub_1C3B9C0(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 2;
  else
    v7 = 1;
  PhotoFrameListViewObject__Init((PhotoFrameListViewObject_o *)obj, v7, 0LL, method);
}


void __fastcall PhotoFrameListViewManager__add_callbackFunc(
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

  if ( (byte_4C1D7D6 & 1) == 0 )
  {
    sub_1C3B764(&PhotoFrameListViewManager_CallbackFunc_TypeInfo, value);
    byte_4C1D7D6 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (PhotoFrameListViewManager_CallbackFunc_c *)v7->klass != PhotoFrameListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C76C54(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PhotoFrameListViewManager_o *)sub_1C3BC80(v7);
  PhotoFrameListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_PhotoFrameListViewObject__o *__fastcall PhotoFrameListViewManager__get_ObjectList(
        PhotoFrameListViewManager_o *this,
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
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C1D7D8 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_PhotoFrameListViewObject___, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoFrameListViewObject__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoFrameListViewObject___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_PhotoFrameListViewObject__TypeInfo, v9);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v10);
    byte_4C1D7D8 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_PhotoFrameListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_PhotoFrameListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C3B9C0(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C3B9C0(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_PhotoFrameListViewObject___);
      v18 = Component_object;
      if ( !v11 )
        sub_1C3B9C0(Component_object, Component_object);
      items = v11->fields._items;
      v20 = Method_System_Collections_Generic_List_PhotoFrameListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C3B9C0(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_1C3B708(v22 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PhotoFrameListViewObject__o *)v11;
}


void __fastcall PhotoFrameListViewManager__remove_callbackFunc(
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

  if ( (byte_4C1D7D7 & 1) == 0 )
  {
    sub_1C3B764(&PhotoFrameListViewManager_CallbackFunc_TypeInfo, value);
    byte_4C1D7D7 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (PhotoFrameListViewManager_CallbackFunc_c *)v7->klass != PhotoFrameListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C76C54(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PhotoFrameListViewManager_o *)sub_1C3BC80(v7);
  PhotoFrameListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoFrameListViewManager_CallbackFunc___ctor(
        PhotoFrameListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1C3B708(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C3B824(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A75E80;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A75E38;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PhotoFrameListViewManager_CallbackFunc__BeginInvoke(
        PhotoFrameListViewManager_CallbackFunc_o *this,
        int32_t frameId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = frameId;
  if ( (byte_4C1D7DE & 1) == 0 )
  {
    sub_1C3B764(&int_TypeInfo, *(_QWORD *)&frameId);
    byte_4C1D7DE = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C3B718(this, v9, callback, object);
}


void __fastcall PhotoFrameListViewManager_CallbackFunc__EndInvoke(
        PhotoFrameListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
}


void __fastcall PhotoFrameListViewManager_CallbackFunc__Invoke(
        PhotoFrameListViewManager_CallbackFunc_o *this,
        int32_t frameId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    frameId,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall PhotoFrameListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4C1D7DF & 1) == 0 )
  {
    sub_1C3B764(&PhotoFrameListViewManager___c_TypeInfo, v1);
    byte_4C1D7DF = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(PhotoFrameListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  PhotoFrameListViewManager___c_TypeInfo->static_fields->__9 = (struct PhotoFrameListViewManager___c_o *)v2;
  sub_1C3B708(PhotoFrameListViewManager___c_TypeInfo->static_fields);
}


void __fastcall PhotoFrameListViewManager___c___ctor(PhotoFrameListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall PhotoFrameListViewManager___c___CreatePhotoFrameList_b__10_0(
        PhotoFrameListViewManager___c_o *this,
        PhotoFrameEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3B9C0(this, 0LL);
  return x->fields.priority;
}


void __fastcall PhotoFrameListViewManager___c__DisplayClass10_0___ctor(
        PhotoFrameListViewManager___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PhotoFrameListViewManager___c__DisplayClass10_0___CreatePhotoFrameList_b__1(
        PhotoFrameListViewManager___c__DisplayClass10_0_o *this,
        PhotoFrameEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3B9C0(this, 0LL);
  return x->fields.id == this->fields.selectedId;
}