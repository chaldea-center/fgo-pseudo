void __fastcall SelectImageLimitListViewManager___ctor(
        SelectImageLimitListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall SelectImageLimitListViewManager__CreateList(
        SelectImageLimitListViewManager_o *this,
        int32_t svtId,
        System_Int32_array *imageLimitCounts,
        int32_t selectedImageId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v10; // x1
  __int64 v11; // x8
  unsigned __int64 v12; // x23
  int32_t v13; // w28
  __int64 v14; // x24
  __int64 v15; // x0

  if ( (byte_4390D68 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&SelectImageLimitListViewItem_TypeInfo);
    byte_4390D68 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !imageLimitCounts )
    goto LABEL_11;
  v11 = *(_QWORD *)&imageLimitCounts->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)v11 )
      {
        v15 = sub_B776C8(itemList);
        sub_B77668(v15, 0LL);
      }
      v13 = imageLimitCounts->m_Items[v12 + 1];
      v14 = sub_B77694(SelectImageLimitListViewItem_TypeInfo);
      ListViewItem___ctor_24167012((ListViewItem_o *)v14, v12, 0LL);
      *(_DWORD *)(v14 + 112) = svtId;
      *(_DWORD *)(v14 + 116) = v13;
      *(_BYTE *)(v14 + 120) = v13 == selectedImageId;
      itemList = this->fields.itemList;
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      LODWORD(v11) = imageLimitCounts->max_length;
      if ( (__int64)++v12 >= (int)v11 )
        goto LABEL_9;
    }
LABEL_11:
    sub_B7769C(itemList, v10);
  }
LABEL_9:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall SelectImageLimitListViewManager__DestroyList(
        SelectImageLimitListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B7769C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
}


