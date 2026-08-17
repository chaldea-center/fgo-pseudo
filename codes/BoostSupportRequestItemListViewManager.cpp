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
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v10; // x26
  int32_t v11; // w23
  BoostEntity_o *v12; // x25
  BoostSupportRequsetItemListViewItem_o *v13; // x24
  const MethodInfo *v14; // x5
  intptr_t m_CachedPtr; // x8
  _QWORD *v16; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v18; // x8

  v8 = this;
  if ( (byte_5969E71 & 1) == 0 )
  {
    sub_2213A60(&BoostSupportRequsetItemListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    this = (BoostSupportRequestItemListViewManager_o *)sub_2213A60(&StringLiteral_23356/*"no data(test label)"*/);
    byte_5969E71 = 1;
  }
  if ( !boostEntityList )
    goto LABEL_18;
  ListViewManager__CreateList((ListViewManager_o *)v8, boostEntityList->max_length, 0);
  max_length = boostEntityList->max_length;
  if ( (int)max_length >= 1 )
  {
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)max_length )
        sub_2213CE4(this);
      v12 = boostEntityList->m_Items[v10];
      v13 = (BoostSupportRequsetItemListViewItem_o *)sub_2213CCC(BoostSupportRequsetItemListViewItem_TypeInfo);
      BoostSupportRequsetItemListViewItem___ctor(v13, v11, v12, usrItemEntityList, recommendedBoostIds, v14);
      if ( !v13 )
        break;
      if ( !v13->fields.isHide )
      {
        this = (BoostSupportRequestItemListViewManager_o *)v8->fields.itemList;
        if ( !this )
          break;
        m_CachedPtr = this->fields.m_CachedPtr;
        v16 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v13,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v18 + 32) = v13;
          this = (BoostSupportRequestItemListViewManager_o *)sub_2213A04(v18 + 32, v13);
        }
        ++v11;
      }
      LODWORD(max_length) = boostEntityList->max_length;
      if ( (__int64)++v10 >= (int)max_length )
        goto LABEL_16;
    }
LABEL_18:
    sub_2213CDC(this, boostEntityList);
  }
LABEL_16:
  this = (BoostSupportRequestItemListViewManager_o *)v8->fields.emptyMessageLabel;
  if ( !this )
    goto LABEL_18;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_23356/*"no data(test label)"*/, 0);
  ListViewManager__SortItem((ListViewManager_o *)v8, -1, 0, -1, 0);
}


BoostSupportRequsetItemListViewItem_o *BoostSupportRequestItemListViewManager__GetItem(
        BoostSupportRequestItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BoostSupportRequsetItemListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_5969E6F & 1) == 0 )
  {
    sub_2213A60(&BoostSupportRequsetItemListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_5969E6F = 1;
  }
  result = (BoostSupportRequsetItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (BoostSupportRequsetItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)result,
                                                        index,
                                                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 Index; // x2
  intptr_t method_code; // x0
  intptr_t v12; // x3
  void (__fastcall *invoke_impl)(intptr_t, __int64, __int64, intptr_t); // x4
  __int64 v14; // x1

  v4 = this;
  if ( (byte_5969E75 & 1) == 0 )
  {
    sub_2213A60(&Method_BoostSupportRequestItemListViewManager_OnClickListView__);
    this = (BoostSupportRequestItemListViewManager_o *)sub_2213A60(&BoostSupportRequestItemListViewObject_TypeInfo);
    byte_5969E75 = 1;
  }
  callbackFunc = v4->fields.callbackFunc;
  if ( callbackFunc )
  {
    if ( !obj
      || (naturalAligment = BoostSupportRequestItemListViewObject_TypeInfo->_2.naturalAligment,
          obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (BoostSupportRequestItemListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != BoostSupportRequestItemListViewObject_TypeInfo )
    {
      sub_2213CDC(this, obj);
    }
    v7 = *((_DWORD *)&obj->fields.isBusy + 1);
    if ( v7 == 3 )
    {
      Index = (unsigned int)ListViewObject__get_Index(obj, 0);
      method_code = callbackFunc->fields.method_code;
      v12 = callbackFunc->fields.method;
      invoke_impl = (void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl;
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
            v8 = (_QWORD *)sub_2213A78();
          v9 = (System_Reflection_MethodBase_o *)sub_2213A44(v8, v8[4]);
          OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0);
        }
        return;
      }
      Index = (unsigned int)ListViewObject__get_Index(obj, 0);
      method_code = callbackFunc->fields.method_code;
      v12 = callbackFunc->fields.method;
      invoke_impl = (void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl;
      v14 = 2;
    }
    invoke_impl(method_code, v14, Index, v12);
  }
}


void BoostSupportRequestItemListViewManager__OnMoveEnd(
        BoostSupportRequestItemListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  struct UIScrollView_o *v10; // x0

  if ( (byte_5969E74 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5969E74 = 1;
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_2213CDC(0, v9);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v10->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v10,
          1,
          v10->klass->vtable._8_UpdateScrollbars.method);
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
  const MethodInfo_448473C *v6; // x1
  Il2CppObject *current; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  __int64 v12; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_object__o *v13; // [xsp+10h] [xbp-60h]
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_5969E73 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BoostSupportRequestItemListViewManager_OnMoveEnd__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BoostSupportRequestItemListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BoostSupportRequestItemListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BoostSupportRequestItemListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject__get_Count__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_5969E73 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  ObjectList = (System_Collections_Generic_List_object__o *)BoostSupportRequestItemListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    sub_2213CDC(0, v4);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v6 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      ObjectList,
      v6);
    v12 = 0;
    v13 = &v14;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BoostSupportRequestItemListViewObject__MoveNext__) )
    {
      current = v14.fields._current;
      v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_BoostSupportRequestItemListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v9, v10);
      BoostSupportRequestItemListViewObject__Init((BoostSupportRequestItemListViewObject_o *)current, v8, 0, v11);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BoostSupportRequestItemListViewObject__Dispose__);
  }
}


