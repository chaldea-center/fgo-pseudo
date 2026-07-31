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
  FigureViewListViewManager_o *v6; // x21
  il2cpp_array_size_t max_length; // x23
  _BOOL8 v8; // x0
  unsigned __int64 v9; // x25
  int32_t v10; // w22
  __int64 v11; // x28
  System_String_o **m_Items; // x29
  System_String_o *v13; // x24
  __int64 v14; // x23
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v28; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v30; // x8

  v6 = this;
  if ( (byte_5935B08 & 1) == 0 )
  {
    sub_21FFC50(&FigureViewListViewItem_TypeInfo);
    this = (FigureViewListViewManager_o *)sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    byte_5935B08 = 1;
  }
  if ( !list )
LABEL_18:
    sub_21FFECC(this, list);
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
          sub_21FFED4(v8);
        v13 = m_Items[v9];
        v14 = sub_21FFEBC(FigureViewListViewItem_TypeInfo);
        ListViewItem___ctor_50749276((ListViewItem_o *)v14, v10, 0);
        *(_QWORD *)(v14 + 120) = v13;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v14 + 120), (int32_t)v13, v15, v16, v17, v18, v19, v20);
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
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v30 + 32) = v14;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v30 + 32), v14, v21, v22, v23, v24, v25, v26);
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

  if ( (byte_5935B09 & 1) == 0 )
  {
    sub_21FFC50(&FigureViewListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_5935B09 = 1;
  }
  result = (FigureViewListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (FigureViewListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)result,
                                           index,
                                           (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  const MethodInfo_444F85C *v7; // x2
  __int64 naturalAligment; // x10
  int32_t v9; // w1
  __int64 v10; // x10

  if ( (byte_5935B0E & 1) == 0 )
  {
    sub_21FFC50(&FigureViewListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_5935B0E = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_11;
  v6 = 1;
  while ( 1 )
  {
    v7 = (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__;
    if ( v6 - 1 >= *((_DWORD *)itemList + 6) - 1 )
      break;
    itemList = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)itemList,
                 v6 - 1,
                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_11;
    naturalAligment = FigureViewListViewItem_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
      || *(FigureViewListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != FigureViewListViewItem_TypeInfo )
    {
      goto LABEL_11;
    }
    if ( System_String__op_Equality(*((System_String_o **)itemList + 15), name, 0) )
    {
      itemList = this->fields.itemList;
      if ( itemList )
      {
        v7 = (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__;
        v9 = v6;
        goto LABEL_15;
      }
      goto LABEL_11;
    }
    itemList = this->fields.itemList;
    ++v6;
    if ( !itemList )
      goto LABEL_11;
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
LABEL_11:
    sub_21FFECC(itemList, name);
  }
  return (System_String_o *)*((_QWORD *)itemList + 15);
}


void FigureViewListViewManager__OnClickListView(
        FigureViewListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t Index; // w0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct System_Action_o *callbackFunc; // x20

  if ( !obj )
    sub_21FFECC(this, 0);
  Index = ListViewObject__get_Index(obj, 0);
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackIndex = Index;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      callbackFunc->fields.method);
  }
}


void FigureViewListViewManager__OnMoveEnd(FigureViewListViewManager_o *this, const MethodInfo *method)
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
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_5935B0D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935B0D = 1;
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
          sub_21FFECC(0, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v15->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v15,
          1,
          v15->klass->vtable._8_UpdateScrollbars.method);
      }
      if ( !this->fields.isInput )
      {
        callbackFunc = this->fields.callbackFunc;
        if ( callbackFunc )
        {
          this->fields.callbackFunc = 0;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v9, v10, v11, v12, v13, v14);
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
  const MethodInfo_4450604 *v10; // x1
  Il2CppObject *current; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_5935B0B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_FigureViewListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_FigureViewListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_FigureViewListViewObject__get_Current__);
    sub_21FFC50(&Method_FigureViewListViewManager_OnMoveEnd__);
    sub_21FFC50(&Method_System_Collections_Generic_List_FigureViewListViewObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_FigureViewListViewObject__get_Count__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_5935B0B = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)FigureViewListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_21FFECC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10331/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    v10 = (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_FigureViewListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_FigureViewListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v12 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_FigureViewListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_21FFECC(v13, v14);
      FigureViewListViewObject__Init_44269492((FigureViewListViewObject_o *)current, mode, v12, delay, v15);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_FigureViewListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void FigureViewListViewManager__RequestListObject_44268488(
        FigureViewListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  const MethodInfo_4450604 *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  __int64 v14; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v15; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_5935B0C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_FigureViewListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_FigureViewListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_FigureViewListViewObject__get_Current__);
    sub_21FFC50(&Method_FigureViewListViewManager_OnMoveEnd__);
    sub_21FFC50(&Method_System_Collections_Generic_List_FigureViewListViewObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_FigureViewListViewObject__get_Count__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_5935B0C = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)FigureViewListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_21FFECC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10331/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v8 = (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_FigureViewListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v8);
    v14 = 0;
    v15 = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_FigureViewListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_FigureViewListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_21FFECC(v11, v12);
      FigureViewListViewObject__Init_44269576((FigureViewListViewObject_o *)current, mode, v10, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_FigureViewListViewObject__Dispose__);
  }
}


void FigureViewListViewManager__SetMode(FigureViewListViewManager_o *this, int32_t mode, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FigureViewListViewManager__SetMode_44264244(this, mode, 0, v3);
}


void FigureViewListViewManager__SetMode_44264244(
        FigureViewListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.initMode = mode;
  this->fields.callbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0);
  if ( mode == 1 )
  {
    this->fields.callbackIndex = -1;
    FigureViewListViewManager__RequestListObject_44268488(this, 3, v10);
  }
}


void FigureViewListViewManager__SetObjectItem(
        FigureViewListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_5935B0A & 1) == 0 )
  {
    sub_21FFC50(&FigureViewListViewObject_TypeInfo);
    byte_5935B0A = 1;
  }
  if ( obj
    && (naturalAligment = FigureViewListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (FigureViewListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == FigureViewListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 1 )
  {
    if ( v7 )
    {
      v8 = 2;
      goto LABEL_14;
    }
LABEL_15:
    sub_21FFECC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 3;
LABEL_14:
  FigureViewListViewObject__Init_44268408((FigureViewListViewObject_o *)v7, v8, (const MethodInfo *)item);
}


void FigureViewListViewManager__add_callbackFunc(
        FigureViewListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  FigureViewListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_5935B05 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5935B05 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_220024C(v6, System_Action_TypeInfo, v7, v8);
  FigureViewListViewManager__remove_callbackFunc(v11, v12, v13);
}


System_Collections_Generic_List_FigureViewListViewObject__o *FigureViewListViewManager__get_ObjectList(
        FigureViewListViewManager_o *this,
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

  if ( (byte_5935B07 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_FigureViewListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_FigureViewListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_FigureViewListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_FigureViewListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935B07 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_FigureViewListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_FigureViewListViewObject___ctor__);
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
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_FigureViewListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_FigureViewListViewObject__Add__,
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
  return (System_Collections_Generic_List_FigureViewListViewObject__o *)v3;
}


void FigureViewListViewManager__remove_callbackFunc(
        FigureViewListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  FigureViewListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_5935B06 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5935B06 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_220024C(v6, System_Action_TypeInfo, v7, v8);
  FigureViewListViewManager__get_ObjectList(v11, v12);
}