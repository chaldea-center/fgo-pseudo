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
  __int64 v11; // x1
  int32_t v12; // w23
  Il2CppObject *Item; // x0
  int32_t v14; // w25
  StaffPhotoCostumeEntity_o *v15; // x26
  StaffCostumeSelectListViewItem_o *v16; // x24
  const MethodInfo *v17; // x5
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x8
  UnityEngine_Object_o *scrollBar; // x21
  struct UIScrollBar_o *v25; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v26; // x21
  System_Predicate_object__o *v27; // x22
  Il2CppObject *v28; // x0

  if ( (byte_4C523D7 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__Find__);
    sub_1C3E564(&Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__get_Item__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&System_Predicate_ListViewItem__TypeInfo);
    sub_1C3E564(&StaffCostumeSelectListViewItem_TypeInfo);
    sub_1C3E564(&Method_StaffCostumeSelectListViewManager___c__DisplayClass6_0__CreateList_b__0__);
    sub_1C3E564(&StaffCostumeSelectListViewManager___c__DisplayClass6_0_TypeInfo);
    byte_4C523D7 = 1;
  }
  v9 = sub_1C3E7B0(StaffCostumeSelectListViewManager___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_25;
  *(_DWORD *)(v9 + 16) = selectedCostumeIdx;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !staffPhotoCostumeEntityList )
    goto LABEL_25;
  if ( staffPhotoCostumeEntityList->fields._size >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)staffPhotoCostumeEntityList,
               v12,
               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__get_Item__);
      v14 = *(_DWORD *)(v9 + 16);
      v15 = (StaffPhotoCostumeEntity_o *)Item;
      v16 = (StaffCostumeSelectListViewItem_o *)sub_1C3E7B0(StaffCostumeSelectListViewItem_TypeInfo);
      StaffCostumeSelectListViewItem___ctor(v16, v12, v15, v14, photoCampaignAtlas, v17);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v21 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v16,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v16;
        sub_1C3E508((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v16, v18, v19);
      }
      if ( ++v12 >= staffPhotoCostumeEntityList->fields._size )
        goto LABEL_13;
    }
LABEL_25:
    sub_1C3E7C0(itemList, v11);
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
      v25 = this->fields.scrollBar;
      if ( !v25 )
        goto LABEL_25;
      if ( v25->fields.mSize <= 0.98 )
      {
        v26 = this->fields.itemList;
        v27 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v27,
          (Il2CppObject *)v9,
          Method_StaffCostumeSelectListViewManager___c__DisplayClass6_0__CreateList_b__0__,
          0);
        if ( !v26 )
          goto LABEL_25;
        v28 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)v26,
                (System_Predicate_T__o *)v27,
                (const MethodInfo_37B5AC8 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v28 )
          ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v28[1].klass), 0);
      }
    }
  }
}


void StaffCostumeSelectListViewManager__DestroyList(
        StaffCostumeSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C3E7C0(0, v3);
  ListViewSort__Save(sort, 0);
}


void StaffCostumeSelectListViewManager__ModifyItem(
        StaffCostumeSelectListViewManager_o *this,
        int32_t selectedCostumeIdx,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x10
  _DWORD *monitor; // x8
  Il2CppClass *klass; // x21
  __int64 v12; // x1
  Il2CppClass *v13; // x0
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C523D8 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StaffCostumeSelectListViewItem_TypeInfo);
    byte_4C523D8 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v15 = v14;
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v15,
             (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v6 )
        break;
      current = v15.fields._current;
      if ( v15.fields._current )
      {
        naturalAligment = StaffCostumeSelectListViewItem_TypeInfo->_2.naturalAligment;
        if ( v15.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (StaffCostumeSelectListViewItem_c *)v15.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == StaffCostumeSelectListViewItem_TypeInfo )
        {
          monitor = v15.fields._current[7].monitor;
          if ( !monitor )
            sub_1C3E7C0(v6, v7);
          klass = v15.fields._current[7].klass;
          LOBYTE(v15.fields._current[8].klass) = monitor[5] == selectedCostumeIdx;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0, 0) )
          {
            v13 = current[7].klass;
            if ( !v13 )
              sub_1C3E7C0(0, v12);
            (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v13->_1.image + 49))(
              v13,
              current,
              *((_QWORD *)v13->_1.image + 50));
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  __int64 v8; // x1
  struct StaffPhotoCostumeEntity_o *StaffPhotoCostumeEntity_k__BackingField; // x8

  if ( (byte_4C523DC & 1) == 0 )
  {
    sub_1C3E564(&Method_ActionExtensions_Call_int___);
    sub_1C3E564(&StaffCostumeSelectListViewObject_TypeInfo);
    byte_4C523DC = 1;
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
        sub_1C3E7C0(Item, v8);
      }
      ActionExtensions__Call_int_(
        callbackFunc,
        StaffPhotoCostumeEntity_k__BackingField->fields.idx,
        (const MethodInfo_30462C0 *)Method_ActionExtensions_Call_int___);
    }
  }
}


