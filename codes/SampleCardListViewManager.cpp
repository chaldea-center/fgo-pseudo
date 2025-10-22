void SampleCardListViewManager___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  System_RuntimeFieldHandle_o v2; // x1
  struct System_Int32_array *v3; // x19
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C54503 & 1) == 0 )
  {
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&SampleCardListViewManager_TypeInfo);
    sub_1C3E564(&Field__PrivateImplementationDetails__040FA467EEBC312075F7BF093BA7D0374B9217A3FB344624D6D7CDA05C641D90);
    byte_4C54503 = 1;
  }
  v1 = (System_Array_o *)sub_1C3E60C(int___TypeInfo, 3);
  v2.fields.value = Field__PrivateImplementationDetails__040FA467EEBC312075F7BF093BA7D0374B9217A3FB344624D6D7CDA05C641D90;
  v3 = (struct System_Int32_array *)v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64337244(v1, v2, 0);
  SampleCardListViewManager_TypeInfo->static_fields->deckData = v3;
  sub_1C3E508((CGThumbnailListItem_o *)SampleCardListViewManager_TypeInfo->static_fields, (int32_t)v3, v4, v5);
}


void SampleCardListViewManager___ctor(SampleCardListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void SampleCardListViewManager__CreateList(SampleCardListViewManager_o *this, int32_t sum, const MethodInfo *method)
{
  unsigned int v5; // w21
  __int64 v6; // x22
  System_Collections_Generic_List_object__o *v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_object__o *itemList; // x0
  unsigned int v11; // w28
  __int64 v12; // x8
  __int64 v13; // x8
  int v14; // w8
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  __int64 v18; // x8
  unsigned __int64 v19; // x20
  Il2CppObject *Item; // x0
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *v22; // x21
  __int64 v23; // x8
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct UnityEngine_GameObject_o *dropDragPrefab; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3

  if ( (byte_4C544F8 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&SampleCardListViewDropObject_TypeInfo);
    sub_1C3E564(&SampleCardListViewItem_TypeInfo);
    sub_1C3E564(&SampleCardListViewManager_TypeInfo);
    byte_4C544F8 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, sum, 0);
  if ( sum >= 1 )
  {
    v5 = 0;
    do
    {
      v6 = sub_1C3E7B0(SampleCardListViewItem_TypeInfo);
      ListViewItem___ctor_43860152((ListViewItem_o *)v6, v5, 0);
      *(_DWORD *)(v6 + 120) = v5 % 3 + 1;
      itemList = (System_Collections_Generic_List_object__o *)SampleCardListViewManager_TypeInfo;
      v11 = 0;
      do
      {
        if ( !itemList[5].fields._size )
        {
          j_il2cpp_runtime_class_init_0(itemList);
          itemList = (System_Collections_Generic_List_object__o *)SampleCardListViewManager_TypeInfo;
        }
        v12 = **(_QWORD **)&itemList[4].fields._size;
        if ( !v12 )
          goto LABEL_45;
        if ( (signed int)v11 >= *(_DWORD *)(v12 + 24) )
          goto LABEL_16;
        if ( !itemList[5].fields._size )
        {
          j_il2cpp_runtime_class_init_0(itemList);
          itemList = (System_Collections_Generic_List_object__o *)SampleCardListViewManager_TypeInfo;
        }
        v13 = **(_QWORD **)&itemList[4].fields._size;
        if ( !v13 )
          goto LABEL_45;
        if ( v11 >= *(_DWORD *)(v13 + 24) )
LABEL_47:
          sub_1C3E7C8(itemList, v7);
        v14 = *(_DWORD *)(v13 + 4LL * (int)v11++ + 32);
      }
      while ( v5 != v14 );
      *(_BYTE *)(v6 + 124) = 1;
LABEL_16:
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList
        || (items = itemList->fields._items,
            v16 = Method_System_Collections_Generic_List_ListViewItem__Add__,
            ++itemList->fields._version,
            !items) )
      {
LABEL_45:
        sub_1C3E7C0(itemList, v7);
      }
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v6,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = (__int64)items + 8 * size;
        itemList->fields._size = size + 1;
        *(_QWORD *)(v18 + 32) = v6;
        sub_1C3E508((CGThumbnailListItem_o *)(v18 + 32), v6, v8, v9);
      }
      ++v5;
    }
    while ( v5 != sum );
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  itemList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  if ( itemList )
  {
    v19 = 0;
    while ( (__int64)v19 < itemList->fields._size )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               itemList,
               v19,
               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
      if ( Item
        && (naturalAligment = SampleCardListViewDropObject_TypeInfo->_2.naturalAligment,
            Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        if ( (SampleCardListViewDropObject_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == SampleCardListViewDropObject_TypeInfo )
          v22 = (UnityEngine_Object_o *)Item;
        else
          v22 = 0;
      }
      else
      {
        v22 = 0;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v22, 0, 0) )
      {
        itemList = (System_Collections_Generic_List_object__o *)SampleCardListViewManager_TypeInfo;
        if ( !SampleCardListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SampleCardListViewManager_TypeInfo);
          itemList = (System_Collections_Generic_List_object__o *)SampleCardListViewManager_TypeInfo;
        }
        v23 = **(_QWORD **)&itemList[4].fields._size;
        if ( !v23 )
          goto LABEL_45;
        if ( v19 >= *(unsigned int *)(v23 + 24) )
          goto LABEL_47;
        v7 = (System_Collections_Generic_List_object__o *)*(unsigned int *)(v23 + 4 * v19 + 32);
        if ( ((unsigned int)v7 & 0x80000000) != 0 )
        {
          v7 = 0;
          if ( !v22 )
            goto LABEL_45;
        }
        else
        {
          itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          if ( !itemList )
            goto LABEL_45;
          itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    itemList,
                                                                    (int32_t)v7,
                                                                    (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          v7 = itemList;
          if ( !v22 )
            goto LABEL_45;
        }
        ((void (__fastcall *)(UnityEngine_Object_o *, System_Collections_Generic_List_object__o *, const char *))v22->klass[1]._1.name)(
          v22,
          v7,
          v22->klass[1]._1.namespaze);
        v22[1].fields.m_CachedPtr = (intptr_t)this;
        sub_1C3E508((CGThumbnailListItem_o *)&v22[1].fields, (int32_t)this, v24, v25);
        dropDragPrefab = this->fields.dropDragPrefab;
        v22[2].klass = (UnityEngine_Object_c *)dropDragPrefab;
        sub_1C3E508((CGThumbnailListItem_o *)&v22[2], (int32_t)dropDragPrefab, v27, v28);
      }
      itemList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
      ++v19;
      if ( !itemList )
        goto LABEL_45;
    }
  }
}


