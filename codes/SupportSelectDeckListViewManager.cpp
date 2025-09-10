void SupportSelectDeckListViewManager___ctor(SupportSelectDeckListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void SupportSelectDeckListViewManager__CreateList(
        SupportSelectDeckListViewManager_o *this,
        SupportServantData_array *deckDataList,
        System_Int32_array *sameKindIdxList,
        System_Int32_array *notCopyIdxList,
        const MethodInfo *method)
{
  unsigned __int64 v9; // x23
  int32_t v10; // w25
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  SupportServantData_o *v14; // x27
  int v15; // w26
  __int64 v16; // x24
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x8

  if ( (byte_4C2396B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_IndexOf_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C2D490(&SupportSelectDeckListViewItem_TypeInfo);
    byte_4C2396B = 1;
  }
  if ( deckDataList )
  {
    ListViewManager__CreateList((ListViewManager_o *)this, deckDataList->max_length, 0);
    if ( SLODWORD(deckDataList->max_length) >= 1 )
    {
      v9 = 0;
      do
      {
        v10 = System_Array__IndexOf_int_(
                sameKindIdxList,
                v9,
                (const MethodInfo_31D59D0 *)Method_System_Array_IndexOf_int___);
        v11 = System_Array__IndexOf_int_(
                notCopyIdxList,
                v9,
                (const MethodInfo_31D59D0 *)Method_System_Array_IndexOf_int___);
        if ( v9 >= LODWORD(deckDataList->max_length) )
          sub_1C2D6F4(v11, v12, v13);
        v14 = deckDataList->m_Items[v9];
        v15 = v11;
        v16 = sub_1C2D6DC(SupportSelectDeckListViewItem_TypeInfo);
        ListViewItem___ctor_43566844((ListViewItem_o *)v16, v9, 0);
        *(_QWORD *)(v16 + 120) = v14;
        sub_1C2D434((CGThumbnailListItem_o *)(v16 + 120), (int32_t)v14, v17, v18);
        *(_BYTE *)(v16 + 128) = v10 >= 0;
        *(_BYTE *)(v16 + 129) = v15 < 0;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList
          || (items = itemList->fields._items,
              v24 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
          sub_1C2D6EC(itemList, v19);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v16,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v16;
          sub_1C2D434((CGThumbnailListItem_o *)(v26 + 4), v16, v20, v21);
        }
        ++v9;
      }
      while ( (__int64)v9 < SLODWORD(deckDataList->max_length) );
    }
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


System_Collections_Generic_List_SupportSelectDeckListViewObject__o *SupportSelectDeckListViewManager__GetObjectList(
        SupportSelectDeckListViewManager_o *this,
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

  if ( (byte_4C2396D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_SupportSelectDeckListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_SupportSelectDeckListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SupportSelectDeckListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_SupportSelectDeckListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2396D = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_SupportSelectDeckListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_SupportSelectDeckListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C2D6EC(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectDeckListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1C2D6EC(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_SupportSelectDeckListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C2D6EC(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1C2D434((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportSelectDeckListViewObject__o *)v3;
}


void SupportSelectDeckListViewManager__OnClickListView(
        SupportSelectDeckListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void SupportSelectDeckListViewManager__SetMode(
        SupportSelectDeckListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  SupportSelectDeckListViewManager__SetMode_35482224(this, mode, 0, v3);
}


void SupportSelectDeckListViewManager__SetMode_35482224(
        SupportSelectDeckListViewManager_o *this,
        int32_t mode,
        SupportSelectDeckListViewObject_OnSelectEvent_o *onSelectDeck,
        const MethodInfo *method)
{
  struct SupportSelectDeckListViewObject_OnSelectEvent_o **p_onSelectDeck; // x21
  const MethodInfo *v8; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x22
  _BOOL8 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x1
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C2396C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SupportSelectDeckListViewObject__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2396C = 1;
  }
  p_onSelectDeck = &this->fields.onSelectDeck;
  memset(&v17, 0, sizeof(v17));
  this->fields.onSelectDeck = onSelectDeck;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.onSelectDeck, (int32_t)onSelectDeck, (int32_t)onSelectDeck, method);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  ObjectList = (System_Collections_Generic_List_object__o *)SupportSelectDeckListViewManager__GetObjectList(this, v8);
  if ( !ObjectList )
    sub_1C2D6EC(0, v10);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    ObjectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_SupportSelectDeckListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v12 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v12 )
    {
      if ( !current )
        sub_1C2D6EC(v12, v13);
      v16 = (__int64)*p_onSelectDeck;
      *(__int64 *)((char *)&qword_80 + (_QWORD)current) = (__int64)*p_onSelectDeck;
      sub_1C2D434((CGThumbnailListItem_o *)((char *)&qword_80 + (_QWORD)current), v16, v14, v15);
      ((void (__fastcall *)(Il2CppObject *, bool, const MethodInfo *))current->klass->vtable[9].methodPtr)(
        current,
        mode == 2,
        current->klass->vtable[9].method);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__Dispose__);
  this->fields.currentMode = mode;
}


void SupportSelectDeckListViewManager__SetObjectItem(
        SupportSelectDeckListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  SupportSelectDeckListViewManager_o *v5; // x20
  __int64 naturalAligment; // x9
  struct SupportSelectDeckListViewObject_OnSelectEvent_o *onSelectDeck; // x1
  int32_t currentMode; // w20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  v5 = this;
  if ( (byte_4C2396E & 1) == 0 )
  {
    this = (SupportSelectDeckListViewManager_o *)sub_1C2D490(&SupportSelectDeckListViewObject_TypeInfo);
    byte_4C2396E = 1;
  }
  if ( !obj )
LABEL_8:
    sub_1C2D6EC(this, obj);
  naturalAligment = SupportSelectDeckListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SupportSelectDeckListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != SupportSelectDeckListViewObject_TypeInfo )
  {
    sub_1C2D9AC(obj);
    goto LABEL_8;
  }
  SupportSelectDeckListViewObject__Init(
    (SupportSelectDeckListViewObject_o *)obj,
    (const MethodInfo *)SupportSelectDeckListViewObject_TypeInfo);
  onSelectDeck = v5->fields.onSelectDeck;
  currentMode = v5->fields.currentMode;
  obj[1].monitor = onSelectDeck;
  sub_1C2D434((CGThumbnailListItem_o *)&obj[1].monitor, (int32_t)onSelectDeck, v9, v10);
  ((void (__fastcall *)(ListViewObject_o *, bool, const MethodInfo *))obj->klass->vtable._9_SetInput.methodPtr)(
    obj,
    currentMode == 2,
    obj->klass->vtable._9_SetInput.method);
}