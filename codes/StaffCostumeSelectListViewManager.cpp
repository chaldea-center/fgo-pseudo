void StaffCostumeSelectListViewManager___ctor(StaffCostumeSelectListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void StaffCostumeSelectListViewManager__CreateList(
        StaffCostumeSelectListViewManager_o *this,
        System_Collections_Generic_List_StaffPhotoCostumeEntity__o *staffPhotoCostumeEntityList,
        int32_t selectedCostumeIdx,
        UIAtlas_o *photoCampaignAtlas,
        const MethodInfo *method)
{
  __int64 v9; // x20
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v11; // w23
  Il2CppObject *Item; // x0
  int32_t v13; // w25
  StaffPhotoCostumeEntity_o *v14; // x26
  StaffCostumeSelectListViewItem_o *v15; // x24
  const MethodInfo *v16; // x5
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x8
  UnityEngine_Object_o *scrollBar; // x21
  struct UIScrollBar_o *v24; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v25; // x21
  System_Predicate_object__o *v26; // x22
  Il2CppObject *v27; // x0

  if ( (byte_4C3E651 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__Find__);
    sub_1C37058(&Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&System_Predicate_ListViewItem__TypeInfo);
    sub_1C37058(&StaffCostumeSelectListViewItem_TypeInfo);
    sub_1C37058(&Method_StaffCostumeSelectListViewManager___c__DisplayClass6_0__CreateList_b__0__);
    sub_1C37058(&StaffCostumeSelectListViewManager___c__DisplayClass6_0_TypeInfo);
    byte_4C3E651 = 1;
  }
  v9 = sub_1C372A4(StaffCostumeSelectListViewManager___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_25;
  *(_DWORD *)(v9 + 16) = selectedCostumeIdx;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !staffPhotoCostumeEntityList )
    goto LABEL_25;
  if ( staffPhotoCostumeEntityList->fields._size >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)staffPhotoCostumeEntityList,
               v11,
               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__get_Item__);
      v13 = *(_DWORD *)(v9 + 16);
      v14 = (StaffPhotoCostumeEntity_o *)Item;
      v15 = (StaffCostumeSelectListViewItem_o *)sub_1C372A4(StaffCostumeSelectListViewItem_TypeInfo);
      StaffCostumeSelectListViewItem___ctor(v15, v11, v14, v13, photoCampaignAtlas, v16);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v20 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v15,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v15;
        sub_1C36FFC((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v15, v17, v18);
      }
      if ( ++v11 >= staffPhotoCostumeEntityList->fields._size )
        goto LABEL_13;
    }
LABEL_25:
    sub_1C372B4(itemList);
  }
LABEL_13:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.scrollBar;
    if ( !itemList )
      goto LABEL_25;
    itemList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)itemList,
                                                              0);
    if ( !itemList )
      goto LABEL_25;
    itemList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_activeSelf(
                                                              (UnityEngine_GameObject_o *)itemList,
                                                              0);
    if ( ((unsigned __int8)itemList & 1) != 0 )
    {
      v24 = this->fields.scrollBar;
      if ( !v24 )
        goto LABEL_25;
      if ( v24->fields.mSize <= 0.98 )
      {
        v25 = this->fields.itemList;
        v26 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v26,
          (Il2CppObject *)v9,
          Method_StaffCostumeSelectListViewManager___c__DisplayClass6_0__CreateList_b__0__,
          0);
        if ( !v25 )
          goto LABEL_25;
        v27 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)v25,
                (System_Predicate_T__o *)v26,
                (const MethodInfo_37A368C *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v27 )
          ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v27[1].klass), 0);
      }
    }
  }
}


void StaffCostumeSelectListViewManager__DestroyList(
        StaffCostumeSelectListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C372B4(0);
  ListViewSort__Save(sort, 0);
}


