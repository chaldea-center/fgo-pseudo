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
  __int64 v8; // x8
  unsigned __int64 v9; // x21
  System_String_o *v10; // x23
  int64_t v11; // x22
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8

  if ( (byte_4BB0EB8 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_ListViewItem__Add__, messageList);
    sub_1C13D24(&SupportDeckFixErrorListViewItem_TypeInfo, v5);
    byte_4BB0EB8 = 1;
  }
  if ( messageList )
  {
    ListViewManager__CreateList((ListViewManager_o *)this, messageList->max_length, 0LL);
    v8 = *(_QWORD *)&messageList->max_length;
    if ( (int)v8 >= 1 )
    {
      v9 = 0LL;
      do
      {
        if ( v9 >= (unsigned int)v8 )
          sub_1C13F88(v6, v7);
        v10 = messageList->m_Items[v9];
        v11 = sub_1C13F70(SupportDeckFixErrorListViewItem_TypeInfo);
        ListViewItem___ctor_41884928((ListViewItem_o *)v11, v9, 0LL);
        *(_QWORD *)(v11 + 112) = v10;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 112), (int64_t)v10, v12, v13, v14, v15, v16, v17);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList
          || (items = itemList->fields._items,
              v27 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
          sub_1C13F80(itemList, v18);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v11,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v11;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v29 + 4), v11, v19, v20, v21, v22, v23, v24);
        }
        LODWORD(v8) = messageList->max_length;
        ++v9;
      }
      while ( (__int64)v9 < (int)v8 );
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BB0EBA & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_SupportDeckFixErrorListViewObject___, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_SupportDeckFixErrorListViewObject__Add__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_SupportDeckFixErrorListViewObject___ctor__, v8);
    sub_1C13D24(&System_Collections_Generic_List_SupportDeckFixErrorListViewObject__TypeInfo, v9);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v10);
    byte_4BB0EBA = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_SupportDeckFixErrorListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_SupportDeckFixErrorListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C13F80(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v31.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C13F80(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_SupportDeckFixErrorListViewObject___);
      v24 = (int64_t)Component_object;
      if ( !v11 )
        sub_1C13F80(Component_object, Component_object);
      items = v11->fields._items;
      v26 = Method_System_Collections_Generic_List_SupportDeckFixErrorListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C13F80(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v24;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v28 + 4), v24, v18, v19, v20, v21, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4BB0EB9 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_SupportDeckFixErrorListViewObject__Dispose__,
      *(_QWORD *)&mode);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_SupportDeckFixErrorListViewObject__MoveNext__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_SupportDeckFixErrorListViewObject__get_Current__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_SupportDeckFixErrorListViewObject__GetEnumerator__, v7);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v8);
    byte_4BB0EB9 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  ObjectList = (System_Collections_Generic_List_object__o *)SupportDeckFixErrorListViewManager__GetObjectList(this, v9);
  if ( !ObjectList )
    sub_1C13F80(0LL, v11);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    ObjectList,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_SupportDeckFixErrorListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_SupportDeckFixErrorListViewObject__MoveNext__) )
  {
    current = v15.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v13 )
    {
      if ( !current )
        sub_1C13F80(v13, v14);
      ((void (__fastcall *)(Il2CppObject *, bool, Il2CppMethodPointer))current->klass->vtable[9].method)(
        current,
        mode == 2,
        current->klass->vtable[10].methodPtr);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_SupportDeckFixErrorListViewObject__Dispose__);
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
  if ( (byte_4BB0EBB & 1) == 0 )
  {
    this = (SupportDeckFixErrorListViewManager_o *)sub_1C13D24(&SupportDeckFixErrorListViewObject_TypeInfo, obj);
    byte_4BB0EBB = 1;
  }
  if ( !obj )
LABEL_8:
    sub_1C13F80(this, obj);
  methodPtr_low = LOBYTE(SupportDeckFixErrorListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SupportDeckFixErrorListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != SupportDeckFixErrorListViewObject_TypeInfo )
  {
    sub_1C14240(obj);
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