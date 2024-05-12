void __fastcall BoostSupportRequestItemListViewManager___ctor(
        BoostSupportRequestItemListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall BoostSupportRequestItemListViewManager__CreateList(
        BoostSupportRequestItemListViewManager_o *this,
        BoostEntity_array *boostEntityList,
        System_Int32_array *recommendedBoostIds,
        UserItemEntity_array *usrItemEntityList,
        const MethodInfo *method)
{
  BoostSupportRequestItemListViewManager_o *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x8
  unsigned __int64 v11; // x23
  BoostEntity_o *v12; // x25
  BoostSupportRequsetItemListViewItem_o *v13; // x24
  const MethodInfo *v14; // x5
  __int64 v15; // x0

  v8 = this;
  if ( (byte_438D715 & 1) == 0 )
  {
    sub_B775C4(&BoostSupportRequsetItemListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    this = (BoostSupportRequestItemListViewManager_o *)sub_B775C4(&StringLiteral_21522/*"no data(test label)"*/);
    byte_438D715 = 1;
  }
  if ( !boostEntityList )
    goto LABEL_12;
  ListViewManager__CreateList((ListViewManager_o *)v8, boostEntityList->max_length, 0LL);
  v10 = *(_QWORD *)&boostEntityList->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v10 )
      {
        v15 = sub_B776C8(v9);
        sub_B77668(v15, 0LL);
      }
      v12 = boostEntityList->m_Items[v11];
      v13 = (BoostSupportRequsetItemListViewItem_o *)sub_B77694(BoostSupportRequsetItemListViewItem_TypeInfo);
      BoostSupportRequsetItemListViewItem___ctor(v13, v11, v12, usrItemEntityList, recommendedBoostIds, v14);
      this = (BoostSupportRequestItemListViewManager_o *)v8->fields.itemList;
      if ( !this )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      LODWORD(v10) = boostEntityList->max_length;
      if ( (__int64)++v11 >= (int)v10 )
        goto LABEL_9;
    }
LABEL_12:
    sub_B7769C(this, boostEntityList);
  }
LABEL_9:
  this = (BoostSupportRequestItemListViewManager_o *)v8->fields.emptyMessageLabel;
  if ( !this )
    goto LABEL_12;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_21522/*"no data(test label)"*/, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)v8, -1, 0, -1, 0LL);
}


BoostSupportRequsetItemListViewItem_o *__fastcall BoostSupportRequestItemListViewManager__GetItem(
        BoostSupportRequestItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_438D713 & 1) == 0 )
  {
    sub_B775C4(&BoostSupportRequsetItemListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_438D713 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&BoostSupportRequsetItemListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (BoostSupportRequsetItemListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == BoostSupportRequsetItemListViewItem_TypeInfo )
    return (BoostSupportRequsetItemListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


void __fastcall BoostSupportRequestItemListViewManager__OnClickListView(
        BoostSupportRequestItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  BoostSupportRequestItemListViewManager_o *v4; // x20
  BoostSupportRequestItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x10
  int v7; // w8
  int32_t Index; // w0
  int32_t v9; // w1

  v4 = this;
  if ( (byte_438D719 & 1) == 0 )
  {
    sub_B775C4(&BoostSupportRequestItemListViewObject_TypeInfo);
    this = (BoostSupportRequestItemListViewManager_o *)sub_B775C4(&SoundManager_TypeInfo);
    byte_438D719 = 1;
  }
  callbackFunc = v4->fields.callbackFunc;
  if ( callbackFunc )
  {
    if ( !obj
      || (v6 = *(&BoostSupportRequestItemListViewObject_TypeInfo->_2.bitflags2 + 1),
          *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
      || (BoostSupportRequestItemListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != BoostSupportRequestItemListViewObject_TypeInfo )
    {
      sub_B7769C(this, obj);
    }
    v7 = *((_DWORD *)&obj->fields.isBusy + 1);
    if ( v7 == 3 )
    {
      Index = ListViewObject__get_Index(obj, 0LL);
      v9 = 3;
    }
    else
    {
      if ( v7 != 2 )
      {
        if ( v7 == 1 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(2, 0LL);
        }
        return;
      }
      Index = ListViewObject__get_Index(obj, 0LL);
      v9 = 2;
    }
    BoostSupportRequestItemListViewManager_CallbackFunc__Invoke(callbackFunc, v9, Index, 0LL);
  }
}


void __fastcall BoostSupportRequestItemListViewManager__OnMoveEnd(
        BoostSupportRequestItemListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0

  if ( (byte_438D718 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D718 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0LL);
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_B7769C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
      }
    }
  }
}


void __fastcall BoostSupportRequestItemListViewManager__RequestListObject(
        BoostSupportRequestItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v4; // x1
  int32_t size; // w8
  Il2CppObject *current; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_438D717 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_BoostSupportRequestItemListViewManager_OnMoveEnd__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BoostSupportRequestItemListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BoostSupportRequestItemListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BoostSupportRequestItemListViewObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject__get_Count__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_438D717 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)BoostSupportRequestItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                method);
  if ( !ObjectList )
    sub_B7769C(0LL, v4);
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
      &v11,
      ObjectList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v11,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_BoostSupportRequestItemListViewObject__MoveNext__) )
    {
      current = v11.fields.current;
      v7 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)this, Method_BoostSupportRequestItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7769C(v8, v9);
      BoostSupportRequestItemListViewObject__Init((BoostSupportRequestItemListViewObject_o *)current, v7, 0, v10);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v11,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_BoostSupportRequestItemListViewObject__Dispose__);
  }
}


