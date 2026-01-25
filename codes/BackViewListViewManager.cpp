void BackViewListViewManager___ctor(BackViewListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void BackViewListViewManager__CreateList(
        BackViewListViewManager_o *this,
        System_String_array *list,
        const MethodInfo *method)
{
  BackViewListViewManager_o *v4; // x19
  il2cpp_array_size_t max_length; // x22
  unsigned __int64 v6; // x21
  __int64 v7; // x26
  System_String_o *v8; // x23
  __int64 v9; // x22
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v23; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v25; // x8
  struct ListViewSort_o *sort; // x8

  v4 = this;
  if ( (byte_4CEBA91 & 1) == 0 )
  {
    sub_1C7BAE8(&BackViewListViewItem_TypeInfo);
    this = (BackViewListViewManager_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    byte_4CEBA91 = 1;
  }
  if ( !list )
    goto LABEL_15;
  max_length = list->max_length;
  ListViewManager__CreateList((ListViewManager_o *)v4, max_length, 0);
  if ( (int)max_length >= 1 )
  {
    v6 = 0;
    v7 = (unsigned int)max_length;
    while ( 1 )
    {
      if ( v6 >= LODWORD(list->max_length) )
        sub_1C7BD48(this);
      v8 = list->m_Items[v6];
      v9 = sub_1C7BD34(BackViewListViewItem_TypeInfo);
      ListViewItem___ctor_44325320((ListViewItem_o *)v9, v6, 0);
      *(_QWORD *)(v9 + 120) = v8;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 120), (int32_t)v8, v10, v11, v12, v13, v14, v15);
      this = (BackViewListViewManager_o *)v4->fields.itemList;
      if ( !this )
        break;
      m_CachedPtr = this->fields.m_CachedPtr;
      v23 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        break;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v9,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v25 + 32) = v9;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v25 + 32), v9, v16, v17, v18, v19, v20, v21);
      }
      if ( v7 == ++v6 )
        goto LABEL_13;
    }
LABEL_15:
    sub_1C7BD40(this, list);
  }
LABEL_13:
  sort = v4->fields.sort;
  if ( !sort )
    goto LABEL_15;
  sort->fields.isAscendingOrder = 1;
  ListViewManager__SortItem((ListViewManager_o *)v4, -1, 0, -1, 0);
}