void StaffCostumeSelectListViewManager__OnMoveEnd(StaffCostumeSelectListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0

  if ( (byte_4C523DB & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C523DB = 1;
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
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_1C3E7C0(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v8->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v8,
          1,
          v8->klass->vtable._8_UpdateScrollbars.method);
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
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C523DA & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_StaffCostumeSelectListViewObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_StaffCostumeSelectListViewObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_StaffCostumeSelectListViewObject__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_StaffCostumeSelectListViewObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_StaffCostumeSelectListViewObject__get_Count__);
    sub_1C3E564(&Method_StaffCostumeSelectListViewManager_OnMoveEnd__);
    sub_1C3E564(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C523DA = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)StaffCostumeSelectListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C3E7C0(0, v6);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_StaffCostumeSelectListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_StaffCostumeSelectListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_StaffCostumeSelectListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C3E7C0(v10, v11);
      StaffCostumeSelectListViewObject__Init((StaffCostumeSelectListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_StaffCostumeSelectListViewObject__Dispose__);
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  StaffCostumeSelectListViewManager__SetMode_33887948(this, mode, v6);
}


void StaffCostumeSelectListViewManager__SetMode_33887948(
        StaffCostumeSelectListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Behaviour_o *scrollView; // x0
  const MethodInfo *v7; // x2

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
    sub_1C3E7C0(scrollView, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)scrollView, 0);
LABEL_6:
  if ( (unsigned int)(mode - 1) <= 2 )
    StaffCostumeSelectListViewManager__RequestListObject(this, mode + 1, v7);
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

  if ( (byte_4C523D9 & 1) == 0 )
  {
    sub_1C3E564(&StaffCostumeSelectListViewObject_TypeInfo);
    byte_4C523D9 = 1;
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

  if ( (byte_4C523D6 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_StaffCostumeSelectListViewObject___);
    sub_1C3E564(&Method_System_Collections_Generic_List_StaffCostumeSelectListViewObject__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_StaffCostumeSelectListViewObject___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_StaffCostumeSelectListViewObject__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C523D6 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_StaffCostumeSelectListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_StaffCostumeSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C3E7C0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C3E7C0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_StaffCostumeSelectListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1C3E7C0(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_StaffCostumeSelectListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C3E7C0(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1C3E508((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  ListViewItem_o *v3; // x20
  StaffCostumeSelectListViewManager___c__DisplayClass6_0_o *v4; // x19
  __int64 naturalAligment; // x9
  ListViewItem_c *klass; // x8
  bool result; // w0
  StaffCostumeSelectListViewObject_o *v8; // x0
  const MethodInfo *v9; // x1

  v3 = item;
  v4 = this;
  if ( (byte_4C523DD & 1) == 0 )
  {
    this = (StaffCostumeSelectListViewManager___c__DisplayClass6_0_o *)sub_1C3E564(&StaffCostumeSelectListViewItem_TypeInfo);
    byte_4C523DD = 1;
  }
  if ( !v3 )
    goto LABEL_8;
  item = (ListViewItem_o *)StaffCostumeSelectListViewItem_TypeInfo;
  naturalAligment = StaffCostumeSelectListViewItem_TypeInfo->_2.naturalAligment;
  if ( v3->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (StaffCostumeSelectListViewItem_c *)v3->klass->_2.typeHierarchy[naturalAligment - 1] == StaffCostumeSelectListViewItem_TypeInfo )
  {
    klass = v3[1].klass;
    if ( klass )
      return HIDWORD(klass->_1.name) == v4->fields.selectedCostumeIdx;
LABEL_8:
    sub_1C3E7C0(this, item);
  }
  v8 = (StaffCostumeSelectListViewObject_o *)sub_1C3EA80(v3);
  StaffCostumeSelectListViewObject__Awake(v8, v9);
  return result;
}