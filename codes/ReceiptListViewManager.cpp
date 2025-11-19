void ReceiptListViewManager___ctor(ReceiptListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void ReceiptListViewManager__CreateList(ReceiptListViewManager_o *this, const MethodInfo *method)
{
  AccountingManager_o *Instance; // x0
  __int64 v4; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x22
  AccountingManager_o *v6; // x20
  __int64 v7; // x0
  unsigned __int64 v8; // x21
  __int64 v9; // x26
  __int64 v10; // x23
  __int64 v11; // x22
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v17; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v19; // x8

  if ( (byte_4CB37F6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C6BA08(&ReceiptListViewItem_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AccountingManager__get_Instance__);
    byte_4CB37F6 = 1;
  }
  Instance = (AccountingManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AccountingManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (AccountingManager_o *)AccountingManager__GetPaymentHistoryList(Instance, 0);
  if ( !Instance )
    goto LABEL_15;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v6 = Instance;
  ListViewManager__CreateList((ListViewManager_o *)this, (int32_t)m_CancellationTokenSource, 0);
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v8 = 0;
    v9 = (unsigned int)m_CancellationTokenSource;
    while ( 1 )
    {
      if ( v8 >= LODWORD(v6->fields.m_CancellationTokenSource) )
        sub_1C6BC68(v7);
      v10 = *((_QWORD *)&v6->fields.callbackFunc + v8);
      v11 = sub_1C6BC54(ReceiptListViewItem_TypeInfo);
      ListViewItem___ctor_44050768((ListViewItem_o *)v11, v8, 0);
      *(_QWORD *)(v11 + 120) = v10;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v11 + 120), v10, v12, v13);
      Instance = (AccountingManager_o *)this->fields.itemList;
      if ( !Instance )
        break;
      m_CachedPtr = Instance->fields.m_CachedPtr;
      v17 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        break;
      m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v11,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v19 + 32) = v11;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 32), v11, v14, v15);
      }
      if ( v9 == ++v8 )
        goto LABEL_14;
    }
LABEL_15:
    sub_1C6BC60(Instance, v4);
  }
