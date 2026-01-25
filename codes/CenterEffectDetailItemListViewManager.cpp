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
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  Il2CppClass **v13; // x8
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+20h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_4CE8249 & 1) == 0 )
  {
    sub_1C7BAE8(&CenterEffectDetailItemListViewItem_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__get_Count__);
    this = (CenterEffectDetailItemListViewManager_o *)sub_1C7BAE8(&StringLiteral_22438/*"no data"*/);
    byte_4CE8249 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( !centerEffectDetailSkillInfoList )
    goto LABEL_16;
  ListViewManager__CreateList((ListViewManager_o *)v4, centerEffectDetailSkillInfoList->fields._size, 0);
  System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo___GetEnumerator(
    &v14,
    centerEffectDetailSkillInfoList,
    (const MethodInfo_38DDFF4 *)Method_System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__GetEnumerator__);
  v5 = 0;
  v15 = v14;
  while ( System_Collections_Generic_List_Enumerator_CenterEffectDetailDialog_CenterEffectDetailSkillInfo___MoveNext(
            &v15,
            (const MethodInfo_35CEA24 *)Method_System_Collections_Generic_List_Enumerator_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__MoveNext__) )
  {
    current = v15.fields._current;
    v7 = (ListViewItem_o *)sub_1C7BD34(CenterEffectDetailItemListViewItem_TypeInfo);
    ListViewItem___ctor_44325320(v7, v5, 0);
    v7[1].klass = (ListViewItem_c *)current;
    itemList = (System_Collections_Generic_List_object__o *)v4->fields.itemList;
    if ( !itemList )
      sub_1C7BD40(0, v8);
    items = itemList->fields._items;
    v11 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++itemList->fields._version;
    if ( !items )
      sub_1C7BD40(itemList, v8);
    size = itemList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemList,
        (Il2CppObject *)v7,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    }
    else
    {
      v13 = &items->obj.klass + size;
      itemList->fields._size = size + 1;
      v13[4] = (Il2CppClass *)v7;
      sub_1C7BA8C(v13 + 4, v7);
    }
    ++v5;
  }
  System_Collections_Generic_List_Enumerator_CenterEffectDetailDialog_CenterEffectDetailSkillInfo___Dispose(
    &v15,
    (const MethodInfo_35CEA20 *)Method_System_Collections_Generic_List_Enumerator_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__Dispose__);
  this = (CenterEffectDetailItemListViewManager_o *)v4->fields.emptyMessageLabel;
  if ( !this )
LABEL_16:
    sub_1C7BD40(this, centerEffectDetailSkillInfoList);
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_22438/*"no data"*/, 0);
  ListViewManager__SortItem((ListViewManager_o *)v4, -1, 0, -1, 0);
}


CenterEffectDetailItemListViewItem_o *CenterEffectDetailItemListViewManager__GetItem(
        CenterEffectDetailItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  CenterEffectDetailItemListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4CE8247 & 1) == 0 )
  {
    sub_1C7BAE8(&CenterEffectDetailItemListViewItem_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4CE8247 = 1;
  }
  result = (CenterEffectDetailItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (CenterEffectDetailItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                       (System_Collections_Generic_List_object__o *)result,
                                                       index,
                                                       (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0

  if ( (byte_4CE824C & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE824C = 1;
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
          sub_1C7BD40(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v8->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v8,
          1,
          v8->klass->vtable._8_UpdateScrollbars.method);
      }
    }
  }
}


void CenterEffectDetailItemListViewManager__RequestListObject(
        CenterEffectDetailItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  int32_t size; // w8
  Il2CppObject *current; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CE824B & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_CenterEffectDetailItemListViewManager_OnMoveEnd__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_CenterEffectDetailItemListViewObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_CenterEffectDetailItemListViewObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_CenterEffectDetailItemListViewObject__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CenterEffectDetailItemListViewObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CenterEffectDetailItemListViewObject__get_Count__);
    sub_1C7BAE8(&StringLiteral_9968/*"OnMoveEnd"*/);
    byte_4CE824B = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ObjectList = (System_Collections_Generic_List_object__o *)CenterEffectDetailItemListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    sub_1C7BD40(0, v4);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9968/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      ObjectList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_CenterEffectDetailItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_CenterEffectDetailItemListViewObject__MoveNext__) )
    {
      current = v11.fields._current;
      v7 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)this, Method_CenterEffectDetailItemListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C7BD40(v8, v9);
      CenterEffectDetailItemListViewObject__Init((CenterEffectDetailItemListViewObject_o *)current, v7, v10);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_CenterEffectDetailItemListViewObject__Dispose__);
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
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  __int64 naturalAligment; // x10

  if ( (byte_4CE824A & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_CenterEffectDetailItemListViewManager_OnMoveEnd__);
    sub_1C7BAE8(&CenterEffectDetailItemListViewObject_TypeInfo);
    byte_4CE824A = 1;
  }
  v6 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_CenterEffectDetailItemListViewManager_OnMoveEnd__, 0);
  if ( !obj
    || (naturalAligment = CenterEffectDetailItemListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (CenterEffectDetailItemListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != CenterEffectDetailItemListViewObject_TypeInfo )
  {
    sub_1C7BD40(v7, v8);
  }
  CenterEffectDetailItemListViewObject__Init((CenterEffectDetailItemListViewObject_o *)obj, v6, v9);
}


System_Collections_Generic_List_CenterEffectDetailItemListViewObject__o *CenterEffectDetailItemListViewManager__get_ObjectList(
        CenterEffectDetailItemListViewManager_o *this,
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

  if ( (byte_4CE8248 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_CenterEffectDetailItemListViewObject___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CenterEffectDetailItemListViewObject__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CenterEffectDetailItemListViewObject___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_CenterEffectDetailItemListViewObject__TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE8248 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_CenterEffectDetailItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_CenterEffectDetailItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C7BD40(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C7BD40(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_CenterEffectDetailItemListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1C7BD40(Component_object, Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_CenterEffectDetailItemListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C7BD40(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1C7BA8C(v14 + 4, v10);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CenterEffectDetailItemListViewObject__o *)v3;
}