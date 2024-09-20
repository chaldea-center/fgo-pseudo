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
  unsigned __int64 v9; // x23
  int32_t v10; // w25
  __int64 v11; // x0
  __int64 v12; // x1
  SupportServantData_o *v13; // x27
  int v14; // w26
  __int64 v15; // x24
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x8

  if ( (byte_4A57ADC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_IndexOf_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&SupportSelectDeckListViewItem_TypeInfo);
    byte_4A57ADC = 1;
  }
  if ( deckDataList )
  {
    ListViewManager__CreateList((ListViewManager_o *)this, deckDataList->max_length, 0LL);
    if ( (int)deckDataList->max_length >= 1 )
    {
      v9 = 0LL;
      do
      {
        v10 = System_Array__IndexOf_int_(
                sameKindIdxList,
                v9,
                (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___);
        v11 = System_Array__IndexOf_int_(
                notCopyIdxList,
                v9,
                (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___);
        if ( v9 >= deckDataList->max_length )
          sub_1B88814(v11, v12);
        v13 = deckDataList->m_Items[v9];
        v14 = v11;
        v15 = sub_1B887FC(SupportSelectDeckListViewItem_TypeInfo);
        ListViewItem___ctor_40706472((ListViewItem_o *)v15, v9, 0LL);
        *(_QWORD *)(v15 + 112) = v13;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 112), (int32_t)v13, v16, v17);
        *(_BYTE *)(v15 + 120) = v10 >= 0;
        *(_BYTE *)(v15 + 121) = v14 < 0;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList
          || (items = itemList->fields._items,
              v23 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
          sub_1B8880C(itemList, v18);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v15,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v15;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 4), v15, v19, v20);
        }
        ++v9;
      }
      while ( (__int64)v9 < (int)deckDataList->max_length );
    }
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


System_Collections_Generic_List_SupportSelectDeckListViewObject__o *__fastcall SupportSelectDeckListViewManager__GetObjectList(
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
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A57ADE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SupportSelectDeckListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_SupportSelectDeckListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SupportSelectDeckListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SupportSelectDeckListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57ADE = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SupportSelectDeckListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SupportSelectDeckListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectDeckListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1B8880C(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_SupportSelectDeckListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportSelectDeckListViewObject__o *)v3;
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

  SupportSelectDeckListViewManager__SetMode_33230068(this, mode, 0LL, v3);
}


void __fastcall SupportSelectDeckListViewManager__SetMode_33230068(
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
  int32_t v15; // w3
  struct SupportSelectDeckListViewObject_OnSelectEvent_o *v16; // x1
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A57ADD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SupportSelectDeckListViewObject__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57ADD = 1;
  }
  p_onSelectDeck = &this->fields.onSelectDeck;
  memset(&v17, 0, sizeof(v17));
  this->fields.onSelectDeck = onSelectDeck;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.onSelectDeck,
    (int32_t)onSelectDeck,
    (int32_t)onSelectDeck,
    (int32_t)method);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  ObjectList = (System_Collections_Generic_List_object__o *)SupportSelectDeckListViewManager__GetObjectList(this, v8);
  if ( !ObjectList )
    sub_1B8880C(0LL, v10);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    ObjectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SupportSelectDeckListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v12 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v12 )
    {
      if ( !current )
        sub_1B8880C(v12, v13);
      v16 = *p_onSelectDeck;
      current[8].klass = (Il2CppClass *)*p_onSelectDeck;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&current[8], (int32_t)v16, v14, v15);
      ((void (__fastcall *)(Il2CppObject *, bool, Il2CppMethodPointer))current->klass->vtable[9].method)(
        current,
        mode == 2,
        current->klass->vtable[10].methodPtr);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SupportSelectDeckListViewObject__Dispose__);
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
  if ( (byte_4A57ADF & 1) == 0 )
  {
    this = (SupportSelectDeckListViewManager_o *)sub_1B885B0(&SupportSelectDeckListViewObject_TypeInfo);
    byte_4A57ADF = 1;
  }
  if ( !obj )
LABEL_8:
    sub_1B8880C(this, obj);
  methodPtr_low = LOBYTE(SupportSelectDeckListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SupportSelectDeckListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != SupportSelectDeckListViewObject_TypeInfo )
  {
    sub_1B88ACC(obj);
    goto LABEL_8;
  }
  SupportSelectDeckListViewObject__Init(
    (SupportSelectDeckListViewObject_o *)obj,
    (const MethodInfo *)SupportSelectDeckListViewObject_TypeInfo);
  onSelectDeck = v5->fields.onSelectDeck;
  currentMode = v5->fields.currentMode;
  obj[1].monitor = onSelectDeck;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&obj[1].monitor, (int32_t)onSelectDeck, v9, v10);
  ((void (__fastcall *)(ListViewObject_o *, bool, Il2CppMethodPointer))obj->klass->vtable._9_SetInput.method)(
    obj,
    currentMode == 2,
    obj->klass->vtable._10_Invalidation.methodPtr);
}