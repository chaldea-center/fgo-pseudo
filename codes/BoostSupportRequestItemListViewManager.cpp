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
  __int64 v15; // x8
  _QWORD *v16; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v18; // x8

  v8 = this;
  if ( (byte_4A56098 & 1) == 0 )
  {
    sub_1B885B0(&BoostSupportRequsetItemListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    this = (BoostSupportRequestItemListViewManager_o *)sub_1B885B0(&StringLiteral_22078/*"no data(test label)"*/);
    byte_4A56098 = 1;
  }
  if ( !boostEntityList )
    goto LABEL_15;
  ListViewManager__CreateList((ListViewManager_o *)v8, boostEntityList->max_length, 0LL);
  v10 = *(_QWORD *)&boostEntityList->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v10 )
        sub_1B88814(v9, boostEntityList);
      v12 = boostEntityList->m_Items[v11];
      v13 = (BoostSupportRequsetItemListViewItem_o *)sub_1B887FC(BoostSupportRequsetItemListViewItem_TypeInfo);
      BoostSupportRequsetItemListViewItem___ctor(v13, v11, v12, usrItemEntityList, recommendedBoostIds, v14);
      this = (BoostSupportRequestItemListViewManager_o *)v8->fields.itemList;
      if ( !this )
        break;
      v15 = *(_QWORD *)&this->fields.m_CachedPtr;
      v16 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v15 )
        break;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v15 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v13,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = v15 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v18 + 32) = v13;
        v9 = sub_1B88554(v18 + 32, v13);
      }
      LODWORD(v10) = boostEntityList->max_length;
      if ( (__int64)++v11 >= (int)v10 )
        goto LABEL_13;
    }
LABEL_15:
    sub_1B8880C(this, boostEntityList);
  }
LABEL_13:
  this = (BoostSupportRequestItemListViewManager_o *)v8->fields.emptyMessageLabel;
  if ( !this )
    goto LABEL_15;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_22078/*"no data(test label)"*/, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)v8, -1, 0, -1, 0LL);
}


BoostSupportRequsetItemListViewItem_o *__fastcall BoostSupportRequestItemListViewManager__GetItem(
        BoostSupportRequestItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BoostSupportRequsetItemListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A56096 & 1) == 0 )
  {
    sub_1B885B0(&BoostSupportRequsetItemListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4A56096 = 1;
  }
  result = (BoostSupportRequsetItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (BoostSupportRequsetItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)result,
                                                        index,
                                                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(BoostSupportRequsetItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (BoostSupportRequsetItemListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != BoostSupportRequsetItemListViewItem_TypeInfo )
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


void __fastcall BoostSupportRequestItemListViewManager__OnClickListView(
        BoostSupportRequestItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  BoostSupportRequestItemListViewManager_o *v4; // x20
  struct BoostSupportRequestItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 methodPtr_low; // x10
  int v7; // w8
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  unsigned int Index; // w0
  Il2CppObject *m_target; // x4
  struct System_Reflection_MethodInfo_o *original_method_info; // x8
  __int64 v13; // x3
  __int64 v14; // x1

  v4 = this;
  if ( (byte_4A5609C & 1) == 0 )
  {
    sub_1B885B0(&Method_BoostSupportRequestItemListViewManager_OnClickListView__);
    this = (BoostSupportRequestItemListViewManager_o *)sub_1B885B0(&BoostSupportRequestItemListViewObject_TypeInfo);
    byte_4A5609C = 1;
  }
  callbackFunc = v4->fields.callbackFunc;
  if ( callbackFunc )
  {
    if ( !obj
      || (methodPtr_low = LOBYTE(BoostSupportRequestItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (BoostSupportRequestItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != BoostSupportRequestItemListViewObject_TypeInfo )
    {
      sub_1B8880C(this, obj);
    }
    v7 = *((_DWORD *)&obj->fields.isBusy + 1);
    if ( v7 == 3 )
    {
      Index = ListViewObject__get_Index(obj, 0LL);
      m_target = callbackFunc->fields.m_target;
      original_method_info = callbackFunc->fields.original_method_info;
      v13 = *(_QWORD *)&callbackFunc->fields.extra_arg;
      v14 = 3LL;
    }
    else
    {
      if ( v7 != 2 )
      {
        if ( v7 == 1 )
        {
          v8 = Method_BoostSupportRequestItemListViewManager_OnClickListView__;
          if ( (*((_BYTE *)Method_BoostSupportRequestItemListViewManager_OnClickListView__ + 83) & 2) != 0 )
            v8 = (_QWORD *)sub_1B885C8();
          v9 = (System_Reflection_MethodBase_o *)sub_1B88594(v8, v8[4]);
          OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0LL);
        }
        return;
      }
      Index = ListViewObject__get_Index(obj, 0LL);
      m_target = callbackFunc->fields.m_target;
      original_method_info = callbackFunc->fields.original_method_info;
      v13 = *(_QWORD *)&callbackFunc->fields.extra_arg;
      v14 = 2LL;
    }
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, __int64))m_target)(
      original_method_info,
      v14,
      Index,
      v13);
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

  if ( (byte_4A5609B & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5609B = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_1B8880C(0LL, v7);
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  int32_t size; // w8
  Il2CppObject *current; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5609A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BoostSupportRequestItemListViewManager_OnMoveEnd__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BoostSupportRequestItemListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BoostSupportRequestItemListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BoostSupportRequestItemListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject__get_Count__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5609A = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ObjectList = (System_Collections_Generic_List_object__o *)BoostSupportRequestItemListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    sub_1B8880C(0LL, v4);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BoostSupportRequestItemListViewObject__MoveNext__) )
    {
      current = v11.fields._current;
      v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)this, Method_BoostSupportRequestItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v8, v9);
      BoostSupportRequestItemListViewObject__Init((BoostSupportRequestItemListViewObject_o *)current, v7, 0, v10);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BoostSupportRequestItemListViewObject__Dispose__);
  }
}


