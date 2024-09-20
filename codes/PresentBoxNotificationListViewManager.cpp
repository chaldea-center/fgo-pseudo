void __fastcall PresentBoxNotificationListViewManager___ctor(
        PresentBoxNotificationListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentBoxNotificationListViewManager__CreateList(
        PresentBoxNotificationListViewManager_o *this,
        int32_t kind,
        UserPresentBoxEntity_array *presentList,
        const MethodInfo *method)
{
  PresentBoxNotificationListViewManager_o *v6; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x9
  struct UIScrollView_o *scrollView; // x8
  int v9; // w9
  __int64 v10; // x8
  unsigned __int64 v11; // x24
  int32_t v12; // w21
  UserPresentBoxEntity_o *v13; // x23
  PresentBoxNotificationListViewItem_o *v14; // x22
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x8
  _QWORD *v19; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v21; // x8

  v6 = this;
  if ( (byte_4A5EC19 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    this = (PresentBoxNotificationListViewManager_o *)sub_1B885B0(&PresentBoxNotificationListViewItem_TypeInfo);
    byte_4A5EC19 = 1;
  }
  if ( !kind )
  {
    ListViewManager__CreateList((ListViewManager_o *)v6, 0, 0LL);
    if ( presentList )
    {
      v10 = *(_QWORD *)&presentList->max_length;
      if ( (int)v10 >= 1 )
      {
        v11 = 0LL;
        v12 = 0;
        do
        {
          if ( v11 >= (unsigned int)v10 )
            sub_1B88814(this, *(_QWORD *)&kind);
          v13 = presentList->m_Items[v11];
          if ( v13 )
          {
            v14 = (PresentBoxNotificationListViewItem_o *)sub_1B887FC(PresentBoxNotificationListViewItem_TypeInfo);
            PresentBoxNotificationListViewItem___ctor(v14, v12, v13, v15);
            this = (PresentBoxNotificationListViewManager_o *)v6->fields.itemList;
            if ( !this )
              goto LABEL_23;
            v18 = *(_QWORD *)&this->fields.m_CachedPtr;
            v19 = Method_System_Collections_Generic_List_ListViewItem__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !v18 )
              goto LABEL_23;
            m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v18 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)v14,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
            }
            else
            {
              v21 = v18 + 8 * m_CancellationTokenSource_low;
              LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *(_QWORD *)(v21 + 32) = v14;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 32), (int32_t)v14, v16, v17);
            }
            LODWORD(v10) = presentList->max_length;
            ++v12;
          }
          ++v11;
        }
        while ( (__int64)v11 < (int)v10 );
      }
    }
  }
  itemList = v6->fields.itemList;
  if ( !itemList || (scrollView = v6->fields.scrollView) == 0LL )
LABEL_23:
    sub_1B8880C(this, *(_QWORD *)&kind);
  if ( itemList->fields._size > 4 )
    v9 = 1;
  else
    v9 = 4;
  scrollView->fields.contentPivot = v9;
  ListViewManager__SortItem((ListViewManager_o *)v6, -1, 0, -1, 0LL);
}


