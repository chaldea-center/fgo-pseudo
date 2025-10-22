void BoostSupportRequestItemListViewManager___ctor(
        BoostSupportRequestItemListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void BoostSupportRequestItemListViewManager__CreateList(
        BoostSupportRequestItemListViewManager_o *this,
        BoostEntity_array *boostEntityList,
        System_Int32_array *recommendedBoostIds,
        UserItemEntity_array *usrItemEntityList,
        const MethodInfo *method)
{
  BoostSupportRequestItemListViewManager_o *v8; // x19
  __int64 v9; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v11; // x26
  int32_t v12; // w23
  BoostEntity_o *v13; // x25
  BoostSupportRequsetItemListViewItem_o *v14; // x24
  const MethodInfo *v15; // x5
  intptr_t m_CachedPtr; // x8
  _QWORD *v17; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v19; // x8

  v8 = this;
  if ( (byte_4C50A60 & 1) == 0 )
  {
    sub_1C3E564(&BoostSupportRequsetItemListViewItem_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    this = (BoostSupportRequestItemListViewManager_o *)sub_1C3E564(&StringLiteral_22253/*"no data(test label)"*/);
    byte_4C50A60 = 1;
  }
  if ( !boostEntityList )
    goto LABEL_18;
  ListViewManager__CreateList((ListViewManager_o *)v8, boostEntityList->max_length, 0);
  max_length = boostEntityList->max_length;
  if ( (int)max_length >= 1 )
  {
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)max_length )
        sub_1C3E7C8(this, boostEntityList, v9);
      v13 = boostEntityList->m_Items[v11];
      v14 = (BoostSupportRequsetItemListViewItem_o *)sub_1C3E7B0(BoostSupportRequsetItemListViewItem_TypeInfo);
      BoostSupportRequsetItemListViewItem___ctor(v14, v12, v13, usrItemEntityList, recommendedBoostIds, v15);
      if ( !v14 )
        break;
      if ( !v14->fields.isHide )
      {
        this = (BoostSupportRequestItemListViewManager_o *)v8->fields.itemList;
        if ( !this )
          break;
        m_CachedPtr = this->fields.m_CachedPtr;
        v17 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v14,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v19 + 32) = v14;
          this = (BoostSupportRequestItemListViewManager_o *)sub_1C3E508(v19 + 32, v14);
        }
        ++v12;
      }
      LODWORD(max_length) = boostEntityList->max_length;
      if ( (__int64)++v11 >= (int)max_length )
        goto LABEL_16;
    }
LABEL_18:
    sub_1C3E7C0(this, boostEntityList);
  }
LABEL_16:
  this = (BoostSupportRequestItemListViewManager_o *)v8->fields.emptyMessageLabel;
  if ( !this )
    goto LABEL_18;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_22253/*"no data(test label)"*/, 0);
  ListViewManager__SortItem((ListViewManager_o *)v8, -1, 0, -1, 0);
}


