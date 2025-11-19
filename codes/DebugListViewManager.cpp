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
  Il2CppObject *DebugListViewItem; // x20
  const MethodInfo *v17; // x2

  if ( (byte_4CB3741 & 1) == 0 )
  {
    sub_1C6BA08(&DebugListViewItem_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__Remove__);
    sub_1C6BA08(&StringLiteral_4958/*"DEBUG_MENU_START_BATTLE_MOCK_SCENE"*/);
    sub_1C6BA08(&StringLiteral_4956/*"DEBUG_MENU_EDIT_BATTLE_MOCK"*/);
    byte_4CB3741 = 1;
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
      v8 = (DebugListViewItem_o *)sub_1C6BC54(DebugListViewItem_TypeInfo);
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
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
      }
      else
      {
        v15 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(debugDataList->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v15 + 32) = v8;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v15 + 32), (int32_t)v8, v10, v11);
      }
      if ( Length == ++v6 )
        goto LABEL_13;
    }
LABEL_15:
    sub_1C6BC60(debugDataList, method);
  }
LABEL_13:
  DebugListViewItem = (Il2CppObject *)DebugListViewManager__GetDebugListViewItem(
                                        this,
                                        (System_String_o *)StringLiteral_4958/*"DEBUG_MENU_START_BATTLE_MOCK_SCENE"*/,
                                        v5);
  DebugListViewManager__GetDebugListViewItem(this, (System_String_o *)StringLiteral_4956/*"DEBUG_MENU_EDIT_BATTLE_MOCK"*/, v17);
  debugDataList = (FsmEventDataList_o *)this->fields.itemList;
  if ( !debugDataList )
    goto LABEL_15;
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)debugDataList,
    DebugListViewItem,
    (const MethodInfo_3801E9C *)Method_System_Collections_Generic_List_ListViewItem__Remove__);
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
  __int64 v7; // x1
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x9
  System_String_o **monitor; // x8
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4CB3742 & 1) == 0 )
  {
    sub_1C6BA08(&DebugListViewItem_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_4CB3742 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C6BC60(0, eventName);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v13 = v12;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    current = v13.fields._current;
    if ( !v13.fields._current )
      goto LABEL_15;
    naturalAligment = DebugListViewItem_TypeInfo->_2.naturalAligment;
    if ( v13.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (DebugListViewItem_c *)v13.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != DebugListViewItem_TypeInfo )
    {
      sub_1C6BFFC(v13.fields._current);
LABEL_15:
      sub_1C6BC60(v6, v7);
    }
    monitor = (System_String_o **)v13.fields._current[7].monitor;
    if ( !monitor )
      sub_1C6BC60(v6, DebugListViewItem_TypeInfo);
    if ( System_String__op_Equality(monitor[2], eventName, 0) )
      goto LABEL_13;
  }
  current = 0;
LABEL_13:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return (DebugListViewItem_o *)current;
}


