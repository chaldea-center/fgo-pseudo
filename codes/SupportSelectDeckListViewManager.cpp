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
  SupportServantData_o *v12; // x27
  int v13; // w26
  __int64 v14; // x24
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x8

  if ( (byte_4CC3A23 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_IndexOf_int___);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C713B0(&SupportSelectDeckListViewItem_TypeInfo);
    byte_4CC3A23 = 1;
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
                (const MethodInfo_3252F20 *)Method_System_Array_IndexOf_int___);
        v11 = System_Array__IndexOf_int_(
                notCopyIdxList,
                v9,
                (const MethodInfo_3252F20 *)Method_System_Array_IndexOf_int___);
        if ( v9 >= LODWORD(deckDataList->max_length) )
          sub_1C71610(v11);
        v12 = deckDataList->m_Items[v9];
        v13 = v11;
        v14 = sub_1C715FC(SupportSelectDeckListViewItem_TypeInfo);
        ListViewItem___ctor_44097096((ListViewItem_o *)v14, v9, 0);
        *(_QWORD *)(v14 + 120) = v12;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v14 + 120), (int32_t)v12, v15, v16, v17, v18, v19, v20);
        *(_BYTE *)(v14 + 128) = v10 >= 0;
        *(_BYTE *)(v14 + 129) = v13 < 0;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList
          || (items = itemList->fields._items,
              v30 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
          sub_1C71608(itemList, v21);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v14,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v14;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v32 + 4), v14, v22, v23, v24, v25, v26, v27);
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

  if ( (byte_4CC3A25 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_SupportSelectDeckListViewObject___);
    sub_1C713B0(&Method_System_Collections_Generic_List_SupportSelectDeckListViewObject__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_SupportSelectDeckListViewObject___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_SupportSelectDeckListViewObject__TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC3A25 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_SupportSelectDeckListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_SupportSelectDeckListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C71608(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C71608(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectDeckListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C71608(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_SupportSelectDeckListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C71608(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  SupportSelectDeckListViewManager__SetMode_35951168(this, mode, 0, v3);
}


void SupportSelectDeckListViewManager__SetMode_35951168(
        SupportSelectDeckListViewManager_o *this,
        int32_t mode,
        SupportSelectDeckListViewObject_OnSelectEvent_o *onSelectDeck,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct SupportSelectDeckListViewObject_OnSelectEvent_o **p_onSelectDeck; // x21
  const MethodInfo *v12; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x22
  _BOOL8 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  __int64 v24; // x1
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CC3A24 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_SupportSelectDeckListViewObject__GetEnumerator__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC3A24 = 1;
  }
  p_onSelectDeck = &this->fields.onSelectDeck;
  memset(&v25, 0, sizeof(v25));
  this->fields.onSelectDeck = onSelectDeck;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.onSelectDeck,
    (int32_t)onSelectDeck,
    (int32_t)onSelectDeck,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  ObjectList = (System_Collections_Generic_List_object__o *)SupportSelectDeckListViewManager__GetObjectList(this, v12);
  if ( !ObjectList )
    sub_1C71608(0, v14);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    ObjectList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_SupportSelectDeckListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v16 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v16 )
    {
      if ( !current )
        sub_1C71608(v16, v17);
      v24 = (__int64)*p_onSelectDeck;
      *(__int64 *)((char *)&qword_80 + (_QWORD)current) = (__int64)*p_onSelectDeck;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)((char *)&qword_80 + (_QWORD)current),
        v24,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      ((void (__fastcall *)(Il2CppObject *, bool, const MethodInfo *))current->klass->vtable[9].methodPtr)(
        current,
        mode == 2,
        current->klass->vtable[9].method);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__Dispose__);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  v5 = this;
  if ( (byte_4CC3A26 & 1) == 0 )
  {
    this = (SupportSelectDeckListViewManager_o *)sub_1C713B0(&SupportSelectDeckListViewObject_TypeInfo);
    byte_4CC3A26 = 1;
  }
  if ( !obj )
LABEL_8:
    sub_1C71608(this, obj);
  naturalAligment = SupportSelectDeckListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SupportSelectDeckListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != SupportSelectDeckListViewObject_TypeInfo )
  {
    sub_1C719A4(obj);
    goto LABEL_8;
  }
  SupportSelectDeckListViewObject__Init(
    (SupportSelectDeckListViewObject_o *)obj,
    (const MethodInfo *)SupportSelectDeckListViewObject_TypeInfo);
  onSelectDeck = v5->fields.onSelectDeck;
  currentMode = v5->fields.currentMode;
  obj[1].monitor = onSelectDeck;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&obj[1].monitor, (int32_t)onSelectDeck, v9, v10, v11, v12, v13, v14);
  ((void (__fastcall *)(ListViewObject_o *, bool, const MethodInfo *))obj->klass->vtable._9_SetInput.methodPtr)(
    obj,
    currentMode == 2,
    obj->klass->vtable._9_SetInput.method);
}