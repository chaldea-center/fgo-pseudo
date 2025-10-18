void ScriptObjectListViewManager___ctor(ScriptObjectListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void ScriptObjectListViewManager__CreateList(
        ScriptObjectListViewManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectNameList; // x0
  __int64 v6; // x22
  System_Collections_Generic_List_object__o *v7; // x20
  __int64 v8; // x0
  unsigned __int64 v9; // x21
  __int64 v10; // x24
  __int64 v11; // x23
  __int64 v12; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  __int64 v20; // x8

  if ( (byte_4C405B3 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C37058(&ScriptObjectListViewItem_TypeInfo);
    byte_4C405B3 = 1;
  }
  if ( data )
  {
    ObjectNameList = (System_Collections_Generic_List_object__o *)AssetData__GetObjectNameList(data, 0);
    if ( !ObjectNameList )
      goto LABEL_17;
    v6 = *(_QWORD *)&ObjectNameList->fields._size;
    v7 = ObjectNameList;
    ListViewManager__CreateList((ListViewManager_o *)this, v6, 0);
    if ( (int)v6 >= 1 )
    {
      v9 = 0;
      v10 = (unsigned int)v6;
      while ( 1 )
      {
        if ( v9 >= (unsigned int)v7->fields._size )
          sub_1C372BC(v8);
        v11 = *((_QWORD *)&v7->fields._syncRoot + v9);
        v12 = sub_1C372A4(ScriptObjectListViewItem_TypeInfo);
        ListViewItem___ctor_43804668((ListViewItem_o *)v12, v9, 0);
        *(_QWORD *)(v12 + 120) = v11;
        sub_1C36FFC((CGThumbnailListItem_o *)(v12 + 120), v11, v13, v14);
        ObjectNameList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !ObjectNameList )
          break;
        items = ObjectNameList->fields._items;
        v18 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++ObjectNameList->fields._version;
        if ( !items )
          break;
        size = ObjectNameList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            ObjectNameList,
            (Il2CppObject *)v12,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = (__int64)items + 8 * size;
          ObjectNameList->fields._size = size + 1;
          *(_QWORD *)(v20 + 32) = v12;
          sub_1C36FFC((CGThumbnailListItem_o *)(v20 + 32), v12, v15, v16);
        }
        if ( v10 == ++v9 )
          goto LABEL_16;
      }
LABEL_17:
      sub_1C372B4(ObjectNameList);
    }
  }
  else
  {
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  }
LABEL_16:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void ScriptObjectListViewManager__DestroyList(ScriptObjectListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


ScriptObjectListViewItem_o *ScriptObjectListViewManager__GetItem(
        ScriptObjectListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ScriptObjectListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C405B4 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&ScriptObjectListViewItem_TypeInfo);
    byte_4C405B4 = 1;
  }
  result = (ScriptObjectListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ScriptObjectListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = ScriptObjectListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (ScriptObjectListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != ScriptObjectListViewItem_TypeInfo )
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


void ScriptObjectListViewManager__OnClickListView(
        ScriptObjectListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ScriptObjectListViewManager_o *v4; // x20
  struct ScriptObjectListViewManager_CallbackFunc_o *callbackFunc; // x8
  struct ListViewItem_o *linkItem; // x9
  __int64 naturalAligment; // x12
  struct ListViewItem_o *v8; // x2

  v4 = this;
  if ( (byte_4C405B9 & 1) == 0 )
  {
    this = (ScriptObjectListViewManager_o *)sub_1C37058(&ScriptObjectListViewItem_TypeInfo);
    byte_4C405B9 = 1;
  }
  callbackFunc = v4->fields.callbackFunc;
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C372B4(this);
    linkItem = obj->fields.linkItem;
    if ( linkItem
      && (naturalAligment = ScriptObjectListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (ScriptObjectListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == ScriptObjectListViewItem_TypeInfo )
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
      2,
      v8,
      callbackFunc->fields.method);
  }
}


void ScriptObjectListViewManager__OnMoveEnd(ScriptObjectListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UIScrollView_o *v9; // x0
  struct ScriptObjectListViewManager_CallbackFunc_o *callbackFunc; // x20

  if ( (byte_4C405B8 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C405B8 = 1;
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
          sub_1C372B4(0);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v9->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v9,
          1,
          v9->klass->vtable._8_UpdateScrollbars.method);
      }
      if ( !this->fields.isInput )
      {
        callbackFunc = this->fields.callbackFunc;
        if ( callbackFunc )
        {
          this->fields.callbackFunc = 0;
          sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v7, v8);
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
void ScriptObjectListViewManager__RequestListObject(
        ScriptObjectListViewManager_o *this,
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

  if ( (byte_4C405B6 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ScriptObjectListViewObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ScriptObjectListViewObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ScriptObjectListViewObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ScriptObjectListViewObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ScriptObjectListViewObject__get_Count__);
    sub_1C37058(&Method_ScriptObjectListViewManager_OnMoveEnd__);
    sub_1C37058(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C405B6 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptObjectListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C372B4(0);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ScriptObjectListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ScriptObjectListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v10 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_ScriptObjectListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C372B4(v11);
      ScriptObjectListViewObject__Init_37462628((ScriptObjectListViewObject_o *)current, mode, v10, delay, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ScriptObjectListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void ScriptObjectListViewManager__RequestListObject_37461600(
        ScriptObjectListViewManager_o *this,
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

  if ( (byte_4C405B7 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ScriptObjectListViewObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ScriptObjectListViewObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ScriptObjectListViewObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ScriptObjectListViewObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ScriptObjectListViewObject__get_Count__);
    sub_1C37058(&Method_ScriptObjectListViewManager_OnMoveEnd__);
    sub_1C37058(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C405B7 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptObjectListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C372B4(0);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      ObjectList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ScriptObjectListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ScriptObjectListViewObject__MoveNext__) )
    {
      current = v11.fields._current;
      v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_ScriptObjectListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C372B4(v9);
      ScriptObjectListViewObject__Init_37462712((ScriptObjectListViewObject_o *)current, mode, v8, v10);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ScriptObjectListViewObject__Dispose__);
  }
}


void ScriptObjectListViewManager__SetMode(ScriptObjectListViewManager_o *this, int32_t mode, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ScriptObjectListViewManager__SetMode_37461488(this, mode, 0, v3);
}


void ScriptObjectListViewManager__SetMode_37461488(
        ScriptObjectListViewManager_o *this,
        int32_t mode,
        ScriptObjectListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.initMode = mode;
  this->fields.callbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0);
  if ( mode == 1 )
    ScriptObjectListViewManager__RequestListObject_37461600(this, 3, v6);
}


void ScriptObjectListViewManager__SetObjectItem(
        ScriptObjectListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ScriptObjectListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4C405B5 & 1) == 0 )
  {
    this = (ScriptObjectListViewManager_o *)sub_1C37058(&ScriptObjectListViewObject_TypeInfo);
    byte_4C405B5 = 1;
  }
  if ( !obj
    || (naturalAligment = ScriptObjectListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ScriptObjectListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ScriptObjectListViewObject_TypeInfo )
  {
    sub_1C372B4(this);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ScriptObjectListViewObject__Init_37461408((ScriptObjectListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void ScriptObjectListViewManager__add_callbackFunc(
        ScriptObjectListViewManager_o *this,
        ScriptObjectListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct ScriptObjectListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ScriptObjectListViewManager_o *v10; // x0
  ScriptObjectListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C405B0 & 1) == 0 )
  {
    sub_1C37058(&ScriptObjectListViewManager_CallbackFunc_TypeInfo);
    byte_4C405B0 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (ScriptObjectListViewManager_CallbackFunc_c *)v7->klass != ScriptObjectListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C712B0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C37574(v7);
  ScriptObjectListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_ScriptObjectListViewObject__o *ScriptObjectListViewManager__get_ObjectList(
        ScriptObjectListViewManager_o *this,
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

  if ( (byte_4C405B2 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ScriptObjectListViewObject___);
    sub_1C37058(&Method_System_Collections_Generic_List_ScriptObjectListViewObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ScriptObjectListViewObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ScriptObjectListViewObject__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C405B2 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ScriptObjectListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ScriptObjectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_1C372B4(v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ScriptObjectListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1C372B4(Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_ScriptObjectListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C372B4(Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v10, v8, v9);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ScriptObjectListViewObject__o *)v3;
}


void ScriptObjectListViewManager__remove_callbackFunc(
        ScriptObjectListViewManager_o *this,
        ScriptObjectListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct ScriptObjectListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ScriptObjectListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C405B1 & 1) == 0 )
  {
    sub_1C37058(&ScriptObjectListViewManager_CallbackFunc_TypeInfo);
    byte_4C405B1 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (ScriptObjectListViewManager_CallbackFunc_c *)v7->klass != ScriptObjectListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C712B0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C37574(v7);
  ScriptObjectListViewManager__get_ObjectList(v10, v11);
}


void ScriptObjectListViewManager_CallbackFunc___ctor(
        ScriptObjectListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A78E88;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A78E30;
}


System_IAsyncResult_o *ScriptObjectListViewManager_CallbackFunc__BeginInvoke(
        ScriptObjectListViewManager_CallbackFunc_o *this,
        int32_t result,
        ScriptObjectListViewItem_o *item,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = result;
  if ( (byte_4C405BA & 1) == 0 )
  {
    sub_1C37058(&ScriptObjectListViewManager_ResultKind_TypeInfo);
    byte_4C405BA = 1;
  }
  v13[2] = 0;
  v13[0] = j_il2cpp_value_box_0(
             ScriptObjectListViewManager_ResultKind_TypeInfo,
             &v14,
             item,
             callback,
             object,
             method,
             v6,
             v7);
  v13[1] = item;
  return (System_IAsyncResult_o *)sub_1C3700C(this, v13, callback, object);
}


void ScriptObjectListViewManager_CallbackFunc__EndInvoke(
        ScriptObjectListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void ScriptObjectListViewManager_CallbackFunc__Invoke(
        ScriptObjectListViewManager_CallbackFunc_o *this,
        int32_t result,
        ScriptObjectListViewItem_o *item,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, ScriptObjectListViewItem_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    item,
    this->fields.method);
}