void __fastcall BoostSupportRequestItemListViewManager__SetCallBack(
        BoostSupportRequestItemListViewManager_o *this,
        BoostSupportRequestItemListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x1

  this->fields.callbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  BoostSupportRequestItemListViewManager__RequestListObject(this, v9);
}


void __fastcall BoostSupportRequestItemListViewManager__SetObjectItem(
        BoostSupportRequestItemListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  __int64 v10; // x10

  if ( (byte_438D716 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_BoostSupportRequestItemListViewManager_OnMoveEnd__);
    sub_B775C4(&BoostSupportRequestItemListViewObject_TypeInfo);
    byte_438D716 = 1;
  }
  v6 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_BoostSupportRequestItemListViewManager_OnMoveEnd__, 0LL);
  if ( !obj
    || (v10 = *(&BoostSupportRequestItemListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v10)
    || (BoostSupportRequestItemListViewObject_c *)obj->klass->_2.typeHierarchy[v10 - 1] != BoostSupportRequestItemListViewObject_TypeInfo )
  {
    sub_B7769C(v7, v8);
  }
  BoostSupportRequestItemListViewObject__Init((BoostSupportRequestItemListViewObject_o *)obj, v6, 0, v9);
}


void __fastcall BoostSupportRequestItemListViewManager__add_callbackFunc(
        BoostSupportRequestItemListViewManager_o *this,
        BoostSupportRequestItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct BoostSupportRequestItemListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  BoostSupportRequestItemListViewManager_o *v10; // x0
  BoostSupportRequestItemListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_438D711 & 1) == 0 )
  {
    sub_B775C4(&BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo);
    byte_438D711 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (BoostSupportRequestItemListViewManager_CallbackFunc_c *)v7->klass != BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
  BoostSupportRequestItemListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_BoostSupportRequestItemListViewObject__o *__fastcall BoostSupportRequestItemListViewManager__get_ObjectList(
        BoostSupportRequestItemListViewManager_o *this,
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

  if ( (byte_438D714 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BoostSupportRequestItemListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_BoostSupportRequestItemListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D714 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BoostSupportRequestItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject___ctor__);
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
                                                                                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BoostSupportRequestItemListViewObject___);
      if ( !v3 )
        sub_B7769C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BoostSupportRequestItemListViewObject__o *)v3;
}


void __fastcall BoostSupportRequestItemListViewManager__remove_callbackFunc(
        BoostSupportRequestItemListViewManager_o *this,
        BoostSupportRequestItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct BoostSupportRequestItemListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  BoostSupportRequestItemListViewManager_o *v10; // x0
  int32_t v11; // w1
  const MethodInfo *v12; // x2

  if ( (byte_438D712 & 1) == 0 )
  {
    sub_B775C4(&BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo);
    byte_438D712 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (BoostSupportRequestItemListViewManager_CallbackFunc_c *)v7->klass != BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
  BoostSupportRequestItemListViewManager__GetItem(v10, v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostSupportRequestItemListViewManager_CallbackFunc___ctor(
        BoostSupportRequestItemListViewManager_CallbackFunc_o *this,
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
System_IAsyncResult_o *__fastcall BoostSupportRequestItemListViewManager_CallbackFunc__BeginInvoke(
        BoostSupportRequestItemListViewManager_CallbackFunc_o *this,
        int32_t result,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x2
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = index;
  v13 = result;
  if ( (byte_438853A & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&BoostSupportRequestItemListViewManager_ResultKind_TypeInfo);
    byte_438853A = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(BoostSupportRequestItemListViewManager_ResultKind_TypeInfo, &v13, *(_QWORD *)&index);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12, v9);
  return (System_IAsyncResult_o *)sub_B77568(this, v11, callback, object);
}


void __fastcall BoostSupportRequestItemListViewManager_CallbackFunc__EndInvoke(
        BoostSupportRequestItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostSupportRequestItemListViewManager_CallbackFunc__Invoke(
        BoostSupportRequestItemListViewManager_CallbackFunc_o *this,
        int32_t result,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  BoostSupportRequestItemListViewManager_CallbackFunc_o **v8; // x26
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
  BoostSupportRequestItemListViewManager_CallbackFunc_o *v20; // x8
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
  BoostSupportRequestItemListViewManager_CallbackFunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

  v33 = this;
  v32 = result;
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
    v8 = (BoostSupportRequestItemListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result);
      if ( (sub_B775F4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_36;
      v23((unsigned int *)v32, (unsigned int)index, v22);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v21 )
    {
      v23(&v32 - 4, (unsigned int)index, v22);
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
        (*v19)(v21, v26, (unsigned int)index, v19);
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
            (unsigned int)index,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v32,
            (unsigned int)index,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v23)(v21, v32, (unsigned int)index, v22);
    goto LABEL_38;
  }
}