void StaffCostumeSelectListViewManager__ModifyItem(
        StaffCostumeSelectListViewManager_o *this,
        int32_t selectedCostumeIdx,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v6; // x0
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x10
  _DWORD *monitor; // x8
  Il2CppClass *klass; // x21
  Il2CppClass *v11; // x0
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C3E652 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StaffCostumeSelectListViewItem_TypeInfo);
    byte_4C3E652 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v13 = v12;
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v13,
             (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v6 )
        break;
      current = v13.fields._current;
      if ( v13.fields._current )
      {
        naturalAligment = StaffCostumeSelectListViewItem_TypeInfo->_2.naturalAligment;
        if ( v13.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (StaffCostumeSelectListViewItem_c *)v13.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == StaffCostumeSelectListViewItem_TypeInfo )
        {
          monitor = v13.fields._current[7].monitor;
          if ( !monitor )
            sub_1C372B4(v6);
          klass = v13.fields._current[7].klass;
          LOBYTE(v13.fields._current[8].klass) = monitor[5] == selectedCostumeIdx;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0, 0) )
          {
            v11 = current[7].klass;
            if ( !v11 )
              sub_1C372B4(0);
            (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v11->_1.image + 49))(
              v11,
              current,
              *((_QWORD *)v11->_1.image + 50));
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void StaffCostumeSelectListViewManager__OnClickSelectListView(
        StaffCostumeSelectListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  System_Action_T__o *callbackFunc; // x20
  StaffCostumeSelectListViewItem_o *Item; // x0
  struct StaffPhotoCostumeEntity_o *StaffPhotoCostumeEntity_k__BackingField; // x8

  if ( (byte_4C3E656 & 1) == 0 )
  {
    sub_1C37058(&Method_ActionExtensions_Call_int___);
    sub_1C37058(&StaffCostumeSelectListViewObject_TypeInfo);
    byte_4C3E656 = 1;
  }
  if ( obj )
  {
    naturalAligment = StaffCostumeSelectListViewObject_TypeInfo->_2.naturalAligment;
    if ( obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (StaffCostumeSelectListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == StaffCostumeSelectListViewObject_TypeInfo )
    {
      callbackFunc = (System_Action_T__o *)this->fields.callbackFunc;
      Item = StaffCostumeSelectListViewObject__GetItem(
               (StaffCostumeSelectListViewObject_o *)obj,
               (const MethodInfo *)obj);
      if ( !Item
        || (StaffPhotoCostumeEntity_k__BackingField = Item->fields._StaffPhotoCostumeEntity_k__BackingField) == 0 )
      {
        sub_1C372B4(Item);
      }
      ActionExtensions__Call_int_(
        callbackFunc,
        StaffPhotoCostumeEntity_k__BackingField->fields.idx,
        (const MethodInfo_30344A8 *)Method_ActionExtensions_Call_int___);
    }
  }
}


void StaffCostumeSelectListViewManager__OnMoveEnd(StaffCostumeSelectListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  struct UIScrollView_o *v7; // x0

  if ( (byte_4C3E655 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E655 = 1;
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
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v7 = this->fields.scrollView;
        if ( !v7 )
          sub_1C372B4(0);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v7->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v7,
          1,
          v7->klass->vtable._8_UpdateScrollbars.method);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void StaffCostumeSelectListViewManager__RequestListObject(
        StaffCostumeSelectListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v8; // x22
  __int64 v9; // x0
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C3E654 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_StaffCostumeSelectListViewObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_StaffCostumeSelectListViewObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_StaffCostumeSelectListViewObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_StaffCostumeSelectListViewObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_StaffCostumeSelectListViewObject__get_Count__);
    sub_1C37058(&Method_StaffCostumeSelectListViewManager_OnMoveEnd__);
    sub_1C37058(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C3E654 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ObjectList = (System_Collections_Generic_List_object__o *)StaffCostumeSelectListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C372B4(0);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      ObjectList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_StaffCostumeSelectListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_StaffCostumeSelectListViewObject__MoveNext__) )
    {
      current = v11.fields._current;
      v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_StaffCostumeSelectListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C372B4(v9);
      StaffCostumeSelectListViewObject__Init((StaffCostumeSelectListViewObject_o *)current, mode, v8, v10);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_StaffCostumeSelectListViewObject__Dispose__);
  }
}


