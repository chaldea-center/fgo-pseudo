void FigureViewListViewManager___ctor(FigureViewListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void FigureViewListViewManager__CreateList(
        FigureViewListViewManager_o *this,
        System_String_array *list,
        System_String_o *searchStr,
        const MethodInfo *method)
{
  FigureViewListViewManager_o *v6; // x19
  il2cpp_array_size_t max_length; // x23
  _BOOL8 v8; // x0
  unsigned __int64 v9; // x25
  int32_t v10; // w22
  __int64 v11; // x28
  System_String_o **m_Items; // x29
  System_String_o *v13; // x24
  __int64 v14; // x23
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v28; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v30; // x8

  v6 = this;
  if ( (byte_4CC48EF & 1) == 0 )
  {
    sub_1C713B0(&FigureViewListViewItem_TypeInfo);
    this = (FigureViewListViewManager_o *)sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    byte_4CC48EF = 1;
  }
  if ( !list )
LABEL_18:
    sub_1C71608(this, list);
  max_length = list->max_length;
  ListViewManager__CreateList((ListViewManager_o *)v6, max_length, 0);
  if ( (int)max_length >= 1 )
  {
    v9 = 0;
    v10 = 0;
    v11 = (unsigned int)max_length;
    m_Items = list->m_Items;
    do
    {
      if ( !searchStr )
        goto LABEL_10;
      if ( v9 >= LODWORD(list->max_length) )
        goto LABEL_19;
      this = (FigureViewListViewManager_o *)m_Items[v9];
      if ( !this )
        goto LABEL_18;
      v8 = System_String__Contains((System_String_o *)this, searchStr, 0);
      if ( v8 )
      {
LABEL_10:
        if ( v9 >= LODWORD(list->max_length) )
LABEL_19:
          sub_1C71610(v8);
        v13 = m_Items[v9];
        v14 = sub_1C715FC(FigureViewListViewItem_TypeInfo);
        ListViewItem___ctor_44097096((ListViewItem_o *)v14, v10, 0);
        *(_QWORD *)(v14 + 120) = v13;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v14 + 120), (int32_t)v13, v15, v16, v17, v18, v19, v20);
        this = (FigureViewListViewManager_o *)v6->fields.itemList;
        if ( !this )
          goto LABEL_18;
        m_CachedPtr = this->fields.m_CachedPtr;
        v28 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          goto LABEL_18;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        ++v10;
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v14,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v30 + 32) = v14;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v30 + 32), v14, v21, v22, v23, v24, v25, v26);
        }
      }
      ++v9;
    }
    while ( v11 != v9 );
  }
  ListViewManager__SortItem((ListViewManager_o *)v6, -1, 0, -1, 0);
}


