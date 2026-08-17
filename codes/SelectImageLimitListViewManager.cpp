void SelectImageLimitListViewManager___ctor(SelectImageLimitListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void SelectImageLimitListViewManager__CreateList(
        SelectImageLimitListViewManager_o *this,
        int32_t svtId,
        System_Int32_array *imageLimitCounts,
        int32_t selectedImageId,
        const MethodInfo *method)
{
  __int64 v9; // x20
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v11; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v13; // x23
  int32_t v14; // w28
  int v15; // w29
  __int64 v16; // x24
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_Object_o *scrollBar; // x21
  struct UIScrollBar_o *v30; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v31; // x21
  System_Predicate_object__o *v32; // x22
  Il2CppObject *v33; // x0

  if ( (byte_596B8E2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Find__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&System_Predicate_ListViewItem__TypeInfo);
    sub_2213A60(&SelectImageLimitListViewItem_TypeInfo);
    sub_2213A60(&Method_SelectImageLimitListViewManager___c__DisplayClass16_0__CreateList_b__0__);
    sub_2213A60(&SelectImageLimitListViewManager___c__DisplayClass16_0_TypeInfo);
    byte_596B8E2 = 1;
  }
  v9 = sub_2213CCC(SelectImageLimitListViewManager___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_26;
  *(_DWORD *)(v9 + 16) = selectedImageId;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !imageLimitCounts )
    goto LABEL_26;
  max_length = imageLimitCounts->max_length;
  if ( (int)max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)max_length )
        sub_2213CE4(itemList);
      v14 = imageLimitCounts->m_Items[v13];
      v15 = *(_DWORD *)(v9 + 16);
      v16 = sub_2213CCC(SelectImageLimitListViewItem_TypeInfo);
      ListViewItem___ctor_50819428((ListViewItem_o *)v16, v13, 0);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      *(_DWORD *)(v16 + 120) = svtId;
      *(_DWORD *)(v16 + 124) = v14;
      *(_BYTE *)(v16 + 128) = v14 == v15;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v24 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v16,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v16;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), v16, v17, v18, v19, v20, v21, v22);
      }
      LODWORD(max_length) = imageLimitCounts->max_length;
      if ( (__int64)++v13 >= (int)max_length )
        goto LABEL_14;
    }
LABEL_26:
    sub_2213CDC(itemList, v11);
  }
LABEL_14:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.scrollBar;
    if ( !itemList )
      goto LABEL_26;
    itemList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)itemList,
                                                              0);
    if ( !itemList )
      goto LABEL_26;
    itemList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_activeSelf(
                                                              (UnityEngine_GameObject_o *)itemList,
                                                              0);
    if ( ((unsigned __int8)itemList & 1) != 0 )
    {
      v30 = this->fields.scrollBar;
      if ( !v30 )
        goto LABEL_26;
      if ( v30->fields.mSize <= 0.98 )
      {
        v31 = this->fields.itemList;
        v32 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v32,
          (Il2CppObject *)v9,
          Method_SelectImageLimitListViewManager___c__DisplayClass16_0__CreateList_b__0__,
          0);
        if ( !v31 )
          goto LABEL_26;
        v33 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)v31,
                (System_Predicate_T__o *)v32,
                (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v33 )
          ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v33[1].klass), 0);
      }
    }
  }
}


void SelectImageLimitListViewManager__DestroyList(SelectImageLimitListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_2213CDC(0, v3);
  ListViewSort__Save(sort, 0);
}


SelectImageLimitListViewItem_o *SelectImageLimitListViewManager__GetItem(
        SelectImageLimitListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  SelectImageLimitListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_596B8E3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&SelectImageLimitListViewItem_TypeInfo);
    byte_596B8E3 = 1;
  }
  result = (SelectImageLimitListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (SelectImageLimitListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)result,
                                                 index,
                                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = SelectImageLimitListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (SelectImageLimitListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != SelectImageLimitListViewItem_TypeInfo )
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


void SelectImageLimitListViewManager__ModifyItem(
        SelectImageLimitListViewManager_o *this,
        int32_t selectedImageId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x10
  UnityEngine_Object_c *v11; // x0
  Il2CppClass *klass; // x21
  __int64 v13; // x1
  Il2CppClass *v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596B8E4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SelectImageLimitListViewItem_TypeInfo);
    byte_596B8E4 = 1;
  }
  itemList = this->fields.itemList;
  memset(&v16, 0, sizeof(v16));
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v16 = v15;
    v15.fields._list = 0;
    *(_QWORD *)&v15.fields._index = &v16;
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v16,
             (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v6 )
        break;
      current = v16.fields._current;
      if ( !v16.fields._current
        || (naturalAligment = SelectImageLimitListViewItem_TypeInfo->_2.naturalAligment,
            v16.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
        || (SelectImageLimitListViewItem_c *)v16.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != SelectImageLimitListViewItem_TypeInfo )
      {
        sub_2213CDC(v6, v7);
      }
      v11 = UnityEngine_Object_TypeInfo;
      klass = v16.fields._current[7].klass;
      LOBYTE(v16.fields._current[8].klass) = HIDWORD(v16.fields._current[7].monitor) == selectedImageId;
      if ( !*(&v11->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v11, v7, v8);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0, 0) )
      {
        v14 = current[7].klass;
        if ( !v14 )
          sub_2213CDC(0, v13);
        (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v14->_1.image + 49))(
          v14,
          current,
          *((_QWORD *)v14->_1.image + 50));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void SelectImageLimitListViewManager__OnClickListView(
        SelectImageLimitListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void SelectImageLimitListViewManager__OnClickSelectListView(
        SelectImageLimitListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct SelectImageLimitListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_2213CDC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      1,
      Index,
      callbackFunc->fields.method);
  }
}


