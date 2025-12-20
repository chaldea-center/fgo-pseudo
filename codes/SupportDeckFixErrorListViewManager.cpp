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
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v7; // x21
  System_String_o *v8; // x23
  __int64 v9; // x22
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x8

  if ( (byte_4D28D1C & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C94098(&SupportDeckFixErrorListViewItem_TypeInfo);
    byte_4D28D1C = 1;
  }
  if ( messageList )
  {
    ListViewManager__CreateList((ListViewManager_o *)this, messageList->max_length, 0);
    max_length = messageList->max_length;
    if ( (int)max_length >= 1 )
    {
      v7 = 0;
      do
      {
        if ( v7 >= (unsigned int)max_length )
          sub_1C942F8(v5);
        v8 = messageList->m_Items[v7];
        v9 = sub_1C942E4(SupportDeckFixErrorListViewItem_TypeInfo);
        ListViewItem___ctor_44594388((ListViewItem_o *)v9, v7, 0);
        *(_QWORD *)(v9 + 120) = v8;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 120), (int32_t)v8, v10, v11, v12, v13, v14, v15);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList
          || (items = itemList->fields._items,
              v25 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
          sub_1C942F0(itemList, v16);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v9,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v9;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v27 + 4), v9, v17, v18, v19, v20, v21, v22);
        }
        LODWORD(max_length) = messageList->max_length;
        ++v7;
      }
      while ( (__int64)v7 < (int)max_length );
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

  if ( (byte_4D28D1E & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_SupportDeckFixErrorListViewObject___);
    sub_1C94098(&Method_System_Collections_Generic_List_SupportDeckFixErrorListViewObject__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_SupportDeckFixErrorListViewObject___ctor__);
    sub_1C94098(&System_Collections_Generic_List_SupportDeckFixErrorListViewObject__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28D1E = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_SupportDeckFixErrorListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_SupportDeckFixErrorListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C942F0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C942F0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_SupportDeckFixErrorListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C942F0(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_SupportDeckFixErrorListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C942F0(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4D28D1D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SupportDeckFixErrorListViewObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SupportDeckFixErrorListViewObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SupportDeckFixErrorListViewObject__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_SupportDeckFixErrorListViewObject__GetEnumerator__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28D1D = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  ObjectList = (System_Collections_Generic_List_object__o *)SupportDeckFixErrorListViewManager__GetObjectList(this, v5);
  if ( !ObjectList )
    sub_1C942F0(0, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    ObjectList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_SupportDeckFixErrorListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_SupportDeckFixErrorListViewObject__MoveNext__) )
  {
    current = v11.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_1C942F0(v9, v10);
      ((void (__fastcall *)(Il2CppObject *, bool, const MethodInfo *))current->klass->vtable[9].methodPtr)(
        current,
        mode == 2,
        current->klass->vtable[9].method);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_SupportDeckFixErrorListViewObject__Dispose__);
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
  if ( (byte_4D28D1F & 1) == 0 )
  {
    this = (SupportDeckFixErrorListViewManager_o *)sub_1C94098(&SupportDeckFixErrorListViewObject_TypeInfo);
    byte_4D28D1F = 1;
  }
  if ( !obj )
LABEL_8:
    sub_1C942F0(this, obj);
  naturalAligment = SupportDeckFixErrorListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SupportDeckFixErrorListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != SupportDeckFixErrorListViewObject_TypeInfo )
  {
    sub_1C9468C(obj);
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