void __fastcall BoostSupportRequestItemListViewManager__SetCallBack(
        BoostSupportRequestItemListViewManager_o *this,
        BoostSupportRequestItemListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  this->fields.callbackFunc = callback;
  sub_1B88554(&this->fields.callbackFunc, callback);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  BoostSupportRequestItemListViewManager__RequestListObject(this, v4);
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
  __int64 methodPtr_low; // x10

  if ( (byte_4A56099 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BoostSupportRequestItemListViewManager_OnMoveEnd__);
    sub_1B885B0(&BoostSupportRequestItemListViewObject_TypeInfo);
    byte_4A56099 = 1;
  }
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_BoostSupportRequestItemListViewManager_OnMoveEnd__, 0LL);
  if ( !obj
    || (methodPtr_low = LOBYTE(BoostSupportRequestItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (BoostSupportRequestItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != BoostSupportRequestItemListViewObject_TypeInfo )
  {
    sub_1B8880C(v7, v8);
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

  if ( (byte_4A56094 & 1) == 0 )
  {
    sub_1B885B0(&BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo);
    byte_4A56094 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (BoostSupportRequestItemListViewManager_o *)sub_1B88ACC(v7);
  BoostSupportRequestItemListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_BoostSupportRequestItemListViewObject__o *__fastcall BoostSupportRequestItemListViewManager__get_ObjectList(
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

  if ( (byte_4A56097 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BoostSupportRequestItemListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BoostSupportRequestItemListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56097 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BoostSupportRequestItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BoostSupportRequestItemListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1B8880C(Component_object, Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1B88554(v14 + 4, v10);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4A56095 & 1) == 0 )
  {
    sub_1B885B0(&BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo);
    byte_4A56095 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (BoostSupportRequestItemListViewManager_o *)sub_1B88ACC(v7);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554(&this->fields.method, object);
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
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19C6C8C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C6C34;
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
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = index;
  v15 = result;
  if ( (byte_4A5609D & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&BoostSupportRequestItemListViewManager_ResultKind_TypeInfo);
    byte_4A5609D = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(
             BoostSupportRequestItemListViewManager_ResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&index,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1B88564(this, v13, callback, object);
}


void __fastcall BoostSupportRequestItemListViewManager_CallbackFunc__EndInvoke(
        BoostSupportRequestItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall BoostSupportRequestItemListViewManager_CallbackFunc__Invoke(
        BoostSupportRequestItemListViewManager_CallbackFunc_o *this,
        int32_t result,
        int32_t index,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    index,
    *(_QWORD *)&this->fields.extra_arg);
}