void SelectImageLimitListViewManager__OnMoveEnd(SelectImageLimitListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct UIScrollView_o *v15; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_596B8E8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B8E8 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v15 = this->fields.scrollView;
        if ( !v15 )
          sub_2213CDC(0, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v15->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v15,
          1,
          v15->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v9, v10, v11, v12, v13, v14);
      if ( callbackFunc2 )
        ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
          callbackFunc2->fields.method_code,
          callbackFunc2->fields.method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void SelectImageLimitListViewManager__RequestListObject(
        SelectImageLimitListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  const MethodInfo_448473C *v10; // x1
  Il2CppObject *current; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596B8E6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SelectImageLimitListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SelectImageLimitListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SelectImageLimitListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_SelectImageLimitListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_SelectImageLimitListViewObject__get_Count__);
    sub_2213A60(&Method_SelectImageLimitListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596B8E6 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)SelectImageLimitListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    v10 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_SelectImageLimitListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_SelectImageLimitListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_SelectImageLimitListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v13, v14);
      SelectImageLimitListViewObject__Init_40187744((SelectImageLimitListViewObject_o *)current, mode, v12, delay, v15);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_SelectImageLimitListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void SelectImageLimitListViewManager__RequestListObject_40186740(
        SelectImageLimitListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  const MethodInfo_448473C *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  __int64 v14; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v15; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596B8E7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SelectImageLimitListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SelectImageLimitListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SelectImageLimitListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_SelectImageLimitListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_SelectImageLimitListViewObject__get_Count__);
    sub_2213A60(&Method_SelectImageLimitListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596B8E7 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)SelectImageLimitListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v8 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_SelectImageLimitListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v8);
    v14 = 0;
    v15 = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_SelectImageLimitListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_SelectImageLimitListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v11, v12);
      SelectImageLimitListViewObject__Init_40187828((SelectImageLimitListViewObject_o *)current, mode, v10, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_SelectImageLimitListViewObject__Dispose__);
  }
}


void SelectImageLimitListViewManager__SetMode(
        SelectImageLimitListViewManager_o *this,
        int32_t mode,
        SelectImageLimitListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  SelectImageLimitListViewManager__SetMode_40186532(this, mode, v10);
}


void SelectImageLimitListViewManager__SetMode_40186532(
        SelectImageLimitListViewManager_o *this,
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
    sub_2213CDC(scrollView, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)scrollView, 0);
LABEL_6:
  if ( (unsigned int)(mode - 1) <= 2 )
    SelectImageLimitListViewManager__RequestListObject_40186740(this, mode + 1, v7);
}


void SelectImageLimitListViewManager__SetMode_40186688(
        SelectImageLimitListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  SelectImageLimitListViewManager__SetMode_40186532(this, mode, v10);
}


void SelectImageLimitListViewManager__SetObjectItem(
        SelectImageLimitListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_596B8E5 & 1) == 0 )
  {
    sub_2213A60(&SelectImageLimitListViewObject_TypeInfo);
    byte_596B8E5 = 1;
  }
  if ( obj
    && (naturalAligment = SelectImageLimitListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (SelectImageLimitListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == SelectImageLimitListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 2 )
  {
    if ( v7 )
    {
      v8 = 2;
      goto LABEL_14;
    }
LABEL_15:
    sub_2213CDC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 3;
LABEL_14:
  SelectImageLimitListViewObject__Init_40186460((SelectImageLimitListViewObject_o *)v7, v8, (const MethodInfo *)item);
}


void SelectImageLimitListViewManager__add_callbackFunc(
        SelectImageLimitListViewManager_o *this,
        SelectImageLimitListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  SelectImageLimitListViewManager_o *v11; // x0
  SelectImageLimitListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596B8DC & 1) == 0 )
  {
    sub_2213A60(&SelectImageLimitListViewManager_CallbackFunc_TypeInfo);
    byte_596B8DC = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (SelectImageLimitListViewManager_CallbackFunc_c *)v6->klass != SelectImageLimitListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SelectImageLimitListViewManager_o *)sub_221405C(
                                               v6,
                                               SelectImageLimitListViewManager_CallbackFunc_TypeInfo,
                                               v7,
                                               v8);
  SelectImageLimitListViewManager__remove_callbackFunc(v11, v12, v13);
}


