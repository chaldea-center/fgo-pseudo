void SupportDeckFixErrorListViewManager___ctor(SupportDeckFixErrorListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void SupportDeckFixErrorListViewManager__CreateList(
        SupportDeckFixErrorListViewManager_o *this,
        System_String_array *messageList,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v9; // x21
  System_String_o *v10; // x23
  __int64 v11; // x22
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8

  if ( (byte_4C2392B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C2D490(&SupportDeckFixErrorListViewItem_TypeInfo);
    byte_4C2392B = 1;
  }
  if ( messageList )
  {
    ListViewManager__CreateList((ListViewManager_o *)this, messageList->max_length, 0);
    max_length = messageList->max_length;
    if ( (int)max_length >= 1 )
    {
      v9 = 0;
      do
      {
        if ( v9 >= (unsigned int)max_length )
          sub_1C2D6F4(v5, v6, v7);
        v10 = messageList->m_Items[v9];
        v11 = sub_1C2D6DC(SupportDeckFixErrorListViewItem_TypeInfo);
        ListViewItem___ctor_43566844((ListViewItem_o *)v11, v9, 0);
        *(_QWORD *)(v11 + 120) = v10;
        sub_1C2D434((CGThumbnailListItem_o *)(v11 + 120), (int32_t)v10, v12, v13);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList
          || (items = itemList->fields._items,
              v19 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
          sub_1C2D6EC(itemList, v14);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v11,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v11;
          sub_1C2D434((CGThumbnailListItem_o *)(v21 + 4), v11, v15, v16);
        }
        LODWORD(max_length) = messageList->max_length;
        ++v9;
      }
      while ( (__int64)v9 < (int)max_length );
    }
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


System_Collections_Generic_List_SupportDeckFixErrorListViewObject__o *SupportDeckFixErrorListViewManager__GetObjectList(
        SupportDeckFixErrorListViewManager_o *this,
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

  if ( (byte_4C2392D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_SupportDeckFixErrorListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_SupportDeckFixErrorListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SupportDeckFixErrorListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_SupportDeckFixErrorListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2392D = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_SupportDeckFixErrorListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_SupportDeckFixErrorListViewObject___ctor__);
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
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_SupportDeckFixErrorListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1C2D6EC(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_SupportDeckFixErrorListViewObject__Add__;
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
  return (System_Collections_Generic_List_SupportDeckFixErrorListViewObject__o *)v3;
}


void SupportDeckFixErrorListViewManager__SetMode(
        SupportDeckFixErrorListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C2392C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SupportDeckFixErrorListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SupportDeckFixErrorListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SupportDeckFixErrorListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SupportDeckFixErrorListViewObject__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2392C = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  ObjectList = (System_Collections_Generic_List_object__o *)SupportDeckFixErrorListViewManager__GetObjectList(this, v5);
  if ( !ObjectList )
    sub_1C2D6EC(0, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    ObjectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_SupportDeckFixErrorListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_SupportDeckFixErrorListViewObject__MoveNext__) )
  {
    current = v11.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_1C2D6EC(v9, v10);
      ((void (__fastcall *)(Il2CppObject *, bool, const MethodInfo *))current->klass->vtable[9].methodPtr)(
        current,
        mode == 2,
        current->klass->vtable[9].method);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_SupportDeckFixErrorListViewObject__Dispose__);
  this->fields.currentMode = mode;
}


void SupportDeckFixErrorListViewManager__SetObjectItem(
        SupportDeckFixErrorListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  SupportDeckFixErrorListViewManager_o *v5; // x20
  __int64 naturalAligment; // x9

  v5 = this;
  if ( (byte_4C2392E & 1) == 0 )
  {
    this = (SupportDeckFixErrorListViewManager_o *)sub_1C2D490(&SupportDeckFixErrorListViewObject_TypeInfo);
    byte_4C2392E = 1;
  }
  if ( !obj )
LABEL_8:
    sub_1C2D6EC(this, obj);
  naturalAligment = SupportDeckFixErrorListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SupportDeckFixErrorListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != SupportDeckFixErrorListViewObject_TypeInfo )
  {
    sub_1C2D9AC(obj);
    goto LABEL_8;
  }
  SupportDeckFixErrorListViewObject__Init(
    (SupportDeckFixErrorListViewObject_o *)obj,
    (const MethodInfo *)SupportDeckFixErrorListViewObject_TypeInfo);
  ((void (__fastcall *)(ListViewObject_o *, bool, const MethodInfo *))obj->klass->vtable._9_SetInput.methodPtr)(
    obj,
    v5->fields.currentMode == 2,
    obj->klass->vtable._9_SetInput.method);
}