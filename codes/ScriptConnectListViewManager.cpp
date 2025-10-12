void ScriptConnectListViewManager___ctor(ScriptConnectListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void ScriptConnectListViewManager__CreateList(
        ScriptConnectListViewManager_o *this,
        System_String_array *scriptFileList,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x22
  __int64 v6; // x0
  unsigned __int64 v7; // x21
  __int64 v8; // x24
  System_String_o *v9; // x23
  __int64 v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x8

  if ( (byte_4C34F86 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C32C20(&ScriptConnectListViewItem_TypeInfo);
    byte_4C34F86 = 1;
  }
  if ( scriptFileList )
  {
    max_length = scriptFileList->max_length;
    ListViewManager__CreateList((ListViewManager_o *)this, max_length, 0);
    if ( (int)max_length >= 1 )
    {
      v7 = 0;
      v8 = (unsigned int)max_length;
      do
      {
        if ( v7 >= LODWORD(scriptFileList->max_length) )
          sub_1C32E84(v6);
        v9 = scriptFileList->m_Items[v7];
        v10 = sub_1C32E6C(ScriptConnectListViewItem_TypeInfo);
        ListViewItem___ctor_43702564((ListViewItem_o *)v10, v7, 0);
        *(_QWORD *)(v10 + 120) = v9;
        sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 120), (int32_t)v9, v11, v12);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList
          || (items = itemList->fields._items,
              v17 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
          sub_1C32E7C(itemList);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v10,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v10;
          sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 4), v10, v13, v14);
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


void ScriptConnectListViewManager__DestroyList(ScriptConnectListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


ScriptConnectListViewItem_o *ScriptConnectListViewManager__GetItem(
        ScriptConnectListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ScriptConnectListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C34F87 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C32C20(&ScriptConnectListViewItem_TypeInfo);
    byte_4C34F87 = 1;
  }
  result = (ScriptConnectListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ScriptConnectListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)result,
                                              index,
                                              (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = ScriptConnectListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (ScriptConnectListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != ScriptConnectListViewItem_TypeInfo )
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


void ScriptConnectListViewManager__OnClickListView(
        ScriptConnectListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void ScriptConnectListViewManager__OnClickSingleListView(
        ScriptConnectListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ScriptConnectListViewManager_o *v4; // x20
  struct ScriptConnectListViewManager_CallbackFunc_o *callbackFunc; // x8
  struct ListViewItem_o *linkItem; // x9
  __int64 naturalAligment; // x12
  struct ListViewItem_o *v8; // x2

  v4 = this;
  if ( (byte_4C34F8C & 1) == 0 )
  {
    this = (ScriptConnectListViewManager_o *)sub_1C32C20(&ScriptConnectListViewItem_TypeInfo);
    byte_4C34F8C = 1;
  }
  callbackFunc = v4->fields.callbackFunc;
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C32E7C(this);
    linkItem = obj->fields.linkItem;
    if ( linkItem
      && (naturalAligment = ScriptConnectListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (ScriptConnectListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == ScriptConnectListViewItem_TypeInfo )
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


void ScriptConnectListViewManager__OnLongPushListView(
        ScriptConnectListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ScriptConnectListViewManager_o *v4; // x20
  struct ScriptConnectListViewManager_CallbackFunc_o *callbackFunc; // x8
  struct ListViewItem_o *linkItem; // x9
  __int64 naturalAligment; // x12
  struct ListViewItem_o *v8; // x2

  v4 = this;
  if ( (byte_4C34F8D & 1) == 0 )
  {
    this = (ScriptConnectListViewManager_o *)sub_1C32C20(&ScriptConnectListViewItem_TypeInfo);
    byte_4C34F8D = 1;
  }
  callbackFunc = v4->fields.callbackFunc;
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C32E7C(this);
    linkItem = obj->fields.linkItem;
    if ( linkItem
      && (naturalAligment = ScriptConnectListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (ScriptConnectListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == ScriptConnectListViewItem_TypeInfo )
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


void ScriptConnectListViewManager__OnMoveEnd(ScriptConnectListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UIScrollView_o *v9; // x0
  struct ScriptConnectListViewManager_CallbackFunc_o *callbackFunc; // x20

  if ( (byte_4C34F8B & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C34F8B = 1;
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
      if ( !this->fields.isInput )
      {
        callbackFunc = this->fields.callbackFunc;
        if ( callbackFunc )
        {
          this->fields.callbackFunc = 0;
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v7, v8);
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
void ScriptConnectListViewManager__RequestListObject(
        ScriptConnectListViewManager_o *this,
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

  if ( (byte_4C34F89 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ScriptConnectListViewObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ScriptConnectListViewObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ScriptConnectListViewObject__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptConnectListViewObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptConnectListViewObject__get_Count__);
    sub_1C32C20(&Method_ScriptConnectListViewManager_OnMoveEnd__);
    sub_1C32C20(&StringLiteral_9941/*"OnMoveEnd"*/);
    byte_4C34F89 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptConnectListViewManager__get_ObjectList(
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
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ScriptConnectListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ScriptConnectListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v10 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_ScriptConnectListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C32E7C(v11);
      ScriptConnectListViewObject__Init_37341628((ScriptConnectListViewObject_o *)current, mode, v10, delay, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ScriptConnectListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void ScriptConnectListViewManager__RequestListObject_37340600(
        ScriptConnectListViewManager_o *this,
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

  if ( (byte_4C34F8A & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ScriptConnectListViewObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ScriptConnectListViewObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ScriptConnectListViewObject__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptConnectListViewObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptConnectListViewObject__get_Count__);
    sub_1C32C20(&Method_ScriptConnectListViewManager_OnMoveEnd__);
    sub_1C32C20(&StringLiteral_9941/*"OnMoveEnd"*/);
    byte_4C34F8A = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ObjectList = (System_Collections_Generic_List_object__o *)ScriptConnectListViewManager__get_ObjectList(
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
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ScriptConnectListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ScriptConnectListViewObject__MoveNext__) )
    {
      current = v11.fields._current;
      v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_ScriptConnectListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C32E7C(v9);
      ScriptConnectListViewObject__Init_37341712((ScriptConnectListViewObject_o *)current, mode, v8, v10);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ScriptConnectListViewObject__Dispose__);
  }
}


void ScriptConnectListViewManager__SetMode(
        ScriptConnectListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ScriptConnectListViewManager__SetMode_37340488(this, mode, 0, v3);
}


void ScriptConnectListViewManager__SetMode_37340488(
        ScriptConnectListViewManager_o *this,
        int32_t mode,
        ScriptConnectListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.initMode = mode;
  this->fields.callbackFunc = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0);
  if ( mode == 1 )
    ScriptConnectListViewManager__RequestListObject_37340600(this, 3, v6);
}


void ScriptConnectListViewManager__SetObjectItem(
        ScriptConnectListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ScriptConnectListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4C34F88 & 1) == 0 )
  {
    this = (ScriptConnectListViewManager_o *)sub_1C32C20(&ScriptConnectListViewObject_TypeInfo);
    byte_4C34F88 = 1;
  }
  if ( !obj
    || (naturalAligment = ScriptConnectListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ScriptConnectListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ScriptConnectListViewObject_TypeInfo )
  {
    sub_1C32E7C(this);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ScriptConnectListViewObject__Init_37340408((ScriptConnectListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void ScriptConnectListViewManager__add_callbackFunc(
        ScriptConnectListViewManager_o *this,
        ScriptConnectListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct ScriptConnectListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ScriptConnectListViewManager_o *v10; // x0
  ScriptConnectListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C34F83 & 1) == 0 )
  {
    sub_1C32C20(&ScriptConnectListViewManager_CallbackFunc_TypeInfo);
    byte_4C34F83 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (ScriptConnectListViewManager_CallbackFunc_c *)v7->klass != ScriptConnectListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C6CE78(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3313C(v7);
  ScriptConnectListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_ScriptConnectListViewObject__o *ScriptConnectListViewManager__get_ObjectList(
        ScriptConnectListViewManager_o *this,
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

  if ( (byte_4C34F85 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_ScriptConnectListViewObject___);
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptConnectListViewObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptConnectListViewObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ScriptConnectListViewObject__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C34F85 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ScriptConnectListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ScriptConnectListViewObject___ctor__);
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
                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_ScriptConnectListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1C32E7C(Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_ScriptConnectListViewObject__Add__;
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
  return (System_Collections_Generic_List_ScriptConnectListViewObject__o *)v3;
}


void ScriptConnectListViewManager__remove_callbackFunc(
        ScriptConnectListViewManager_o *this,
        ScriptConnectListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct ScriptConnectListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ScriptConnectListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C34F84 & 1) == 0 )
  {
    sub_1C32C20(&ScriptConnectListViewManager_CallbackFunc_TypeInfo);
    byte_4C34F84 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (ScriptConnectListViewManager_CallbackFunc_c *)v7->klass != ScriptConnectListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C6CE78(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3313C(v7);
  ScriptConnectListViewManager__get_ObjectList(v10, v11);
}


void ScriptConnectListViewManager_CallbackFunc___ctor(
        ScriptConnectListViewManager_CallbackFunc_o *this,
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A74778;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A74720;
}


System_IAsyncResult_o *ScriptConnectListViewManager_CallbackFunc__BeginInvoke(
        ScriptConnectListViewManager_CallbackFunc_o *this,
        int32_t result,
        ScriptConnectListViewItem_o *item,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = result;
  if ( (byte_4C34F8E & 1) == 0 )
  {
    sub_1C32C20(&ScriptConnectListViewManager_ResultKind_TypeInfo);
    byte_4C34F8E = 1;
  }
  v13[2] = 0;
  v13[0] = j_il2cpp_value_box_0(
             ScriptConnectListViewManager_ResultKind_TypeInfo,
             &v14,
             item,
             callback,
             object,
             method,
             v6,
             v7);
  v13[1] = item;
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v13, callback, object);
}


void ScriptConnectListViewManager_CallbackFunc__EndInvoke(
        ScriptConnectListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
}


void ScriptConnectListViewManager_CallbackFunc__Invoke(
        ScriptConnectListViewManager_CallbackFunc_o *this,
        int32_t result,
        ScriptConnectListViewItem_o *item,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, ScriptConnectListViewItem_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    item,
    this->fields.method);
}