void SelectImageLimitListViewManager__add_callbackFunc2(
        SelectImageLimitListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  SelectImageLimitListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596B8DE & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596B8DE = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SelectImageLimitListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  SelectImageLimitListViewManager__remove_callbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_SelectImageLimitListViewObject__o *SelectImageLimitListViewManager__get_ClippingObjectList(
        SelectImageLimitListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *v13; // x21
  ListViewItem_o *Item; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  _BOOL8 v21; // x0
  __int64 v22; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596B8E1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SelectImageLimitListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_SelectImageLimitListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_SelectImageLimitListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SelectImageLimitListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B8E1 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SelectImageLimitListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SelectImageLimitListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  v28.fields._list = 0;
  *(_QWORD *)&v28.fields._index = &v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SelectImageLimitListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_2213CDC(0, v12);
      Item = (ListViewItem_o *)SelectImageLimitListViewObject__GetItem(
                                 (SelectImageLimitListViewObject_o *)Component_object,
                                 v12);
      if ( !Item )
        sub_2213CDC(0, 0);
      if ( Item->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_50835204((ListViewManager_o *)this, Item, 0);
        if ( v21 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v24 = Method_System_Collections_Generic_List_SelectImageLimitListViewObject__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_2213CDC(v21, v22);
          }
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3
          || (items = v3->fields._items,
              v24 = Method_System_Collections_Generic_List_SelectImageLimitListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_2213CDC(Item, Item);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v13;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v13, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SelectImageLimitListViewObject__o *)v3;
}


System_Collections_Generic_List_SelectImageLimitListViewObject__o *SelectImageLimitListViewManager__get_ObjectList(
        SelectImageLimitListViewManager_o *this,
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

  if ( (byte_596B8E0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SelectImageLimitListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_SelectImageLimitListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_SelectImageLimitListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SelectImageLimitListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B8E0 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SelectImageLimitListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SelectImageLimitListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SelectImageLimitListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_SelectImageLimitListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_2213CDC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SelectImageLimitListViewObject__o *)v3;
}


void SelectImageLimitListViewManager__remove_callbackFunc(
        SelectImageLimitListViewManager_o *this,
        SelectImageLimitListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  SelectImageLimitListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596B8DD & 1) == 0 )
  {
    sub_2213A60(&SelectImageLimitListViewManager_CallbackFunc_TypeInfo);
    byte_596B8DD = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (SelectImageLimitListViewManager_CallbackFunc_c *)v6->klass != SelectImageLimitListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SelectImageLimitListViewManager_o *)sub_221405C(
                                               v6,
                                               SelectImageLimitListViewManager_CallbackFunc_TypeInfo,
                                               v7,
                                               v8);
  SelectImageLimitListViewManager__add_callbackFunc2(v11, v12, v13);
}


void SelectImageLimitListViewManager__remove_callbackFunc2(
        SelectImageLimitListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  SelectImageLimitListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_596B8DF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596B8DF = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SelectImageLimitListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  SelectImageLimitListViewManager__get_ObjectList(v11, v12);
}


void SelectImageLimitListViewManager_CallbackFunc___ctor(
        SelectImageLimitListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_20027AC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2002754;
}


System_IAsyncResult_o *SelectImageLimitListViewManager_CallbackFunc__BeginInvoke(
        SelectImageLimitListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v12 = kind;
  v11 = result;
  if ( (byte_596B8E9 & 1) == 0 )
  {
    sub_2213A60(&SelectImageLimitListViewManager_ResultKind_TypeInfo);
    byte_596B8E9 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(SelectImageLimitListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_5984348, &v11);
  return (System_IAsyncResult_o *)sub_2213A14(this, v10, callback, object);
}


void SelectImageLimitListViewManager_CallbackFunc__EndInvoke(
        SelectImageLimitListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void SelectImageLimitListViewManager_CallbackFunc__Invoke(
        SelectImageLimitListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    kind,
    result,
    this->fields.method);
}


void SelectImageLimitListViewManager___c__DisplayClass16_0___ctor(
        SelectImageLimitListViewManager___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SelectImageLimitListViewManager___c__DisplayClass16_0___CreateList_b__0(
        SelectImageLimitListViewManager___c__DisplayClass16_0_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SelectImageLimitListViewManager___c__DisplayClass16_0_o *v5; // x20
  __int64 naturalAligment; // x9

  v5 = this;
  if ( (byte_596B8EA & 1) == 0 )
  {
    this = (SelectImageLimitListViewManager___c__DisplayClass16_0_o *)sub_2213A60(&SelectImageLimitListViewItem_TypeInfo);
    byte_596B8EA = 1;
  }
  if ( !item )
LABEL_8:
    sub_2213CDC(this, item);
  naturalAligment = SelectImageLimitListViewItem_TypeInfo->_2.naturalAligment;
  if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SelectImageLimitListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != SelectImageLimitListViewItem_TypeInfo )
  {
    this = (SelectImageLimitListViewManager___c__DisplayClass16_0_o *)sub_221405C(
                                                                        item,
                                                                        SelectImageLimitListViewItem_TypeInfo,
                                                                        method,
                                                                        v3);
    goto LABEL_8;
  }
  return HIDWORD(item[1].klass) == v5->fields.selectedImageId;
}