void StaffCostumeSelectListViewManager__SetMode(
        StaffCostumeSelectListViewManager_o *this,
        int32_t mode,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  StaffCostumeSelectListViewManager__SetMode_33854816(this, mode, v6);
}


void StaffCostumeSelectListViewManager__SetMode_33854816(
        StaffCostumeSelectListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  const MethodInfo *v6; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_9;
  if ( UnityEngine_Behaviour__get_enabled(scrollView, 0) )
    goto LABEL_6;
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView
    || (UnityEngine_Behaviour__set_enabled(scrollView, 1, 0),
        (scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0) )
  {
LABEL_9:
    sub_1C372B4(scrollView);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)scrollView, 0);
LABEL_6:
  if ( (unsigned int)(mode - 1) <= 2 )
    StaffCostumeSelectListViewManager__RequestListObject(this, mode + 1, v6);
}


void StaffCostumeSelectListViewManager__SetObjectItem(
        StaffCostumeSelectListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  StaffCostumeSelectListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_4C3E653 & 1) == 0 )
  {
    sub_1C37058(&StaffCostumeSelectListViewObject_TypeInfo);
    byte_4C3E653 = 1;
  }
  if ( obj )
  {
    naturalAligment = StaffCostumeSelectListViewObject_TypeInfo->_2.naturalAligment;
    if ( obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      v7 = (StaffCostumeSelectListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == StaffCostumeSelectListViewObject_TypeInfo
         ? (StaffCostumeSelectListViewObject_o *)obj
         : 0LL;
      if ( v7 )
      {
        if ( this->fields.initMode == 2 )
          v8 = 3;
        else
          v8 = 2;
        StaffCostumeSelectListViewObject__Init(v7, v8, 0, method);
      }
    }
  }
}


System_Collections_Generic_List_StaffCostumeSelectListViewObject__o *StaffCostumeSelectListViewManager__get_ObjectList(
        StaffCostumeSelectListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v6; // x0
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C3E650 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_StaffCostumeSelectListViewObject___);
    sub_1C37058(&Method_System_Collections_Generic_List_StaffCostumeSelectListViewObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_StaffCostumeSelectListViewObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_StaffCostumeSelectListViewObject__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E650 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_StaffCostumeSelectListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_StaffCostumeSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_1C372B4(v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_StaffCostumeSelectListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1C372B4(Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_StaffCostumeSelectListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C372B4(Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v10, v8, v9);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_StaffCostumeSelectListViewObject__o *)v3;
}


void StaffCostumeSelectListViewManager___c__DisplayClass6_0___ctor(
        StaffCostumeSelectListViewManager___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool StaffCostumeSelectListViewManager___c__DisplayClass6_0___CreateList_b__0(
        StaffCostumeSelectListViewManager___c__DisplayClass6_0_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  StaffCostumeSelectListViewManager___c__DisplayClass6_0_o *v4; // x19
  __int64 naturalAligment; // x9
  ListViewItem_c *klass; // x8
  bool result; // w0
  StaffCostumeSelectListViewObject_o *v8; // x0
  const MethodInfo *v9; // x1

  v4 = this;
  if ( (byte_4C3E657 & 1) == 0 )
  {
    this = (StaffCostumeSelectListViewManager___c__DisplayClass6_0_o *)sub_1C37058(&StaffCostumeSelectListViewItem_TypeInfo);
    byte_4C3E657 = 1;
  }
  if ( !item )
    goto LABEL_8;
  naturalAligment = StaffCostumeSelectListViewItem_TypeInfo->_2.naturalAligment;
  if ( item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (StaffCostumeSelectListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] == StaffCostumeSelectListViewItem_TypeInfo )
  {
    klass = item[1].klass;
    if ( klass )
      return HIDWORD(klass->_1.name) == v4->fields.selectedCostumeIdx;
LABEL_8:
    sub_1C372B4(this);
  }
  v8 = (StaffCostumeSelectListViewObject_o *)sub_1C37574(item);
  StaffCostumeSelectListViewObject__Awake(v8, v9);
  return result;
}