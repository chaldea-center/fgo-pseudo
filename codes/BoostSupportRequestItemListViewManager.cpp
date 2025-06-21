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
  __int64 v11; // x8
  unsigned __int64 v12; // x26
  int32_t v13; // w23
  BoostEntity_o *v14; // x25
  BoostSupportRequsetItemListViewItem_o *v15; // x24
  const MethodInfo *v16; // x5
  __int64 v17; // x8
  _QWORD *v18; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v20; // x8

  v8 = this;
  if ( (byte_4B1654F & 1) == 0 )
  {
    sub_1BCAFF8(&BoostSupportRequsetItemListViewItem_TypeInfo, boostEntityList);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    this = (BoostSupportRequestItemListViewManager_o *)sub_1BCAFF8(&StringLiteral_22035/*"no data(test label)"*/, v10);
    byte_4B1654F = 1;
  }
  if ( !boostEntityList )
    goto LABEL_18;
  ListViewManager__CreateList((ListViewManager_o *)v8, boostEntityList->max_length, 0LL);
  v11 = *(_QWORD *)&boostEntityList->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    v13 = 0;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)v11 )
        sub_1BCB25C();
      v14 = boostEntityList->m_Items[v12];
      v15 = (BoostSupportRequsetItemListViewItem_o *)sub_1BCB244(BoostSupportRequsetItemListViewItem_TypeInfo);
      BoostSupportRequsetItemListViewItem___ctor(v15, v13, v14, usrItemEntityList, recommendedBoostIds, v16);
      if ( !v15 )
        break;
      if ( !v15->fields.isHide )
      {
        this = (BoostSupportRequestItemListViewManager_o *)v8->fields.itemList;
        if ( !this )
          break;
        v17 = *(_QWORD *)&this->fields.m_CachedPtr;
        v18 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v17 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v17 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v15,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = v17 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v20 + 32) = v15;
          sub_1BCAF9C(v20 + 32);
        }
        ++v13;
      }
      LODWORD(v11) = boostEntityList->max_length;
      if ( (__int64)++v12 >= (int)v11 )
        goto LABEL_16;
    }
LABEL_18:
    sub_1BCB254(this, boostEntityList);
  }
LABEL_16:
  this = (BoostSupportRequestItemListViewManager_o *)v8->fields.emptyMessageLabel;
  if ( !this )
    goto LABEL_18;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_22035/*"no data(test label)"*/, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)v8, -1, 0, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BoostSupportRequsetItemListViewItem_o *__fastcall BoostSupportRequestItemListViewManager__GetItem(
        BoostSupportRequestItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BoostSupportRequsetItemListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B1654D & 1) == 0 )
  {
    sub_1BCAFF8(&BoostSupportRequsetItemListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4B1654D = 1;
  }
  result = (BoostSupportRequsetItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (BoostSupportRequsetItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)result,
                                                        index,
                                                        (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v5; // x1
  struct BoostSupportRequestItemListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 methodPtr_low; // x10
  int v8; // w8
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  unsigned int Index; // w0
  Il2CppObject *m_target; // x4
  struct System_Reflection_MethodInfo_o *original_method_info; // x8
  __int64 v14; // x3
  __int64 v15; // x1

  v4 = this;
  if ( (byte_4B16553 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BoostSupportRequestItemListViewManager_OnClickListView__, obj);
    this = (BoostSupportRequestItemListViewManager_o *)sub_1BCAFF8(&BoostSupportRequestItemListViewObject_TypeInfo, v5);
    byte_4B16553 = 1;
  }
  callbackFunc = v4->fields.callbackFunc;
  if ( callbackFunc )
  {
    if ( !obj
      || (methodPtr_low = LOBYTE(BoostSupportRequestItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (BoostSupportRequestItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != BoostSupportRequestItemListViewObject_TypeInfo )
    {
      sub_1BCB254(this, obj);
    }
    v8 = *((_DWORD *)&obj->fields.isBusy + 1);
    if ( v8 == 3 )
    {
      Index = ListViewObject__get_Index(obj, 0LL);
      m_target = callbackFunc->fields.m_target;
      original_method_info = callbackFunc->fields.original_method_info;
      v14 = *(_QWORD *)&callbackFunc->fields.extra_arg;
      v15 = 3LL;
    }
    else
    {
      if ( v8 != 2 )
      {
        if ( v8 == 1 )
        {
          v9 = Method_BoostSupportRequestItemListViewManager_OnClickListView__;
          if ( (*((_BYTE *)Method_BoostSupportRequestItemListViewManager_OnClickListView__ + 83) & 2) != 0 )
            v9 = (_QWORD *)sub_1BCB010();
          v10 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v9, v9[4]);
          OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0, 0LL);
        }
        return;
      }
      Index = ListViewObject__get_Index(obj, 0LL);
      m_target = callbackFunc->fields.m_target;
      original_method_info = callbackFunc->fields.original_method_info;
      v14 = *(_QWORD *)&callbackFunc->fields.extra_arg;
      v15 = 2LL;
    }
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, __int64))m_target)(
      original_method_info,
      v15,
      Index,
      v14);
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

  if ( (byte_4B16552 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B16552 = 1;
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
          sub_1BCB254(0LL, v7);
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v11; // x1
  int32_t size; // w8
  Il2CppObject *current; // x20
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B16551 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_BoostSupportRequestItemListViewManager_OnMoveEnd__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_BoostSupportRequestItemListViewObject__Dispose__, v4);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_BoostSupportRequestItemListViewObject__MoveNext__,
      v5);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_BoostSupportRequestItemListViewObject__get_Current__,
      v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject__GetEnumerator__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject__get_Count__, v8);
    sub_1BCAFF8(&StringLiteral_9865/*"OnMoveEnd"*/, v9);
    byte_4B16551 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  ObjectList = (System_Collections_Generic_List_object__o *)BoostSupportRequestItemListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    sub_1BCB254(0LL, v11);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9865/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      ObjectList,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v18,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_BoostSupportRequestItemListViewObject__MoveNext__) )
    {
      current = v18.fields._current;
      v14 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(v14, (Il2CppObject *)this, Method_BoostSupportRequestItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCB254(v15, v16);
      BoostSupportRequestItemListViewObject__Init((BoostSupportRequestItemListViewObject_o *)current, v14, 0, v17);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v18,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_BoostSupportRequestItemListViewObject__Dispose__);
  }
}


