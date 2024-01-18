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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x0
  __int64 v12; // x8
  unsigned __int64 v13; // x23
  BoostEntity_o *v14; // x25
  BoostSupportRequsetItemListViewItem_o *v15; // x24
  __int64 v16; // x0

  v8 = this;
  if ( (byte_4187E41 & 1) == 0 )
  {
    sub_B2C35C(&BoostSupportRequsetItemListViewItem_TypeInfo, boostEntityList);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    this = (BoostSupportRequestItemListViewManager_o *)sub_B2C35C(&StringLiteral_21086/*"no data(test label)"*/, v10);
    byte_4187E41 = 1;
  }
  if ( !boostEntityList )
    goto LABEL_12;
  ListViewManager__CreateList((ListViewManager_o *)v8, boostEntityList->max_length, 0LL);
  v12 = *(_QWORD *)&boostEntityList->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v12 )
      {
        v16 = sub_B2C460(v11);
        sub_B2C400(v16, 0LL);
      }
      v14 = boostEntityList->m_Items[v13];
      v15 = (BoostSupportRequsetItemListViewItem_o *)sub_B2C42C(BoostSupportRequsetItemListViewItem_TypeInfo);
      BoostSupportRequsetItemListViewItem___ctor(v15, v13, v14, usrItemEntityList, recommendedBoostIds, 0LL);
      this = (BoostSupportRequestItemListViewManager_o *)v8->fields.itemList;
      if ( !this )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      LODWORD(v12) = boostEntityList->max_length;
      if ( (__int64)++v13 >= (int)v12 )
        goto LABEL_9;
    }
LABEL_12:
    sub_B2C434(this, boostEntityList);
  }
