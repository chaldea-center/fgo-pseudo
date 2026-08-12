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
  __int64 v14; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o *v15; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+18h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_5969EBF & 1) == 0 )
  {
    sub_2213A60(&CenterEffectDetailItemListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__get_Count__);
    this = (CenterEffectDetailItemListViewManager_o *)sub_2213A60(&StringLiteral_23355/*"no data"*/);
    byte_5969EBF = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( !centerEffectDetailSkillInfoList )
    goto LABEL_15;
  ListViewManager__CreateList((ListViewManager_o *)v4, centerEffectDetailSkillInfoList->fields._size, 0);
  System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo___GetEnumerator(
    &v16,
    centerEffectDetailSkillInfoList,
    (const MethodInfo_4504D84 *)Method_System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__GetEnumerator__);
  v5 = 0;
  v14 = 0;
  v15 = &v16;
  while ( System_Collections_Generic_List_Enumerator_CenterEffectDetailDialog_CenterEffectDetailSkillInfo___MoveNext(
            &v16,
            (const MethodInfo_413EDCC *)Method_System_Collections_Generic_List_Enumerator_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__MoveNext__) )
  {
    current = v16.fields._current;
    v7 = (ListViewItem_o *)sub_2213CCC(CenterEffectDetailItemListViewItem_TypeInfo);
    ListViewItem___ctor_50819428(v7, v5, 0);
    v7[1].klass = (ListViewItem_c *)current;
    itemList = (System_Collections_Generic_List_object__o *)v4->fields.itemList;
    if ( !itemList
      || (items = itemList->fields._items,
          v11 = Method_System_Collections_Generic_List_ListViewItem__Add__,
          ++itemList->fields._version,
          !items) )
    {
      sub_2213CDC(itemList, v8);
    }
    size = itemList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemList,
        (Il2CppObject *)v7,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    }
    else
    {
      v13 = &items->obj.klass + size;
      itemList->fields._size = size + 1;
      v13[4] = (Il2CppClass *)v7;
      sub_2213A04(v13 + 4, v7);
    }
    ++v5;
  }
  System_Collections_Generic_List_Enumerator_CenterEffectDetailDialog_CenterEffectDetailSkillInfo___Dispose(
    &v16,
    (const MethodInfo_413EDC8 *)Method_System_Collections_Generic_List_Enumerator_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__Dispose__);
  this = (CenterEffectDetailItemListViewManager_o *)v4->fields.emptyMessageLabel;
  if ( !this )
LABEL_15:
    sub_2213CDC(this, centerEffectDetailSkillInfoList);
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_23355/*"no data"*/, 0);
  ListViewManager__SortItem((ListViewManager_o *)v4, -1, 0, -1, 0);
}


CenterEffectDetailItemListViewItem_o *CenterEffectDetailItemListViewManager__GetItem(
        CenterEffectDetailItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  CenterEffectDetailItemListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_5969EBD & 1) == 0 )
  {
    sub_2213A60(&CenterEffectDetailItemListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_5969EBD = 1;
  }
  result = (CenterEffectDetailItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (CenterEffectDetailItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                       (System_Collections_Generic_List_object__o *)result,
                                                       index,
                                                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  struct UIScrollView_o *v10; // x0

  if ( (byte_5969EC2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5969EC2 = 1;
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


void CenterEffectDetailItemListViewManager__RequestListObject(
        CenterEffectDetailItemListViewManager_o *this,
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
  const MethodInfo *v11; // x2
  __int64 v12; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_object__o *v13; // [xsp+10h] [xbp-60h]
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_5969EC1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CenterEffectDetailItemListViewManager_OnMoveEnd__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_CenterEffectDetailItemListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_CenterEffectDetailItemListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_CenterEffectDetailItemListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_CenterEffectDetailItemListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_CenterEffectDetailItemListViewObject__get_Count__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_5969EC1 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  ObjectList = (System_Collections_Generic_List_object__o *)CenterEffectDetailItemListViewManager__get_ObjectList(
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
    v6 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_CenterEffectDetailItemListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      ObjectList,
      v6);
    v12 = 0;
    v13 = &v14;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_CenterEffectDetailItemListViewObject__MoveNext__) )
    {
      current = v14.fields._current;
      v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_CenterEffectDetailItemListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v9, v10);
      CenterEffectDetailItemListViewObject__Init((CenterEffectDetailItemListViewObject_o *)current, v8, v11);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_CenterEffectDetailItemListViewObject__Dispose__);
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

  if ( (byte_5969EC0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CenterEffectDetailItemListViewManager_OnMoveEnd__);
    sub_2213A60(&CenterEffectDetailItemListViewObject_TypeInfo);
    byte_5969EC0 = 1;
  }
  v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_CenterEffectDetailItemListViewManager_OnMoveEnd__, 0);
  if ( !obj
    || (naturalAligment = CenterEffectDetailItemListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (CenterEffectDetailItemListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != CenterEffectDetailItemListViewObject_TypeInfo )
  {
    sub_2213CDC(v7, v8);
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

  if ( (byte_5969EBE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CenterEffectDetailItemListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_CenterEffectDetailItemListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_CenterEffectDetailItemListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_CenterEffectDetailItemListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5969EBE = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_CenterEffectDetailItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_CenterEffectDetailItemListViewObject___ctor__);
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
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CenterEffectDetailItemListViewObject___);
      v12 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v14 = Method_System_Collections_Generic_List_CenterEffectDetailItemListViewObject__Add__,
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
  return (System_Collections_Generic_List_CenterEffectDetailItemListViewObject__o *)v3;
}