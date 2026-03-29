void ScriptTextListViewManager___ctor(ScriptTextListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void ScriptTextListViewManager__CreateList(
        ScriptTextListViewManager_o *this,
        System_String_array *textLineData,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x22
  __int64 v6; // x0
  unsigned __int64 v7; // x21
  __int64 v8; // x24
  System_String_o *v9; // x23
  ScriptTextListViewItem_o *v10; // x22
  const MethodInfo *v11; // x3
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x8

  if ( (byte_4D2DFEE & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C93AD4(&ScriptTextListViewItem_TypeInfo);
    byte_4D2DFEE = 1;
  }
  if ( textLineData )
  {
    max_length = textLineData->max_length;
    ListViewManager__CreateList((ListViewManager_o *)this, max_length, 0);
    if ( (int)max_length >= 1 )
    {
      v7 = 0;
      v8 = (unsigned int)max_length;
      do
      {
        if ( v7 >= LODWORD(textLineData->max_length) )
          sub_1C93D34(v6);
        v9 = textLineData->m_Items[v7];
        v10 = (ScriptTextListViewItem_o *)sub_1C93D20(ScriptTextListViewItem_TypeInfo);
        ScriptTextListViewItem___ctor(v10, v7, v9, v11);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList
          || (items = itemList->fields._items,
              v21 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
          sub_1C93D2C(itemList, v12);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v10,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v10;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)v10, v13, v14, v15, v16, v17, v18);
        }
        ++v7;
      }
      while ( v8 != v7 );
    }
  }
  else
  {
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void ScriptTextListViewManager__DestroyList(ScriptTextListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


ScriptTextListViewItem_o *ScriptTextListViewManager__GetItem(
        ScriptTextListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ScriptTextListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4D2DFEF & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C93AD4(&ScriptTextListViewItem_TypeInfo);
    byte_4D2DFEF = 1;
  }
  result = (ScriptTextListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ScriptTextListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)result,
                                           index,
                                           (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = ScriptTextListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (ScriptTextListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != ScriptTextListViewItem_TypeInfo )
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


void ScriptTextListViewManager__OnClickListView(
        ScriptTextListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void ScriptTextListViewManager__OnClickSingleListView(
        ScriptTextListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ScriptTextListViewManager_o *v4; // x20
  struct ScriptTextListViewManager_CallbackFunc_o *callbackFunc; // x8
  struct ListViewItem_o *linkItem; // x9
  __int64 naturalAligment; // x12
  struct ListViewItem_o *v8; // x2

  v4 = this;
  if ( (byte_4D2DFF4 & 1) == 0 )
  {
    this = (ScriptTextListViewManager_o *)sub_1C93AD4(&ScriptTextListViewItem_TypeInfo);
    byte_4D2DFF4 = 1;
  }
  callbackFunc = v4->fields.callbackFunc;
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C93D2C(this, obj);
    linkItem = obj->fields.linkItem;
    if ( linkItem
      && (naturalAligment = ScriptTextListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (ScriptTextListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == ScriptTextListViewItem_TypeInfo )
        v8 = obj->fields.linkItem;
      else
        v8 = 0;
    }
    else
    {
      v8 = 0;
    }
    ((void (__fastcall *)(intptr_t, __int64, struct ListViewItem_o *, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      3,
      v8,
      callbackFunc->fields.method);
  }
}


void ScriptTextListViewManager__OnLongPushListView(
        ScriptTextListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ScriptTextListViewManager_o *v4; // x20
  struct ScriptTextListViewManager_CallbackFunc_o *callbackFunc; // x8
  struct ListViewItem_o *linkItem; // x9
  __int64 naturalAligment; // x12
  struct ListViewItem_o *v8; // x2

  v4 = this;
  if ( (byte_4D2DFF5 & 1) == 0 )
  {
    this = (ScriptTextListViewManager_o *)sub_1C93AD4(&ScriptTextListViewItem_TypeInfo);
    byte_4D2DFF5 = 1;
  }
  callbackFunc = v4->fields.callbackFunc;
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C93D2C(this, obj);
    linkItem = obj->fields.linkItem;
    if ( linkItem
      && (naturalAligment = ScriptTextListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (ScriptTextListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == ScriptTextListViewItem_TypeInfo )
        v8 = obj->fields.linkItem;
      else
        v8 = 0;
    }
    else
    {
      v8 = 0;
    }
    ((void (__fastcall *)(intptr_t, __int64, struct ListViewItem_o *, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      3,
      v8,
      callbackFunc->fields.method);
  }
}


void ScriptTextListViewManager__OnMoveEnd(ScriptTextListViewManager_o *this, const MethodInfo *method)
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
  struct ScriptTextListViewManager_CallbackFunc_o *callbackFunc; // x20

  if ( (byte_4D2DFF3 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2DFF3 = 1;
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
          sub_1C93D2C(0, v7);
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
          sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v8, v9, v10, v11, v12, v13);
          ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
            callbackFunc->fields.method_code,
            0,
            0,
            callbackFunc->fields.method);
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ScriptTextListViewManager__RequestListObject(
        ScriptTextListViewManager_o *this,
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

  if ( (byte_4D2DFF1 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptTextListViewObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptTextListViewObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptTextListViewObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptTextListViewObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptTextListViewObject__get_Count__);
    sub_1C93AD4(&Method_ScriptTextListViewManager_OnMoveEnd__);
    sub_1C93AD4(&StringLiteral_9998/*"OnMoveEnd"*/);
    byte_4D2DFF1 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptTextListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C93D2C(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9998/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ScriptTextListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ScriptTextListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_ScriptTextListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C93D2C(v12, v13);
      ScriptTextListViewObject__Init_38165216((ScriptTextListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ScriptTextListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void ScriptTextListViewManager__RequestListObject_38164188(
        ScriptTextListViewManager_o *this,
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

  if ( (byte_4D2DFF2 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptTextListViewObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptTextListViewObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptTextListViewObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptTextListViewObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptTextListViewObject__get_Count__);
    sub_1C93AD4(&Method_ScriptTextListViewManager_OnMoveEnd__);
    sub_1C93AD4(&StringLiteral_9998/*"OnMoveEnd"*/);
    byte_4D2DFF2 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptTextListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C93D2C(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9998/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ScriptTextListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ScriptTextListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ScriptTextListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C93D2C(v10, v11);
      ScriptTextListViewObject__Init_38165300((ScriptTextListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ScriptTextListViewObject__Dispose__);
  }
}


void ScriptTextListViewManager__SetMode(ScriptTextListViewManager_o *this, int32_t mode, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ScriptTextListViewManager__SetMode_38164076(this, mode, 0, v3);
}


void ScriptTextListViewManager__SetMode_38164076(
        ScriptTextListViewManager_o *this,
        int32_t mode,
        ScriptTextListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.initMode = mode;
  this->fields.callbackFunc = callback;
  sub_1C93A78(
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
    ScriptTextListViewManager__RequestListObject_38164188(this, 3, v10);
}


void ScriptTextListViewManager__SetObjectItem(
        ScriptTextListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ScriptTextListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4D2DFF0 & 1) == 0 )
  {
    this = (ScriptTextListViewManager_o *)sub_1C93AD4(&ScriptTextListViewObject_TypeInfo);
    byte_4D2DFF0 = 1;
  }
  if ( !obj
    || (naturalAligment = ScriptTextListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ScriptTextListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ScriptTextListViewObject_TypeInfo )
  {
    sub_1C93D2C(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ScriptTextListViewObject__Init_38163996((ScriptTextListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void ScriptTextListViewManager__add_callbackFunc(
        ScriptTextListViewManager_o *this,
        ScriptTextListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct ScriptTextListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ScriptTextListViewManager_o *v10; // x0
  ScriptTextListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4D2DFEB & 1) == 0 )
  {
    sub_1C93AD4(&ScriptTextListViewManager_CallbackFunc_TypeInfo);
    byte_4D2DFEB = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (ScriptTextListViewManager_CallbackFunc_c *)v7->klass != ScriptTextListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CEF8A8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C940C8(v7);
  ScriptTextListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_ScriptTextListViewObject__o *ScriptTextListViewManager__get_ObjectList(
        ScriptTextListViewManager_o *this,
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

  if ( (byte_4D2DFED & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ScriptTextListViewObject___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptTextListViewObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptTextListViewObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ScriptTextListViewObject__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2DFED = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ScriptTextListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ScriptTextListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C93D2C(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C93D2C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ScriptTextListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C93D2C(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_ScriptTextListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C93D2C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ScriptTextListViewObject__o *)v3;
}


void ScriptTextListViewManager__remove_callbackFunc(
        ScriptTextListViewManager_o *this,
        ScriptTextListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct ScriptTextListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ScriptTextListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4D2DFEC & 1) == 0 )
  {
    sub_1C93AD4(&ScriptTextListViewManager_CallbackFunc_TypeInfo);
    byte_4D2DFEC = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (ScriptTextListViewManager_CallbackFunc_c *)v7->klass != ScriptTextListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CEF8A8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C940C8(v7);
  ScriptTextListViewManager__get_ObjectList(v10, v11);
}


void ScriptTextListViewManager_CallbackFunc___ctor(
        ScriptTextListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC61E0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC6188;
}


System_IAsyncResult_o *ScriptTextListViewManager_CallbackFunc__BeginInvoke(
        ScriptTextListViewManager_CallbackFunc_o *this,
        int32_t result,
        ScriptTextListViewItem_o *item,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = result;
  if ( (byte_4D2DFF6 & 1) == 0 )
  {
    sub_1C93AD4(&ScriptTextListViewManager_ResultKind_TypeInfo);
    byte_4D2DFF6 = 1;
  }
  v11[2] = 0;
  v11[0] = j_il2cpp_value_box_0(ScriptTextListViewManager_ResultKind_TypeInfo, &v12);
  v11[1] = item;
  return sub_1C93A88(this, v11, callback, object);
}


void ScriptTextListViewManager_CallbackFunc__EndInvoke(
        ScriptTextListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void ScriptTextListViewManager_CallbackFunc__Invoke(
        ScriptTextListViewManager_CallbackFunc_o *this,
        int32_t result,
        ScriptTextListViewItem_o *item,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, ScriptTextListViewItem_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    item,
    this->fields.method);
}