void __fastcall BoostSupportRequestItemListViewManager__SetCallBack(
        BoostSupportRequestItemListViewManager_o *this,
        BoostSupportRequestItemListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  this->fields.callbackFunc = callback;
  sub_1BCAF9C(&this->fields.callbackFunc);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  BoostSupportRequestItemListViewManager__RequestListObject(this, v4);
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
  __int64 methodPtr_low; // x10

  if ( (byte_4B16550 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, obj);
    sub_1BCAFF8(&Method_BoostSupportRequestItemListViewManager_OnMoveEnd__, v6);
    sub_1BCAFF8(&BoostSupportRequestItemListViewObject_TypeInfo, v7);
    byte_4B16550 = 1;
  }
  v8 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_BoostSupportRequestItemListViewManager_OnMoveEnd__, 0LL);
  if ( !obj
    || (methodPtr_low = LOBYTE(BoostSupportRequestItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (BoostSupportRequestItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != BoostSupportRequestItemListViewObject_TypeInfo )
  {
    sub_1BCB254(v9, v10);
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

  if ( (byte_4B1654B & 1) == 0 )
  {
    sub_1BCAFF8(&BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B1654B = 1;
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
    v8 = sub_1C05088(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (BoostSupportRequestItemListViewManager_o *)sub_1BCB514(v7);
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B1654E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_BoostSupportRequestItemListViewObject___, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_BoostSupportRequestItemListViewObject__TypeInfo, v9);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v10);
    byte_4B1654E = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BoostSupportRequestItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCB254(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BCB254(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_BoostSupportRequestItemListViewObject___);
      v18 = Component_object;
      if ( !v11 )
        sub_1BCB254(Component_object, Component_object);
      items = v11->fields._items;
      v20 = Method_System_Collections_Generic_List_BoostSupportRequestItemListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BCB254(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_1BCAF9C(v22 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4B1654C & 1) == 0 )
  {
    sub_1BCAFF8(&BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B1654C = 1;
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
    v8 = sub_1C05088(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (BoostSupportRequestItemListViewManager_o *)sub_1BCB514(v7);
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
  sub_1BCAF9C(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCB0B8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCB270(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCB120(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A0C534;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0C4DC;
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
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = index;
  v16 = result;
  if ( (byte_4B16554 & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, *(_QWORD *)&result);
    sub_1BCAFF8(&BoostSupportRequestItemListViewManager_ResultKind_TypeInfo, v9);
    byte_4B16554 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             BoostSupportRequestItemListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&index,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1BCAFAC(this, v14, callback, object);
}


void __fastcall BoostSupportRequestItemListViewManager_CallbackFunc__EndInvoke(
        BoostSupportRequestItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCAFB0(result, 0LL, method);
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