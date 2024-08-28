void __fastcall SupportSelectDeckListViewManager___ctor(
        SupportSelectDeckListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall SupportSelectDeckListViewManager__CreateList(
        SupportSelectDeckListViewManager_o *this,
        SupportServantData_array *deckDataList,
        System_Int32_array *sameKindIdxList,
        System_Int32_array *notCopyIdxList,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  unsigned __int64 v11; // x23
  int32_t v12; // w25
  __int64 v13; // x0
  __int64 v14; // x1
  SupportServantData_o *v15; // x27
  int v16; // w26
  __int64 v17; // x24
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x8

  if ( (byte_4A0560B & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Array_IndexOf_int___, deckDataList);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_1B686D4(&SupportSelectDeckListViewItem_TypeInfo, v10);
    byte_4A0560B = 1;
  }
  if ( deckDataList )
  {
    ListViewManager__CreateList((ListViewManager_o *)this, deckDataList->max_length, 0LL);
    if ( (int)deckDataList->max_length >= 1 )
    {
      v11 = 0LL;
      do
      {
        v12 = System_Array__IndexOf_int_(
                sameKindIdxList,
                v11,
                (const MethodInfo_2F428E0 *)Method_System_Array_IndexOf_int___);
        v13 = System_Array__IndexOf_int_(
                notCopyIdxList,
                v11,
                (const MethodInfo_2F428E0 *)Method_System_Array_IndexOf_int___);
        if ( v11 >= deckDataList->max_length )
          sub_1B68938(v13, v14);
        v15 = deckDataList->m_Items[v11];
        v16 = v13;
        v17 = sub_1B68920(SupportSelectDeckListViewItem_TypeInfo);
        ListViewItem___ctor_40440732((ListViewItem_o *)v17, v11, 0LL);
        *(_QWORD *)(v17 + 112) = v15;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v17 + 112), (int32_t)v15, v18, v19);
        *(_BYTE *)(v17 + 120) = v12 >= 0;
        *(_BYTE *)(v17 + 121) = v16 < 0;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList
          || (items = itemList->fields._items,
              v25 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
          sub_1B68930(itemList, v20);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v17,
            *(const MethodInfo_34BC278 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v17;
          sub_1B68678((ServantStatusBattleListViewItem_o *)(v27 + 4), v17, v21, v22);
        }
        ++v11;
      }
      while ( (__int64)v11 < (int)deckDataList->max_length );
    }
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


System_Collections_Generic_List_SupportSelectDeckListViewObject__o *__fastcall SupportSelectDeckListViewManager__GetObjectList(
        SupportSelectDeckListViewManager_o *this,
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
  int32_t v19; // w3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A0560D & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_SupportSelectDeckListViewObject___, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_SupportSelectDeckListViewObject__Add__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_SupportSelectDeckListViewObject___ctor__, v8);
    sub_1B686D4(&System_Collections_Generic_List_SupportSelectDeckListViewObject__TypeInfo, v9);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v10);
    byte_4A0560D = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_SupportSelectDeckListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_SupportSelectDeckListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B68930(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B68930(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectDeckListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1B68930(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_SupportSelectDeckListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1B68930(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_34BC278 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportSelectDeckListViewObject__o *)v11;
}


void __fastcall SupportSelectDeckListViewManager__OnClickListView(
        SupportSelectDeckListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall SupportSelectDeckListViewManager__SetMode(
        SupportSelectDeckListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  SupportSelectDeckListViewManager__SetMode_32994480(this, mode, 0LL, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectDeckListViewManager__SetMode_32994480(
        SupportSelectDeckListViewManager_o *this,
        int32_t mode,
        SupportSelectDeckListViewObject_OnSelectEvent_o *onSelectDeck,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct SupportSelectDeckListViewObject_OnSelectEvent_o **p_onSelectDeck; // x21
  const MethodInfo *v12; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x22
  _BOOL8 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  struct SupportSelectDeckListViewObject_OnSelectEvent_o *v20; // x1
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A0560C & 1) == 0 )
  {
    sub_1B686D4(
      &Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__Dispose__,
      *(_QWORD *)&mode);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__MoveNext__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__get_Current__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_SupportSelectDeckListViewObject__GetEnumerator__, v9);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v10);
    byte_4A0560C = 1;
  }
  p_onSelectDeck = &this->fields.onSelectDeck;
  memset(&v21, 0, sizeof(v21));
  this->fields.onSelectDeck = onSelectDeck;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.onSelectDeck,
    (int32_t)onSelectDeck,
    (int32_t)onSelectDeck,
    (int32_t)method);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  ObjectList = (System_Collections_Generic_List_object__o *)SupportSelectDeckListViewManager__GetObjectList(this, v12);
  if ( !ObjectList )
    sub_1B68930(0LL, v14);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    ObjectList,
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_SupportSelectDeckListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__MoveNext__) )
  {
    current = v21.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v16 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v16 )
    {
      if ( !current )
        sub_1B68930(v16, v17);
      v20 = *p_onSelectDeck;
      current[8].klass = (Il2CppClass *)*p_onSelectDeck;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&current[8], (int32_t)v20, v18, v19);
      ((void (__fastcall *)(Il2CppObject *, bool, Il2CppMethodPointer))current->klass->vtable[9].method)(
        current,
        mode == 2,
        current->klass->vtable[10].methodPtr);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__Dispose__);
  this->fields.currentMode = mode;
}


void __fastcall SupportSelectDeckListViewManager__SetObjectItem(
        SupportSelectDeckListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  SupportSelectDeckListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x9
  struct SupportSelectDeckListViewObject_OnSelectEvent_o *onSelectDeck; // x1
  int32_t currentMode; // w20
  int32_t v9; // w2
  int32_t v10; // w3

  v5 = this;
  if ( (byte_4A0560E & 1) == 0 )
  {
    this = (SupportSelectDeckListViewManager_o *)sub_1B686D4(&SupportSelectDeckListViewObject_TypeInfo, obj);
    byte_4A0560E = 1;
  }
  if ( !obj )
LABEL_8:
    sub_1B68930(this, obj);
  methodPtr_low = LOBYTE(SupportSelectDeckListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SupportSelectDeckListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != SupportSelectDeckListViewObject_TypeInfo )
  {
    sub_1B68BF0(obj);
    goto LABEL_8;
  }
  SupportSelectDeckListViewObject__Init(
    (SupportSelectDeckListViewObject_o *)obj,
    (const MethodInfo *)SupportSelectDeckListViewObject_TypeInfo);
  onSelectDeck = v5->fields.onSelectDeck;
  currentMode = v5->fields.currentMode;
  obj[1].monitor = onSelectDeck;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&obj[1].monitor, (int32_t)onSelectDeck, v9, v10);
  ((void (__fastcall *)(ListViewObject_o *, bool, Il2CppMethodPointer))obj->klass->vtable._9_SetInput.method)(
    obj,
    currentMode == 2,
    obj->klass->vtable._10_Invalidation.methodPtr);
}