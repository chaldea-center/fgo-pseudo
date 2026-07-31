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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v17; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v19; // x8
  Il2CppObject *DebugListViewItem; // x20
  const MethodInfo *v21; // x2

  if ( (byte_5935A73 & 1) == 0 )
  {
    sub_21FFC50(&DebugListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Remove__);
    sub_21FFC50(&StringLiteral_5145/*"DEBUG_MENU_START_BATTLE_MOCK_SCENE"*/);
    sub_21FFC50(&StringLiteral_5143/*"DEBUG_MENU_EDIT_BATTLE_MOCK"*/);
    byte_5935A73 = 1;
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
      v8 = (DebugListViewItem_o *)sub_21FFEBC(DebugListViewItem_TypeInfo);
      DebugListViewItem___ctor(v8, v6, v7, v9);
      debugDataList = (FsmEventDataList_o *)this->fields.itemList;
      if ( !debugDataList )
        break;
      m_CachedPtr = debugDataList->fields.m_CachedPtr;
      v17 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(debugDataList->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        break;
      m_CancellationTokenSource_low = SLODWORD(debugDataList->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)debugDataList,
          (Il2CppObject *)v8,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(debugDataList->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v19 + 32) = v8;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v19 + 32), (int32_t)v8, v10, v11, v12, v13, v14, v15);
      }
      if ( Length == ++v6 )
        goto LABEL_13;
    }
LABEL_15:
    sub_21FFECC(debugDataList, method);
  }
LABEL_13:
  DebugListViewItem = (Il2CppObject *)DebugListViewManager__GetDebugListViewItem(
                                        this,
                                        (System_String_o *)StringLiteral_5145/*"DEBUG_MENU_START_BATTLE_MOCK_SCENE"*/,
                                        v5);
  DebugListViewManager__GetDebugListViewItem(this, (System_String_o *)StringLiteral_5143/*"DEBUG_MENU_EDIT_BATTLE_MOCK"*/, v21);
  debugDataList = (FsmEventDataList_o *)this->fields.itemList;
  if ( !debugDataList )
    goto LABEL_15;
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)debugDataList,
    DebugListViewItem,
    (const MethodInfo_445101C *)Method_System_Collections_Generic_List_ListViewItem__Remove__);
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
  __int64 v8; // x2
  __int64 v9; // x3
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x9
  __int64 v12; // x8
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5935A74 & 1) == 0 )
  {
    sub_21FFC50(&DebugListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_5935A74 = 1;
  }
  itemList = this->fields.itemList;
  memset(&v14, 0, sizeof(v14));
  if ( !itemList )
    sub_21FFECC(0, eventName);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    current = v14.fields._current;
    if ( !v14.fields._current )
      goto LABEL_15;
    naturalAligment = DebugListViewItem_TypeInfo->_2.naturalAligment;
    if ( v14.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (DebugListViewItem_c *)v14.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != DebugListViewItem_TypeInfo )
    {
      sub_220024C(v14.fields._current, DebugListViewItem_TypeInfo, v8, v9);
LABEL_15:
      sub_21FFECC(v6, v7);
    }
    v12 = *(__int64 *)((char *)&v14.fields._current->klass + (unsigned __int64)&dword_78);
    if ( !v12 )
      sub_21FFECC(v6, DebugListViewItem_TypeInfo);
    if ( System_String__op_Equality(*(System_String_o **)(v12 + 16), eventName, 0) )
      goto LABEL_13;
  }
  current = 0;
LABEL_13:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return (DebugListViewItem_o *)current;
}


DebugListViewItem_o *DebugListViewManager__GetDebugListViewItem_44216036(
        DebugListViewManager_o *this,
        ListViewObject_o *listViewObject,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *current; // x24
  UnityEngine_Object_o *v10; // x20
  __int64 naturalAligment; // x10
  DebugListViewItem_o *v12; // x19
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_5935A75 & 1) == 0 )
  {
    sub_21FFC50(&DebugListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935A75 = 1;
  }
  itemList = this->fields.itemList;
  memset(&v14, 0, sizeof(v14));
  if ( !itemList )
    sub_21FFECC(0, listViewObject);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  do
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      goto LABEL_11;
    current = v14.fields._current;
    if ( !v14.fields._current )
      sub_21FFECC(v6, v7);
    v10 = *(UnityEngine_Object_o **)((char *)&v14.fields._current->klass + (unsigned __int64)&qword_70);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  }
  while ( !UnityEngine_Object__op_Equality(v10, (UnityEngine_Object_o *)listViewObject, 0) );
  naturalAligment = DebugListViewItem_TypeInfo->_2.naturalAligment;
  if ( current->klass->_2.naturalAligment < (unsigned int)naturalAligment )
  {
LABEL_11:
    v12 = 0;
    goto LABEL_15;
  }
  if ( (DebugListViewItem_c *)current->klass->_2.typeHierarchy[naturalAligment - 1] == DebugListViewItem_TypeInfo )
    v12 = (DebugListViewItem_o *)current;
  else
    v12 = 0;
