void __fastcall StaffCostumeSelectListViewManager___ctor(
        StaffCostumeSelectListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall StaffCostumeSelectListViewManager__CreateList(
        StaffCostumeSelectListViewManager_o *this,
        System_Collections_Generic_List_StaffPhotoCostumeEntity__o *staffPhotoCostumeEntityList,
        int32_t selectedCostumeIdx,
        UIAtlas_o *photoCampaignAtlas,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x20
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v19; // x1
  int32_t v20; // w23
  Il2CppObject *Item; // x0
  int32_t v22; // w25
  StaffPhotoCostumeEntity_o *v23; // x26
  StaffCostumeSelectListViewItem_o *v24; // x24
  const MethodInfo *v25; // x5
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x8
  UnityEngine_Object_o *scrollBar; // x21
  struct UIScrollBar_o *v33; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v34; // x21
  System_Predicate_object__o *v35; // x22
  Il2CppObject *v36; // x0

  if ( (byte_4AFD782 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__Add__, staffPhotoCostumeEntityList);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__Find__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__get_Count__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__get_Item__, v11);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v12);
    sub_1BC3008(&System_Predicate_ListViewItem__TypeInfo, v13);
    sub_1BC3008(&StaffCostumeSelectListViewItem_TypeInfo, v14);
    sub_1BC3008(&Method_StaffCostumeSelectListViewManager___c__DisplayClass6_0__CreateList_b__0__, v15);
    sub_1BC3008(&StaffCostumeSelectListViewManager___c__DisplayClass6_0_TypeInfo, v16);
    byte_4AFD782 = 1;
  }
  v17 = sub_1BC3254(StaffCostumeSelectListViewManager___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_25;
  *(_DWORD *)(v17 + 16) = selectedCostumeIdx;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !staffPhotoCostumeEntityList )
    goto LABEL_25;
  if ( staffPhotoCostumeEntityList->fields._size >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)staffPhotoCostumeEntityList,
               v20,
               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__get_Item__);
      v22 = *(_DWORD *)(v17 + 16);
      v23 = (StaffPhotoCostumeEntity_o *)Item;
      v24 = (StaffCostumeSelectListViewItem_o *)sub_1BC3254(StaffCostumeSelectListViewItem_TypeInfo);
      StaffCostumeSelectListViewItem___ctor(v24, v20, v23, v22, photoCampaignAtlas, v25);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v29 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v24,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v31[4] = (Il2CppClass *)v24;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v31 + 4), (int32_t)v24, v26, v27);
      }
      if ( ++v20 >= staffPhotoCostumeEntityList->fields._size )
        goto LABEL_13;
    }
LABEL_25:
    sub_1BC3264(itemList, v19);
  }
LABEL_13:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.scrollBar;
    if ( !itemList )
      goto LABEL_25;
    itemList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)itemList,
                                                              0LL);
    if ( !itemList )
      goto LABEL_25;
    itemList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_activeSelf(
                                                              (UnityEngine_GameObject_o *)itemList,
                                                              0LL);
    if ( ((unsigned __int8)itemList & 1) != 0 )
    {
      v33 = this->fields.scrollBar;
      if ( !v33 )
        goto LABEL_25;
      if ( v33->fields.mSize <= 0.98 )
      {
        v34 = this->fields.itemList;
        v35 = (System_Predicate_object__o *)sub_1BC3254(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v35,
          (Il2CppObject *)v17,
          Method_StaffCostumeSelectListViewManager___c__DisplayClass6_0__CreateList_b__0__,
          0LL);
        if ( !v34 )
          goto LABEL_25;
        v36 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)v34,
                (System_Predicate_T__o *)v35,
                (const MethodInfo_36A14A8 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v36 )
          ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v36[1].klass), 0LL);
      }
    }
  }
}