void __fastcall PresentBoxNotificationListViewManager__DestroyList(
        PresentBoxNotificationListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


PresentBoxNotificationListViewItem_o *__fastcall PresentBoxNotificationListViewManager__GetItem(
        PresentBoxNotificationListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  PresentBoxNotificationListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5EC1A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&PresentBoxNotificationListViewItem_TypeInfo);
    byte_4A5EC1A = 1;
  }
  result = (PresentBoxNotificationListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PresentBoxNotificationListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                       (System_Collections_Generic_List_object__o *)result,
                                                       index,
                                                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(PresentBoxNotificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (PresentBoxNotificationListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != PresentBoxNotificationListViewItem_TypeInfo )
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}


void __fastcall PresentBoxNotificationListViewManager__OnClickListView(
        PresentBoxNotificationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct PresentBoxNotificationListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B8880C(v6, v7);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      Index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall PresentBoxNotificationListViewManager__OnMoveEnd(
        PresentBoxNotificationListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4A5EC1E & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EC1E = 1;
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
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1B8880C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentBoxNotificationListViewManager__RequestListObject(
        PresentBoxNotificationListViewManager_o *this,
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

  if ( (byte_4A5EC1C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_PresentBoxNotificationListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_PresentBoxNotificationListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_PresentBoxNotificationListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PresentBoxNotificationListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PresentBoxNotificationListViewObject__get_Count__);
    sub_1B885B0(&Method_PresentBoxNotificationListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5EC1C = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)PresentBoxNotificationListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_PresentBoxNotificationListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_PresentBoxNotificationListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_PresentBoxNotificationListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v12, v13);
      PresentBoxNotificationListViewObject__Init_45261832(
        (PresentBoxNotificationListViewObject_o *)current,
        mode,
        v11,
        delay,
        v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_PresentBoxNotificationListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentBoxNotificationListViewManager__RequestListObject_45260804(
        PresentBoxNotificationListViewManager_o *this,
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

  if ( (byte_4A5EC1D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_PresentBoxNotificationListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_PresentBoxNotificationListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_PresentBoxNotificationListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PresentBoxNotificationListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PresentBoxNotificationListViewObject__get_Count__);
    sub_1B885B0(&Method_PresentBoxNotificationListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5EC1D = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)PresentBoxNotificationListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_PresentBoxNotificationListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_PresentBoxNotificationListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_PresentBoxNotificationListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v10, v11);
      PresentBoxNotificationListViewObject__Init_45261916(
        (PresentBoxNotificationListViewObject_o *)current,
        mode,
        v9,
        v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_PresentBoxNotificationListViewObject__Dispose__);
  }
}


void __fastcall PresentBoxNotificationListViewManager__SetMode(
        PresentBoxNotificationListViewManager_o *this,
        int32_t mode,
        PresentBoxNotificationListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  PresentBoxNotificationListViewManager__SetMode_45260660(this, mode, v6);
}


void __fastcall PresentBoxNotificationListViewManager__SetMode_45260660(
        PresentBoxNotificationListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0LL);
  if ( mode == 1 )
    PresentBoxNotificationListViewManager__RequestListObject_45260804(this, 3, v5);
}


void __fastcall PresentBoxNotificationListViewManager__SetMode_45260752(
        PresentBoxNotificationListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  PresentBoxNotificationListViewManager__SetMode_45260660(this, mode, v6);
}


void __fastcall PresentBoxNotificationListViewManager__SetObjectItem(
        PresentBoxNotificationListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  PresentBoxNotificationListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4A5EC1B & 1) == 0 )
  {
    this = (PresentBoxNotificationListViewManager_o *)sub_1B885B0(&PresentBoxNotificationListViewObject_TypeInfo);
    byte_4A5EC1B = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(PresentBoxNotificationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (PresentBoxNotificationListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != PresentBoxNotificationListViewObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  PresentBoxNotificationListViewObject__Init_45260536(
    (PresentBoxNotificationListViewObject_o *)obj,
    v7,
    (const MethodInfo *)item);
}


void __fastcall PresentBoxNotificationListViewManager__add_callbackFunc(
        PresentBoxNotificationListViewManager_o *this,
        PresentBoxNotificationListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct PresentBoxNotificationListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PresentBoxNotificationListViewManager_o *v10; // x0
  PresentBoxNotificationListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A5EC13 & 1) == 0 )
  {
    sub_1B885B0(&PresentBoxNotificationListViewManager_CallbackFunc_TypeInfo);
    byte_4A5EC13 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (PresentBoxNotificationListViewManager_CallbackFunc_c *)v7->klass != PresentBoxNotificationListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  PresentBoxNotificationListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall PresentBoxNotificationListViewManager__add_callbackFunc2(
        PresentBoxNotificationListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PresentBoxNotificationListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A5EC15 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5EC15 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  PresentBoxNotificationListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_PresentBoxNotificationListViewObject__o *__fastcall PresentBoxNotificationListViewManager__get_ClippingObjectList(
        PresentBoxNotificationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5EC18 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_PresentBoxNotificationListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_PresentBoxNotificationListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PresentBoxNotificationListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_PresentBoxNotificationListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EC18 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_PresentBoxNotificationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_PresentBoxNotificationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_PresentBoxNotificationListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1B8880C(0LL, v10);
      Item = (ListViewItem_o *)PresentBoxNotificationListViewObject__GetItem(
                                 (PresentBoxNotificationListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1B8880C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_40722428((ListViewManager_o *)this, Item, 0LL);
        if ( v16 )
        {
          if ( !v3 )
            sub_1B8880C(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_PresentBoxNotificationListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1B8880C(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1B8880C(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_PresentBoxNotificationListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1B8880C(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PresentBoxNotificationListViewObject__o *)v3;
}


System_Collections_Generic_List_PresentBoxNotificationListViewObject__o *__fastcall PresentBoxNotificationListViewManager__get_ObjectList(
        PresentBoxNotificationListViewManager_o *this,
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
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5EC17 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_PresentBoxNotificationListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_PresentBoxNotificationListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PresentBoxNotificationListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_PresentBoxNotificationListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EC17 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_PresentBoxNotificationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_PresentBoxNotificationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_PresentBoxNotificationListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1B8880C(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_PresentBoxNotificationListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PresentBoxNotificationListViewObject__o *)v3;
}


void __fastcall PresentBoxNotificationListViewManager__remove_callbackFunc(
        PresentBoxNotificationListViewManager_o *this,
        PresentBoxNotificationListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct PresentBoxNotificationListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PresentBoxNotificationListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A5EC14 & 1) == 0 )
  {
    sub_1B885B0(&PresentBoxNotificationListViewManager_CallbackFunc_TypeInfo);
    byte_4A5EC14 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (PresentBoxNotificationListViewManager_CallbackFunc_c *)v7->klass != PresentBoxNotificationListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  PresentBoxNotificationListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall PresentBoxNotificationListViewManager__remove_callbackFunc2(
        PresentBoxNotificationListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PresentBoxNotificationListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4A5EC16 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5EC16 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  PresentBoxNotificationListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentBoxNotificationListViewManager_CallbackFunc___ctor(
        PresentBoxNotificationListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19D2FE4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D2F9C;
}


System_IAsyncResult_o *__fastcall PresentBoxNotificationListViewManager_CallbackFunc__BeginInvoke(
        PresentBoxNotificationListViewManager_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4A5EC1F & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    byte_4A5EC1F = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall PresentBoxNotificationListViewManager_CallbackFunc__EndInvoke(
        PresentBoxNotificationListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall PresentBoxNotificationListViewManager_CallbackFunc__Invoke(
        PresentBoxNotificationListViewManager_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}