SelectImageLimitListViewItem_o *__fastcall SelectImageLimitListViewManager__GetItem(
        SelectImageLimitListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_4390D69 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&SelectImageLimitListViewItem_TypeInfo);
    byte_4390D69 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&SelectImageLimitListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (SelectImageLimitListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == SelectImageLimitListViewItem_TypeInfo )
    return (SelectImageLimitListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


void __fastcall SelectImageLimitListViewManager__ModifyItem(
        SelectImageLimitListViewManager_o *this,
        int32_t selectedImageId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x20
  __int64 v9; // x10
  UnityEngine_Object_o *monitor; // x21
  __int64 v11; // x1
  void *v12; // x0
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4390D6A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SelectImageLimitListViewItem_TypeInfo);
    byte_4390D6A = 1;
  }
  memset(&v14, 0, sizeof(v14));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v14 = v13;
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v14,
             (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v6 )
        break;
      current = v14.fields.current;
      if ( !v14.fields.current
        || (v9 = *(&SelectImageLimitListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v14.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v9)
        || (SelectImageLimitListViewItem_c *)v14.fields.current->klass->_2.typeHierarchy[v9 - 1] != SelectImageLimitListViewItem_TypeInfo )
      {
        sub_B7769C(v6, v7);
      }
      monitor = (UnityEngine_Object_o *)v14.fields.current[6].monitor;
      LOBYTE(v14.fields.current[7].monitor) = HIDWORD(v14.fields.current[7].klass) == selectedImageId;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      {
        v12 = current[6].monitor;
        if ( !v12 )
          sub_B7769C(0LL, v11);
        (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v12 + 392LL))(
          v12,
          current,
          *(_QWORD *)(*(_QWORD *)v12 + 400LL));
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v14,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void __fastcall SelectImageLimitListViewManager__OnClickListView(
        SelectImageLimitListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall SelectImageLimitListViewManager__OnClickSelectListView(
        SelectImageLimitListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SelectImageLimitListViewManager_CallbackFunc_o *callbackFunc; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_B7769C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    SelectImageLimitListViewManager_CallbackFunc__Invoke(callbackFunc, 1, Index, 0LL);
  }
}


void __fastcall SelectImageLimitListViewManager__OnMoveEnd(
        SelectImageLimitListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UIScrollView_o *v14; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_4390D6E & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4390D6E = 1;
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
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_B7769C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B77560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
      if ( callbackFunc2 )
        System_Action__Invoke(callbackFunc2, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectImageLimitListViewManager__RequestListObject(
        SelectImageLimitListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4390D6C & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_SelectImageLimitListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_SelectImageLimitListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_SelectImageLimitListViewObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_SelectImageLimitListViewObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_SelectImageLimitListViewObject__get_Count__);
    sub_B775C4(&Method_SelectImageLimitListViewManager_OnMoveEnd__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_4390D6C = 1;
  }
  memset(&v14, 0, sizeof(v14));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SelectImageLimitListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B7769C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10218/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v14,
      ObjectList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_SelectImageLimitListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v14,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_SelectImageLimitListViewObject__MoveNext__) )
    {
      current = v14.fields.current;
      v11 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_SelectImageLimitListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7769C(v12, v13);
      SelectImageLimitListViewObject__Init_27384548((SelectImageLimitListViewObject_o *)current, mode, v11, delay, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v14,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_SelectImageLimitListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectImageLimitListViewManager__RequestListObject_34890904(
        SelectImageLimitListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4390D6D & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_SelectImageLimitListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_SelectImageLimitListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_SelectImageLimitListViewObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_SelectImageLimitListViewObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_SelectImageLimitListViewObject__get_Count__);
    sub_B775C4(&Method_SelectImageLimitListViewManager_OnMoveEnd__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_4390D6D = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SelectImageLimitListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B7769C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10218/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v12,
      ObjectList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_SelectImageLimitListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v12,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_SelectImageLimitListViewObject__MoveNext__) )
    {
      current = v12.fields.current;
      v9 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_SelectImageLimitListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7769C(v10, v11);
      SelectImageLimitListViewObject__Init_27384612((SelectImageLimitListViewObject_o *)current, mode, v9, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v12,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_SelectImageLimitListViewObject__Dispose__);
  }
}


void __fastcall SelectImageLimitListViewManager__SetMode(
        SelectImageLimitListViewManager_o *this,
        int32_t mode,
        SelectImageLimitListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  SelectImageLimitListViewManager__SetMode_34890660(this, mode, v10);
}


void __fastcall SelectImageLimitListViewManager__SetMode_34890660(
        SelectImageLimitListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Behaviour_o *scrollView; // x0
  const MethodInfo *v7; // x2
  int32_t v8; // w1

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_14;
  if ( UnityEngine_Behaviour__get_enabled(scrollView, 0LL) )
    goto LABEL_6;
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView
    || (UnityEngine_Behaviour__set_enabled(scrollView, 1, 0LL),
        (scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0LL) )
  {
LABEL_14:
    sub_B7769C(scrollView, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)scrollView, 0LL);
LABEL_6:
  switch ( mode )
  {
    case 3:
      v8 = 4;
      goto LABEL_12;
    case 2:
      v8 = 3;
      goto LABEL_12;
    case 1:
      v8 = 2;
LABEL_12:
      SelectImageLimitListViewManager__RequestListObject_34890904(this, v8, v7);
      break;
  }
}


void __fastcall SelectImageLimitListViewManager__SetMode_34890848(
        SelectImageLimitListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  SelectImageLimitListViewManager__SetMode_34890660(this, mode, v10);
}


void __fastcall SelectImageLimitListViewManager__SetObjectItem(
        SelectImageLimitListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  SelectImageLimitListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4390D6B & 1) == 0 )
  {
    this = (SelectImageLimitListViewManager_o *)sub_B775C4(&SelectImageLimitListViewObject_TypeInfo);
    byte_4390D6B = 1;
  }
  if ( !obj
    || (v6 = *(&SelectImageLimitListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (SelectImageLimitListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != SelectImageLimitListViewObject_TypeInfo )
  {
    sub_B7769C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  SelectImageLimitListViewObject__Init_27383772((SelectImageLimitListViewObject_o *)obj, v7, 0LL);
}


void __fastcall SelectImageLimitListViewManager__add_callbackFunc(
        SelectImageLimitListViewManager_o *this,
        SelectImageLimitListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct SelectImageLimitListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SelectImageLimitListViewManager_o *v10; // x0
  SelectImageLimitListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4390D62 & 1) == 0 )
  {
    sub_B775C4(&SelectImageLimitListViewManager_CallbackFunc_TypeInfo);
    byte_4390D62 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (SelectImageLimitListViewManager_CallbackFunc_c *)v7->klass != SelectImageLimitListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
  SelectImageLimitListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall SelectImageLimitListViewManager__add_callbackFunc2(
        SelectImageLimitListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SelectImageLimitListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4390D64 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_4390D64 = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
  SelectImageLimitListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_SelectImageLimitListViewObject__o *__fastcall SelectImageLimitListViewManager__get_ClippingObjectList(
        SelectImageLimitListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  SelectImageLimitListViewObject_o *Component_srcLineSprite; // x0
  __int64 v10; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4390D67 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_SelectImageLimitListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_SelectImageLimitListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_SelectImageLimitListViewObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_SelectImageLimitListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4390D67 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_SelectImageLimitListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_SelectImageLimitListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7769C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v18.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7769C(v7, v8);
      Component_srcLineSprite = (SelectImageLimitListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      (UnityEngine_GameObject_o *)current,
                                                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_SelectImageLimitListViewObject___);
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B7769C(0LL, v10);
      Item = (ListViewItem_o *)SelectImageLimitListViewObject__GetItem(Component_srcLineSprite, 0LL);
      if ( !Item )
        sub_B7769C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_24185472((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_B7769C(v14, v15);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v3 )
          sub_B7769C(Item, v13);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          v11,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_SelectImageLimitListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SelectImageLimitListViewObject__o *)v3;
}


System_Collections_Generic_List_SelectImageLimitListViewObject__o *__fastcall SelectImageLimitListViewManager__get_ObjectList(
        SelectImageLimitListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4390D66 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_SelectImageLimitListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_SelectImageLimitListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_SelectImageLimitListViewObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_SelectImageLimitListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4390D66 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_SelectImageLimitListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_SelectImageLimitListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7769C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7769C(v7, v8);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_SelectImageLimitListViewObject___);
      if ( !v3 )
        sub_B7769C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_SelectImageLimitListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SelectImageLimitListViewObject__o *)v3;
}


void __fastcall SelectImageLimitListViewManager__remove_callbackFunc(
        SelectImageLimitListViewManager_o *this,
        SelectImageLimitListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct SelectImageLimitListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SelectImageLimitListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4390D63 & 1) == 0 )
  {
    sub_B775C4(&SelectImageLimitListViewManager_CallbackFunc_TypeInfo);
    byte_4390D63 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (SelectImageLimitListViewManager_CallbackFunc_c *)v7->klass != SelectImageLimitListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
  SelectImageLimitListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall SelectImageLimitListViewManager__remove_callbackFunc2(
        SelectImageLimitListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SelectImageLimitListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4390D65 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_4390D65 = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
  SelectImageLimitListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectImageLimitListViewManager_CallbackFunc___ctor(
        SelectImageLimitListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B77560(p_method);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SelectImageLimitListViewManager_CallbackFunc__BeginInvoke(
        SelectImageLimitListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x2
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = result;
  v13 = kind;
  if ( (byte_43887EA & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&SelectImageLimitListViewManager_ResultKind_TypeInfo);
    byte_43887EA = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(SelectImageLimitListViewManager_ResultKind_TypeInfo, &v13, *(_QWORD *)&result);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12, v9);
  return (System_IAsyncResult_o *)sub_B77568(this, v11, callback, object);
}


void __fastcall SelectImageLimitListViewManager_CallbackFunc__EndInvoke(
        SelectImageLimitListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectImageLimitListViewManager_CallbackFunc__Invoke(
        SelectImageLimitListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  SelectImageLimitListViewManager_CallbackFunc_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned int v13; // w23
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  SelectImageLimitListViewManager_CallbackFunc_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(unsigned int *, _QWORD, __int64); // x24
  char v24; // w24
  char v25; // w0
  unsigned int v26; // w24
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+Ch] [xbp-54h] BYREF
  SelectImageLimitListViewManager_CallbackFunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

  v33 = this;
  v32 = kind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v33;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (SelectImageLimitListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind);
      if ( (sub_B775F4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_36;
      v23((unsigned int *)v32, (unsigned int)result, v22);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v21 )
    {
      v23(&v32 - 4, (unsigned int)result, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B775EC(v22);
      v25 = sub_B779F0(v22);
      if ( (v24 & 1) != 0 )
      {
        v26 = v32;
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_B0F4C0(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B77674(v17, v22);
        (*v19)(v21, v26, (unsigned int)result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v32;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_B0F4C0(v21, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v16)(
            v21,
            v13,
            (unsigned int)result,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v32,
            (unsigned int)result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v23)(v21, v32, (unsigned int)result, v22);
    goto LABEL_38;
  }
}