LABEL_9:
  this = (BoostSupportRequestItemListViewManager_o *)v8->fields.emptyMessageLabel;
  if ( !this )
    goto LABEL_12;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_21086/*"no data(test label)"*/, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)v8, -1, 0, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BoostSupportRequsetItemListViewItem_o *__fastcall BoostSupportRequestItemListViewManager__GetItem(
        BoostSupportRequestItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_4187E3F & 1) == 0 )
  {
    sub_B2C35C(&BoostSupportRequsetItemListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4187E3F = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&BoostSupportRequsetItemListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (BoostSupportRequsetItemListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == BoostSupportRequsetItemListViewItem_TypeInfo )
    return (BoostSupportRequsetItemListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


void __fastcall BoostSupportRequestItemListViewManager__OnClickListView(
        BoostSupportRequestItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  BoostSupportRequestItemListViewManager_o *v4; // x20
  __int64 v5; // x1
  BoostSupportRequestItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v7; // x10
  int v8; // w8
  int32_t Index; // w0
  int32_t v10; // w1

  v4 = this;
  if ( (byte_4187E45 & 1) == 0 )
  {
    sub_B2C35C(&BoostSupportRequestItemListViewObject_TypeInfo, obj);
    this = (BoostSupportRequestItemListViewManager_o *)sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_4187E45 = 1;
  }
  callbackFunc = v4->fields.callbackFunc;
  if ( callbackFunc )
  {
    if ( !obj
      || (v7 = *(&BoostSupportRequestItemListViewObject_TypeInfo->_2.bitflags2 + 1),
          *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v7)
      || (BoostSupportRequestItemListViewObject_c *)obj->klass->_2.typeHierarchy[v7 - 1] != BoostSupportRequestItemListViewObject_TypeInfo )
    {
      sub_B2C434(this, obj);
    }
    v8 = *((_DWORD *)&obj->fields.isBusy + 1);
    if ( v8 == 3 )
    {
      Index = ListViewObject__get_Index(obj, 0LL);
      v10 = 3;
    }
    else
    {
      if ( v8 != 2 )
      {
        if ( v8 == 1 )
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
      v10 = 2;
    }
    BoostSupportRequestItemListViewManager_CallbackFunc__Invoke(callbackFunc, v10, Index, 0LL);
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

  if ( (byte_4187E44 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4187E44 = 1;
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
          sub_B2C434(0LL, v7);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v11; // x1
  int32_t size; // w8
  Il2CppObject *current; // x20
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4187E43 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_BoostSupportRequestItemListViewManager_OnMoveEnd__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BoostSupportRequestItemListViewObject__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BoostSupportRequestItemListViewObject__MoveNext__, v5);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BoostSupportRequestItemListViewObject__get_Current__,
      v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject__get_Count__, v8);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v9);
    byte_4187E43 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)BoostSupportRequestItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                method);
  if ( !ObjectList )
    sub_B2C434(0LL, v11);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v18,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v18,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BoostSupportRequestItemListViewObject__MoveNext__) )
    {
      current = v18.fields.current;
      v14 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v14, (Il2CppObject *)this, Method_BoostSupportRequestItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v15, v16);
      BoostSupportRequestItemListViewObject__Init((BoostSupportRequestItemListViewObject_o *)current, v14, 0, v17);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v18,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BoostSupportRequestItemListViewObject__Dispose__);
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
  sub_B2C2F8(
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
  __int64 v6; // x1
  __int64 v7; // x1
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  __int64 v12; // x10

  if ( (byte_4187E42 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, obj);
    sub_B2C35C(&Method_BoostSupportRequestItemListViewManager_OnMoveEnd__, v6);
    sub_B2C35C(&BoostSupportRequestItemListViewObject_TypeInfo, v7);
    byte_4187E42 = 1;
  }
  v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_BoostSupportRequestItemListViewManager_OnMoveEnd__, 0LL);
  if ( !obj
    || (v12 = *(&BoostSupportRequestItemListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v12)
    || (BoostSupportRequestItemListViewObject_c *)obj->klass->_2.typeHierarchy[v12 - 1] != BoostSupportRequestItemListViewObject_TypeInfo )
  {
    sub_B2C434(v9, v10);
  }
  BoostSupportRequestItemListViewObject__Init((BoostSupportRequestItemListViewObject_o *)obj, v8, 0, v11);
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

  if ( (byte_4187E3D & 1) == 0 )
  {
    sub_B2C35C(&BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_4187E3D = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (BoostSupportRequestItemListViewManager_o *)sub_B2C728(v7);
  BoostSupportRequestItemListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_BoostSupportRequestItemListViewObject__o *__fastcall BoostSupportRequestItemListViewManager__get_ObjectList(
        BoostSupportRequestItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4187E40 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BoostSupportRequestItemListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_BoostSupportRequestItemListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_4187E40 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BoostSupportRequestItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BoostSupportRequestItemListViewObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BoostSupportRequestItemListViewObject__o *)v11;
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

  if ( (byte_4187E3E & 1) == 0 )
  {
    sub_B2C35C(&BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_4187E3E = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (BoostSupportRequestItemListViewManager_o *)sub_B2C728(v7);
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
  sub_B2C2F8(p_method, object);
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
  __int64 v9; // x1
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = index;
  v13 = result;
  if ( (byte_4184EA8 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&BoostSupportRequestItemListViewManager_ResultKind_TypeInfo, v9);
    byte_4184EA8 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(BoostSupportRequestItemListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall BoostSupportRequestItemListViewManager_CallbackFunc__EndInvoke(
        BoostSupportRequestItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  BoostSupportRequestItemListViewManager_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+Ch] [xbp-54h] BYREF
  BoostSupportRequestItemListViewManager_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

  v35 = this;
  v34 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v35;
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
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&index, method);
      if ( (sub_B2C38C(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, (unsigned int)index, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, (unsigned int)index, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B2C384(v23);
      v26 = sub_B2C788(v23);
      if ( (v25 & 1) != 0 )
      {
        v28 = v34;
        if ( (v26 & 1) != 0 )
        {
          v29 = *v22;
          v30 = *(_QWORD *)(v23 + 24);
          v31 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_35;
            }
            v19 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v19 = sub_AC5258(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B2C40C(v18, v23);
        (*v20)(v22, v28, (unsigned int)index, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          v14 = v34;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v13 + 16LL * (int)(*v16 + v10) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AC5258(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v17)(
            v22,
            v14,
            (unsigned int)index,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            v34,
            (unsigned int)index,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v24)(v22, v34, (unsigned int)index, v23);
    goto LABEL_38;
  }
}