void SampleCardListViewManager__DestroyList(SampleCardListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


SampleCardListViewItem_o *SampleCardListViewManager__GetItem(
        SampleCardListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  SampleCardListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C544F9 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C3E564(&SampleCardListViewItem_TypeInfo);
    byte_4C544F9 = 1;
  }
  result = (SampleCardListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (SampleCardListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)result,
                                           index,
                                           (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = SampleCardListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (SampleCardListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != SampleCardListViewItem_TypeInfo )
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


bool SampleCardListViewManager__IsDropDropSurface(
        SampleCardListViewManager_o *this,
        ListViewDropInfo_o *info,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dropSurfaceObject; // x20
  UnityEngine_GameObject_o *v5; // x8
  UnityEngine_Object_o *v6; // x19
  Il2CppObject *Component_object; // x20

  if ( (byte_4C54502 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_SampleCardListViewDropObject___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_SampleCardUIDragDropListViewSurface___);
    this = (SampleCardListViewManager_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C54502 = 1;
  }
  if ( !info )
    goto LABEL_19;
  dropSurfaceObject = (UnityEngine_Object_o *)info->fields.dropSurfaceObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(dropSurfaceObject, 0, 0) )
    return 0;
  this = (SampleCardListViewManager_o *)ListViewDropInfo__get_ListViewObject(info, 0);
  if ( !this )
    goto LABEL_19;
  this = (SampleCardListViewManager_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)this,
                                          (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_SampleCardListViewDropObject___);
  v5 = info->fields.dropSurfaceObject;
  if ( !v5 )
    goto LABEL_19;
  v6 = (UnityEngine_Object_o *)this;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v5,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_SampleCardUIDragDropListViewSurface___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v6, 0, 0) )
    return 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SampleCardListViewManager_o *)UnityEngine_Object__op_Inequality(
                                          (UnityEngine_Object_o *)Component_object,
                                          0,
                                          0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  if ( !v6 )
LABEL_19:
    sub_1C3E7C0(this, info);
  return SampleCardListViewDropObject__GetItem((SampleCardListViewDropObject_o *)v6, (const MethodInfo *)info) != 0;
}


bool SampleCardListViewManager__IsItemDropSurface(
        SampleCardListViewManager_o *this,
        ListViewDropInfo_o *info,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dropSurfaceObject; // x20
  UnityEngine_GameObject_o *v5; // x8
  UnityEngine_Object_o *v6; // x19
  Il2CppObject *Component_object; // x20
  SampleCardListViewItem_o *Item; // x0

  if ( (byte_4C54501 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_SampleCardListViewObject___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_SampleCardUIDragDropListViewSurface___);
    this = (SampleCardListViewManager_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C54501 = 1;
  }
  if ( !info )
    goto LABEL_20;
  dropSurfaceObject = (UnityEngine_Object_o *)info->fields.dropSurfaceObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(dropSurfaceObject, 0, 0) )
    return 0;
  this = (SampleCardListViewManager_o *)ListViewDropInfo__get_ListViewObject(info, 0);
  if ( !this )
    goto LABEL_20;
  this = (SampleCardListViewManager_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)this,
                                          (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_SampleCardListViewObject___);
  v5 = info->fields.dropSurfaceObject;
  if ( !v5 )
    goto LABEL_20;
  v6 = (UnityEngine_Object_o *)this;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v5,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_SampleCardUIDragDropListViewSurface___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v6, 0, 0) )
    return 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SampleCardListViewManager_o *)UnityEngine_Object__op_Inequality(
                                          (UnityEngine_Object_o *)Component_object,
                                          0,
                                          0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  if ( !v6 )
LABEL_20:
    sub_1C3E7C0(this, info);
  Item = SampleCardListViewObject__GetItem((SampleCardListViewObject_o *)v6, (const MethodInfo *)info);
  return Item && !Item->fields.isDeck;
}


