void DebugListViewManager___ctor(DebugListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void DebugListViewManager__CreateList(DebugListViewManager_o *this, const MethodInfo *method)
{
  FsmEventDataList_o *debugDataList; // x0
  int Length; // w20
  const MethodInfo *v5; // x2
  int32_t v6; // w21
  FsmEventData_o *v7; // x23
  DebugListViewItem_o *v8; // x22
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v13; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v15; // x8

  if ( (byte_4C34E68 & 1) == 0 )
  {
    sub_1C32C20(&DebugListViewItem_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__Remove__);
    sub_1C32C20(&StringLiteral_4970/*"DEBUG_MENU_START_BATTLE_MOCK_SCENE"*/);
    byte_4C34E68 = 1;
  }
  debugDataList = this->fields.debugDataList;
  if ( !debugDataList )
    goto LABEL_15;
  Length = FsmEventDataList__get_Length(debugDataList, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, Length, 0);
  if ( Length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      debugDataList = this->fields.debugDataList;
      if ( !debugDataList )
        break;
      v7 = FsmEventDataList__Get(debugDataList, v6, 0);
      v8 = (DebugListViewItem_o *)sub_1C32E6C(DebugListViewItem_TypeInfo);
      DebugListViewItem___ctor(v8, v6, v7, v9);
      debugDataList = (FsmEventDataList_o *)this->fields.itemList;
      if ( !debugDataList )
        break;
      m_CachedPtr = debugDataList->fields.m_CachedPtr;
      v13 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(debugDataList->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        break;
      m_CancellationTokenSource_low = SLODWORD(debugDataList->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)debugDataList,
          (Il2CppObject *)v8,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
      }
      else
      {
        v15 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(debugDataList->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v15 + 32) = v8;
        sub_1C32BC4((CGThumbnailListItem_o *)(v15 + 32), (int32_t)v8, v10, v11);
      }
      if ( Length == ++v6 )
        goto LABEL_13;
    }
LABEL_15:
    sub_1C32E7C(debugDataList);
  }
LABEL_13:
  debugDataList = (FsmEventDataList_o *)DebugListViewManager__GetDebugListViewItem(
                                          this,
                                          (System_String_o *)StringLiteral_4970/*"DEBUG_MENU_START_BATTLE_MOCK_SCENE"*/,
                                          v5);
  if ( !this->fields.itemList )
    goto LABEL_15;
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)this->fields.itemList,
    (Il2CppObject *)debugDataList,
    (const MethodInfo_3799CE4 *)Method_System_Collections_Generic_List_ListViewItem__Remove__);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void DebugListViewManager__DestroyList(DebugListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


DebugListViewItem_o *DebugListViewManager__GetDebugListViewItem(
        DebugListViewManager_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v6; // x0
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x9
  System_String_o **monitor; // x8
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C34E69 & 1) == 0 )
  {
    sub_1C32C20(&DebugListViewItem_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_4C34E69 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v12 = v11;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    current = v12.fields._current;
    if ( !v12.fields._current )
      goto LABEL_15;
    naturalAligment = DebugListViewItem_TypeInfo->_2.naturalAligment;
    if ( v12.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (DebugListViewItem_c *)v12.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != DebugListViewItem_TypeInfo )
    {
      sub_1C3313C(v12.fields._current);
LABEL_15:
      sub_1C32E7C(v6);
    }
    monitor = (System_String_o **)v12.fields._current[7].monitor;
    if ( !monitor )
      sub_1C32E7C(v6);
    if ( System_String__op_Equality(monitor[2], eventName, 0) )
      goto LABEL_13;
  }
  current = 0;
LABEL_13:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return (DebugListViewItem_o *)current;
}


DebugListViewItem_o *DebugListViewManager__GetDebugListViewItem_37246136(
        DebugListViewManager_o *this,
        ListViewObject_o *listViewObject,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v6; // x0
  Il2CppObject *current; // x24
  UnityEngine_Object_o *v8; // x20
  __int64 naturalAligment; // x10
  DebugListViewItem_o *v10; // x19
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C34E6A & 1) == 0 )
  {
    sub_1C32C20(&DebugListViewItem_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C34E6A = 1;
  }
  memset(&v12, 0, sizeof(v12));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  do
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      goto LABEL_11;
    current = v12.fields._current;
    if ( !v12.fields._current )
      sub_1C32E7C(v6);
    v8 = *(UnityEngine_Object_o **)((char *)&v12.fields._current->klass + (unsigned __int64)&qword_70);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  while ( !UnityEngine_Object__op_Equality(v8, (UnityEngine_Object_o *)listViewObject, 0) );
  naturalAligment = DebugListViewItem_TypeInfo->_2.naturalAligment;
  if ( current->klass->_2.naturalAligment < (unsigned int)naturalAligment )
  {
LABEL_11:
    v10 = 0;
    goto LABEL_15;
  }
  if ( (DebugListViewItem_c *)current->klass->_2.typeHierarchy[naturalAligment - 1] == DebugListViewItem_TypeInfo )
    v10 = (DebugListViewItem_o *)current;
  else
    v10 = 0;
LABEL_15:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return v10;
}


