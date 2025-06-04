void __fastcall SupportDeckFixErrorListViewManager___ctor(
        SupportDeckFixErrorListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall SupportDeckFixErrorListViewManager__CreateList(
        SupportDeckFixErrorListViewManager_o *this,
        System_String_array *messageList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x8
  unsigned __int64 v10; // x21
  System_String_o *v11; // x23
  __int64 v12; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x8

  if ( (byte_4AFE657 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__Add__, messageList);
    sub_1BC3008(&SupportDeckFixErrorListViewItem_TypeInfo, v5);
    byte_4AFE657 = 1;
  }
  if ( messageList )
  {
    ListViewManager__CreateList((ListViewManager_o *)this, messageList->max_length, 0LL);
    v9 = *(_QWORD *)&messageList->max_length;
    if ( (int)v9 >= 1 )
    {
      v10 = 0LL;
      do
      {
        if ( v10 >= (unsigned int)v9 )
          sub_1BC326C(v6, v7, v8);
        v11 = messageList->m_Items[v10];
        v12 = sub_1BC3254(SupportDeckFixErrorListViewItem_TypeInfo);
        ListViewItem___ctor_42769384((ListViewItem_o *)v12, v10, 0LL);
        *(_QWORD *)(v12 + 112) = v11;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v12 + 112), (int32_t)v11, v13, v14);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList
          || (items = itemList->fields._items,
              v20 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
          sub_1BC3264(itemList, v15);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v12,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v12;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v22 + 4), v12, v16, v17);
        }
        LODWORD(v9) = messageList->max_length;
        ++v10;
      }
      while ( (__int64)v10 < (int)v9 );
    }
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


System_Collections_Generic_List_SupportDeckFixErrorListViewObject__o *__fastcall SupportDeckFixErrorListViewManager__GetObjectList(
        SupportDeckFixErrorListViewManager_o *this,
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
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4AFE659 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_SupportDeckFixErrorListViewObject___, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_SupportDeckFixErrorListViewObject__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_SupportDeckFixErrorListViewObject___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_SupportDeckFixErrorListViewObject__TypeInfo, v9);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v10);
    byte_4AFE659 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_SupportDeckFixErrorListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_SupportDeckFixErrorListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BC3264(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BC3264(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_SupportDeckFixErrorListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1BC3264(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_SupportDeckFixErrorListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BC3264(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportDeckFixErrorListViewObject__o *)v11;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportDeckFixErrorListViewManager__SetMode(
        SupportDeckFixErrorListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x21
  _BOOL8 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4AFE658 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_SupportDeckFixErrorListViewObject__Dispose__,
      *(_QWORD *)&mode);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_SupportDeckFixErrorListViewObject__MoveNext__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_SupportDeckFixErrorListViewObject__get_Current__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_SupportDeckFixErrorListViewObject__GetEnumerator__, v7);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v8);
    byte_4AFE658 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  ObjectList = (System_Collections_Generic_List_object__o *)SupportDeckFixErrorListViewManager__GetObjectList(this, v9);
  if ( !ObjectList )
    sub_1BC3264(0LL, v11);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    ObjectList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_SupportDeckFixErrorListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_SupportDeckFixErrorListViewObject__MoveNext__) )
  {
    current = v15.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v13 )
    {
      if ( !current )
        sub_1BC3264(v13, v14);
      ((void (__fastcall *)(Il2CppObject *, bool, Il2CppMethodPointer))current->klass->vtable[9].method)(
        current,
        mode == 2,
        current->klass->vtable[10].methodPtr);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_SupportDeckFixErrorListViewObject__Dispose__);
  this->fields.currentMode = mode;
}


void __fastcall SupportDeckFixErrorListViewManager__SetObjectItem(
        SupportDeckFixErrorListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  SupportDeckFixErrorListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x9

  v5 = this;
  if ( (byte_4AFE65A & 1) == 0 )
  {
    this = (SupportDeckFixErrorListViewManager_o *)sub_1BC3008(&SupportDeckFixErrorListViewObject_TypeInfo, obj);
    byte_4AFE65A = 1;
  }
  if ( !obj )
LABEL_8:
    sub_1BC3264(this, obj);
  methodPtr_low = LOBYTE(SupportDeckFixErrorListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SupportDeckFixErrorListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != SupportDeckFixErrorListViewObject_TypeInfo )
  {
    sub_1BC3524(obj);
    goto LABEL_8;
  }
  SupportDeckFixErrorListViewObject__Init(
    (SupportDeckFixErrorListViewObject_o *)obj,
    (const MethodInfo *)SupportDeckFixErrorListViewObject_TypeInfo);
  ((void (__fastcall *)(ListViewObject_o *, bool, Il2CppMethodPointer))obj->klass->vtable._9_SetInput.method)(
    obj,
    v5->fields.currentMode == 2,
    obj->klass->vtable._10_Invalidation.methodPtr);
}