void FigureViewListViewManager__DestroyList(FigureViewListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


int32_t FigureViewListViewManager__GetClickResult(FigureViewListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.callbackIndex;
}


FigureViewListViewItem_o *FigureViewListViewManager__GetItem(
        FigureViewListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  FigureViewListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4CC48F0 & 1) == 0 )
  {
    sub_1C713B0(&FigureViewListViewItem_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4CC48F0 = 1;
  }
  result = (FigureViewListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (FigureViewListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)result,
                                           index,
                                           (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = FigureViewListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (FigureViewListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != FigureViewListViewItem_TypeInfo )
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


System_String_o *FigureViewListViewManager__GetNextName(
        FigureViewListViewManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  void *itemList; // x0
  int v6; // w21
  const MethodInfo_3810448 *v7; // x2
  __int64 naturalAligment; // x10
  int32_t v9; // w1
  __int64 v10; // x10

  if ( (byte_4CC48F5 & 1) == 0 )
  {
    sub_1C713B0(&FigureViewListViewItem_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4CC48F5 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_19;
  v6 = 1;
  while ( 1 )
  {
    v7 = (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__;
    if ( v6 - 1 >= *((_DWORD *)itemList + 6) - 1 )
      break;
    itemList = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)itemList,
                 v6 - 1,
                 (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_19;
    naturalAligment = FigureViewListViewItem_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
      || *(FigureViewListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != FigureViewListViewItem_TypeInfo )
    {
      goto LABEL_19;
    }
    if ( System_String__op_Equality(*((System_String_o **)itemList + 15), name, 0) )
    {
      itemList = this->fields.itemList;
      if ( itemList )
      {
        v7 = (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__;
        v9 = v6;
        goto LABEL_15;
      }
      goto LABEL_19;
    }
    itemList = this->fields.itemList;
    ++v6;
    if ( !itemList )
      goto LABEL_19;
  }
  v9 = 0;
LABEL_15:
  itemList = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)itemList,
               v9,
               v7);
  if ( !itemList
    || (v10 = FigureViewListViewItem_TypeInfo->_2.naturalAligment,
        *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)v10)
    || *(FigureViewListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * v10 - 8) != FigureViewListViewItem_TypeInfo )
  {
LABEL_19:
    sub_1C71608(itemList, name);
  }
  return (System_String_o *)*((_QWORD *)itemList + 15);
}


void FigureViewListViewManager__OnClickListView(
        FigureViewListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t Index; // w0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct System_Action_o *callbackFunc; // x20

  if ( !obj )
    sub_1C71608(this, 0);
  Index = ListViewObject__get_Index(obj, 0);
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackIndex = Index;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      callbackFunc->fields.method);
  }
}


void FigureViewListViewManager__OnMoveEnd(FigureViewListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct UIScrollView_o *v14; // x0
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_4CC48F4 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC48F4 = 1;
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
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_1C71608(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v14->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v14,
          1,
          v14->klass->vtable._8_UpdateScrollbars.method);
      }
      if ( !this->fields.isInput )
      {
        callbackFunc = this->fields.callbackFunc;
        if ( callbackFunc )
        {
          this->fields.callbackFunc = 0;
          sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v8, v9, v10, v11, v12, v13);
          ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
            callbackFunc->fields.method_code,
            callbackFunc->fields.method);
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void FigureViewListViewManager__RequestListObject(
        FigureViewListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CC48F2 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_FigureViewListViewObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_FigureViewListViewObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_FigureViewListViewObject__get_Current__);
    sub_1C713B0(&Method_FigureViewListViewManager_OnMoveEnd__);
    sub_1C713B0(&Method_System_Collections_Generic_List_FigureViewListViewObject__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_FigureViewListViewObject__get_Count__);
    sub_1C713B0(&StringLiteral_9943/*"OnMoveEnd"*/);
    byte_4CC48F2 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)FigureViewListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C71608(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9943/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_FigureViewListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_FigureViewListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_FigureViewListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C71608(v12, v13);
      FigureViewListViewObject__Init_37658348((FigureViewListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_FigureViewListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void FigureViewListViewManager__RequestListObject_37657320(
        FigureViewListViewManager_o *this,
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

  if ( (byte_4CC48F3 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_FigureViewListViewObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_FigureViewListViewObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_FigureViewListViewObject__get_Current__);
    sub_1C713B0(&Method_FigureViewListViewManager_OnMoveEnd__);
    sub_1C713B0(&Method_System_Collections_Generic_List_FigureViewListViewObject__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_FigureViewListViewObject__get_Count__);
    sub_1C713B0(&StringLiteral_9943/*"OnMoveEnd"*/);
    byte_4CC48F3 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)FigureViewListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C71608(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9943/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_FigureViewListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_FigureViewListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_FigureViewListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C71608(v10, v11);
      FigureViewListViewObject__Init_37658432((FigureViewListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_FigureViewListViewObject__Dispose__);
  }
}


void FigureViewListViewManager__SetMode(FigureViewListViewManager_o *this, int32_t mode, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FigureViewListViewManager__SetMode_37652976(this, mode, 0, v3);
}


void FigureViewListViewManager__SetMode_37652976(
        FigureViewListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.initMode = mode;
  this->fields.callbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0);
  if ( mode == 1 )
  {
    this->fields.callbackIndex = -1;
    FigureViewListViewManager__RequestListObject_37657320(this, 3, v10);
  }
}


void FigureViewListViewManager__SetObjectItem(
        FigureViewListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  FigureViewListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4CC48F1 & 1) == 0 )
  {
    this = (FigureViewListViewManager_o *)sub_1C713B0(&FigureViewListViewObject_TypeInfo);
    byte_4CC48F1 = 1;
  }
  if ( !obj
    || (naturalAligment = FigureViewListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (FigureViewListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != FigureViewListViewObject_TypeInfo )
  {
    sub_1C71608(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  FigureViewListViewObject__Init_37657240((FigureViewListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void FigureViewListViewManager__add_callbackFunc(
        FigureViewListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  FigureViewListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4CC48EC & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    byte_4CC48EC = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CCD184(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C719A4(v7);
  FigureViewListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_FigureViewListViewObject__o *FigureViewListViewManager__get_ObjectList(
        FigureViewListViewManager_o *this,
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

  if ( (byte_4CC48EE & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_FigureViewListViewObject___);
    sub_1C713B0(&Method_System_Collections_Generic_List_FigureViewListViewObject__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_FigureViewListViewObject___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_FigureViewListViewObject__TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC48EE = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_FigureViewListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_FigureViewListViewObject___ctor__);
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
                           (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_FigureViewListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C71608(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_FigureViewListViewObject__Add__;
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
  return (System_Collections_Generic_List_FigureViewListViewObject__o *)v3;
}


void FigureViewListViewManager__remove_callbackFunc(
        FigureViewListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  FigureViewListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4CC48ED & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    byte_4CC48ED = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CCD184(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C719A4(v7);
  FigureViewListViewManager__get_ObjectList(v10, v11);
}