LABEL_14:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void ReceiptListViewManager__DestroyList(ReceiptListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


int32_t ReceiptListViewManager__GetClickResult(ReceiptListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.callbackIndex;
}


ReceiptListViewItem_o *ReceiptListViewManager__GetItem(
        ReceiptListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ReceiptListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4CB37F7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C6BA08(&ReceiptListViewItem_TypeInfo);
    byte_4CB37F7 = 1;
  }
  result = (ReceiptListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ReceiptListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)result,
                                        index,
                                        (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = ReceiptListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (ReceiptListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != ReceiptListViewItem_TypeInfo )
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


System_String_o *ReceiptListViewManager__GetNextName(
        ReceiptListViewManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  void *itemList; // x0
  int v6; // w21
  const MethodInfo_38006A4 *v7; // x2
  __int64 naturalAligment; // x10
  int32_t v9; // w1
  __int64 v10; // x10

  if ( (byte_4CB37FD & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C6BA08(&ReceiptListViewItem_TypeInfo);
    byte_4CB37FD = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_19;
  v6 = 1;
  while ( 1 )
  {
    v7 = (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__;
    if ( v6 - 1 >= *((_DWORD *)itemList + 6) - 1 )
      break;
    itemList = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)itemList,
                 v6 - 1,
                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_19;
    naturalAligment = ReceiptListViewItem_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
      || *(ReceiptListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != ReceiptListViewItem_TypeInfo )
    {
      goto LABEL_19;
    }
    if ( System_String__op_Equality(*((System_String_o **)itemList + 15), name, 0) )
    {
      itemList = this->fields.itemList;
      if ( itemList )
      {
        v7 = (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__;
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
    || (v10 = ReceiptListViewItem_TypeInfo->_2.naturalAligment,
        *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)v10)
    || *(ReceiptListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * v10 - 8) != ReceiptListViewItem_TypeInfo )
  {
LABEL_19:
    sub_1C6BC60(itemList, name);
  }
  return (System_String_o *)*((_QWORD *)itemList + 15);
}


void ReceiptListViewManager__OnClickListView(
        ReceiptListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t Index; // w0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct System_Action_o *callbackFunc; // x20

  if ( !obj )
    sub_1C6BC60(this, 0);
  Index = ListViewObject__get_Index(obj, 0);
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackIndex = Index;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v5, v6);
    ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      callbackFunc->fields.method);
  }
}


void ReceiptListViewManager__OnMoveEnd(ReceiptListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_4CB37FC & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB37FC = 1;
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
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1C6BC60(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v10->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v10,
          1,
          v10->klass->vtable._8_UpdateScrollbars.method);
      }
      if ( !this->fields.isInput )
      {
        callbackFunc = this->fields.callbackFunc;
        if ( callbackFunc )
        {
          this->fields.callbackFunc = 0;
          sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v8, v9);
          ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
            callbackFunc->fields.method_code,
            callbackFunc->fields.method);
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ReceiptListViewManager__RequestListObject(
        ReceiptListViewManager_o *this,
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

  if ( (byte_4CB37FA & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ReceiptListViewObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ReceiptListViewObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ReceiptListViewObject__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ReceiptListViewObject__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ReceiptListViewObject__get_Count__);
    sub_1C6BA08(&Method_ReceiptListViewManager_OnMoveEnd__);
    sub_1C6BA08(&StringLiteral_9938/*"OnMoveEnd"*/);
    byte_4CB37FA = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)ReceiptListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C6BC60(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9938/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ReceiptListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ReceiptListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_ReceiptListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C6BC60(v12, v13);
      ReceiptListViewObject__Init_37626472((ReceiptListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ReceiptListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void ReceiptListViewManager__RequestListObject_37626556(
        ReceiptListViewManager_o *this,
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

  if ( (byte_4CB37FB & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ReceiptListViewObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ReceiptListViewObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ReceiptListViewObject__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ReceiptListViewObject__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ReceiptListViewObject__get_Count__);
    sub_1C6BA08(&Method_ReceiptListViewManager_OnMoveEnd__);
    sub_1C6BA08(&StringLiteral_9938/*"OnMoveEnd"*/);
    byte_4CB37FB = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)ReceiptListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C6BC60(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9938/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ReceiptListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ReceiptListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ReceiptListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C6BC60(v10, v11);
      ReceiptListViewObject__Init_37627584((ReceiptListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ReceiptListViewObject__Dispose__);
  }
}


void ReceiptListViewManager__SetMode(ReceiptListViewManager_o *this, int32_t mode, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ReceiptListViewManager__SetMode_37625960(this, mode, 0, v3);
}


void ReceiptListViewManager__SetMode_37625960(
        ReceiptListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_ReceiptListViewObject__o *ObjectList; // x0
  const MethodInfo *v9; // x2
  System_Collections_Generic_List_object__o *v10; // x20
  __int64 ObjectSum; // x0
  __int64 v12; // x1
  int32_t v13; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v15; // x23
  const MethodInfo *v16; // x3

  if ( (byte_4CB37F9 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ReceiptListViewObject__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ReceiptListViewObject__get_Item__);
    sub_1C6BA08(&Method_ReceiptListViewManager_OnMoveEnd__);
    sub_1C6BA08(&StringLiteral_9938/*"OnMoveEnd"*/);
    byte_4CB37F9 = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  ObjectList = ReceiptListViewManager__get_ObjectList(this, v7);
  if ( mode == 1 )
  {
    v10 = (System_Collections_Generic_List_object__o *)ObjectList;
    ObjectSum = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
    this->fields.callbackCount = ObjectSum;
    if ( (int)ObjectSum < 1 )
    {
      this->fields.callbackCount = 1;
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_9938/*"OnMoveEnd"*/,
        0.0,
        0);
    }
    else
    {
      if ( !v10 )
        goto LABEL_15;
      if ( v10->fields._size >= 1 )
      {
        v13 = 0;
        while ( 1 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v10,
                   v13,
                   (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ReceiptListViewObject__get_Item__);
          v15 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
          System_Action___ctor(v15, (Il2CppObject *)this, Method_ReceiptListViewManager_OnMoveEnd__, 0);
          if ( !Item )
            break;
          ReceiptListViewObject__Init_37626472((ReceiptListViewObject_o *)Item, 4, v15, (float)++v13 * 0.1, v16);
          if ( v13 >= v10->fields._size )
            return;
        }
LABEL_15:
        sub_1C6BC60(ObjectSum, v12);
      }
    }
  }
  else if ( mode == 2 )
  {
    this->fields.callbackIndex = -1;
    ReceiptListViewManager__RequestListObject_37626556(this, 5, v9);
  }
}


void ReceiptListViewManager__SetObjectItem(
        ReceiptListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ReceiptListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4CB37F8 & 1) == 0 )
  {
    this = (ReceiptListViewManager_o *)sub_1C6BA08(&ReceiptListViewObject_TypeInfo);
    byte_4CB37F8 = 1;
  }
  if ( !obj
    || (naturalAligment = ReceiptListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ReceiptListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ReceiptListViewObject_TypeInfo )
  {
    sub_1C6BC60(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 5;
  else
    v7 = 2;
  ReceiptListViewObject__Init_37625880((ReceiptListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void ReceiptListViewManager__add_callbackFunc(
        ReceiptListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ReceiptListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4CB37F3 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    byte_4CB37F3 = 1;
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
    v8 = sub_1CC77DC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C6BFFC(v7);
  ReceiptListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_ReceiptListViewObject__o *ReceiptListViewManager__get_ObjectList(
        ReceiptListViewManager_o *this,
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

  if ( (byte_4CB37F5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_ReceiptListViewObject___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ReceiptListViewObject__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ReceiptListViewObject___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ReceiptListViewObject__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB37F5 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ReceiptListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ReceiptListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C6BC60(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C6BC60(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ReceiptListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1C6BC60(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_ReceiptListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C6BC60(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ReceiptListViewObject__o *)v3;
}


void ReceiptListViewManager__remove_callbackFunc(
        ReceiptListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ReceiptListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4CB37F4 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    byte_4CB37F4 = 1;
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
    v8 = sub_1CC77DC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C6BFFC(v7);
  ReceiptListViewManager__get_ObjectList(v10, v11);
}