BoostSupportRequsetItemListViewItem_o *BoostSupportRequestItemListViewManager__GetItem(
        BoostSupportRequestItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BoostSupportRequsetItemListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C50A5E & 1) == 0 )
  {
    sub_1C3E564(&BoostSupportRequsetItemListViewItem_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C50A5E = 1;
  }
  result = (BoostSupportRequsetItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (BoostSupportRequsetItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)result,
                                                        index,
                                                        (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = BoostSupportRequsetItemListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (BoostSupportRequsetItemListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != BoostSupportRequsetItemListViewItem_TypeInfo )
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


void BoostSupportRequestItemListViewManager__OnClickListView(
        BoostSupportRequestItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  BoostSupportRequestItemListViewManager_o *v4; // x20
  struct BoostSupportRequestItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 naturalAligment; // x10
  int v7; // w8
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  unsigned int Index; // w0
  void (__fastcall *invoke_impl)(intptr_t, __int64, _QWORD, intptr_t); // x4
  intptr_t method_code; // x8
  intptr_t v13; // x3
  __int64 v14; // x1

  v4 = this;
  if ( (byte_4C50A64 & 1) == 0 )
  {
    sub_1C3E564(&Method_BoostSupportRequestItemListViewManager_OnClickListView__);
    this = (BoostSupportRequestItemListViewManager_o *)sub_1C3E564(&BoostSupportRequestItemListViewObject_TypeInfo);
    byte_4C50A64 = 1;
  }
  callbackFunc = v4->fields.callbackFunc;
  if ( callbackFunc )
  {
    if ( !obj
      || (naturalAligment = BoostSupportRequestItemListViewObject_TypeInfo->_2.naturalAligment,
          obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (BoostSupportRequestItemListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != BoostSupportRequestItemListViewObject_TypeInfo )
    {
      sub_1C3E7C0(this, obj);
    }
    v7 = *((_DWORD *)&obj->fields.isBusy + 1);
    if ( v7 == 3 )
    {
      Index = ListViewObject__get_Index(obj, 0);
      invoke_impl = (void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl;
      method_code = callbackFunc->fields.method_code;
      v13 = callbackFunc->fields.method;
      v14 = 3;
    }
    else
    {
      if ( v7 != 2 )
      {
        if ( v7 == 1 )
        {
          v8 = Method_BoostSupportRequestItemListViewManager_OnClickListView__;
          if ( (*((_BYTE *)Method_BoostSupportRequestItemListViewManager_OnClickListView__ + 83) & 2) != 0 )
            v8 = (_QWORD *)sub_1C3E57C();
          v9 = (System_Reflection_MethodBase_o *)sub_1C3E548(v8, v8[4]);
          OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0);
        }
        return;
      }
      Index = ListViewObject__get_Index(obj, 0);
      invoke_impl = (void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl;
      method_code = callbackFunc->fields.method_code;
      v13 = callbackFunc->fields.method;
      v14 = 2;
    }
    invoke_impl(method_code, v14, Index, v13);
  }
}


void BoostSupportRequestItemListViewManager__OnMoveEnd(
        BoostSupportRequestItemListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0

  if ( (byte_4C50A63 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C50A63 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0);
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_1C3E7C0(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v8->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v8,
          1,
          v8->klass->vtable._8_UpdateScrollbars.method);
      }
    }
  }
}


void BoostSupportRequestItemListViewManager__RequestListObject(
        BoostSupportRequestItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  int32_t size; // w8
  Il2CppObject *current; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C50A62 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_BoostSupportRequestItemListViewManager_OnMoveEnd__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_BoostSupportRequestItemListViewObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_BoostSupportRequestItemListViewObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_BoostSupportRequestItemListViewObject__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject__get_Count__);
    sub_1C3E564(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C50A62 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ObjectList = (System_Collections_Generic_List_object__o *)BoostSupportRequestItemListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    sub_1C3E7C0(0, v4);
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
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_BoostSupportRequestItemListViewObject__MoveNext__) )
    {
      current = v11.fields._current;
      v7 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)this, Method_BoostSupportRequestItemListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C3E7C0(v8, v9);
      BoostSupportRequestItemListViewObject__Init((BoostSupportRequestItemListViewObject_o *)current, v7, 0, v10);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_BoostSupportRequestItemListViewObject__Dispose__);
  }
}


void BoostSupportRequestItemListViewManager__SetCallBack(
        BoostSupportRequestItemListViewManager_o *this,
        BoostSupportRequestItemListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  this->fields.callbackFunc = callback;
  sub_1C3E508(&this->fields.callbackFunc, callback);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  BoostSupportRequestItemListViewManager__RequestListObject(this, v4);
}


