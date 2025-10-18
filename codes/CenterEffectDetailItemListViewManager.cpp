void CenterEffectDetailItemListViewManager___ctor(
        CenterEffectDetailItemListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void CenterEffectDetailItemListViewManager__CreateList(
        CenterEffectDetailItemListViewManager_o *this,
        System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__o *centerEffectDetailSkillInfoList,
        const MethodInfo *method)
{
  CenterEffectDetailItemListViewManager_o *v4; // x19
  int32_t v5; // w20
  Il2CppObject *current; // x27
  ListViewItem_o *v7; // x21
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  Il2CppClass **v12; // x8
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+20h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_4C3CD2F & 1) == 0 )
  {
    sub_1C37058(&CenterEffectDetailItemListViewItem_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__get_Count__);
    this = (CenterEffectDetailItemListViewManager_o *)sub_1C37058(&StringLiteral_22234/*"no data"*/);
    byte_4C3CD2F = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( !centerEffectDetailSkillInfoList )
    goto LABEL_16;
  ListViewManager__CreateList((ListViewManager_o *)v4, centerEffectDetailSkillInfoList->fields._size, 0);
  System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo___GetEnumerator(
    &v13,
    centerEffectDetailSkillInfoList,
    (const MethodInfo_38447A0 *)Method_System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__GetEnumerator__);
  v5 = 0;
  v14 = v13;
  while ( System_Collections_Generic_List_Enumerator_CenterEffectDetailDialog_CenterEffectDetailSkillInfo___MoveNext(
            &v14,
            (const MethodInfo_353D948 *)Method_System_Collections_Generic_List_Enumerator_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__MoveNext__) )
  {
    current = v14.fields._current;
    v7 = (ListViewItem_o *)sub_1C372A4(CenterEffectDetailItemListViewItem_TypeInfo);
    ListViewItem___ctor_43804668(v7, v5, 0);
    v7[1].klass = (ListViewItem_c *)current;
    itemList = (System_Collections_Generic_List_object__o *)v4->fields.itemList;
    if ( !itemList )
      sub_1C372B4(0);
    items = itemList->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++itemList->fields._version;
    if ( !items )
      sub_1C372B4(itemList);
    size = itemList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemList,
        (Il2CppObject *)v7,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    }
    else
    {
      v12 = &items->obj.klass + size;
      itemList->fields._size = size + 1;
      v12[4] = (Il2CppClass *)v7;
      sub_1C36FFC(v12 + 4, v7);
    }
    ++v5;
  }
  System_Collections_Generic_List_Enumerator_CenterEffectDetailDialog_CenterEffectDetailSkillInfo___Dispose(
    &v14,
    (const MethodInfo_353D944 *)Method_System_Collections_Generic_List_Enumerator_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__Dispose__);
  this = (CenterEffectDetailItemListViewManager_o *)v4->fields.emptyMessageLabel;
  if ( !this )
LABEL_16:
    sub_1C372B4(this);
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_22234/*"no data"*/, 0);
  ListViewManager__SortItem((ListViewManager_o *)v4, -1, 0, -1, 0);
}


CenterEffectDetailItemListViewItem_o *CenterEffectDetailItemListViewManager__GetItem(
        CenterEffectDetailItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  CenterEffectDetailItemListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C3CD2D & 1) == 0 )
  {
    sub_1C37058(&CenterEffectDetailItemListViewItem_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C3CD2D = 1;
  }
  result = (CenterEffectDetailItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (CenterEffectDetailItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                       (System_Collections_Generic_List_object__o *)result,
                                                       index,
                                                       (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = CenterEffectDetailItemListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (CenterEffectDetailItemListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != CenterEffectDetailItemListViewItem_TypeInfo )
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


void CenterEffectDetailItemListViewManager__OnMoveEnd(
        CenterEffectDetailItemListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  struct UIScrollView_o *v7; // x0

  if ( (byte_4C3CD32 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3CD32 = 1;
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
        v7 = this->fields.scrollView;
        if ( !v7 )
          sub_1C372B4(0);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v7->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v7,
          1,
          v7->klass->vtable._8_UpdateScrollbars.method);
      }
    }
  }
}


void CenterEffectDetailItemListViewManager__RequestListObject(
        CenterEffectDetailItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C3CD31 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CenterEffectDetailItemListViewManager_OnMoveEnd__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_CenterEffectDetailItemListViewObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_CenterEffectDetailItemListViewObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_CenterEffectDetailItemListViewObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_CenterEffectDetailItemListViewObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_CenterEffectDetailItemListViewObject__get_Count__);
    sub_1C37058(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C3CD31 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  ObjectList = (System_Collections_Generic_List_object__o *)CenterEffectDetailItemListViewManager__get_ObjectList(
                                                              this,
                                                              method);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v9,
      ObjectList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_CenterEffectDetailItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v9,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_CenterEffectDetailItemListViewObject__MoveNext__) )
    {
      current = v9.fields._current;
      v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v6, (Il2CppObject *)this, Method_CenterEffectDetailItemListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C372B4(v7);
      CenterEffectDetailItemListViewObject__Init((CenterEffectDetailItemListViewObject_o *)current, v6, v8);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v9,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_CenterEffectDetailItemListViewObject__Dispose__);
  }
}


void CenterEffectDetailItemListViewManager__SetObjectItem(
        CenterEffectDetailItemListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  System_Action_o *v6; // x21
  __int64 v7; // x0
  const MethodInfo *v8; // x2
  __int64 naturalAligment; // x10

  if ( (byte_4C3CD30 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CenterEffectDetailItemListViewManager_OnMoveEnd__);
    sub_1C37058(&CenterEffectDetailItemListViewObject_TypeInfo);
    byte_4C3CD30 = 1;
  }
  v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_CenterEffectDetailItemListViewManager_OnMoveEnd__, 0);
  if ( !obj
    || (naturalAligment = CenterEffectDetailItemListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (CenterEffectDetailItemListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != CenterEffectDetailItemListViewObject_TypeInfo )
  {
    sub_1C372B4(v7);
  }
  CenterEffectDetailItemListViewObject__Init((CenterEffectDetailItemListViewObject_o *)obj, v6, v8);
}


System_Collections_Generic_List_CenterEffectDetailItemListViewObject__o *CenterEffectDetailItemListViewManager__get_ObjectList(
        CenterEffectDetailItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v6; // x0
  Il2CppObject *Component_object; // x0
  Il2CppObject *v8; // x1
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  Il2CppClass **v12; // x0
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C3CD2E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_CenterEffectDetailItemListViewObject___);
    sub_1C37058(&Method_System_Collections_Generic_List_CenterEffectDetailItemListViewObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_CenterEffectDetailItemListViewObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_CenterEffectDetailItemListViewObject__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3CD2E = 1;
  }
  memset(&v15, 0, sizeof(v15));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_CenterEffectDetailItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_CenterEffectDetailItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v15 = v14;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v15.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_1C372B4(v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_CenterEffectDetailItemListViewObject___);
      v8 = Component_object;
      if ( !v3 )
        sub_1C372B4(Component_object);
      items = v3->fields._items;
      v10 = Method_System_Collections_Generic_List_CenterEffectDetailItemListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C372B4(Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
      }
      else
      {
        v12 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v12[4] = (Il2CppClass *)v8;
        sub_1C36FFC(v12 + 4, v8);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CenterEffectDetailItemListViewObject__o *)v3;
}