void BackViewListViewManager__DestroyList(BackViewListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


int32_t BackViewListViewManager__GetClickResult(BackViewListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.callbackIndex;
}


BackViewListViewItem_o *BackViewListViewManager__GetItem(
        BackViewListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BackViewListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4CEBA92 & 1) == 0 )
  {
    sub_1C7BAE8(&BackViewListViewItem_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4CEBA92 = 1;
  }
  result = (BackViewListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (BackViewListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)result,
                                         index,
                                         (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = BackViewListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (BackViewListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != BackViewListViewItem_TypeInfo )
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


System_String_o *BackViewListViewManager__GetNextName(
        BackViewListViewManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  void *itemList; // x0
  int v6; // w21
  const MethodInfo_383EB2C *v7; // x2
  __int64 naturalAligment; // x10
  int32_t v9; // w1
  __int64 v10; // x10

  if ( (byte_4CEBA97 & 1) == 0 )
  {
    sub_1C7BAE8(&BackViewListViewItem_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4CEBA97 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_19;
  v6 = 1;
  while ( 1 )
  {
    v7 = (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__;
    if ( v6 - 1 >= *((_DWORD *)itemList + 6) - 1 )
      break;
    itemList = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)itemList,
                 v6 - 1,
                 (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !itemList )
      goto LABEL_19;
    naturalAligment = BackViewListViewItem_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
      || *(BackViewListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != BackViewListViewItem_TypeInfo )
    {
      goto LABEL_19;
    }
    if ( System_String__op_Equality(*((System_String_o **)itemList + 15), name, 0) )
    {
      itemList = this->fields.itemList;
      if ( itemList )
      {
        v7 = (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__;
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
    || (v10 = BackViewListViewItem_TypeInfo->_2.naturalAligment,
        *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)v10)
    || *(BackViewListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * v10 - 8) != BackViewListViewItem_TypeInfo )
  {
LABEL_19:
    sub_1C7BD40(itemList, name);
  }
  return (System_String_o *)*((_QWORD *)itemList + 15);
}


void BackViewListViewManager__OnClickListView(
        BackViewListViewManager_o *this,
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
    sub_1C7BD40(this, 0);
  Index = ListViewObject__get_Index(obj, 0);
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackIndex = Index;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      callbackFunc->fields.method);
  }
}


void BackViewListViewManager__OnMoveEnd(BackViewListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_4CEBA96 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEBA96 = 1;
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
          sub_1C7BD40(0, v7);
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
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v8, v9, v10, v11, v12, v13);
          ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
            callbackFunc->fields.method_code,
            callbackFunc->fields.method);
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BackViewListViewManager__RequestListObject(
        BackViewListViewManager_o *this,
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

  if ( (byte_4CEBA94 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_BackViewListViewManager_OnMoveEnd__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BackViewListViewObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BackViewListViewObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BackViewListViewObject__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BackViewListViewObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BackViewListViewObject__get_Count__);
    sub_1C7BAE8(&StringLiteral_9968/*"OnMoveEnd"*/);
    byte_4CEBA94 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)BackViewListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C7BD40(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9968/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_BackViewListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_BackViewListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_BackViewListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C7BD40(v12, v13);
      BackViewListViewObject__Init_37803032((BackViewListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_BackViewListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void BackViewListViewManager__RequestListObject_37802004(
        BackViewListViewManager_o *this,
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

  if ( (byte_4CEBA95 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_BackViewListViewManager_OnMoveEnd__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BackViewListViewObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BackViewListViewObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BackViewListViewObject__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BackViewListViewObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BackViewListViewObject__get_Count__);
    sub_1C7BAE8(&StringLiteral_9968/*"OnMoveEnd"*/);
    byte_4CEBA95 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)BackViewListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C7BD40(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9968/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_BackViewListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_BackViewListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_BackViewListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C7BD40(v10, v11);
      BackViewListViewObject__Init_37803116((BackViewListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_BackViewListViewObject__Dispose__);
  }
}


void BackViewListViewManager__SetMode(BackViewListViewManager_o *this, int32_t mode, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BackViewListViewManager__SetMode_37801884(this, mode, 0, v3);
}


void BackViewListViewManager__SetMode_37801884(
        BackViewListViewManager_o *this,
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
  sub_1C7BA8C(
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
    BackViewListViewManager__RequestListObject_37802004(this, 3, v10);
  }
}


void BackViewListViewManager__SetObjectItem(
        BackViewListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  BackViewListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4CEBA93 & 1) == 0 )
  {
    this = (BackViewListViewManager_o *)sub_1C7BAE8(&BackViewListViewObject_TypeInfo);
    byte_4CEBA93 = 1;
  }
  if ( !obj
    || (naturalAligment = BackViewListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (BackViewListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != BackViewListViewObject_TypeInfo )
  {
    sub_1C7BD40(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  BackViewListViewObject__Init_37801804((BackViewListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void BackViewListViewManager__add_callbackFunc(
        BackViewListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  BackViewListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4CEBA8E & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    byte_4CEBA8E = 1;
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
    v8 = sub_1CD78BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C7C0DC(v7);
  BackViewListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_BackViewListViewObject__o *BackViewListViewManager__get_ObjectList(
        BackViewListViewManager_o *this,
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

  if ( (byte_4CEBA90 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_BackViewListViewObject___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BackViewListViewObject__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BackViewListViewObject___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_BackViewListViewObject__TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEBA90 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_BackViewListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_BackViewListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C7BD40(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C7BD40(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_BackViewListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C7BD40(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_BackViewListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C7BD40(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BackViewListViewObject__o *)v3;
}


void BackViewListViewManager__remove_callbackFunc(
        BackViewListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  BackViewListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4CEBA8F & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    byte_4CEBA8F = 1;
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
    v8 = sub_1CD78BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C7C0DC(v7);
  BackViewListViewManager__get_ObjectList(v10, v11);
}