void DebugListViewManager__OnClickListView(
        DebugListViewManager_o *this,
        ListViewObject_o *listViewObject,
        const MethodInfo *method)
{
  PlayMakerFSM_o *DebugListViewItem_37246136; // x0
  struct FsmEventDataList_o *debugDataList; // x8
  struct PlayMakerFSM_AddEventHandlerDelegate_o *addEventHandlers; // x9

  DebugListViewItem_37246136 = (PlayMakerFSM_o *)DebugListViewManager__GetDebugListViewItem_37246136(
                                                   this,
                                                   listViewObject,
                                                   method);
  if ( DebugListViewItem_37246136 )
  {
    debugDataList = this->fields.debugDataList;
    if ( !debugDataList
      || (addEventHandlers = DebugListViewItem_37246136[1].fields.addEventHandlers) == 0
      || (DebugListViewItem_37246136 = debugDataList->fields.targetFSM) == 0 )
    {
      sub_1C32E7C(DebugListViewItem_37246136);
    }
    PlayMakerFSM__SendEvent(DebugListViewItem_37246136, (System_String_o *)addEventHandlers->fields.method_ptr, 0);
  }
}


void DebugListViewManager__OnMoveEnd(DebugListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_4C34E6E & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C34E6E = 1;
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
        v9 = this->fields.scrollView;
        if ( !v9 )
          sub_1C32E7C(0);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v9->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v9,
          1,
          v9->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc = this->fields.callbackFunc;
      if ( callbackFunc )
      {
        this->fields.callbackFunc = 0;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v7, v8);
        ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
          callbackFunc->fields.method_code,
          callbackFunc->fields.method);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void DebugListViewManager__RequestListObject(
        DebugListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C34E6C & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_DebugListViewManager_OnMoveEnd__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_DebugListViewObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_DebugListViewObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_DebugListViewObject__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_DebugListViewObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_DebugListViewObject__get_Count__);
    sub_1C32C20(&StringLiteral_9941/*"OnMoveEnd"*/);
    byte_4C34E6C = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)DebugListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C32E7C(0);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_DebugListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_DebugListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v10 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_DebugListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C32E7C(v11);
      DebugListViewObject__Init_37247972((DebugListViewObject_o *)current, mode, v10, delay, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_DebugListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void DebugListViewManager__RequestListObject_37246944(
        DebugListViewManager_o *this,
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

  if ( (byte_4C34E6D & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_DebugListViewManager_OnMoveEnd__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_DebugListViewObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_DebugListViewObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_DebugListViewObject__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_DebugListViewObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_DebugListViewObject__get_Count__);
    sub_1C32C20(&StringLiteral_9941/*"OnMoveEnd"*/);
    byte_4C34E6D = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ObjectList = (System_Collections_Generic_List_object__o *)DebugListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C32E7C(0);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      ObjectList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_DebugListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_DebugListViewObject__MoveNext__) )
    {
      current = v11.fields._current;
      v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_DebugListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C32E7C(v9);
      DebugListViewObject__Init_37248056((DebugListViewObject_o *)current, mode, v8, v10);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_DebugListViewObject__Dispose__);
  }
}


void DebugListViewManager__SetMode(DebugListViewManager_o *this, int32_t mode, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  DebugListViewManager__SetMode_37246832(this, mode, 0, v3);
}


void DebugListViewManager__SetMode_37246832(
        DebugListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.initMode = mode;
  this->fields.callbackFunc = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0);
  if ( mode == 1 )
    DebugListViewManager__RequestListObject_37246944(this, 5, v6);
}


void DebugListViewManager__SetObjectItem(
        DebugListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  DebugListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4C34E6B & 1) == 0 )
  {
    this = (DebugListViewManager_o *)sub_1C32C20(&DebugListViewObject_TypeInfo);
    byte_4C34E6B = 1;
  }
  if ( !obj
    || (naturalAligment = DebugListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (DebugListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != DebugListViewObject_TypeInfo )
  {
    sub_1C32E7C(this);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 5;
  else
    v7 = 2;
  DebugListViewObject__Init_37246752((DebugListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void DebugListViewManager__add_callbackFunc(
        DebugListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  DebugListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C34E65 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    byte_4C34E65 = 1;
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
    v8 = sub_1C6CE78(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3313C(v7);
  DebugListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_DebugListViewObject__o *DebugListViewManager__get_ObjectList(
        DebugListViewManager_o *this,
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

  if ( (byte_4C34E67 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_DebugListViewObject___);
    sub_1C32C20(&Method_System_Collections_Generic_List_DebugListViewObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_DebugListViewObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_DebugListViewObject__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C34E67 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_DebugListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_DebugListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_1C32E7C(v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_DebugListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1C32E7C(Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_DebugListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C32E7C(Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v10, v8, v9);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_DebugListViewObject__o *)v3;
}


void DebugListViewManager__remove_callbackFunc(
        DebugListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  DebugListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C34E66 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    byte_4C34E66 = 1;
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
    v8 = sub_1C6CE78(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3313C(v7);
  DebugListViewManager__get_ObjectList(v10, v11);
}