DebugListViewItem_o *DebugListViewManager__GetDebugListViewItem_37566568(
        DebugListViewManager_o *this,
        ListViewObject_o *listViewObject,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x24
  UnityEngine_Object_o *v9; // x20
  __int64 naturalAligment; // x10
  DebugListViewItem_o *v11; // x19
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CB3743 & 1) == 0 )
  {
    sub_1C6BA08(&DebugListViewItem_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB3743 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C6BC60(0, listViewObject);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  do
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      goto LABEL_11;
    current = v13.fields._current;
    if ( !v13.fields._current )
      sub_1C6BC60(v6, v7);
    v9 = *(UnityEngine_Object_o **)((char *)&v13.fields._current->klass + (unsigned __int64)&qword_70);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  while ( !UnityEngine_Object__op_Equality(v9, (UnityEngine_Object_o *)listViewObject, 0) );
  naturalAligment = DebugListViewItem_TypeInfo->_2.naturalAligment;
  if ( current->klass->_2.naturalAligment < (unsigned int)naturalAligment )
  {
LABEL_11:
    v11 = 0;
    goto LABEL_15;
  }
  if ( (DebugListViewItem_c *)current->klass->_2.typeHierarchy[naturalAligment - 1] == DebugListViewItem_TypeInfo )
    v11 = (DebugListViewItem_o *)current;
  else
    v11 = 0;
LABEL_15:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return v11;
}


void DebugListViewManager__OnClickListView(
        DebugListViewManager_o *this,
        ListViewObject_o *listViewObject,
        const MethodInfo *method)
{
  PlayMakerFSM_o *DebugListViewItem_37566568; // x0
  __int64 v5; // x1
  struct FsmEventDataList_o *debugDataList; // x8
  struct PlayMakerFSM_AddEventHandlerDelegate_o *addEventHandlers; // x9

  DebugListViewItem_37566568 = (PlayMakerFSM_o *)DebugListViewManager__GetDebugListViewItem_37566568(
                                                   this,
                                                   listViewObject,
                                                   method);
  if ( DebugListViewItem_37566568 )
  {
    debugDataList = this->fields.debugDataList;
    if ( !debugDataList
      || (addEventHandlers = DebugListViewItem_37566568[1].fields.addEventHandlers) == 0
      || (DebugListViewItem_37566568 = debugDataList->fields.targetFSM) == 0 )
    {
      sub_1C6BC60(DebugListViewItem_37566568, v5);
    }
    PlayMakerFSM__SendEvent(DebugListViewItem_37566568, (System_String_o *)addEventHandlers->fields.method_ptr, 0);
  }
}


void DebugListViewManager__OnMoveEnd(DebugListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_4CB3747 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB3747 = 1;
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


// local variable allocation has failed, the output may be wrong!
void DebugListViewManager__RequestListObject(
        DebugListViewManager_o *this,
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

  if ( (byte_4CB3745 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_DebugListViewManager_OnMoveEnd__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_DebugListViewObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_DebugListViewObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_DebugListViewObject__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_DebugListViewObject__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_DebugListViewObject__get_Count__);
    sub_1C6BA08(&StringLiteral_9938/*"OnMoveEnd"*/);
    byte_4CB3745 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)DebugListViewManager__get_ObjectList(
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
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_DebugListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_DebugListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_DebugListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C6BC60(v12, v13);
      DebugListViewObject__Init_37568404((DebugListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_DebugListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void DebugListViewManager__RequestListObject_37567376(
        DebugListViewManager_o *this,
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

  if ( (byte_4CB3746 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_DebugListViewManager_OnMoveEnd__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_DebugListViewObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_DebugListViewObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_DebugListViewObject__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_DebugListViewObject__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_DebugListViewObject__get_Count__);
    sub_1C6BA08(&StringLiteral_9938/*"OnMoveEnd"*/);
    byte_4CB3746 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)DebugListViewManager__get_ObjectList(
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
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_DebugListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_DebugListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_DebugListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C6BC60(v10, v11);
      DebugListViewObject__Init_37568488((DebugListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_DebugListViewObject__Dispose__);
  }
}


void DebugListViewManager__SetMode(DebugListViewManager_o *this, int32_t mode, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  DebugListViewManager__SetMode_37567264(this, mode, 0, v3);
}


void DebugListViewManager__SetMode_37567264(
        DebugListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.initMode = mode;
  this->fields.callbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0);
  if ( mode == 1 )
    DebugListViewManager__RequestListObject_37567376(this, 5, v6);
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
  if ( (byte_4CB3744 & 1) == 0 )
  {
    this = (DebugListViewManager_o *)sub_1C6BA08(&DebugListViewObject_TypeInfo);
    byte_4CB3744 = 1;
  }
  if ( !obj
    || (naturalAligment = DebugListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (DebugListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != DebugListViewObject_TypeInfo )
  {
    sub_1C6BC60(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 5;
  else
    v7 = 2;
  DebugListViewObject__Init_37567184((DebugListViewObject_o *)obj, v7, (const MethodInfo *)item);
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

  if ( (byte_4CB373E & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    byte_4CB373E = 1;
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
  DebugListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_DebugListViewObject__o *DebugListViewManager__get_ObjectList(
        DebugListViewManager_o *this,
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

  if ( (byte_4CB3740 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_DebugListViewObject___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_DebugListViewObject__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_DebugListViewObject___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_DebugListViewObject__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB3740 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_DebugListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_DebugListViewObject___ctor__);
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
                           (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_DebugListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1C6BC60(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_DebugListViewObject__Add__;
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

  if ( (byte_4CB373F & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    byte_4CB373F = 1;
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
  DebugListViewManager__get_ObjectList(v10, v11);
}