void SampleCardListViewManager__OnClickListView(
        SampleCardListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void SampleCardListViewManager__OnMoveEnd(SampleCardListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_4C54500 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C54500 = 1;
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
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1C3E7C0(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v10->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v10,
          1,
          v10->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc = this->fields.callbackFunc;
      if ( callbackFunc )
      {
        this->fields.callbackFunc = 0;
        sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v8, v9);
        ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
          callbackFunc->fields.method_code,
          callbackFunc->fields.method);
      }
    }
  }
}


void SampleCardListViewManager__RequestDropObject(
        SampleCardListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *dropObjectList; // x0
  Il2CppObject *current; // x21
  __int64 naturalAligment; // x9
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C544FE & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&SampleCardListViewDropObject_TypeInfo);
    sub_1C3E564(&Method_SampleCardListViewManager_OnMoveEnd__);
    byte_4C544FE = 1;
  }
  memset(&v15, 0, sizeof(v15));
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  if ( dropObjectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      dropObjectList,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    v15 = v14;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      current = v15.fields._current;
      if ( v15.fields._current )
      {
        naturalAligment = SampleCardListViewDropObject_TypeInfo->_2.naturalAligment;
        if ( v15.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (SampleCardListViewDropObject_c *)v15.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != SampleCardListViewDropObject_TypeInfo )
        {
          sub_1C3EA80(v15.fields._current);
LABEL_17:
          sub_1C3E7C0(v11, v12);
        }
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
      {
        v10 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
        System_Action___ctor(v10, (Il2CppObject *)this, Method_SampleCardListViewManager_OnMoveEnd__, 0);
        if ( !current )
          goto LABEL_17;
        SampleCardListViewDropObject__Init_37682500((SampleCardListViewDropObject_o *)current, mode, v10, delay, v13);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
  }
}


void SampleCardListViewManager__RequestDropObject_37689752(
        SampleCardListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *dropObjectList; // x0
  Il2CppObject *current; // x21
  __int64 naturalAligment; // x9
  System_Action_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C544FF & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&SampleCardListViewDropObject_TypeInfo);
    sub_1C3E564(&Method_SampleCardListViewManager_OnMoveEnd__);
    byte_4C544FF = 1;
  }
  memset(&v13, 0, sizeof(v13));
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  if ( dropObjectList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      dropObjectList,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    v13 = v12;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      current = v13.fields._current;
      if ( v13.fields._current )
      {
        naturalAligment = SampleCardListViewDropObject_TypeInfo->_2.naturalAligment;
        if ( v13.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (SampleCardListViewDropObject_c *)v13.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != SampleCardListViewDropObject_TypeInfo )
        {
          sub_1C3EA80(v13.fields._current);
LABEL_17:
          sub_1C3E7C0(v9, v10);
        }
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
      {
        v8 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
        System_Action___ctor(v8, (Il2CppObject *)this, Method_SampleCardListViewManager_OnMoveEnd__, 0);
        if ( !current )
          goto LABEL_17;
        SampleCardListViewDropObject__Init_37682624((SampleCardListViewDropObject_o *)current, mode, v8, v11);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void SampleCardListViewManager__RequestListObject(
        SampleCardListViewManager_o *this,
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

  if ( (byte_4C544FC & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SampleCardListViewObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SampleCardListViewObject__get_Count__);
    sub_1C3E564(&Method_SampleCardListViewManager_OnMoveEnd__);
    sub_1C3E564(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C544FC = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)SampleCardListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C3E7C0(0, v8);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_SampleCardListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_SampleCardListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C3E7C0(v12, v13);
      SampleCardListViewObject__Init_37689148((SampleCardListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void SampleCardListViewManager__RequestListObject_37689248(
        SampleCardListViewManager_o *this,
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

  if ( (byte_4C544FD & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SampleCardListViewObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SampleCardListViewObject__get_Count__);
    sub_1C3E564(&Method_SampleCardListViewManager_OnMoveEnd__);
    sub_1C3E564(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C544FD = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)SampleCardListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C3E7C0(0, v6);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_SampleCardListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_SampleCardListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C3E7C0(v10, v11);
      SampleCardListViewObject__Init_37690860((SampleCardListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_SampleCardListViewObject__Dispose__);
  }
}


void SampleCardListViewManager__SetMode(SampleCardListViewManager_o *this, int32_t mode, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  SampleCardListViewManager__SetMode_37688268(this, mode, 0, v3);
}


void SampleCardListViewManager__SetMode_37688268(
        SampleCardListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_object__o *ClippingObjectList; // x0
  __int64 v10; // x1
  int32_t size; // w21
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t DropObjectSum; // w0
  int32_t v14; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v16; // x23
  const MethodInfo *v17; // x3
  int v18; // w23
  int32_t v19; // w20
  Il2CppObject *v20; // x0
  __int64 naturalAligment; // x10
  SampleCardListViewDropObject_o *v22; // x21
  System_Action_o *v23; // x22
  const MethodInfo *v24; // x3
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x8
  const MethodInfo *v26; // x2
  int32_t v27; // w1

  if ( (byte_4C544FB & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_SampleCardListViewObject__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SampleCardListViewObject__get_Item__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&SampleCardListViewDropObject_TypeInfo);
    sub_1C3E564(&Method_SampleCardListViewManager_OnMoveEnd__);
    sub_1C3E564(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C544FB = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackFunc = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 3, 0);
  switch ( mode )
  {
    case 3:
      this->fields.callbackCount = 0;
      SampleCardListViewManager__RequestListObject_37689248(this, 6, v8);
      v27 = 6;
LABEL_32:
      SampleCardListViewManager__RequestDropObject_37689752(this, v27, v26);
      return;
    case 2:
      this->fields.callbackCount = 0;
      SampleCardListViewManager__RequestListObject_37689248(this, 5, v8);
      v27 = 5;
      goto LABEL_32;
    case 1:
      ClippingObjectList = (System_Collections_Generic_List_object__o *)SampleCardListViewManager__get_ClippingObjectList(
                                                                          this,
                                                                          v7);
      if ( !ClippingObjectList )
        goto LABEL_28;
      size = ClippingObjectList->fields._size;
      v12 = ClippingObjectList;
      DropObjectSum = ListViewManager__get_DropObjectSum((ListViewManager_o *)this, 0);
      this->fields.callbackCount = DropObjectSum + size;
      if ( DropObjectSum + size < 1 )
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
        if ( v12->fields._size >= 1 )
        {
          v14 = 0;
          while ( 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     v12,
                     v14,
                     (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_SampleCardListViewObject__get_Item__);
            v16 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
            System_Action___ctor(v16, (Il2CppObject *)this, Method_SampleCardListViewManager_OnMoveEnd__, 0);
            if ( !Item )
              break;
            SampleCardListViewObject__Init_37689148(
              (SampleCardListViewObject_o *)Item,
              4,
              v16,
              (float)++v14 * 0.25,
              v17);
            if ( v14 >= v12->fields._size )
              goto LABEL_12;
          }
LABEL_28:
          sub_1C3E7C0(ClippingObjectList, v10);
        }
LABEL_12:
        ClippingObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
        if ( ClippingObjectList )
        {
          v18 = 0;
          v19 = 0;
          while ( v19 < ClippingObjectList->fields._size )
          {
            v20 = System_Collections_Generic_List_object___get_Item(
                    ClippingObjectList,
                    v19,
                    (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewDropObject__get_Item__);
            if ( v20
              && (naturalAligment = SampleCardListViewDropObject_TypeInfo->_2.naturalAligment,
                  v20->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
            {
              if ( (SampleCardListViewDropObject_c *)v20->klass->_2.typeHierarchy[naturalAligment - 1] == SampleCardListViewDropObject_TypeInfo )
                v22 = (SampleCardListViewDropObject_o *)v20;
              else
                v22 = 0;
            }
            else
            {
              v22 = 0;
            }
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v22, 0, 0) )
            {
              v23 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
              System_Action___ctor(v23, (Il2CppObject *)this, Method_SampleCardListViewManager_OnMoveEnd__, 0);
              dropObjectList = this->fields.dropObjectList;
              if ( !dropObjectList || !v22 )
                goto LABEL_28;
              SampleCardListViewDropObject__Init_37682500(
                v22,
                4,
                v23,
                (float)(v18 + dropObjectList->fields._size) * 0.25,
                v24);
            }
            ClippingObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
            ++v19;
            --v18;
            if ( !ClippingObjectList )
              goto LABEL_28;
          }
        }
      }
      break;
  }
}


void SampleCardListViewManager__SetObjectItem(
        SampleCardListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  SampleCardListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4C544FA & 1) == 0 )
  {
    this = (SampleCardListViewManager_o *)sub_1C3E564(&SampleCardListViewObject_TypeInfo);
    byte_4C544FA = 1;
  }
  if ( !obj
    || (naturalAligment = SampleCardListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (SampleCardListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != SampleCardListViewObject_TypeInfo )
  {
    sub_1C3E7C0(this, obj);
  }
  if ( v5->fields.initMode == 3 )
  {
    SampleCardListViewObject__set_IsFront((SampleCardListViewObject_o *)obj, 1, (const MethodInfo *)item);
    v7 = 6;
  }
  else
  {
    v7 = 2;
  }
  SampleCardListViewObject__Init_37688184((SampleCardListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void SampleCardListViewManager__add_callbackFunc(
        SampleCardListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SampleCardListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C544F4 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    byte_4C544F4 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C787BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3EA80(v7);
  SampleCardListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_SampleCardListViewObject__o *SampleCardListViewManager__get_ClippingObjectList(
        SampleCardListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C544F7 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_SampleCardListViewObject___);
    sub_1C3E564(&Method_System_Collections_Generic_List_SampleCardListViewObject__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SampleCardListViewObject___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_SampleCardListViewObject__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C544F7 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_SampleCardListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_SampleCardListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C3E7C0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C3E7C0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_SampleCardListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C3E7C0(0, v10);
      Item = (ListViewItem_o *)SampleCardListViewObject__GetItem((SampleCardListViewObject_o *)Component_object, v10);
      if ( !Item )
        sub_1C3E7C0(0, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_43876032((ListViewManager_o *)this, Item, 0);
        if ( v16 )
        {
          if ( !v3 )
            sub_1C3E7C0(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_SampleCardListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C3E7C0(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C3E7C0(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_SampleCardListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C3E7C0(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1C3E508((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SampleCardListViewObject__o *)v3;
}


System_Collections_Generic_List_SampleCardListViewObject__o *SampleCardListViewManager__get_ObjectList(
        SampleCardListViewManager_o *this,
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
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C544F6 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_SampleCardListViewObject___);
    sub_1C3E564(&Method_System_Collections_Generic_List_SampleCardListViewObject__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SampleCardListViewObject___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_SampleCardListViewObject__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C544F6 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_SampleCardListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_SampleCardListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C3E7C0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C3E7C0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_SampleCardListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1C3E7C0(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_SampleCardListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C3E7C0(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1C3E508((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SampleCardListViewObject__o *)v3;
}


void SampleCardListViewManager__remove_callbackFunc(
        SampleCardListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SampleCardListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C544F5 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    byte_4C544F5 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C787BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3EA80(v7);
  SampleCardListViewManager__get_ObjectList(v10, v11);
}