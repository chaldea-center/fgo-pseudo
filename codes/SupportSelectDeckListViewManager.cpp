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
  int32_t v10; // w24
  __int64 v11; // x0
  SupportServantData_o *v12; // x26
  int v13; // w25
  bool v14; // w29
  __int64 v15; // x24
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x8

  if ( (byte_5934B05 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_IndexOf_int___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&SupportSelectDeckListViewItem_TypeInfo);
    byte_5934B05 = 1;
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
                (const MethodInfo_39FAFC4 *)Method_System_Array_IndexOf_int___);
        v11 = System_Array__IndexOf_int_(
                notCopyIdxList,
                v9,
                (const MethodInfo_39FAFC4 *)Method_System_Array_IndexOf_int___);
        if ( v9 >= LODWORD(deckDataList->max_length) )
          sub_21FFED4(v11);
        v12 = deckDataList->m_Items[v9];
        v13 = v11;
        v14 = v10 >= 0;
        v15 = sub_21FFEBC(SupportSelectDeckListViewItem_TypeInfo);
        ListViewItem___ctor_50749276((ListViewItem_o *)v15, v9, 0);
        *(_QWORD *)(v15 + 120) = v12;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 120), (int32_t)v12, v16, v17, v18, v19, v20, v21);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        *(_BYTE *)(v15 + 128) = v14;
        *(_BYTE *)(v15 + 129) = v13 < 0;
        if ( !itemList
          || (items = itemList->fields._items,
              v31 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
          sub_21FFECC(itemList, v22);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v15,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v15;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v33 + 4), v15, v23, v24, v25, v26, v27, v28);
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

  if ( (byte_5934B07 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SupportSelectDeckListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_SupportSelectDeckListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SupportSelectDeckListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_SupportSelectDeckListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934B07 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SupportSelectDeckListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SupportSelectDeckListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_21FFECC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_21FFECC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectDeckListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_SupportSelectDeckListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_21FFECC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  SupportSelectDeckListViewManager__SetMode_42434428(this, mode, 0, v3);
}


void SupportSelectDeckListViewManager__SetMode_42434428(
        SupportSelectDeckListViewManager_o *this,
        int32_t mode,
        SupportSelectDeckListViewObject_OnSelectEvent_o *onSelectDeck,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *current; // x21
  _BOOL8 v17; // x0
  __int64 v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct SupportSelectDeckListViewObject_OnSelectEvent_o *v25; // x1
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_5934B06 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SupportSelectDeckListViewObject__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934B06 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  this->fields.onSelectDeck = onSelectDeck;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onSelectDeck,
    (int32_t)onSelectDeck,
    (System_String_o *)onSelectDeck,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  ObjectList = (System_Collections_Generic_List_object__o *)SupportSelectDeckListViewManager__GetObjectList(this, v11);
  if ( !ObjectList )
    sub_21FFECC(0, v13);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    ObjectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_SupportSelectDeckListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__MoveNext__) )
  {
    current = v26.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
    v17 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v17 )
    {
      if ( !current )
        sub_21FFECC(v17, v18);
      v25 = this->fields.onSelectDeck;
      *(__int64 *)((char *)&qword_80 + (_QWORD)current) = (__int64)v25;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)((char *)&qword_80 + (_QWORD)current),
        (int32_t)v25,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      ((void (__fastcall *)(Il2CppObject *, bool, const MethodInfo *))current->klass->vtable[9].methodPtr)(
        current,
        mode == 2,
        current->klass->vtable[9].method);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__Dispose__);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  v5 = this;
  if ( (byte_5934B08 & 1) == 0 )
  {
    this = (SupportSelectDeckListViewManager_o *)sub_21FFC50(&SupportSelectDeckListViewObject_TypeInfo);
    byte_5934B08 = 1;
  }
  if ( !obj )
LABEL_8:
    sub_21FFECC(this, obj);
  naturalAligment = SupportSelectDeckListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SupportSelectDeckListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != SupportSelectDeckListViewObject_TypeInfo )
  {
    sub_220024C(obj, SupportSelectDeckListViewObject_TypeInfo, item, method);
    goto LABEL_8;
  }
  SupportSelectDeckListViewObject__Init(
    (SupportSelectDeckListViewObject_o *)obj,
    (const MethodInfo *)SupportSelectDeckListViewObject_TypeInfo);
  onSelectDeck = v5->fields.onSelectDeck;
  currentMode = v5->fields.currentMode;
  obj[1].monitor = onSelectDeck;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&obj[1].monitor, (int32_t)onSelectDeck, v9, v10, v11, v12, v13, v14);
  ((void (__fastcall *)(ListViewObject_o *, bool, const MethodInfo *))obj->klass->vtable._9_SetInput.methodPtr)(
    obj,
    currentMode == 2,
    obj->klass->vtable._9_SetInput.method);
}