void BoostSupportRequestItemListViewManager__SetCallBack(
        BoostSupportRequestItemListViewManager_o *this,
        BoostSupportRequestItemListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  this->fields.callbackFunc = callback;
  sub_2213A04(&this->fields.callbackFunc, callback);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  BoostSupportRequestItemListViewManager__RequestListObject(this, v4);
}


void BoostSupportRequestItemListViewManager__SetObjectItem(
        BoostSupportRequestItemListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  System_Action_o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  __int64 naturalAligment; // x10

  if ( (byte_5969E72 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BoostSupportRequestItemListViewManager_OnMoveEnd__);
    sub_2213A60(&BoostSupportRequestItemListViewObject_TypeInfo);
    byte_5969E72 = 1;
  }
  v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_BoostSupportRequestItemListViewManager_OnMoveEnd__, 0);
  if ( !obj
    || (naturalAligment = BoostSupportRequestItemListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (BoostSupportRequestItemListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != BoostSupportRequestItemListViewObject_TypeInfo )
  {
    sub_2213CDC(v7, v8);
  }
  BoostSupportRequestItemListViewObject__Init((BoostSupportRequestItemListViewObject_o *)obj, v6, 0, v9);
}


void BoostSupportRequestItemListViewManager__add_callbackFunc(
        BoostSupportRequestItemListViewManager_o *this,
        BoostSupportRequestItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  BoostSupportRequestItemListViewManager_o *v11; // x0
  BoostSupportRequestItemListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_5969E6D & 1) == 0 )
  {
    sub_2213A60(&BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo);
    byte_5969E6D = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (BoostSupportRequestItemListViewManager_CallbackFunc_c *)v6->klass != BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestItemListViewManager_o *)sub_221405C(
                                                      v6,
                                                      BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo,
                                                      v7,
                                                      v8);
  BoostSupportRequestItemListViewManager__remove_callbackFunc(v11, v12, v13);
}


System_Collections_Generic_List_BoostSupportRequestItemListViewObject__o *BoostSupportRequestItemListViewManager__get_ObjectList(
        BoostSupportRequestItemListViewManager_o *this,
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
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_5969E70 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BoostSupportRequestItemListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BoostSupportRequestItemListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5969E70 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BoostSupportRequestItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  v18.fields._list = 0;
  *(_QWORD *)&v18.fields._index = &v19;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BoostSupportRequestItemListViewObject___);
      v12 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v14 = Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_2213CDC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_2213A04(v16 + 4, v12);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BoostSupportRequestItemListViewObject__o *)v3;
}


void BoostSupportRequestItemListViewManager__remove_callbackFunc(
        BoostSupportRequestItemListViewManager_o *this,
        BoostSupportRequestItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  BoostSupportRequestItemListViewManager_o *v11; // x0
  int32_t v12; // w1
  const MethodInfo *v13; // x2

  if ( (byte_5969E6E & 1) == 0 )
  {
    sub_2213A60(&BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo);
    byte_5969E6E = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (BoostSupportRequestItemListViewManager_CallbackFunc_c *)v6->klass != BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestItemListViewManager_o *)sub_221405C(
                                                      v6,
                                                      BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo,
                                                      v7,
                                                      v8);
  BoostSupportRequestItemListViewManager__GetItem(v11, v12, v13);
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
  sub_2213A04(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FFE6F0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FFE698;
}


System_IAsyncResult_o *BoostSupportRequestItemListViewManager_CallbackFunc__BeginInvoke(
        BoostSupportRequestItemListViewManager_CallbackFunc_o *this,
        int32_t result,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v12 = result;
  v11 = index;
  if ( (byte_5969E76 & 1) == 0 )
  {
    sub_2213A60(&BoostSupportRequestItemListViewManager_ResultKind_TypeInfo);
    byte_5969E76 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(BoostSupportRequestItemListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_5984348, &v11);
  return (System_IAsyncResult_o *)sub_2213A14(this, v10, callback, object);
}


void BoostSupportRequestItemListViewManager_CallbackFunc__EndInvoke(
        BoostSupportRequestItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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