void __fastcall StaffCostumeSelectListViewManager__DestroyList(
        StaffCostumeSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1BC3264(0LL, v3);
  ListViewSort__Save(sort, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StaffCostumeSelectListViewManager__ModifyItem(
        StaffCostumeSelectListViewManager_o *this,
        int32_t selectedCostumeIdx,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x8
  UnityEngine_Object_o *monitor; // x21
  __int64 v17; // x1
  void *v18; // x0
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4AFD783 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__,
      *(_QWORD *)&selectedCostumeIdx);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v8);
    sub_1BC3008(&StaffCostumeSelectListViewItem_TypeInfo, v9);
    byte_4AFD783 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v20 = v19;
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v11 )
        break;
      current = v20.fields._current;
      if ( v20.fields._current )
      {
        methodPtr_low = LOBYTE(StaffCostumeSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v20.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (StaffCostumeSelectListViewItem_c *)v20.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == StaffCostumeSelectListViewItem_TypeInfo )
        {
          klass = v20.fields._current[7].klass;
          if ( !klass )
            sub_1BC3264(v11, v12);
          monitor = (UnityEngine_Object_o *)v20.fields._current[6].monitor;
          LOBYTE(v20.fields._current[7].monitor) = HIDWORD(klass->_1.name) == selectedCostumeIdx;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
          {
            v18 = current[6].monitor;
            if ( !v18 )
              sub_1BC3264(0LL, v17);
            (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v18 + 392LL))(
              v18,
              current,
              *(_QWORD *)(*(_QWORD *)v18 + 400LL));
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void __fastcall StaffCostumeSelectListViewManager__OnClickSelectListView(
        StaffCostumeSelectListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 methodPtr_low; // x10
  System_Action_T__o *callbackFunc; // x20
  StaffCostumeSelectListViewItem_o *Item; // x0
  __int64 v9; // x1
  struct StaffPhotoCostumeEntity_o *StaffPhotoCostumeEntity_k__BackingField; // x8

  if ( (byte_4AFD787 & 1) == 0 )
  {
    sub_1BC3008(&Method_ActionExtensions_Call_int___, obj);
    sub_1BC3008(&StaffCostumeSelectListViewObject_TypeInfo, v5);
    byte_4AFD787 = 1;
  }
  if ( obj )
  {
    methodPtr_low = LOBYTE(StaffCostumeSelectListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (StaffCostumeSelectListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] == StaffCostumeSelectListViewObject_TypeInfo )
    {
      callbackFunc = (System_Action_T__o *)this->fields.callbackFunc;
      Item = StaffCostumeSelectListViewObject__GetItem(
               (StaffCostumeSelectListViewObject_o *)obj,
               (const MethodInfo *)obj);
      if ( !Item
        || (StaffPhotoCostumeEntity_k__BackingField = Item->fields._StaffPhotoCostumeEntity_k__BackingField) == 0LL )
      {
        sub_1BC3264(Item, v9);
      }
      ActionExtensions__Call_int_(
        callbackFunc,
        StaffPhotoCostumeEntity_k__BackingField->fields.idx,
        (const MethodInfo_2F5140C *)Method_ActionExtensions_Call_int___);
    }
  }
}


void __fastcall StaffCostumeSelectListViewManager__OnMoveEnd(
        StaffCostumeSelectListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0

  if ( (byte_4AFD786 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFD786 = 1;
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
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_1BC3264(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StaffCostumeSelectListViewManager__RequestListObject(
        StaffCostumeSelectListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4AFD785 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_StaffCostumeSelectListViewObject__Dispose__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_StaffCostumeSelectListViewObject__MoveNext__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_StaffCostumeSelectListViewObject__get_Current__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_StaffCostumeSelectListViewObject__GetEnumerator__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_StaffCostumeSelectListViewObject__get_Count__, v9);
    sub_1BC3008(&Method_StaffCostumeSelectListViewManager_OnMoveEnd__, v10);
    sub_1BC3008(&StringLiteral_9854/*"OnMoveEnd"*/, v11);
    byte_4AFD785 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)StaffCostumeSelectListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BC3264(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9854/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_StaffCostumeSelectListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_StaffCostumeSelectListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_StaffCostumeSelectListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BC3264(v17, v18);
      StaffCostumeSelectListViewObject__Init((StaffCostumeSelectListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_StaffCostumeSelectListViewObject__Dispose__);
  }
}


void __fastcall StaffCostumeSelectListViewManager__SetMode(
        StaffCostumeSelectListViewManager_o *this,
        int32_t mode,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  StaffCostumeSelectListViewManager__SetMode_32981232(this, mode, v6);
}


void __fastcall StaffCostumeSelectListViewManager__SetMode_32981232(
        StaffCostumeSelectListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Behaviour_o *scrollView; // x0
  const MethodInfo *v7; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_9;
  if ( UnityEngine_Behaviour__get_enabled(scrollView, 0LL) )
    goto LABEL_6;
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView
    || (UnityEngine_Behaviour__set_enabled(scrollView, 1, 0LL),
        (scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0LL) )
  {
LABEL_9:
    sub_1BC3264(scrollView, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)scrollView, 0LL);
LABEL_6:
  if ( (unsigned int)(mode - 1) <= 2 )
    StaffCostumeSelectListViewManager__RequestListObject(this, mode + 1, v7);
}


void __fastcall StaffCostumeSelectListViewManager__SetObjectItem(
        StaffCostumeSelectListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10
  StaffCostumeSelectListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_4AFD784 & 1) == 0 )
  {
    sub_1BC3008(&StaffCostumeSelectListViewObject_TypeInfo, obj);
    byte_4AFD784 = 1;
  }
  if ( obj )
  {
    methodPtr_low = LOBYTE(StaffCostumeSelectListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      v7 = (StaffCostumeSelectListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] == StaffCostumeSelectListViewObject_TypeInfo
         ? (StaffCostumeSelectListViewObject_o *)obj
         : 0LL;
      if ( v7 )
      {
        if ( this->fields.initMode == 2 )
          v8 = 3;
        else
          v8 = 2;
        StaffCostumeSelectListViewObject__Init(v7, v8, 0LL, method);
      }
    }
  }
}


System_Collections_Generic_List_StaffCostumeSelectListViewObject__o *__fastcall StaffCostumeSelectListViewManager__get_ObjectList(
        StaffCostumeSelectListViewManager_o *this,
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

  if ( (byte_4AFD781 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_StaffCostumeSelectListViewObject___, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_StaffCostumeSelectListViewObject__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_StaffCostumeSelectListViewObject___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_StaffCostumeSelectListViewObject__TypeInfo, v9);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v10);
    byte_4AFD781 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_StaffCostumeSelectListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_StaffCostumeSelectListViewObject___ctor__);
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
                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_StaffCostumeSelectListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1BC3264(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_StaffCostumeSelectListViewObject__Add__;
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
  return (System_Collections_Generic_List_StaffCostumeSelectListViewObject__o *)v11;
}


void __fastcall StaffCostumeSelectListViewManager___c__DisplayClass6_0___ctor(
        StaffCostumeSelectListViewManager___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall StaffCostumeSelectListViewManager___c__DisplayClass6_0___CreateList_b__0(
        StaffCostumeSelectListViewManager___c__DisplayClass6_0_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewItem_o *v3; // x20
  StaffCostumeSelectListViewManager___c__DisplayClass6_0_o *v4; // x19
  __int64 methodPtr_low; // x9
  ListViewItem_c *klass; // x8
  bool result; // w0
  StaffCostumeSelectListViewObject_o *v8; // x0
  const MethodInfo *v9; // x1

  v3 = item;
  v4 = this;
  if ( (byte_4AFD788 & 1) == 0 )
  {
    this = (StaffCostumeSelectListViewManager___c__DisplayClass6_0_o *)sub_1BC3008(
                                                                         &StaffCostumeSelectListViewItem_TypeInfo,
                                                                         item);
    byte_4AFD788 = 1;
  }
  if ( !v3 )
    goto LABEL_8;
  item = (ListViewItem_o *)StaffCostumeSelectListViewItem_TypeInfo;
  methodPtr_low = LOBYTE(StaffCostumeSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v3->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (StaffCostumeSelectListViewItem_c *)v3->klass->_2.typeHierarchy[methodPtr_low - 1] == StaffCostumeSelectListViewItem_TypeInfo )
  {
    klass = v3[1].klass;
    if ( klass )
      return HIDWORD(klass->_1.name) == v4->fields.selectedCostumeIdx;
LABEL_8:
    sub_1BC3264(this, item);
  }
  v8 = (StaffCostumeSelectListViewObject_o *)sub_1BC3524(v3);
  StaffCostumeSelectListViewObject__Awake(v8, v9);
  return result;
}