LABEL_15:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return v12;
}


void DebugListViewManager__OnClickListView(
        DebugListViewManager_o *this,
        ListViewObject_o *listViewObject,
        const MethodInfo *method)
{
  PlayMakerFSM_o *DebugListViewItem_44216036; // x0
  __int64 v5; // x1
  struct FsmEventDataList_o *debugDataList; // x8
  struct PlayMakerFSM_AddEventHandlerDelegate_o *addEventHandlers; // x9

  DebugListViewItem_44216036 = (PlayMakerFSM_o *)DebugListViewManager__GetDebugListViewItem_44216036(
                                                   this,
                                                   listViewObject,
                                                   method);
  if ( DebugListViewItem_44216036 )
  {
    debugDataList = this->fields.debugDataList;
    if ( !debugDataList
      || (addEventHandlers = DebugListViewItem_44216036[1].fields.addEventHandlers) == 0
      || (DebugListViewItem_44216036 = debugDataList->fields.targetFSM) == 0 )
    {
      sub_21FFECC(DebugListViewItem_44216036, v5);
    }
    PlayMakerFSM__SendEvent(DebugListViewItem_44216036, (System_String_o *)addEventHandlers->fields.method_ptr, 0);
  }
}


void DebugListViewManager__OnMoveEnd(DebugListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_5935A79 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935A79 = 1;
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
  const MethodInfo_4450604 *v10; // x1
  Il2CppObject *current; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_5935A77 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DebugListViewManager_OnMoveEnd__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_DebugListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_DebugListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_DebugListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_DebugListViewObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_DebugListViewObject__get_Count__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_5935A77 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)DebugListViewManager__get_ObjectList(
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
    v10 = (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_DebugListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_DebugListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v12 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_DebugListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_21FFECC(v13, v14);
      DebugListViewObject__Init_44217844((DebugListViewObject_o *)current, mode, v12, delay, v15);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_DebugListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void DebugListViewManager__RequestListObject_44216840(
        DebugListViewManager_o *this,
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

  if ( (byte_5935A78 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DebugListViewManager_OnMoveEnd__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_DebugListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_DebugListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_DebugListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_DebugListViewObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_DebugListViewObject__get_Count__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_5935A78 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)DebugListViewManager__get_ObjectList(
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
    v8 = (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_DebugListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v8);
    v14 = 0;
    v15 = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_DebugListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_DebugListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_21FFECC(v11, v12);
      DebugListViewObject__Init_44217928((DebugListViewObject_o *)current, mode, v10, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_DebugListViewObject__Dispose__);
  }
}


void DebugListViewManager__SetMode(DebugListViewManager_o *this, int32_t mode, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  DebugListViewManager__SetMode_44216728(this, mode, 0, v3);
}


void DebugListViewManager__SetMode_44216728(
        DebugListViewManager_o *this,
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
    DebugListViewManager__RequestListObject_44216840(this, 5, v10);
}


void DebugListViewManager__SetObjectItem(
        DebugListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_5935A76 & 1) == 0 )
  {
    sub_21FFC50(&DebugListViewObject_TypeInfo);
    byte_5935A76 = 1;
  }
  if ( obj
    && (naturalAligment = DebugListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (DebugListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == DebugListViewObject_TypeInfo )
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
  v8 = 5;
LABEL_14:
  DebugListViewObject__Init_44216648((DebugListViewObject_o *)v7, v8, (const MethodInfo *)item);
}


void DebugListViewManager__add_callbackFunc(
        DebugListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  DebugListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_5935A70 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5935A70 = 1;
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
  DebugListViewManager__remove_callbackFunc(v11, v12, v13);
}


System_Collections_Generic_List_DebugListViewObject__o *DebugListViewManager__get_ObjectList(
        DebugListViewManager_o *this,
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

  if ( (byte_5935A72 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_DebugListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_DebugListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_DebugListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_DebugListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935A72 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_DebugListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_DebugListViewObject___ctor__);
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
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_DebugListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_DebugListViewObject__Add__,
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
  return (System_Collections_Generic_List_DebugListViewObject__o *)v3;
}


void DebugListViewManager__remove_callbackFunc(
        DebugListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  DebugListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_5935A71 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5935A71 = 1;
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
  DebugListViewManager__get_ObjectList(v11, v12);
}