void BoostSupportRequestItemListViewManager__SetObjectItem(
        BoostSupportRequestItemListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  __int64 naturalAligment; // x10

  if ( (byte_4C50A61 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_BoostSupportRequestItemListViewManager_OnMoveEnd__);
    sub_1C3E564(&BoostSupportRequestItemListViewObject_TypeInfo);
    byte_4C50A61 = 1;
  }
  v6 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_BoostSupportRequestItemListViewManager_OnMoveEnd__, 0);
  if ( !obj
    || (naturalAligment = BoostSupportRequestItemListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (BoostSupportRequestItemListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != BoostSupportRequestItemListViewObject_TypeInfo )
  {
    sub_1C3E7C0(v7, v8);
  }
  BoostSupportRequestItemListViewObject__Init((BoostSupportRequestItemListViewObject_o *)obj, v6, 0, v9);
}


void BoostSupportRequestItemListViewManager__add_callbackFunc(
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

  if ( (byte_4C50A5C & 1) == 0 )
  {
    sub_1C3E564(&BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo);
    byte_4C50A5C = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (BoostSupportRequestItemListViewManager_CallbackFunc_c *)v7->klass != BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C787BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (BoostSupportRequestItemListViewManager_o *)sub_1C3EA80(v7);
  BoostSupportRequestItemListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_BoostSupportRequestItemListViewObject__o *BoostSupportRequestItemListViewManager__get_ObjectList(
        BoostSupportRequestItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  Il2CppObject *v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C50A5F & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_BoostSupportRequestItemListViewObject___);
    sub_1C3E564(&Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BoostSupportRequestItemListViewObject__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C50A5F = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BoostSupportRequestItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C3E7C0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C3E7C0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BoostSupportRequestItemListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1C3E7C0(Component_object, Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C3E7C0(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1C3E508(v14 + 4, v10);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BoostSupportRequestItemListViewObject__o *)v3;
}


void BoostSupportRequestItemListViewManager__remove_callbackFunc(
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

  if ( (byte_4C50A5D & 1) == 0 )
  {
    sub_1C3E564(&BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo);
    byte_4C50A5D = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (BoostSupportRequestItemListViewManager_CallbackFunc_c *)v7->klass != BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C787BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (BoostSupportRequestItemListViewManager_o *)sub_1C3EA80(v7);
  BoostSupportRequestItemListViewManager__GetItem(v10, v11, v12);
}


void BoostSupportRequestItemListViewManager_CallbackFunc___ctor(
        BoostSupportRequestItemListViewManager_CallbackFunc_o *this,
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
  sub_1C3E508(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A797E4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7978C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *BoostSupportRequestItemListViewManager_CallbackFunc__BeginInvoke(
        BoostSupportRequestItemListViewManager_CallbackFunc_o *this,
        int32_t result,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6; // x6
  __int64 v7; // x7
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  _QWORD v18[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v19; // [xsp+28h] [xbp-38h] BYREF
  int32_t v20; // [xsp+2Ch] [xbp-34h] BYREF

  v19 = index;
  v20 = result;
  if ( (byte_4C50A65 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&BoostSupportRequestItemListViewManager_ResultKind_TypeInfo);
    byte_4C50A65 = 1;
  }
  v18[2] = 0;
  v18[0] = j_il2cpp_value_box_0(
             BoostSupportRequestItemListViewManager_ResultKind_TypeInfo,
             &v20,
             *(_QWORD *)&index,
             callback,
             object,
             method,
             v6,
             v7);
  v18[1] = j_il2cpp_value_box_0(int_TypeInfo, &v19, v11, v12, v13, v14, v15, v16);
  return (System_IAsyncResult_o *)sub_1C3E518(this, v18, callback, object);
}


void BoostSupportRequestItemListViewManager_CallbackFunc__EndInvoke(
        BoostSupportRequestItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
}


void BoostSupportRequestItemListViewManager_CallbackFunc__Invoke(
        BoostSupportRequestItemListViewManager_CallbackFunc_o *this,
        int32_t result,
        int32_t index,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    index,
    this->fields.method);
}